// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from compare_flexbe_utilities:srv/FilterByIndices.idl
// generated code does not contain a copyright notice

#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__FILTER_BY_INDICES__STRUCT_H_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__FILTER_BY_INDICES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'input_cloud'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"
// Member 'target_indices'
#include "pcl_msgs/msg/detail/point_indices__struct.h"

/// Struct defined in srv/FilterByIndices in the package compare_flexbe_utilities.
typedef struct compare_flexbe_utilities__srv__FilterByIndices_Request
{
  sensor_msgs__msg__PointCloud2 input_cloud;
  pcl_msgs__msg__PointIndices target_indices;
} compare_flexbe_utilities__srv__FilterByIndices_Request;

// Struct for a sequence of compare_flexbe_utilities__srv__FilterByIndices_Request.
typedef struct compare_flexbe_utilities__srv__FilterByIndices_Request__Sequence
{
  compare_flexbe_utilities__srv__FilterByIndices_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} compare_flexbe_utilities__srv__FilterByIndices_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'filtered_cloud'
// already included above
// #include "sensor_msgs/msg/detail/point_cloud2__struct.h"

/// Struct defined in srv/FilterByIndices in the package compare_flexbe_utilities.
typedef struct compare_flexbe_utilities__srv__FilterByIndices_Response
{
  sensor_msgs__msg__PointCloud2 filtered_cloud;
} compare_flexbe_utilities__srv__FilterByIndices_Response;

// Struct for a sequence of compare_flexbe_utilities__srv__FilterByIndices_Response.
typedef struct compare_flexbe_utilities__srv__FilterByIndices_Response__Sequence
{
  compare_flexbe_utilities__srv__FilterByIndices_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} compare_flexbe_utilities__srv__FilterByIndices_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__FILTER_BY_INDICES__STRUCT_H_
