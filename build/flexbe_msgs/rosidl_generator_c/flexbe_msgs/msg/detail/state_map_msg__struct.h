// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexbe_msgs:msg/StateMapMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "flexbe_msgs/msg/state_map_msg.h"


#ifndef FLEXBE_MSGS__MSG__DETAIL__STATE_MAP_MSG__STRUCT_H_
#define FLEXBE_MSGS__MSG__DETAIL__STATE_MAP_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'state_ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'state_paths'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/StateMapMsg in the package flexbe_msgs.
/**
  * Mapping between numeric ids and state path in given behavior
 */
typedef struct flexbe_msgs__msg__StateMapMsg
{
  /// Behavior ID assigned in ContainerStructure.msg
  int32_t behavior_id;
  /// Ordered lists of corresponding state id hash code and state path
  rosidl_runtime_c__int32__Sequence state_ids;
  rosidl_runtime_c__String__Sequence state_paths;
} flexbe_msgs__msg__StateMapMsg;

// Struct for a sequence of flexbe_msgs__msg__StateMapMsg.
typedef struct flexbe_msgs__msg__StateMapMsg__Sequence
{
  flexbe_msgs__msg__StateMapMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__msg__StateMapMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXBE_MSGS__MSG__DETAIL__STATE_MAP_MSG__STRUCT_H_
