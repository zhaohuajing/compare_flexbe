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

from robot_common_manip.srv import CartesianMoveToPose
from geometry_msgs.msg import Pose


class CartesianMoveToPoseServiceState(EventState):
    """
    Calls a ROS 2 service to move the robot in Cartesian space using waypoints using the computeCartesianPath and execute C++ function wrapped into a service server.

    -- timeout_sec     float       Timeout for waiting for service (default: 5.0)

    ># waypoints       list        A list of geometry_msgs/Pose to move through

    <= success                     Path was planned and executed successfully
    <= failure                     Service failed or did not complete successfully
    """

    def __init__(self, timeout_sec=5.0):
        super().__init__(
            outcomes=['success', 'failure'],
            input_keys=['waypoints']
        )
        self._timeout_sec = timeout_sec
        self._client = None
        self._future = None
        self._request_sent = False
        self._result_received = False
        self._result = None

    def on_start(self):
        if not hasattr(CartesianMoveToPoseServiceState, '_node'):
            raise RuntimeError("This state requires a FlexBE-attached ROS 2 node.")

        self._node = CartesianMoveToPoseServiceState._node
        self._client = self._node.create_client(CartesianMoveToPose, 'plan_cartesian_path')

        if not self._client.wait_for_service(timeout_sec=self._timeout_sec):
            Logger.logerr("[CartesianMoveToPoseServiceState] Service 'plan_cartesian_path' not available.")
            self._client = None

    def on_enter(self, userdata):
        self._result_received = False
        self._request_sent = False
        self._result = None
        self._future = None

        if self._client is None:
            Logger.logerr("[CartesianMoveToPoseServiceState] No valid service client available.")
            return

        try:
            waypoints = userdata.waypoints
            if not isinstance(waypoints, list) or not all(isinstance(p, Pose) for p in waypoints):
                Logger.logerr("[CartesianMoveToPoseServiceState] Invalid or missing 'waypoints' in userdata.")
                return

            request = CartesianMoveToPose.Request()
            request.waypoints = waypoints

            self._future = self._client.call_async(request)
            self._request_sent = True
            Logger.loginfo("[CartesianMoveToPoseServiceState] Sent Cartesian move request with "
                           f"{len(waypoints)} waypoints.")

        except Exception as e:
            Logger.logerr(f"[CartesianMoveToPoseServiceState] Exception while sending service request: {str(e)}")

    def execute(self, userdata):
        if not self._request_sent or self._future is None:
            return 'failure'

        if self._future.done():
            try:
                result = self._future.result()
                self._result_received = True

                if result.success:
                    Logger.loginfo(f"[CartesianMoveToPoseServiceState] Cartesian path executed successfully "
                                   f"({result.percentage_planned:.2f}% planned).")
                    return 'success'
                else:
                    Logger.logwarn("[CartesianMoveToPoseServiceState] Cartesian path planning failed.")
                    return 'failure'

            except Exception as e:
                Logger.logerr(f"[CartesianMoveToPoseServiceState] Service call failed: {str(e)}")
                return 'failure'

        return None  # Wait again

    def on_exit(self, userdata):
        Logger.loginfo("[CartesianMoveToPoseServiceState] Exiting state.")

    def on_stop(self):
        Logger.loginfo("[CartesianMoveToPoseServiceState] Behavior stopped.")