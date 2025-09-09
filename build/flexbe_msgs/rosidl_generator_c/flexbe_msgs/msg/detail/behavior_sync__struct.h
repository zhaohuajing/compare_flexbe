// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexbe_msgs:msg/BehaviorSync.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "flexbe_msgs/msg/behavior_sync.h"


#ifndef FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SYNC__STRUCT_H_
#define FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SYNC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'INVALID'.
/**
  * denotes unset id or checksum
 */
enum
{
  flexbe_msgs__msg__BehaviorSync__INVALID = 0l
};

// Include directives for member types
// Member 'current_state_checksums'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/BehaviorSync in the package flexbe_msgs.
typedef struct flexbe_msgs__msg__BehaviorSync
{
  /// id (checksum) of particular behavior encoding
  int32_t behavior_id;
  rosidl_runtime_c__int32__Sequence current_state_checksums;
} flexbe_msgs__msg__BehaviorSync;

// Struct for a sequence of flexbe_msgs__msg__BehaviorSync.
typedef struct flexbe_msgs__msg__BehaviorSync__Sequence
{
  flexbe_msgs__msg__BehaviorSync * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__msg__BehaviorSync__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SYNC__STRUCT_H_
