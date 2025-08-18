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

from robot_common_manip.srv import CartesianMoveToPose as SrvType
from geometry_msgs.msg import Pose


class CartesianMoveToPoseServiceState(EventState):
    """
    Calls a ROS 2 service to move the robot in Cartesian space using waypoints using the computeCartesianPath and execute C++ function wrapped into a service server.

    -- timeout_sec     float       Timeout for waiting for service (default: 5.0)

    ># waypoints       list        A list of geometry_msgs/Pose to move through

    <= success                     Path was planned and executed successfully
    <= failure                     Service failed or did not complete successfully
    """

    SERVICE_NAME = '/plan_cartesian_path'

    def __init__(self, service_timeout=5.0):
        super().__init__(outcomes=['success', 'failure'],
                            input_keys=['waypoints']
        )
        self.service_timeout = service_timeout
        self._service_name = type(self).SERVICE_NAME
        self._client = None
        self._future = None

    def execute(self, userdata):
        # Execute this method periodically while the state is active.
        # Main purpose is to check state conditions and trigger a corresponding outcome.
        # If no outcome is returned, the state will stay active.

        if self._future is None:
            return 'failed'

        if self._future.done():
            try:
                result = self._future.result()
                if result.success:
                    return 'done'
                else:
                    return 'failed'
            except Exception as e:
                Logger.logerr(f"Service call failed: {str(e)}")
                return 'failed'

        return None  # still waiting
    
    def on_enter(self, userdata):
        # Call this method a single time when the state becomes active, when a transition from another state to this one is taken.
        # It is primarily used to start actions which are associated with this state.
        
        # construct request
        request = SrvType.Request()
        request.waypoints = userdata.waypoints

        # send request
        try:
            self._future = self._client.call_async(request)
            Logger.loginfo(f"Sent request to {self._service_name} service.")
        except Exception as e:
            Logger.logerr(f"Failed to send request: {str(e)}")

    def on_exit(self):
        # Call this method when an outcome is returned and another state gets active.
        # It can be used to stop possibly running processes started by on_enter.

        # No-op: template hook
        pass

    def on_start(self):
        # Call this method when the behavior is instantiated on board.
        # If possible, it is generally better to initialize used resources in the constructor
        #   because if anything failed, the behavior would not even be started.

        # create the service client, andensure that the service server is initialized
        self._client = type(self).create_client(SrvType, self._service_name)
        if not self._client.wait_for_service(timeout_sec=self._service_timeout):
            Logger.logerr(f"Service {self._service_name} not available after waiting.")
            return 'failed'

    def on_stop(self):
        # Call this method whenever the behavior stops execution, also if it is cancelled.
        # Use this event to clean up things like claimed resources.

        # make sure the client is destroyed when the behavior ends so it can restart cleanly
        if self._client:
            try:
                self._client.destroy()
            except Exception:
                pass