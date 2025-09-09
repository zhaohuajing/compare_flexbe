// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from flexbe_msgs:srv/GetUserdata.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "flexbe_msgs/srv/detail/get_userdata__functions.h"
#include "flexbe_msgs/srv/detail/get_userdata__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace flexbe_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetUserdata_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) flexbe_msgs::srv::GetUserdata_Request(_init);
}

void GetUserdata_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<flexbe_msgs::srv::GetUserdata_Request *>(message_memory);
  typed_message->~GetUserdata_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetUserdata_Request_message_member_array[1] = {
  {
    "userdata_key",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::srv::GetUserdata_Request, userdata_key),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetUserdata_Request_message_members = {
  "flexbe_msgs::srv",  // message namespace
  "GetUserdata_Request",  // message name
  1,  // number of fields
  sizeof(flexbe_msgs::srv::GetUserdata_Request),
  false,  // has_any_key_member_
  GetUserdata_Request_message_member_array,  // message members
  GetUserdata_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetUserdata_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetUserdata_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetUserdata_Request_message_members,
  get_message_typesupport_handle_function,
  &flexbe_msgs__srv__GetUserdata_Request__get_type_hash,
  &flexbe_msgs__srv__GetUserdata_Request__get_type_description,
  &flexbe_msgs__srv__GetUserdata_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace flexbe_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<flexbe_msgs::srv::GetUserdata_Request>()
{
  return &::flexbe_msgs::srv::rosidl_typesupport_introspection_cpp::GetUserdata_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, flexbe_msgs, srv, GetUserdata_Request)() {
  return &::flexbe_msgs::srv::rosidl_typesupport_introspection_cpp::GetUserdata_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "flexbe_msgs/srv/detail/get_userdata__functions.h"
// already included above
// #include "flexbe_msgs/srv/detail/get_userdata__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace flexbe_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetUserdata_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) flexbe_msgs::srv::GetUserdata_Response(_init);
}

void GetUserdata_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<flexbe_msgs::srv::GetUserdata_Response *>(message_memory);
  typed_message->~GetUserdata_Response();
}

size_t size_function__GetUserdata_Response__userdata(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<flexbe_msgs::msg::UserdataInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetUserdata_Response__userdata(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<flexbe_msgs::msg::UserdataInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__GetUserdata_Response__userdata(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<flexbe_msgs::msg::UserdataInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetUserdata_Response__userdata(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const flexbe_msgs::msg::UserdataInfo *>(
    get_const_function__GetUserdata_Response__userdata(untyped_member, index));
  auto & value = *reinterpret_cast<flexbe_msgs::msg::UserdataInfo *>(untyped_value);
  value = item;
}

void assign_function__GetUserdata_Response__userdata(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<flexbe_msgs::msg::UserdataInfo *>(
    get_function__GetUserdata_Response__userdata(untyped_member, index));
  const auto & value = *reinterpret_cast<const flexbe_msgs::msg::UserdataInfo *>(untyped_value);
  item = value;
}

void resize_function__GetUserdata_Response__userdata(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<flexbe_msgs::msg::UserdataInfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetUserdata_Response_message_member_array[3] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::srv::GetUserdata_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::srv::GetUserdata_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "userdata",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<flexbe_msgs::msg::UserdataInfo>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::srv::GetUserdata_Response, userdata),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetUserdata_Response__userdata,  // size() function pointer
    get_const_function__GetUserdata_Response__userdata,  // get_const(index) function pointer
    get_function__GetUserdata_Response__userdata,  // get(index) function pointer
    fetch_function__GetUserdata_Response__userdata,  // fetch(index, &value) function pointer
    assign_function__GetUserdata_Response__userdata,  // assign(index, value) function pointer
    resize_function__GetUserdata_Response__userdata  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetUserdata_Response_message_members = {
  "flexbe_msgs::srv",  // message namespace
  "GetUserdata_Response",  // message name
  3,  // number of fields
  sizeof(flexbe_msgs::srv::GetUserdata_Response),
  false,  // has_any_key_member_
  GetUserdata_Response_message_member_array,  // message members
  GetUserdata_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetUserdata_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetUserdata_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetUserdata_Response_message_members,
  get_message_typesupport_handle_function,
  &flexbe_msgs__srv__GetUserdata_Response__get_type_hash,
  &flexbe_msgs__srv__GetUserdata_Response__get_type_description,
  &flexbe_msgs__srv__GetUserdata_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace flexbe_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<flexbe_msgs::srv::GetUserdata_Response>()
{
  return &::flexbe_msgs::srv::rosidl_typesupport_introspection_cpp::GetUserdata_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, flexbe_msgs, srv, GetUserdata_Response)() {
  return &::flexbe_msgs::srv::rosidl_typesupport_introspection_cpp::GetUserdata_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "flexbe_msgs/srv/detail/get_userdata__functions.h"
// already included above
// #include "flexbe_msgs/srv/detail/get_userdata__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace flexbe_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetUserdata_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) flexbe_msgs::srv::GetUserdata_Event(_init);
}

void GetUserdata_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<flexbe_msgs::srv::GetUserdata_Event *>(message_memory);
  typed_message->~GetUserdata_Event();
}

size_t size_function__GetUserdata_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<flexbe_msgs::srv::GetUserdata_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetUserdata_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<flexbe_msgs::srv::GetUserdata_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__GetUserdata_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<flexbe_msgs::srv::GetUserdata_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetUserdata_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const flexbe_msgs::srv::GetUserdata_Request *>(
    get_const_function__GetUserdata_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<flexbe_msgs::srv::GetUserdata_Request *>(untyped_value);
  value = item;
}

void assign_function__GetUserdata_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<flexbe_msgs::srv::GetUserdata_Request *>(
    get_function__GetUserdata_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const flexbe_msgs::srv::GetUserdata_Request *>(untyped_value);
  item = value;
}

void resize_function__GetUserdata_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<flexbe_msgs::srv::GetUserdata_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetUserdata_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<flexbe_msgs::srv::GetUserdata_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetUserdata_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<flexbe_msgs::srv::GetUserdata_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__GetUserdata_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<flexbe_msgs::srv::GetUserdata_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetUserdata_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const flexbe_msgs::srv::GetUserdata_Response *>(
    get_const_function__GetUserdata_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<flexbe_msgs::srv::GetUserdata_Response *>(untyped_value);
  value = item;
}

void assign_function__GetUserdata_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<flexbe_msgs::srv::GetUserdata_Response *>(
    get_function__GetUserdata_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const flexbe_msgs::srv::GetUserdata_Response *>(untyped_value);
  item = value;
}

void resize_function__GetUserdata_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<flexbe_msgs::srv::GetUserdata_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetUserdata_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::srv::GetUserdata_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<flexbe_msgs::srv::GetUserdata_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(flexbe_msgs::srv::GetUserdata_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetUserdata_Event__request,  // size() function pointer
    get_const_function__GetUserdata_Event__request,  // get_const(index) function pointer
    get_function__GetUserdata_Event__request,  // get(index) function pointer
    fetch_function__GetUserdata_Event__request,  // fetch(index, &value) function pointer
    assign_function__GetUserdata_Event__request,  // assign(index, value) function pointer
    resize_function__GetUserdata_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<flexbe_msgs::srv::GetUserdata_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(flexbe_msgs::srv::GetUserdata_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetUserdata_Event__response,  // size() function pointer
    get_const_function__GetUserdata_Event__response,  // get_const(index) function pointer
    get_function__GetUserdata_Event__response,  // get(index) function pointer
    fetch_function__GetUserdata_Event__response,  // fetch(index, &value) function pointer
    assign_function__GetUserdata_Event__response,  // assign(index, value) function pointer
    resize_function__GetUserdata_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetUserdata_Event_message_members = {
  "flexbe_msgs::srv",  // message namespace
  "GetUserdata_Event",  // message name
  3,  // number of fields
  sizeof(flexbe_msgs::srv::GetUserdata_Event),
  false,  // has_any_key_member_
  GetUserdata_Event_message_member_array,  // message members
  GetUserdata_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  GetUserdata_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetUserdata_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetUserdata_Event_message_members,
  get_message_typesupport_handle_function,
  &flexbe_msgs__srv__GetUserdata_Event__get_type_hash,
  &flexbe_msgs__srv__GetUserdata_Event__get_type_description,
  &flexbe_msgs__srv__GetUserdata_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace flexbe_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<flexbe_msgs::srv::GetUserdata_Event>()
{
  return &::flexbe_msgs::srv::rosidl_typesupport_introspection_cpp::GetUserdata_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, flexbe_msgs, srv, GetUserdata_Event)() {
  return &::flexbe_msgs::srv::rosidl_typesupport_introspection_cpp::GetUserdata_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "flexbe_msgs/srv/detail/get_userdata__functions.h"
// already included above
// #include "flexbe_msgs/srv/detail/get_userdata__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace flexbe_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetUserdata_service_members = {
  "flexbe_msgs::srv",  // service namespace
  "GetUserdata",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<flexbe_msgs::srv::GetUserdata>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t GetUserdata_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetUserdata_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<flexbe_msgs::srv::GetUserdata_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<flexbe_msgs::srv::GetUserdata_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<flexbe_msgs::srv::GetUserdata_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<flexbe_msgs::srv::GetUserdata>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<flexbe_msgs::srv::GetUserdata>,
  &flexbe_msgs__srv__GetUserdata__get_type_hash,
  &flexbe_msgs__srv__GetUserdata__get_type_description,
  &flexbe_msgs__srv__GetUserdata__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace flexbe_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<flexbe_msgs::srv::GetUserdata>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::flexbe_msgs::srv::rosidl_typesupport_introspection_cpp::GetUserdata_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::flexbe_msgs::srv::GetUserdata_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::flexbe_msgs::srv::GetUserdata_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::flexbe_msgs::srv::GetUserdata_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, flexbe_msgs, srv, GetUserdata)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<flexbe_msgs::srv::GetUserdata>();
}

#ifdef __cplusplus
}
#endif
