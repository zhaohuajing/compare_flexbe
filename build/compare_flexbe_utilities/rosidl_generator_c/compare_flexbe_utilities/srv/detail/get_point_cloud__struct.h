// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from compare_flexbe_utilities:srv/GetPointCloud.idl
// generated code does not contain a copyright notice

#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__GET_POINT_CLOUD__STRUCT_H_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__GET_POINT_CLOUD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'camera_topic'
// Member 'target_frame'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetPointCloud in the package compare_flexbe_utilities.
typedef struct compare_flexbe_utilities__srv__GetPointCloud_Request
{
  rosidl_runtime_c__String camera_topic;
  rosidl_runtime_c__String target_frame;
  float timeout_sec;
} compare_flexbe_utilities__srv__GetPointCloud_Request;

// Struct for a sequence of compare_flexbe_utilities__srv__GetPointCloud_Request.
typedef struct compare_flexbe_utilities__srv__GetPointCloud_Request__Sequence
{
  compare_flexbe_utilities__srv__GetPointCloud_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} compare_flexbe_utilities__srv__GetPointCloud_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'cloud_out'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"
// Member 'camera_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'cloud_frame'
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetPointCloud in the package compare_flexbe_utilities.
typedef struct compare_flexbe_utilities__srv__GetPointCloud_Response
{
  sensor_msgs__msg__PointCloud2 cloud_out;
  /// pose of camera_frame in target_frame
  geometry_msgs__msg__PoseStamped camera_pose;
  /// original message frame_id
  rosidl_runtime_c__String cloud_frame;
  bool success;
  rosidl_runtime_c__String message;
} compare_flexbe_utilities__srv__GetPointCloud_Response;

// Struct for a sequence of compare_flexbe_utilities__srv__GetPointCloud_Response.
typedef struct compare_flexbe_utilities__srv__GetPointCloud_Response__Sequence
{
  compare_flexbe_utilities__srv__GetPointCloud_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} compare_flexbe_utilities__srv__GetPointCloud_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__GET_POINT_CLOUD__STRUCT_H_
