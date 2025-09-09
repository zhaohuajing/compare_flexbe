// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tm_msgs:msg/SvrResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tm_msgs/msg/detail/svr_response__rosidl_typesupport_introspection_c.h"
#include "tm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tm_msgs/msg/detail/svr_response__functions.h"
#include "tm_msgs/msg/detail/svr_response__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `id`
// Member `content`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tm_msgs__msg__SvrResponse__rosidl_typesupport_introspection_c__SvrResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tm_msgs__msg__SvrResponse__init(message_memory);
}

void tm_msgs__msg__SvrResponse__rosidl_typesupport_introspection_c__SvrResponse_fini_function(void * message_memory)
{
  tm_msgs__msg__SvrResponse__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tm_msgs__msg__SvrResponse__rosidl_typesupport_introspection_c__SvrResponse_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__msg__SvrResponse, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__msg__SvrResponse, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__msg__SvrResponse, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "content",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__msg__SvrResponse, content),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__msg__SvrResponse, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tm_msgs__msg__SvrResponse__rosidl_typesupport_introspection_c__SvrResponse_message_members = {
  "tm_msgs__msg",  // message namespace
  "SvrResponse",  // message name
  5,  // number of fields
  sizeof(tm_msgs__msg__SvrResponse),
  tm_msgs__msg__SvrResponse__rosidl_typesupport_introspection_c__SvrResponse_message_member_array,  // message members
  tm_msgs__msg__SvrResponse__rosidl_typesupport_introspection_c__SvrResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  tm_msgs__msg__SvrResponse__rosidl_typesupport_introspection_c__SvrResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tm_msgs__msg__SvrResponse__rosidl_typesupport_introspection_c__SvrResponse_message_type_support_handle = {
  0,
  &tm_msgs__msg__SvrResponse__rosidl_typesupport_introspection_c__SvrResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, msg, SvrResponse)() {
  tm_msgs__msg__SvrResponse__rosidl_typesupport_introspection_c__SvrResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!tm_msgs__msg__SvrResponse__rosidl_typesupport_introspection_c__SvrResponse_message_type_support_handle.typesupport_identifier) {
    tm_msgs__msg__SvrResponse__rosidl_typesupport_introspection_c__SvrResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tm_msgs__msg__SvrResponse__rosidl_typesupport_introspection_c__SvrResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
