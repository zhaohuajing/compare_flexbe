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
from geometry_msgs.msg import Pose
from robot_common_manip.srv import MoveToPose


class MoveToPoseServiceState(EventState):
    """
    Calls a service to move the robot to a specific pose using the he setPoseTarget, plan and execute C++ functions wrapped into a service server.

    -- timeout_sec       float       Timeout for waiting for service (default: 5.0)

    ># grasp_poses       list        A list of geometry_msgs/Pose messages to choose from (uses the last one)

    <= success                        Service call succeeded
    <= failure                        Service call failed or pose was invalid
    """

    def __init__(self, timeout_sec=5.0):
        super().__init__(
            outcomes=['success', 'failure'],
            input_keys=['grasp_poses']
        )
        self._timeout_sec = timeout_sec
        self._client = None
        self._future = None
        self._request_sent = False

    def on_start(self):
        if not hasattr(MoveToPoseServiceState, '_node'):
            raise RuntimeError("This state requires a FlexBE-attached ROS 2 node.")

        self._node = MoveToPoseServiceState._node
        self._client = self._node.create_client(MoveToPose, 'move_to_pose')

        if not self._client.wait_for_service(timeout_sec=self._timeout_sec):
            Logger.logerr("[MoveToPoseServiceState] Service 'move_to_pose' not available.")
            self._client = None

    def on_enter(self, userdata):
        self._future = None
        self._request_sent = False

        if self._client is None:
            Logger.logerr("[MoveToPoseServiceState] No valid service client.")
            return

        grasp_poses = userdata.grasp_poses

        if not isinstance(grasp_poses, list) or len(grasp_poses) == 0 or not isinstance(grasp_poses[-1], Pose):
            Logger.logerr("[MoveToPoseServiceState] Invalid or missing 'grasp_poses' in userdata.")
            return

        target_pose = grasp_poses[-1]
        Logger.loginfo("[MoveToPoseServiceState] Sending motion request to final pose in grasp_poses.")

        try:
            request = MoveToPose.Request()
            request.target_pose = target_pose

            self._future = self._client.call_async(request)
            self._request_sent = True
        except Exception as e:
            Logger.logerr(f"[MoveToPoseServiceState] Failed to send request: {str(e)}")

    def execute(self, userdata):
        if not self._request_sent or self._future is None:
            return 'failure'

        if self._future.done():
            try:
                result = self._future.result()
                if result.success:
                    Logger.loginfo("[MoveToPoseServiceState] Successfully moved to pose.")
                    return 'success'
                else:
                    Logger.logwarn("[MoveToPoseServiceState] Motion execution failed.")
                    return 'failure'
            except Exception as e:
                Logger.logerr(f"[MoveToPoseServiceState] Service call failed: {str(e)}")
                return 'failure'

        return None  # keep waiting

    def on_exit(self, userdata):
        Logger.loginfo("[MoveToPoseServiceState] Exiting state.")

    def on_stop(self):
        Logger.loginfo("[MoveToPoseServiceState] Behavior stopped.")