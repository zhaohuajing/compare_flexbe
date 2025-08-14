#!/usr/bin/env python3

import rclpy
from flexbe_core import EventState, Logger

# Adjust to your actual package name:
from compare_flexbe_utilities.srv import PlaneSegmentation  # request: input, use_voxel, leaf_size, distance_threshold, max_iterations

class PlaneSegmentationServiceState(EventState):
    """
    Calls /plane_segmentation to remove the dominant plane from the ORIGINAL cloud,
    using plane coefficients fit on an optionally voxelized copy for speed.

    -- service_timeout     float   Timeout for service discovery (sec, default: 5.0)
    -- service_name        str     Service name (default: '/plane_segmentation')
    -- use_voxel           bool    Run RANSAC on voxelized copy (default: True)
    -- leaf_size           float   Voxel leaf size in meters (default: 0.01)
    -- distance_threshold  float   RANSAC distance threshold in meters (default: 0.01)
    -- max_iterations      int     Max RANSAC iterations (default: 1000)

    ># cloud_in                   sensor_msgs/PointCloud2
    <# cloud_without_plane        sensor_msgs/PointCloud2
    <# plane_indices              pcl_msgs/PointIndices
    <# plane_coefficients         float[4]      [a,b,c,d]
    <# plane_inlier_count         int

    <= done
    <= failed
    """
    def __init__(self,
                 service_timeout=5.0,
                 service_name='/plane_segmentation',
                 use_voxel=True,
                 leaf_size=0.01,
                 distance_threshold=0.01,
                 max_iterations=1000):
        super().__init__(
            outcomes=['done', 'failed'],
            input_keys=['cloud_in'],
            output_keys=['cloud_without_plane', 'plane_indices', 'plane_coefficients', 'plane_inlier_count']
        )
        self._service_timeout = service_timeout
        self._service_name = service_name
        self._params = dict(
            use_voxel=use_voxel,
            leaf_size=float(leaf_size),
            distance_threshold=float(distance_threshold),
            max_iterations=int(max_iterations)
        )
        self._client = None
        self._future = None
        self._request_sent = False

    def on_start(self):
        if not hasattr(PlaneSegmentationServiceState, '_node'):
            raise RuntimeError("FlexBE state does not have an attached ROS2 node!")
        self._node = PlaneSegmentationServiceState._node

        self._client = self._node.create_client(PlaneSegmentation, self._service_name)
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
            req = PlaneSegmentation.Request()
            req.input = userdata.cloud_in
            req.use_voxel = bool(self._params['use_voxel'])
            req.leaf_size = float(self._params['leaf_size'])
            req.distance_threshold = float(self._params['distance_threshold'])
            req.max_iterations = int(self._params['max_iterations'])

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
                userdata.cloud_without_plane = resp.without_plane
                userdata.plane_indices = resp.plane_indices
                userdata.plane_coefficients = resp.plane_coefficients
                userdata.plane_inlier_count = resp.inlier_count
                Logger.loginfo(f"PlaneSegmentation: removed plane with {resp.inlier_count} inliers.")
                return 'done'
            except Exception as e:
                Logger.logerr(f"Service call failed: {str(e)}")
                return 'failed'
        return None

    def on_exit(self, userdata):
        Logger.loginfo("Exiting PlaneSegmentationServiceState.")

    def on_stop(self):
        if self._client:
            try:
                self._client.destroy()
            except Exception:
                pass