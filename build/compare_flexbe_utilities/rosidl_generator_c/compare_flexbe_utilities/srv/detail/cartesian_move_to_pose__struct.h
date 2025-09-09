// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from compare_flexbe_utilities:srv/CartesianMoveToPose.idl
// generated code does not contain a copyright notice

#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__CARTESIAN_MOVE_TO_POSE__STRUCT_H_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__CARTESIAN_MOVE_TO_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'waypoints'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/CartesianMoveToPose in the package compare_flexbe_utilities.
typedef struct compare_flexbe_utilities__srv__CartesianMoveToPose_Request
{
  geometry_msgs__msg__Pose__Sequence waypoints;
} compare_flexbe_utilities__srv__CartesianMoveToPose_Request;

// Struct for a sequence of compare_flexbe_utilities__srv__CartesianMoveToPose_Request.
typedef struct compare_flexbe_utilities__srv__CartesianMoveToPose_Request__Sequence
{
  compare_flexbe_utilities__srv__CartesianMoveToPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} compare_flexbe_utilities__srv__CartesianMoveToPose_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/CartesianMoveToPose in the package compare_flexbe_utilities.
typedef struct compare_flexbe_utilities__srv__CartesianMoveToPose_Response
{
  bool success;
  float percentage_planned;
} compare_flexbe_utilities__srv__CartesianMoveToPose_Response;

// Struct for a sequence of compare_flexbe_utilities__srv__CartesianMoveToPose_Response.
typedef struct compare_flexbe_utilities__srv__CartesianMoveToPose_Response__Sequence
{
  compare_flexbe_utilities__srv__CartesianMoveToPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} compare_flexbe_utilities__srv__CartesianMoveToPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__CARTESIAN_MOVE_TO_POSE__STRUCT_H_
