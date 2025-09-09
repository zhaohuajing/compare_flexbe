// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from flexbe_msgs:msg/OutcomeRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "flexbe_msgs/msg/detail/outcome_request__rosidl_typesupport_introspection_c.h"
#include "flexbe_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "flexbe_msgs/msg/detail/outcome_request__functions.h"
#include "flexbe_msgs/msg/detail/outcome_request__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void flexbe_msgs__msg__OutcomeRequest__rosidl_typesupport_introspection_c__OutcomeRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flexbe_msgs__msg__OutcomeRequest__init(message_memory);
}

void flexbe_msgs__msg__OutcomeRequest__rosidl_typesupport_introspection_c__OutcomeRequest_fini_function(void * message_memory)
{
  flexbe_msgs__msg__OutcomeRequest__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember flexbe_msgs__msg__OutcomeRequest__rosidl_typesupport_introspection_c__OutcomeRequest_message_member_array[2] = {
  {
    "outcome",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__OutcomeRequest, outcome),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__OutcomeRequest, target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers flexbe_msgs__msg__OutcomeRequest__rosidl_typesupport_introspection_c__OutcomeRequest_message_members = {
  "flexbe_msgs__msg",  // message namespace
  "OutcomeRequest",  // message name
  2,  // number of fields
  sizeof(flexbe_msgs__msg__OutcomeRequest),
  false,  // has_any_key_member_
  flexbe_msgs__msg__OutcomeRequest__rosidl_typesupport_introspection_c__OutcomeRequest_message_member_array,  // message members
  flexbe_msgs__msg__OutcomeRequest__rosidl_typesupport_introspection_c__OutcomeRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  flexbe_msgs__msg__OutcomeRequest__rosidl_typesupport_introspection_c__OutcomeRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t flexbe_msgs__msg__OutcomeRequest__rosidl_typesupport_introspection_c__OutcomeRequest_message_type_support_handle = {
  0,
  &flexbe_msgs__msg__OutcomeRequest__rosidl_typesupport_introspection_c__OutcomeRequest_message_members,
  get_message_typesupport_handle_function,
  &flexbe_msgs__msg__OutcomeRequest__get_type_hash,
  &flexbe_msgs__msg__OutcomeRequest__get_type_description,
  &flexbe_msgs__msg__OutcomeRequest__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flexbe_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, msg, OutcomeRequest)() {
  if (!flexbe_msgs__msg__OutcomeRequest__rosidl_typesupport_introspection_c__OutcomeRequest_message_type_support_handle.typesupport_identifier) {
    flexbe_msgs__msg__OutcomeRequest__rosidl_typesupport_introspection_c__OutcomeRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &flexbe_msgs__msg__OutcomeRequest__rosidl_typesupport_introspection_c__OutcomeRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
