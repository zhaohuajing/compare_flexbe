#!/usr/bin/env python3

import rclpy
from flexbe_core import EventState, Logger

# Adjust to your actual package name:
from compare_flexbe_utilities.srv import VoxelGridFilter  # request: input, response: filtered

class VoxelGridServiceState(EventState):
    """
    Calls /voxel_grid_filter to downsample a cloud.

    -- service_timeout   float     Timeout for service discovery (sec, default: 5.0)
    -- service_name      str       Service name (default: '/voxel_grid_filter')

    ># cloud_in          sensor_msgs/PointCloud2
    <# cloud_filtered    sensor_msgs/PointCloud2

    <= done
    <= failed
    """
    def __init__(self, service_timeout=5.0, service_name='/voxel_grid_filter'):
        super().__init__(
            outcomes=['done', 'failed'],
            input_keys=['cloud_in'],
            output_keys=['cloud_filtered']
        )
        self._service_timeout = service_timeout
        self._service_name = service_name
        self._client = None
        self._future = None
        self._request_sent = False

    def on_start(self):
        if not hasattr(VoxelGridServiceState, '_node'):
            raise RuntimeError("FlexBE state does not have an attached ROS2 node!")
        self._node = VoxelGridServiceState._node

        self._client = self._node.create_client(VoxelGridFilter, self._service_name)
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
            req = VoxelGridFilter.Request()
            req.input = userdata.cloud_in
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
                userdata.cloud_filtered = resp.filtered
                Logger.loginfo("VoxelGridFilter: received filtered cloud.")
                return 'done'
            except Exception as e:
                Logger.logerr(f"Service call failed: {str(e)}")
                return 'failed'
        return None

    def on_exit(self, userdata):
        Logger.loginfo("Exiting VoxelGridServiceState.")

    def on_stop(self):
        if self._client:
            try:
                self._client.destroy()
            except Exception:
                pass