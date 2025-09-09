// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexbe_msgs:msg/OutcomeRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "flexbe_msgs/msg/outcome_request.h"


#ifndef FLEXBE_MSGS__MSG__DETAIL__OUTCOME_REQUEST__STRUCT_H_
#define FLEXBE_MSGS__MSG__DETAIL__OUTCOME_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/OutcomeRequest in the package flexbe_msgs.
typedef struct flexbe_msgs__msg__OutcomeRequest
{
  uint8_t outcome;
  /// state id
  int32_t target;
} flexbe_msgs__msg__OutcomeRequest;

// Struct for a sequence of flexbe_msgs__msg__OutcomeRequest.
typedef struct flexbe_msgs__msg__OutcomeRequest__Sequence
{
  flexbe_msgs__msg__OutcomeRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__msg__OutcomeRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXBE_MSGS__MSG__DETAIL__OUTCOME_REQUEST__STRUCT_H_
