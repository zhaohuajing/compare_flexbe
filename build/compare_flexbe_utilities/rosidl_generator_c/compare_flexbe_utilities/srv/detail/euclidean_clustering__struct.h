// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from compare_flexbe_utilities:srv/EuclideanClustering.idl
// generated code does not contain a copyright notice

#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__EUCLIDEAN_CLUSTERING__STRUCT_H_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__EUCLIDEAN_CLUSTERING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'input'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"
// Member 'camera_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in srv/EuclideanClustering in the package compare_flexbe_utilities.
typedef struct compare_flexbe_utilities__srv__EuclideanClustering_Request
{
  sensor_msgs__msg__PointCloud2 input;
  geometry_msgs__msg__PoseStamped camera_pose;
  /// meters (e.g., 0.015–0.03 typical)
  float cluster_tolerance;
  /// e.g., 100
  int32_t min_cluster_size;
  /// e.g., 25000
  int32_t max_cluster_size;
} compare_flexbe_utilities__srv__EuclideanClustering_Request;

// Struct for a sequence of compare_flexbe_utilities__srv__EuclideanClustering_Request.
typedef struct compare_flexbe_utilities__srv__EuclideanClustering_Request__Sequence
{
  compare_flexbe_utilities__srv__EuclideanClustering_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} compare_flexbe_utilities__srv__EuclideanClustering_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'target_cluster_indices'
// Member 'obstacle_cluster_indices'
#include "pcl_msgs/msg/detail/point_indices__struct.h"

/// Struct defined in srv/EuclideanClustering in the package compare_flexbe_utilities.
typedef struct compare_flexbe_utilities__srv__EuclideanClustering_Response
{
  pcl_msgs__msg__PointIndices target_cluster_indices;
  pcl_msgs__msg__PointIndices__Sequence obstacle_cluster_indices;
} compare_flexbe_utilities__srv__EuclideanClustering_Response;

// Struct for a sequence of compare_flexbe_utilities__srv__EuclideanClustering_Response.
typedef struct compare_flexbe_utilities__srv__EuclideanClustering_Response__Sequence
{
  compare_flexbe_utilities__srv__EuclideanClustering_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} compare_flexbe_utilities__srv__EuclideanClustering_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__EUCLIDEAN_CLUSTERING__STRUCT_H_
