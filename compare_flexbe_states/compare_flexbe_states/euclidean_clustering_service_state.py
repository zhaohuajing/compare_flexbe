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

# Adjust to your actual package name:
from compare_flexbe_utilities.srv import EuclideanClustering as SrvType # request: input, camera_pose, cluster_tolerance, min/max size

class EuclideanClusteringServiceState(EventState):
    """
    Calls /euclidean_clustering to extract clusters from a (de-planed) cloud, sorted nearest→furthest to camera.

    -- service_timeout     float   Timeout for service discovery (sec, default: 5.0)
    -- service_name        str     Service name (default: '/euclidean_clustering')
    -- cluster_tolerance   float   Cluster tolerance (m), e.g., 0.02
    -- min_cluster_size    int     Minimum cluster size, e.g., 100
    -- max_cluster_size    int     Maximum cluster size, e.g., 25000

    ># cloud_in                   sensor_msgs/PointCloud2   (ideally output of PlaneSegmentation)
    ># camera_pose                geometry_msgs/PoseStamped
    <# clusters_cloud_indexed     gpd_ros/CloudIndexed
    <# cluster_count              int

    <= done
    <= failed
    """
    def __init__(self, service_timeout=5.0, service_name='/euclidean_clustering', cluster_tolerance=0.02, min_cluster_size=100, max_cluster_size=25000):
        super().__init__(outcomes=['done', 'failed'],
                            input_keys=['cloud_in', 'camera_pose'],
                            output_keys=['target_cluster_index', 'obstacle_clusters_index' 'cluster_count']
        )
        self._params = dict(
            cluster_tolerance=float(cluster_tolerance),
            min_cluster_size=int(min_cluster_size),
            max_cluster_size=int(max_cluster_size)
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
                userdata.target_cluster = result.target_cluster
                userdata.obstacle_clusters = result.obstacle_clusters
                userdata.cluster_count = result.cluster_count
                Logger.loginfo(f"[{type(self).__name__}] Received result with {len(result.cluster_count)} clusters.")
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
        request.input = userdata.cloud_in
        request.camera_pose = userdata.camera_pose
        request.cluster_tolerance = float(self._params['cluster_tolerance'])
        request.min_cluster_size = int(self._params['min_cluster_size'])
        request.max_cluster_size = int(self._params['max_cluster_size'])

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
