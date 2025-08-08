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
from robot_common_manip.srv import MoveToNamedPose


class MoveToNamedPoseServiceState(EventState):
    """
    Calls a service to move the robot to a named pose using the setNamedTarget, plan and execute C++ functions wrapped into a service server.

    -- timeout_sec        float       Timeout for waiting for service (default: 5.0)

    ># target_pose_name   str         The name of the target pose to move to

    <= success                        Service call succeeded and robot moved
    <= failure                        Service call failed or robot did not move
    """

    def __init__(self, timeout_sec=5.0):
        super().__init__(
            outcomes=['success', 'failure'],
            input_keys=['target_pose_name']
        )
        self._timeout_sec = timeout_sec
        self._client = None
        self._future = None
        self._request_sent = False

    def on_start(self):
        if not hasattr(MoveToNamedPoseServiceState, '_node'):
            raise RuntimeError("This state requires a FlexBE-attached ROS 2 node.")

        self._node = MoveToNamedPoseServiceState._node
        self._client = self._node.create_client(MoveToNamedPose, 'move_to_named_pose')

        if not self._client.wait_for_service(timeout_sec=self._timeout_sec):
            Logger.logerr("[MoveToNamedPoseServiceState] Service 'move_to_named_pose' not available.")
            self._client = None

    def on_enter(self, userdata):
        self._request_sent = False
        self._future = None

        if self._client is None:
            Logger.logerr("[MoveToNamedPoseServiceState] No valid service client available.")
            return

        try:
            target_name = userdata.target_pose_name
            request = MoveToNamedPose.Request()
            request.target_name = target_name

            self._future = self._client.call_async(request)
            self._request_sent = True
            Logger.loginfo(f"[MoveToNamedPoseServiceState] Sent request to move to named pose: '{target_name}'")

        except Exception as e:
            Logger.logerr(f"[MoveToNamedPoseServiceState] Exception while sending request: {str(e)}")

    def execute(self, userdata):
        if not self._request_sent or self._future is None:
            return 'failure'

        if self._future.done():
            try:
                result = self._future.result()
                if result.success:
                    Logger.loginfo(f"[MoveToNamedPoseServiceState] Successfully moved to '{userdata.target_pose_name}'.")
                    return 'success'
                else:
                    Logger.logwarn(f"[MoveToNamedPoseServiceState] Failed to move to '{userdata.target_pose_name}'.")
                    return 'failure'

            except Exception as e:
                Logger.logerr(f"[MoveToNamedPoseServiceState] Service call failed: {str(e)}")
                return 'failure'

        return None  # Keep waiting

    def on_exit(self, userdata):
        Logger.loginfo("[MoveToNamedPoseServiceState] Exiting state.")

    def on_stop(self):
        Logger.loginfo("[MoveToNamedPoseServiceState] Behavior stopped.")