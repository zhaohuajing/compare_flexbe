#!/usr/bin/env python3

# Copyright 2023 Christopher Newport University
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import rclpy
from rclpy.duration import Duration

from flexbe_core import EventState, Logger
from flexbe_core.proxy import ProxyServiceCaller

from compare_flexbe_utilities.srv import MoveToPose as SrvType
from geometry_msgs.msg import Pose

from std_srvs.srv import Trigger

class ReachToGraspServiceState(EventState):
    """
    Calls /reach_to_grasp (std_srvs/Trigger) to execute the grasp sequence:
      - open gripper
      - move along EE-Z
      - close gripper
      - lift in base-Z
      - (optionally) open again, etc.

    -- service_name      string   Absolute service name (default: '/reach_to_grasp')
    -- timeout_sec       float    Call timeout in seconds (default: 10.0)

    <= done                        Sequence executed successfully
    <= failed                      Service call failed or timed out
    """

    def __init__(self,
                 service_name='/reach_to_grasp',
                 timeout_sec=10.0):
        super().__init__(
            outcomes=['done', 'failed'], #)
            input_keys=['grasp_poses', 'grasp_index'],
            output_keys=['grasp_index'])

        self._service_name = service_name
        self._timeout_sec = timeout_sec

        # IMPORTANT: wait_duration=0.0 so we do NOT block/fail at construction time
        self._srv = ProxyServiceCaller({self._service_name: Trigger},
                                       wait_duration=0.0)

        self._res = None
        self._failed = False

    def on_enter(self, userdata):
        self._failed = False
        self._res = None

        Logger.loginfo(f"[{type(self).__name__}] Preparing to call service '{self._service_name}' "
                       f"with timeout {self._timeout_sec:.1f}s")

        # You *can* still log availability, but don't fail early just because
        # the discovery is slightly delayed.
        if not self._srv.is_available(self._service_name):
            Logger.logwarn(f"[{type(self).__name__}] Service '{self._service_name}' not reported "
                           f"available yet, will still try to call it.")

        try:
            req = Trigger.Request()
            # NOTE: ProxyServiceCaller in ROS 2 supports a timeout argument.
            # If your version does not, just remove 'timeout=' and let it block.
            self._res = self._srv.call(self._service_name, req)
            Logger.loginfo(f"[{type(self).__name__}] Called service '{self._service_name}'.")
        except Exception as e:
            Logger.logerr(f"[{type(self).__name__}] Service call to '{self._service_name}' failed: {e}")
            self._failed = True

    def execute(self, userdata):
        if self._failed or self._res is None:
            return 'failed'

        if self._res.success:
            Logger.loginfo(f"[{type(self).__name__}] Reach-to-grasp OK: {self._res.message}")
            return 'done'
        else:
            Logger.logwarn(f"[{type(self).__name__}] Reach-to-grasp failed: {self._res.message}")
            return 'failed'

    def on_exit(self, userdata):
        # Call this method when an outcome is returned and another state gets active.
        # It can be used to stop possibly running processes started by on_enter.

        # No-op: template hook
        pass

    def on_start(self):
        # Call this method when the behavior is instantiated on board.
        # If possible, it is generally better to initialize used resources in the constructor
        #   because if anything failed, the behavior would not even be started.

        # No-op: template hook
        pass

    def on_stop(self):
        # Call this method whenever the behavior stops execution, also if it is cancelled.
        # Use this event to clean up things like claimed resources.

        # No-op: template hook
        pass