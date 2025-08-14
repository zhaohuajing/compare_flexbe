#!/usr/bin/env python3

import rclpy
from flexbe_core import EventState, Logger

# Adjust to your actual package name:
from compare_flexbe_utilities.srv import EuclideanClustering  # request: input, camera_pose, cluster_tolerance, min/max size

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
    def __init__(self,
                 service_timeout=5.0,
                 service_name='/euclidean_clustering',
                 cluster_tolerance=0.02,
                 min_cluster_size=100,
                 max_cluster_size=25000):
        super().__init__(
            outcomes=['done', 'failed'],
            input_keys=['cloud_in', 'camera_pose'],
            output_keys=['clusters_cloud_indexed', 'cluster_count']
        )
        self._service_timeout = service_timeout
        self._service_name = service_name
        self._params = dict(
            cluster_tolerance=float(cluster_tolerance),
            min_cluster_size=int(min_cluster_size),
            max_cluster_size=int(max_cluster_size)
        )
        self._client = None
        self._future = None
        self._request_sent = False

    def on_start(self):
        if not hasattr(EuclideanClusteringServiceState, '_node'):
            raise RuntimeError("FlexBE state does not have an attached ROS2 node!")
        self._node = EuclideanClusteringServiceState._node

        self._client = self._node.create_client(EuclideanClustering, self._service_name)
        if not self._client.wait_for_service(timeout_sec=self._service_timeout):
            Logger.logerr(f"Service [{self._service_name}] not available after waiting.")
            self._client = None

    def on_enter(self, userdata):
        self._request_sent = False
        self._future = None

        if self._client is None:
            Logger.logerr("Service client was not created.")
            return

        try:
            req = EuclideanClustering.Request()
            req.input = userdata.cloud_in
            req.camera_pose = userdata.camera_pose
            req.cluster_tolerance = float(self._params['cluster_tolerance'])
            req.min_cluster_size = int(self._params['min_cluster_size'])
            req.max_cluster_size = int(self._params['max_cluster_size'])

            self._future = self._client.call_async(req)
            self._request_sent = True
            Logger.loginfo(f"Sent request to {self._service_name}.")
        except Exception as e:
            Logger.logerr(f"Failed to send request: {str(e)}")

    def execute(self, userdata):
        if not self._request_sent or self._future is None:
            return 'failed'

        if self._future.done():
            try:
                resp = self._future.result()
                userdata.clusters_cloud_indexed = resp.clusters_sorted
                userdata.cluster_count = resp.cluster_count
                Logger.loginfo(f"EuclideanClustering: found {resp.cluster_count} clusters (near→far).")
                return 'done'
            except Exception as e:
                Logger.logerr(f"Service call failed: {str(e)}")
                return 'failed'
        return None

    def on_exit(self, userdata):
        Logger.loginfo("Exiting EuclideanClusteringServiceState.")

    def on_stop(self):
        if self._client:
            try:
                self._client.destroy()
            except Exception:
                pass
