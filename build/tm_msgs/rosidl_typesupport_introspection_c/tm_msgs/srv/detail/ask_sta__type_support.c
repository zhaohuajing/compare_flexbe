// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tm_msgs:srv/AskSta.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tm_msgs/srv/detail/ask_sta__rosidl_typesupport_introspection_c.h"
#include "tm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tm_msgs/srv/detail/ask_sta__functions.h"
#include "tm_msgs/srv/detail/ask_sta__struct.h"


// Include directives for member types
// Member `subcmd`
// Member `subdata`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tm_msgs__srv__AskSta_Request__rosidl_typesupport_introspection_c__AskSta_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tm_msgs__srv__AskSta_Request__init(message_memory);
}

void tm_msgs__srv__AskSta_Request__rosidl_typesupport_introspection_c__AskSta_Request_fini_function(void * message_memory)
{
  tm_msgs__srv__AskSta_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tm_msgs__srv__AskSta_Request__rosidl_typesupport_introspection_c__AskSta_Request_message_member_array[3] = {
  {
    "subcmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__AskSta_Request, subcmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "subdata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__AskSta_Request, subdata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wait_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__AskSta_Request, wait_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tm_msgs__srv__AskSta_Request__rosidl_typesupport_introspection_c__AskSta_Request_message_members = {
  "tm_msgs__srv",  // message namespace
  "AskSta_Request",  // message name
  3,  // number of fields
  sizeof(tm_msgs__srv__AskSta_Request),
  false,  // has_any_key_member_
  tm_msgs__srv__AskSta_Request__rosidl_typesupport_introspection_c__AskSta_Request_message_member_array,  // message members
  tm_msgs__srv__AskSta_Request__rosidl_typesupport_introspection_c__AskSta_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  tm_msgs__srv__AskSta_Request__rosidl_typesupport_introspection_c__AskSta_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tm_msgs__srv__AskSta_Request__rosidl_typesupport_introspection_c__AskSta_Request_message_type_support_handle = {
  0,
  &tm_msgs__srv__AskSta_Request__rosidl_typesupport_introspection_c__AskSta_Request_message_members,
  get_message_typesupport_handle_function,
  &tm_msgs__srv__AskSta_Request__get_type_hash,
  &tm_msgs__srv__AskSta_Request__get_type_description,
  &tm_msgs__srv__AskSta_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, AskSta_Request)() {
  if (!tm_msgs__srv__AskSta_Request__rosidl_typesupport_introspection_c__AskSta_Request_message_type_support_handle.typesupport_identifier) {
    tm_msgs__srv__AskSta_Request__rosidl_typesupport_introspection_c__AskSta_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tm_msgs__srv__AskSta_Request__rosidl_typesupport_introspection_c__AskSta_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tm_msgs/srv/detail/ask_sta__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tm_msgs/srv/detail/ask_sta__functions.h"
// already included above
// #include "tm_msgs/srv/detail/ask_sta__struct.h"


// Include directives for member types
// Member `subcmd`
// Member `subdata`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tm_msgs__srv__AskSta_Response__rosidl_typesupport_introspection_c__AskSta_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tm_msgs__srv__AskSta_Response__init(message_memory);
}

void tm_msgs__srv__AskSta_Response__rosidl_typesupport_introspection_c__AskSta_Response_fini_function(void * message_memory)
{
  tm_msgs__srv__AskSta_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tm_msgs__srv__AskSta_Response__rosidl_typesupport_introspection_c__AskSta_Response_message_member_array[3] = {
  {
    "ok",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__AskSta_Response, ok),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "subcmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__AskSta_Response, subcmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "subdata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__AskSta_Response, subdata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tm_msgs__srv__AskSta_Response__rosidl_typesupport_introspection_c__AskSta_Response_message_members = {
  "tm_msgs__srv",  // message namespace
  "AskSta_Response",  // message name
  3,  // number of fields
  sizeof(tm_msgs__srv__AskSta_Response),
  false,  // has_any_key_member_
  tm_msgs__srv__AskSta_Response__rosidl_typesupport_introspection_c__AskSta_Response_message_member_array,  // message members
  tm_msgs__srv__AskSta_Response__rosidl_typesupport_introspection_c__AskSta_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  tm_msgs__srv__AskSta_Response__rosidl_typesupport_introspection_c__AskSta_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tm_msgs__srv__AskSta_Response__rosidl_typesupport_introspection_c__AskSta_Response_message_type_support_handle = {
  0,
  &tm_msgs__srv__AskSta_Response__rosidl_typesupport_introspection_c__AskSta_Response_message_members,
  get_message_typesupport_handle_function,
  &tm_msgs__srv__AskSta_Response__get_type_hash,
  &tm_msgs__srv__AskSta_Response__get_type_description,
  &tm_msgs__srv__AskSta_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, AskSta_Response)() {
  if (!tm_msgs__srv__AskSta_Response__rosidl_typesupport_introspection_c__AskSta_Response_message_type_support_handle.typesupport_identifier) {
    tm_msgs__srv__AskSta_Response__rosidl_typesupport_introspection_c__AskSta_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tm_msgs__srv__AskSta_Response__rosidl_typesupport_introspection_c__AskSta_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tm_msgs/srv/detail/ask_sta__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tm_msgs/srv/detail/ask_sta__functions.h"
// already included above
// #include "tm_msgs/srv/detail/ask_sta__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "tm_msgs/srv/ask_sta.h"
// Member `request`
// Member `response`
// already included above
// #include "tm_msgs/srv/detail/ask_sta__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__AskSta_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tm_msgs__srv__AskSta_Event__init(message_memory);
}

void tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__AskSta_Event_fini_function(void * message_memory)
{
  tm_msgs__srv__AskSta_Event__fini(message_memory);
}

size_t tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__size_function__AskSta_Event__request(
  const void * untyped_member)
{
  const tm_msgs__srv__AskSta_Request__Sequence * member =
    (const tm_msgs__srv__AskSta_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__get_const_function__AskSta_Event__request(
  const void * untyped_member, size_t index)
{
  const tm_msgs__srv__AskSta_Request__Sequence * member =
    (const tm_msgs__srv__AskSta_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__get_function__AskSta_Event__request(
  void * untyped_member, size_t index)
{
  tm_msgs__srv__AskSta_Request__Sequence * member =
    (tm_msgs__srv__AskSta_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__fetch_function__AskSta_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tm_msgs__srv__AskSta_Request * item =
    ((const tm_msgs__srv__AskSta_Request *)
    tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__get_const_function__AskSta_Event__request(untyped_member, index));
  tm_msgs__srv__AskSta_Request * value =
    (tm_msgs__srv__AskSta_Request *)(untyped_value);
  *value = *item;
}

void tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__assign_function__AskSta_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tm_msgs__srv__AskSta_Request * item =
    ((tm_msgs__srv__AskSta_Request *)
    tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__get_function__AskSta_Event__request(untyped_member, index));
  const tm_msgs__srv__AskSta_Request * value =
    (const tm_msgs__srv__AskSta_Request *)(untyped_value);
  *item = *value;
}

bool tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__resize_function__AskSta_Event__request(
  void * untyped_member, size_t size)
{
  tm_msgs__srv__AskSta_Request__Sequence * member =
    (tm_msgs__srv__AskSta_Request__Sequence *)(untyped_member);
  tm_msgs__srv__AskSta_Request__Sequence__fini(member);
  return tm_msgs__srv__AskSta_Request__Sequence__init(member, size);
}

size_t tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__size_function__AskSta_Event__response(
  const void * untyped_member)
{
  const tm_msgs__srv__AskSta_Response__Sequence * member =
    (const tm_msgs__srv__AskSta_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__get_const_function__AskSta_Event__response(
  const void * untyped_member, size_t index)
{
  const tm_msgs__srv__AskSta_Response__Sequence * member =
    (const tm_msgs__srv__AskSta_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__get_function__AskSta_Event__response(
  void * untyped_member, size_t index)
{
  tm_msgs__srv__AskSta_Response__Sequence * member =
    (tm_msgs__srv__AskSta_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__fetch_function__AskSta_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tm_msgs__srv__AskSta_Response * item =
    ((const tm_msgs__srv__AskSta_Response *)
    tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__get_const_function__AskSta_Event__response(untyped_member, index));
  tm_msgs__srv__AskSta_Response * value =
    (tm_msgs__srv__AskSta_Response *)(untyped_value);
  *value = *item;
}

void tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__assign_function__AskSta_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tm_msgs__srv__AskSta_Response * item =
    ((tm_msgs__srv__AskSta_Response *)
    tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__get_function__AskSta_Event__response(untyped_member, index));
  const tm_msgs__srv__AskSta_Response * value =
    (const tm_msgs__srv__AskSta_Response *)(untyped_value);
  *item = *value;
}

bool tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__resize_function__AskSta_Event__response(
  void * untyped_member, size_t size)
{
  tm_msgs__srv__AskSta_Response__Sequence * member =
    (tm_msgs__srv__AskSta_Response__Sequence *)(untyped_member);
  tm_msgs__srv__AskSta_Response__Sequence__fini(member);
  return tm_msgs__srv__AskSta_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__AskSta_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__AskSta_Event, info),  // bytes offset in struct
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
    offsetof(tm_msgs__srv__AskSta_Event, request),  // bytes offset in struct
    NULL,  // default value
    tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__size_function__AskSta_Event__request,  // size() function pointer
    tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__get_const_function__AskSta_Event__request,  // get_const(index) function pointer
    tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__get_function__AskSta_Event__request,  // get(index) function pointer
    tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__fetch_function__AskSta_Event__request,  // fetch(index, &value) function pointer
    tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__assign_function__AskSta_Event__request,  // assign(index, value) function pointer
    tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__resize_function__AskSta_Event__request  // resize(index) function pointer
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
    offsetof(tm_msgs__srv__AskSta_Event, response),  // bytes offset in struct
    NULL,  // default value
    tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__size_function__AskSta_Event__response,  // size() function pointer
    tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__get_const_function__AskSta_Event__response,  // get_const(index) function pointer
    tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__get_function__AskSta_Event__response,  // get(index) function pointer
    tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__fetch_function__AskSta_Event__response,  // fetch(index, &value) function pointer
    tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__assign_function__AskSta_Event__response,  // assign(index, value) function pointer
    tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__resize_function__AskSta_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__AskSta_Event_message_members = {
  "tm_msgs__srv",  // message namespace
  "AskSta_Event",  // message name
  3,  // number of fields
  sizeof(tm_msgs__srv__AskSta_Event),
  false,  // has_any_key_member_
  tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__AskSta_Event_message_member_array,  // message members
  tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__AskSta_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__AskSta_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__AskSta_Event_message_type_support_handle = {
  0,
  &tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__AskSta_Event_message_members,
  get_message_typesupport_handle_function,
  &tm_msgs__srv__AskSta_Event__get_type_hash,
  &tm_msgs__srv__AskSta_Event__get_type_description,
  &tm_msgs__srv__AskSta_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, AskSta_Event)() {
  tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__AskSta_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__AskSta_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, AskSta_Request)();
  tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__AskSta_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, AskSta_Response)();
  if (!tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__AskSta_Event_message_type_support_handle.typesupport_identifier) {
    tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__AskSta_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__AskSta_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tm_msgs/srv/detail/ask_sta__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tm_msgs__srv__detail__ask_sta__rosidl_typesupport_introspection_c__AskSta_service_members = {
  "tm_msgs__srv",  // service namespace
  "AskSta",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // tm_msgs__srv__detail__ask_sta__rosidl_typesupport_introspection_c__AskSta_Request_message_type_support_handle,
  NULL,  // response message
  // tm_msgs__srv__detail__ask_sta__rosidl_typesupport_introspection_c__AskSta_Response_message_type_support_handle
  NULL  // event_message
  // tm_msgs__srv__detail__ask_sta__rosidl_typesupport_introspection_c__AskSta_Response_message_type_support_handle
};


static rosidl_service_type_support_t tm_msgs__srv__detail__ask_sta__rosidl_typesupport_introspection_c__AskSta_service_type_support_handle = {
  0,
  &tm_msgs__srv__detail__ask_sta__rosidl_typesupport_introspection_c__AskSta_service_members,
  get_service_typesupport_handle_function,
  &tm_msgs__srv__AskSta_Request__rosidl_typesupport_introspection_c__AskSta_Request_message_type_support_handle,
  &tm_msgs__srv__AskSta_Response__rosidl_typesupport_introspection_c__AskSta_Response_message_type_support_handle,
  &tm_msgs__srv__AskSta_Event__rosidl_typesupport_introspection_c__AskSta_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    tm_msgs,
    srv,
    AskSta
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    tm_msgs,
    srv,
    AskSta
  ),
  &tm_msgs__srv__AskSta__get_type_hash,
  &tm_msgs__srv__AskSta__get_type_description,
  &tm_msgs__srv__AskSta__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, AskSta_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, AskSta_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, AskSta_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, AskSta)(void) {
  if (!tm_msgs__srv__detail__ask_sta__rosidl_typesupport_introspection_c__AskSta_service_type_support_handle.typesupport_identifier) {
    tm_msgs__srv__detail__ask_sta__rosidl_typesupport_introspection_c__AskSta_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tm_msgs__srv__detail__ask_sta__rosidl_typesupport_introspection_c__AskSta_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, AskSta_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, AskSta_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, AskSta_Event)()->data;
  }

  return &tm_msgs__srv__detail__ask_sta__rosidl_typesupport_introspection_c__AskSta_service_type_support_handle;
}
