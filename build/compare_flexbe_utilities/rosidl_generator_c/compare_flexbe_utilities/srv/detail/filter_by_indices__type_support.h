// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from compare_flexbe_utilities:srv/FilterByIndices.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "compare_flexbe_utilities/srv/filter_by_indices.h"


#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__FILTER_BY_INDICES__TYPE_SUPPORT_H_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__FILTER_BY_INDICES__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "compare_flexbe_utilities/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  compare_flexbe_utilities,
  srv,
  FilterByIndices_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  compare_flexbe_utilities,
  srv,
  FilterByIndices_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  compare_flexbe_utilities,
  srv,
  FilterByIndices_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  compare_flexbe_utilities,
  srv,
  FilterByIndices
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  compare_flexbe_utilities,
  srv,
  FilterByIndices
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  compare_flexbe_utilities,
  srv,
  FilterByIndices
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__FILTER_BY_INDICES__TYPE_SUPPORT_H_
