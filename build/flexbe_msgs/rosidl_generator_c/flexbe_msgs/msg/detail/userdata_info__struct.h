// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexbe_msgs:msg/UserdataInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "flexbe_msgs/msg/userdata_info.h"


#ifndef FLEXBE_MSGS__MSG__DETAIL__USERDATA_INFO__STRUCT_H_
#define FLEXBE_MSGS__MSG__DETAIL__USERDATA_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'state'
// Member 'key'
// Member 'type'
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/UserdataInfo in the package flexbe_msgs.
typedef struct flexbe_msgs__msg__UserdataInfo
{
  rosidl_runtime_c__String state;
  rosidl_runtime_c__String key;
  rosidl_runtime_c__String type;
  rosidl_runtime_c__String data;
} flexbe_msgs__msg__UserdataInfo;

// Struct for a sequence of flexbe_msgs__msg__UserdataInfo.
typedef struct flexbe_msgs__msg__UserdataInfo__Sequence
{
  flexbe_msgs__msg__UserdataInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__msg__UserdataInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXBE_MSGS__MSG__DETAIL__USERDATA_INFO__STRUCT_H_
