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
from rclpy.task import Future
from rclpy.duration import Duration

from flexbe_core import EventState, Logger

from gpd_ros.srv import detect_grasps  # GPD service definition

class DetectGraspsServiceState(EventState):
    """
    Calls the gpd_ros/detect_grasps service with a CloudIndexed input and returns GraspConfigList.

    -- service_timeout    float       Timeout for service call in seconds (default: 5.0)

    ># cloud_indexed      gpd_ros/CloudIndexed      The input to the service
    <# grasp_configs      gpd_ros/GraspConfigList   The output from the service

    <= done               Service call succeeded
    <= failed             Service call failed or timed out
    """

    def __init__(self, service_timeout=5.0):
        super().__init__(
            outcomes=['done', 'failed'],
            input_keys=['cloud_indexed'],
            output_keys=['grasp_configs']
        )
        self._service_timeout = service_timeout
        self._client = None
        self._request_sent = False
        self._future = None

    def on_start(self):
        if not hasattr(DetectGraspsServiceState, '_node'):
            raise RuntimeError("FlexBE state does not have an attached ROS2 node!")
        
        self._node = DetectGraspsServiceState._node
        self._client = self._node.create_client(detect_grasps, '/detect_grasps')

        if not self._client.wait_for_service(timeout_sec=self._service_timeout):
            Logger.logerr("Service [/detect_grasps] not available after waiting.")
            self._client = None

    def on_enter(self, userdata):
        self._request_sent = False
        self._future = None

        if self._client is None:
            Logger.logerr("Service client was not created.")
            return

        try:
            request = detect_grasps.Request()
            request.cloud_indexed = userdata.cloud_indexed
            self._future = self._client.call_async(request)
            self._request_sent = True
            Logger.loginfo("Sent request to /detect_grasps service.")
        except Exception as e:
            Logger.logerr(f"Failed to send request: {str(e)}")

    def execute(self, userdata):
        if not self._request_sent or self._future is None:
            return 'failed'

        if self._future.done():
            try:
                result = self._future.result()
                userdata.grasp_configs = result.grasp_configs
                Logger.loginfo(f"Received grasp configs with {len(result.grasp_configs.grasps)} grasps.")
                return 'done'
            except Exception as e:
                Logger.logerr(f"Service call failed: {str(e)}")
                return 'failed'

        return None  # still waiting

    def on_exit(self, userdata):
        Logger.loginfo("Exiting DetectGraspsServiceState.")

    def on_stop(self):
        if self._client:
            try:
                self._client.destroy()
            except Exception:
                pass