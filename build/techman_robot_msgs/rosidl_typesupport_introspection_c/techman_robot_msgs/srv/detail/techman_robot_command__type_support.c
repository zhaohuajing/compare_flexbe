// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from techman_robot_msgs:srv/TechmanRobotCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "techman_robot_msgs/srv/detail/techman_robot_command__rosidl_typesupport_introspection_c.h"
#include "techman_robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "techman_robot_msgs/srv/detail/techman_robot_command__functions.h"
#include "techman_robot_msgs/srv/detail/techman_robot_command__struct.h"


// Include directives for member types
// Member `command`
// Member `command_parameter_string`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void techman_robot_msgs__srv__TechmanRobotCommand_Request__rosidl_typesupport_introspection_c__TechmanRobotCommand_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  techman_robot_msgs__srv__TechmanRobotCommand_Request__init(message_memory);
}

void techman_robot_msgs__srv__TechmanRobotCommand_Request__rosidl_typesupport_introspection_c__TechmanRobotCommand_Request_fini_function(void * message_memory)
{
  techman_robot_msgs__srv__TechmanRobotCommand_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember techman_robot_msgs__srv__TechmanRobotCommand_Request__rosidl_typesupport_introspection_c__TechmanRobotCommand_Request_message_member_array[2] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(techman_robot_msgs__srv__TechmanRobotCommand_Request, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command_parameter_string",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(techman_robot_msgs__srv__TechmanRobotCommand_Request, command_parameter_string),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers techman_robot_msgs__srv__TechmanRobotCommand_Request__rosidl_typesupport_introspection_c__TechmanRobotCommand_Request_message_members = {
  "techman_robot_msgs__srv",  // message namespace
  "TechmanRobotCommand_Request",  // message name
  2,  // number of fields
  sizeof(techman_robot_msgs__srv__TechmanRobotCommand_Request),
  false,  // has_any_key_member_
  techman_robot_msgs__srv__TechmanRobotCommand_Request__rosidl_typesupport_introspection_c__TechmanRobotCommand_Request_message_member_array,  // message members
  techman_robot_msgs__srv__TechmanRobotCommand_Request__rosidl_typesupport_introspection_c__TechmanRobotCommand_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  techman_robot_msgs__srv__TechmanRobotCommand_Request__rosidl_typesupport_introspection_c__TechmanRobotCommand_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t techman_robot_msgs__srv__TechmanRobotCommand_Request__rosidl_typesupport_introspection_c__TechmanRobotCommand_Request_message_type_support_handle = {
  0,
  &techman_robot_msgs__srv__TechmanRobotCommand_Request__rosidl_typesupport_introspection_c__TechmanRobotCommand_Request_message_members,
  get_message_typesupport_handle_function,
  &techman_robot_msgs__srv__TechmanRobotCommand_Request__get_type_hash,
  &techman_robot_msgs__srv__TechmanRobotCommand_Request__get_type_description,
  &techman_robot_msgs__srv__TechmanRobotCommand_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_techman_robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, techman_robot_msgs, srv, TechmanRobotCommand_Request)() {
  if (!techman_robot_msgs__srv__TechmanRobotCommand_Request__rosidl_typesupport_introspection_c__TechmanRobotCommand_Request_message_type_support_handle.typesupport_identifier) {
    techman_robot_msgs__srv__TechmanRobotCommand_Request__rosidl_typesupport_introspection_c__TechmanRobotCommand_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &techman_robot_msgs__srv__TechmanRobotCommand_Request__rosidl_typesupport_introspection_c__TechmanRobotCommand_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "techman_robot_msgs/srv/detail/techman_robot_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "techman_robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "techman_robot_msgs/srv/detail/techman_robot_command__functions.h"
// already included above
// #include "techman_robot_msgs/srv/detail/techman_robot_command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void techman_robot_msgs__srv__TechmanRobotCommand_Response__rosidl_typesupport_introspection_c__TechmanRobotCommand_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  techman_robot_msgs__srv__TechmanRobotCommand_Response__init(message_memory);
}

void techman_robot_msgs__srv__TechmanRobotCommand_Response__rosidl_typesupport_introspection_c__TechmanRobotCommand_Response_fini_function(void * message_memory)
{
  techman_robot_msgs__srv__TechmanRobotCommand_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember techman_robot_msgs__srv__TechmanRobotCommand_Response__rosidl_typesupport_introspection_c__TechmanRobotCommand_Response_message_member_array[1] = {
  {
    "is_success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(techman_robot_msgs__srv__TechmanRobotCommand_Response, is_success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers techman_robot_msgs__srv__TechmanRobotCommand_Response__rosidl_typesupport_introspection_c__TechmanRobotCommand_Response_message_members = {
  "techman_robot_msgs__srv",  // message namespace
  "TechmanRobotCommand_Response",  // message name
  1,  // number of fields
  sizeof(techman_robot_msgs__srv__TechmanRobotCommand_Response),
  false,  // has_any_key_member_
  techman_robot_msgs__srv__TechmanRobotCommand_Response__rosidl_typesupport_introspection_c__TechmanRobotCommand_Response_message_member_array,  // message members
  techman_robot_msgs__srv__TechmanRobotCommand_Response__rosidl_typesupport_introspection_c__TechmanRobotCommand_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  techman_robot_msgs__srv__TechmanRobotCommand_Response__rosidl_typesupport_introspection_c__TechmanRobotCommand_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t techman_robot_msgs__srv__TechmanRobotCommand_Response__rosidl_typesupport_introspection_c__TechmanRobotCommand_Response_message_type_support_handle = {
  0,
  &techman_robot_msgs__srv__TechmanRobotCommand_Response__rosidl_typesupport_introspection_c__TechmanRobotCommand_Response_message_members,
  get_message_typesupport_handle_function,
  &techman_robot_msgs__srv__TechmanRobotCommand_Response__get_type_hash,
  &techman_robot_msgs__srv__TechmanRobotCommand_Response__get_type_description,
  &techman_robot_msgs__srv__TechmanRobotCommand_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_techman_robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, techman_robot_msgs, srv, TechmanRobotCommand_Response)() {
  if (!techman_robot_msgs__srv__TechmanRobotCommand_Response__rosidl_typesupport_introspection_c__TechmanRobotCommand_Response_message_type_support_handle.typesupport_identifier) {
    techman_robot_msgs__srv__TechmanRobotCommand_Response__rosidl_typesupport_introspection_c__TechmanRobotCommand_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &techman_robot_msgs__srv__TechmanRobotCommand_Response__rosidl_typesupport_introspection_c__TechmanRobotCommand_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "techman_robot_msgs/srv/detail/techman_robot_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "techman_robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "techman_robot_msgs/srv/detail/techman_robot_command__functions.h"
// already included above
// #include "techman_robot_msgs/srv/detail/techman_robot_command__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "techman_robot_msgs/srv/techman_robot_command.h"
// Member `request`
// Member `response`
// already included above
// #include "techman_robot_msgs/srv/detail/techman_robot_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__TechmanRobotCommand_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  techman_robot_msgs__srv__TechmanRobotCommand_Event__init(message_memory);
}

void techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__TechmanRobotCommand_Event_fini_function(void * message_memory)
{
  techman_robot_msgs__srv__TechmanRobotCommand_Event__fini(message_memory);
}

size_t techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__size_function__TechmanRobotCommand_Event__request(
  const void * untyped_member)
{
  const techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence * member =
    (const techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__get_const_function__TechmanRobotCommand_Event__request(
  const void * untyped_member, size_t index)
{
  const techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence * member =
    (const techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__get_function__TechmanRobotCommand_Event__request(
  void * untyped_member, size_t index)
{
  techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence * member =
    (techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__fetch_function__TechmanRobotCommand_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const techman_robot_msgs__srv__TechmanRobotCommand_Request * item =
    ((const techman_robot_msgs__srv__TechmanRobotCommand_Request *)
    techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__get_const_function__TechmanRobotCommand_Event__request(untyped_member, index));
  techman_robot_msgs__srv__TechmanRobotCommand_Request * value =
    (techman_robot_msgs__srv__TechmanRobotCommand_Request *)(untyped_value);
  *value = *item;
}

void techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__assign_function__TechmanRobotCommand_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  techman_robot_msgs__srv__TechmanRobotCommand_Request * item =
    ((techman_robot_msgs__srv__TechmanRobotCommand_Request *)
    techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__get_function__TechmanRobotCommand_Event__request(untyped_member, index));
  const techman_robot_msgs__srv__TechmanRobotCommand_Request * value =
    (const techman_robot_msgs__srv__TechmanRobotCommand_Request *)(untyped_value);
  *item = *value;
}

bool techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__resize_function__TechmanRobotCommand_Event__request(
  void * untyped_member, size_t size)
{
  techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence * member =
    (techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence *)(untyped_member);
  techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence__fini(member);
  return techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence__init(member, size);
}

size_t techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__size_function__TechmanRobotCommand_Event__response(
  const void * untyped_member)
{
  const techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence * member =
    (const techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__get_const_function__TechmanRobotCommand_Event__response(
  const void * untyped_member, size_t index)
{
  const techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence * member =
    (const techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__get_function__TechmanRobotCommand_Event__response(
  void * untyped_member, size_t index)
{
  techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence * member =
    (techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__fetch_function__TechmanRobotCommand_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const techman_robot_msgs__srv__TechmanRobotCommand_Response * item =
    ((const techman_robot_msgs__srv__TechmanRobotCommand_Response *)
    techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__get_const_function__TechmanRobotCommand_Event__response(untyped_member, index));
  techman_robot_msgs__srv__TechmanRobotCommand_Response * value =
    (techman_robot_msgs__srv__TechmanRobotCommand_Response *)(untyped_value);
  *value = *item;
}

void techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__assign_function__TechmanRobotCommand_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  techman_robot_msgs__srv__TechmanRobotCommand_Response * item =
    ((techman_robot_msgs__srv__TechmanRobotCommand_Response *)
    techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__get_function__TechmanRobotCommand_Event__response(untyped_member, index));
  const techman_robot_msgs__srv__TechmanRobotCommand_Response * value =
    (const techman_robot_msgs__srv__TechmanRobotCommand_Response *)(untyped_value);
  *item = *value;
}

bool techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__resize_function__TechmanRobotCommand_Event__response(
  void * untyped_member, size_t size)
{
  techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence * member =
    (techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence *)(untyped_member);
  techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence__fini(member);
  return techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__TechmanRobotCommand_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(techman_robot_msgs__srv__TechmanRobotCommand_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(techman_robot_msgs__srv__TechmanRobotCommand_Event, request),  // bytes offset in struct
    NULL,  // default value
    techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__size_function__TechmanRobotCommand_Event__request,  // size() function pointer
    techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__get_const_function__TechmanRobotCommand_Event__request,  // get_const(index) function pointer
    techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__get_function__TechmanRobotCommand_Event__request,  // get(index) function pointer
    techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__fetch_function__TechmanRobotCommand_Event__request,  // fetch(index, &value) function pointer
    techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__assign_function__TechmanRobotCommand_Event__request,  // assign(index, value) function pointer
    techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__resize_function__TechmanRobotCommand_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(techman_robot_msgs__srv__TechmanRobotCommand_Event, response),  // bytes offset in struct
    NULL,  // default value
    techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__size_function__TechmanRobotCommand_Event__response,  // size() function pointer
    techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__get_const_function__TechmanRobotCommand_Event__response,  // get_const(index) function pointer
    techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__get_function__TechmanRobotCommand_Event__response,  // get(index) function pointer
    techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__fetch_function__TechmanRobotCommand_Event__response,  // fetch(index, &value) function pointer
    techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__assign_function__TechmanRobotCommand_Event__response,  // assign(index, value) function pointer
    techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__resize_function__TechmanRobotCommand_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__TechmanRobotCommand_Event_message_members = {
  "techman_robot_msgs__srv",  // message namespace
  "TechmanRobotCommand_Event",  // message name
  3,  // number of fields
  sizeof(techman_robot_msgs__srv__TechmanRobotCommand_Event),
  false,  // has_any_key_member_
  techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__TechmanRobotCommand_Event_message_member_array,  // message members
  techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__TechmanRobotCommand_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__TechmanRobotCommand_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__TechmanRobotCommand_Event_message_type_support_handle = {
  0,
  &techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__TechmanRobotCommand_Event_message_members,
  get_message_typesupport_handle_function,
  &techman_robot_msgs__srv__TechmanRobotCommand_Event__get_type_hash,
  &techman_robot_msgs__srv__TechmanRobotCommand_Event__get_type_description,
  &techman_robot_msgs__srv__TechmanRobotCommand_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_techman_robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, techman_robot_msgs, srv, TechmanRobotCommand_Event)() {
  techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__TechmanRobotCommand_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__TechmanRobotCommand_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, techman_robot_msgs, srv, TechmanRobotCommand_Request)();
  techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__TechmanRobotCommand_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, techman_robot_msgs, srv, TechmanRobotCommand_Response)();
  if (!techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__TechmanRobotCommand_Event_message_type_support_handle.typesupport_identifier) {
    techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__TechmanRobotCommand_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__TechmanRobotCommand_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "techman_robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "techman_robot_msgs/srv/detail/techman_robot_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers techman_robot_msgs__srv__detail__techman_robot_command__rosidl_typesupport_introspection_c__TechmanRobotCommand_service_members = {
  "techman_robot_msgs__srv",  // service namespace
  "TechmanRobotCommand",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // techman_robot_msgs__srv__detail__techman_robot_command__rosidl_typesupport_introspection_c__TechmanRobotCommand_Request_message_type_support_handle,
  NULL,  // response message
  // techman_robot_msgs__srv__detail__techman_robot_command__rosidl_typesupport_introspection_c__TechmanRobotCommand_Response_message_type_support_handle
  NULL  // event_message
  // techman_robot_msgs__srv__detail__techman_robot_command__rosidl_typesupport_introspection_c__TechmanRobotCommand_Response_message_type_support_handle
};


static rosidl_service_type_support_t techman_robot_msgs__srv__detail__techman_robot_command__rosidl_typesupport_introspection_c__TechmanRobotCommand_service_type_support_handle = {
  0,
  &techman_robot_msgs__srv__detail__techman_robot_command__rosidl_typesupport_introspection_c__TechmanRobotCommand_service_members,
  get_service_typesupport_handle_function,
  &techman_robot_msgs__srv__TechmanRobotCommand_Request__rosidl_typesupport_introspection_c__TechmanRobotCommand_Request_message_type_support_handle,
  &techman_robot_msgs__srv__TechmanRobotCommand_Response__rosidl_typesupport_introspection_c__TechmanRobotCommand_Response_message_type_support_handle,
  &techman_robot_msgs__srv__TechmanRobotCommand_Event__rosidl_typesupport_introspection_c__TechmanRobotCommand_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    techman_robot_msgs,
    srv,
    TechmanRobotCommand
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    techman_robot_msgs,
    srv,
    TechmanRobotCommand
  ),
  &techman_robot_msgs__srv__TechmanRobotCommand__get_type_hash,
  &techman_robot_msgs__srv__TechmanRobotCommand__get_type_description,
  &techman_robot_msgs__srv__TechmanRobotCommand__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, techman_robot_msgs, srv, TechmanRobotCommand_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, techman_robot_msgs, srv, TechmanRobotCommand_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, techman_robot_msgs, srv, TechmanRobotCommand_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_techman_robot_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, techman_robot_msgs, srv, TechmanRobotCommand)(void) {
  if (!techman_robot_msgs__srv__detail__techman_robot_command__rosidl_typesupport_introspection_c__TechmanRobotCommand_service_type_support_handle.typesupport_identifier) {
    techman_robot_msgs__srv__detail__techman_robot_command__rosidl_typesupport_introspection_c__TechmanRobotCommand_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)techman_robot_msgs__srv__detail__techman_robot_command__rosidl_typesupport_introspection_c__TechmanRobotCommand_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, techman_robot_msgs, srv, TechmanRobotCommand_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, techman_robot_msgs, srv, TechmanRobotCommand_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, techman_robot_msgs, srv, TechmanRobotCommand_Event)()->data;
  }

  return &techman_robot_msgs__srv__detail__techman_robot_command__rosidl_typesupport_introspection_c__TechmanRobotCommand_service_type_support_handle;
}
