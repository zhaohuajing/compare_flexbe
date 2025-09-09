// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tm_msgs:msg/SctResponse.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__MSG__DETAIL__SCT_RESPONSE__STRUCT_H_
#define TM_MSGS__MSG__DETAIL__SCT_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'id'
// Member 'script'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SctResponse in the package tm_msgs.
/**
  * For SendScript / SetXXX service
  * More details please refer to the TM_Robot_Expression.pdf(1.76 rev1.00) Chapter 7.4
 */
typedef struct tm_msgs__msg__SctResponse
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String id;
  rosidl_runtime_c__String script;
} tm_msgs__msg__SctResponse;

// Struct for a sequence of tm_msgs__msg__SctResponse.
typedef struct tm_msgs__msg__SctResponse__Sequence
{
  tm_msgs__msg__SctResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tm_msgs__msg__SctResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TM_MSGS__MSG__DETAIL__SCT_RESPONSE__STRUCT_H_
