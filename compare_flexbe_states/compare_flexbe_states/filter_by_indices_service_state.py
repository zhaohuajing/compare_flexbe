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
from flexbe_core import EventState, Logger

from compare_flexbe_utilities.srv import FilterByIndices as SrvType

class FilterByIndicesServiceState(EventState):
    """
    Calls /get_point_cloud to collect current view point cloud and camera pose.

    -- service_timeout     float    Timeout for service discovery (sec, default: 5.0)
    -- service_name        str      Service name (default: '/filter_by_indices')

    <# cloud_in                 sensor_msgs/PointCloud2         full scene point cloud
    <# target_indices           pcl_msgs/PointIndices           indices of target object cluster
    ># cloud_out                sensor_msgs/PointCloud2         point cloud of only target object

    <= done
    <= failed
    """
    def __init__(self, service_timeout=5.0, service_name='/filter_by_indices'):
        super().__init__(outcomes=['done', 'failed'],
                            input_keys=['cloud_in', 'target_indices'],
                            output_keys=['cloud_out']
        )
        self._service_timeout = service_timeout
        self._service_name = service_name
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
                userdata.cloud_out = result.filtered_cloud
                Logger.loginfo(f"[{type(self).__name__}] Received filtered cloud.")
                return 'done'
            except Exception as e:
                Logger.logerr(f"Service call failed: {str(e)}")
                return 'failed'

        return None  # still waiting
    
    def on_enter(self, userdata):
        # Call this method a single time when the state becomes active, when a transition from another state to this one is taken.
        # It is primarily used to start actions which are associated with this state.
        
        # construct request
        request = SrvType.Request()
        request.input_cloud = userdata.cloud_in
        request.target_indices = userdata.target_indices

        # send request
        try:
            self._future = self._client.call_async(request)
            Logger.loginfo(f"[{type(self).__name__}] Sent request to {self._service_name} service.")
        except Exception as e:
            Logger.logerr(f"[{type(self).__name__}] Failed to send request: {str(e)}")

    def on_exit(self, userdata):
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
            Logger.logerr(f"[{type(self).__name__}] Service {self._service_name} not available after waiting.")
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