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

from robot_common_manip.srv import CartesianMoveToPose as SrvType
from geometry_msgs.msg import Pose

class CartesianMoveToPoseServiceState(EventState):
    """
    Calls a ROS 2 service to move the robot in Cartesian space using waypoints using the computeCartesianPath and execute C++ function wrapped into a service server.

    -- timeout_sec     float        Timeout for waiting for service (default: 5.0)
    -- service_name    str          Service name (default: '/plan_cartesian_path')

    ># waypoints       list         A list of geometry_msgs/Pose to move through

    <= finished                     Path was planned and executed finishedfully
    <= failure                      Service failed or did not complete finishedfully
    """
    def __init__(self, service_timeout=5.0, service_name='/plan_cartesian_path'):
        super().__init__(outcomes=['finished', 'failure'],
                            input_keys=['waypoints']
        )
        self.service_timeout = service_timeout
        self._service_name = service_name
        self._client = None
        self._future = None

        # Create proxy service caller to handle rclpy node
        self._srv = ProxyServiceCaller({self._service_name: SrvType})

        # result storage
        self._res = None
        self._had_error = False

    def execute(self, userdata):
        # Execute this method periodically while the state is active.
        # Main purpose is to check state conditions and trigger a corresponding outcome.
        # If no outcome is returned, the state will stay active.

        # Check for error or no response
        if self._had_error or self._res is None:
            return 'failed'

        # No output userdata to write
        
        # Return outcome finished
        return 'finished'
    
    def on_enter(self, userdata):
        # Call this method a single time when the state becomes active, when a transition from another state to this one is taken.
        # It is primarily used to start actions which are associated with this state.

        # check for correct data
        waypoints = userdata.waypoints
        if not isinstance(waypoints, list) or len(waypoints) == 0 or not isinstance(waypoints[-1], Pose):
            Logger.logerr(f"[{type(self).__name__}] Invalid or missing data type in userdata.")
            return
        
        # construct request
        request = SrvType.Request()
        request.waypoints = waypoints

        # reset state
        self._res = None
        self._had_error = False

        # wait for availability (once per entry)
        if not self._srv.is_available(self._service_name):
            Logger.logerr(f"[{type(self).__name__}] Service '{self._service_name}' not available after {self._service_timeout}s.")
            self._had_error = True
            return

        # send request
        try:
            self._res = self._srv.call(self._service_name, request)
            Logger.loginfo(f"[{type(self).__name__}] Called service '{self._service_name}'.")
        except Exception as e:
            Logger.logerr(f"[{type(self).__name__}] Service call failed: {e}")
            self._res = None
            self._had_error = True

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