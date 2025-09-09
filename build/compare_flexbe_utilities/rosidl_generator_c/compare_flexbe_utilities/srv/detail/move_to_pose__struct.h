// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from compare_flexbe_utilities:srv/MoveToPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "compare_flexbe_utilities/srv/move_to_pose.h"


#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__MOVE_TO_POSE__STRUCT_H_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__MOVE_TO_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/MoveToPose in the package compare_flexbe_utilities.
typedef struct compare_flexbe_utilities__srv__MoveToPose_Request
{
  geometry_msgs__msg__Pose target_pose;
} compare_flexbe_utilities__srv__MoveToPose_Request;

// Struct for a sequence of compare_flexbe_utilities__srv__MoveToPose_Request.
typedef struct compare_flexbe_utilities__srv__MoveToPose_Request__Sequence
{
  compare_flexbe_utilities__srv__MoveToPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} compare_flexbe_utilities__srv__MoveToPose_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/MoveToPose in the package compare_flexbe_utilities.
typedef struct compare_flexbe_utilities__srv__MoveToPose_Response
{
  bool success;
} compare_flexbe_utilities__srv__MoveToPose_Response;

// Struct for a sequence of compare_flexbe_utilities__srv__MoveToPose_Response.
typedef struct compare_flexbe_utilities__srv__MoveToPose_Response__Sequence
{
  compare_flexbe_utilities__srv__MoveToPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} compare_flexbe_utilities__srv__MoveToPose_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  compare_flexbe_utilities__srv__MoveToPose_Event__request__MAX_SIZE = 1
};
// response
enum
{
  compare_flexbe_utilities__srv__MoveToPose_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/MoveToPose in the package compare_flexbe_utilities.
typedef struct compare_flexbe_utilities__srv__MoveToPose_Event
{
  service_msgs__msg__ServiceEventInfo info;
  compare_flexbe_utilities__srv__MoveToPose_Request__Sequence request;
  compare_flexbe_utilities__srv__MoveToPose_Response__Sequence response;
} compare_flexbe_utilities__srv__MoveToPose_Event;

// Struct for a sequence of compare_flexbe_utilities__srv__MoveToPose_Event.
typedef struct compare_flexbe_utilities__srv__MoveToPose_Event__Sequence
{
  compare_flexbe_utilities__srv__MoveToPose_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} compare_flexbe_utilities__srv__MoveToPose_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__MOVE_TO_POSE__STRUCT_H_
