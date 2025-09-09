// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from flexbe_msgs:srv/GetUserdata.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "flexbe_msgs/srv/detail/get_userdata__rosidl_typesupport_introspection_c.h"
#include "flexbe_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "flexbe_msgs/srv/detail/get_userdata__functions.h"
#include "flexbe_msgs/srv/detail/get_userdata__struct.h"


// Include directives for member types
// Member `userdata_key`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void flexbe_msgs__srv__GetUserdata_Request__rosidl_typesupport_introspection_c__GetUserdata_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flexbe_msgs__srv__GetUserdata_Request__init(message_memory);
}

void flexbe_msgs__srv__GetUserdata_Request__rosidl_typesupport_introspection_c__GetUserdata_Request_fini_function(void * message_memory)
{
  flexbe_msgs__srv__GetUserdata_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember flexbe_msgs__srv__GetUserdata_Request__rosidl_typesupport_introspection_c__GetUserdata_Request_message_member_array[1] = {
  {
    "userdata_key",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__srv__GetUserdata_Request, userdata_key),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers flexbe_msgs__srv__GetUserdata_Request__rosidl_typesupport_introspection_c__GetUserdata_Request_message_members = {
  "flexbe_msgs__srv",  // message namespace
  "GetUserdata_Request",  // message name
  1,  // number of fields
  sizeof(flexbe_msgs__srv__GetUserdata_Request),
  flexbe_msgs__srv__GetUserdata_Request__rosidl_typesupport_introspection_c__GetUserdata_Request_message_member_array,  // message members
  flexbe_msgs__srv__GetUserdata_Request__rosidl_typesupport_introspection_c__GetUserdata_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  flexbe_msgs__srv__GetUserdata_Request__rosidl_typesupport_introspection_c__GetUserdata_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t flexbe_msgs__srv__GetUserdata_Request__rosidl_typesupport_introspection_c__GetUserdata_Request_message_type_support_handle = {
  0,
  &flexbe_msgs__srv__GetUserdata_Request__rosidl_typesupport_introspection_c__GetUserdata_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flexbe_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, srv, GetUserdata_Request)() {
  if (!flexbe_msgs__srv__GetUserdata_Request__rosidl_typesupport_introspection_c__GetUserdata_Request_message_type_support_handle.typesupport_identifier) {
    flexbe_msgs__srv__GetUserdata_Request__rosidl_typesupport_introspection_c__GetUserdata_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &flexbe_msgs__srv__GetUserdata_Request__rosidl_typesupport_introspection_c__GetUserdata_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "flexbe_msgs/srv/detail/get_userdata__rosidl_typesupport_introspection_c.h"
// already included above
// #include "flexbe_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "flexbe_msgs/srv/detail/get_userdata__functions.h"
// already included above
// #include "flexbe_msgs/srv/detail/get_userdata__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `userdata`
#include "flexbe_msgs/msg/userdata_info.h"
// Member `userdata`
#include "flexbe_msgs/msg/detail/userdata_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__GetUserdata_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flexbe_msgs__srv__GetUserdata_Response__init(message_memory);
}

void flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__GetUserdata_Response_fini_function(void * message_memory)
{
  flexbe_msgs__srv__GetUserdata_Response__fini(message_memory);
}

size_t flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__size_function__GetUserdata_Response__userdata(
  const void * untyped_member)
{
  const flexbe_msgs__msg__UserdataInfo__Sequence * member =
    (const flexbe_msgs__msg__UserdataInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__get_const_function__GetUserdata_Response__userdata(
  const void * untyped_member, size_t index)
{
  const flexbe_msgs__msg__UserdataInfo__Sequence * member =
    (const flexbe_msgs__msg__UserdataInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__get_function__GetUserdata_Response__userdata(
  void * untyped_member, size_t index)
{
  flexbe_msgs__msg__UserdataInfo__Sequence * member =
    (flexbe_msgs__msg__UserdataInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__fetch_function__GetUserdata_Response__userdata(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const flexbe_msgs__msg__UserdataInfo * item =
    ((const flexbe_msgs__msg__UserdataInfo *)
    flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__get_const_function__GetUserdata_Response__userdata(untyped_member, index));
  flexbe_msgs__msg__UserdataInfo * value =
    (flexbe_msgs__msg__UserdataInfo *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__assign_function__GetUserdata_Response__userdata(
  void * untyped_member, size_t index, const void * untyped_value)
{
  flexbe_msgs__msg__UserdataInfo * item =
    ((flexbe_msgs__msg__UserdataInfo *)
    flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__get_function__GetUserdata_Response__userdata(untyped_member, index));
  const flexbe_msgs__msg__UserdataInfo * value =
    (const flexbe_msgs__msg__UserdataInfo *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__resize_function__GetUserdata_Response__userdata(
  void * untyped_member, size_t size)
{
  flexbe_msgs__msg__UserdataInfo__Sequence * member =
    (flexbe_msgs__msg__UserdataInfo__Sequence *)(untyped_member);
  flexbe_msgs__msg__UserdataInfo__Sequence__fini(member);
  return flexbe_msgs__msg__UserdataInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__GetUserdata_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__srv__GetUserdata_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__srv__GetUserdata_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "userdata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__srv__GetUserdata_Response, userdata),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__size_function__GetUserdata_Response__userdata,  // size() function pointer
    flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__get_const_function__GetUserdata_Response__userdata,  // get_const(index) function pointer
    flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__get_function__GetUserdata_Response__userdata,  // get(index) function pointer
    flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__fetch_function__GetUserdata_Response__userdata,  // fetch(index, &value) function pointer
    flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__assign_function__GetUserdata_Response__userdata,  // assign(index, value) function pointer
    flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__resize_function__GetUserdata_Response__userdata  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__GetUserdata_Response_message_members = {
  "flexbe_msgs__srv",  // message namespace
  "GetUserdata_Response",  // message name
  3,  // number of fields
  sizeof(flexbe_msgs__srv__GetUserdata_Response),
  flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__GetUserdata_Response_message_member_array,  // message members
  flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__GetUserdata_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__GetUserdata_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__GetUserdata_Response_message_type_support_handle = {
  0,
  &flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__GetUserdata_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flexbe_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, srv, GetUserdata_Response)() {
  flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__GetUserdata_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, msg, UserdataInfo)();
  if (!flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__GetUserdata_Response_message_type_support_handle.typesupport_identifier) {
    flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__GetUserdata_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &flexbe_msgs__srv__GetUserdata_Response__rosidl_typesupport_introspection_c__GetUserdata_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "flexbe_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "flexbe_msgs/srv/detail/get_userdata__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers flexbe_msgs__srv__detail__get_userdata__rosidl_typesupport_introspection_c__GetUserdata_service_members = {
  "flexbe_msgs__srv",  // service namespace
  "GetUserdata",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // flexbe_msgs__srv__detail__get_userdata__rosidl_typesupport_introspection_c__GetUserdata_Request_message_type_support_handle,
  NULL  // response message
  // flexbe_msgs__srv__detail__get_userdata__rosidl_typesupport_introspection_c__GetUserdata_Response_message_type_support_handle
};

static rosidl_service_type_support_t flexbe_msgs__srv__detail__get_userdata__rosidl_typesupport_introspection_c__GetUserdata_service_type_support_handle = {
  0,
  &flexbe_msgs__srv__detail__get_userdata__rosidl_typesupport_introspection_c__GetUserdata_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, srv, GetUserdata_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, srv, GetUserdata_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flexbe_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, srv, GetUserdata)() {
  if (!flexbe_msgs__srv__detail__get_userdata__rosidl_typesupport_introspection_c__GetUserdata_service_type_support_handle.typesupport_identifier) {
    flexbe_msgs__srv__detail__get_userdata__rosidl_typesupport_introspection_c__GetUserdata_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)flexbe_msgs__srv__detail__get_userdata__rosidl_typesupport_introspection_c__GetUserdata_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, srv, GetUserdata_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, srv, GetUserdata_Response)()->data;
  }

  return &flexbe_msgs__srv__detail__get_userdata__rosidl_typesupport_introspection_c__GetUserdata_service_type_support_handle;
}
