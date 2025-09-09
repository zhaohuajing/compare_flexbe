// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from compare_flexbe_utilities:srv/VoxelGridFilter.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "compare_flexbe_utilities/srv/detail/voxel_grid_filter__functions.h"
#include "compare_flexbe_utilities/srv/detail/voxel_grid_filter__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace compare_flexbe_utilities
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void VoxelGridFilter_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) compare_flexbe_utilities::srv::VoxelGridFilter_Request(_init);
}

void VoxelGridFilter_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<compare_flexbe_utilities::srv::VoxelGridFilter_Request *>(message_memory);
  typed_message->~VoxelGridFilter_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VoxelGridFilter_Request_message_member_array[1] = {
  {
    "input",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::PointCloud2>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(compare_flexbe_utilities::srv::VoxelGridFilter_Request, input),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VoxelGridFilter_Request_message_members = {
  "compare_flexbe_utilities::srv",  // message namespace
  "VoxelGridFilter_Request",  // message name
  1,  // number of fields
  sizeof(compare_flexbe_utilities::srv::VoxelGridFilter_Request),
  false,  // has_any_key_member_
  VoxelGridFilter_Request_message_member_array,  // message members
  VoxelGridFilter_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  VoxelGridFilter_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VoxelGridFilter_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VoxelGridFilter_Request_message_members,
  get_message_typesupport_handle_function,
  &compare_flexbe_utilities__srv__VoxelGridFilter_Request__get_type_hash,
  &compare_flexbe_utilities__srv__VoxelGridFilter_Request__get_type_description,
  &compare_flexbe_utilities__srv__VoxelGridFilter_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace compare_flexbe_utilities


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<compare_flexbe_utilities::srv::VoxelGridFilter_Request>()
{
  return &::compare_flexbe_utilities::srv::rosidl_typesupport_introspection_cpp::VoxelGridFilter_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, compare_flexbe_utilities, srv, VoxelGridFilter_Request)() {
  return &::compare_flexbe_utilities::srv::rosidl_typesupport_introspection_cpp::VoxelGridFilter_Request_message_type_support_handle;
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
// #include "compare_flexbe_utilities/srv/detail/voxel_grid_filter__functions.h"
// already included above
// #include "compare_flexbe_utilities/srv/detail/voxel_grid_filter__struct.hpp"
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

namespace compare_flexbe_utilities
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void VoxelGridFilter_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) compare_flexbe_utilities::srv::VoxelGridFilter_Response(_init);
}

void VoxelGridFilter_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<compare_flexbe_utilities::srv::VoxelGridFilter_Response *>(message_memory);
  typed_message->~VoxelGridFilter_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VoxelGridFilter_Response_message_member_array[1] = {
  {
    "filtered",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::PointCloud2>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(compare_flexbe_utilities::srv::VoxelGridFilter_Response, filtered),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VoxelGridFilter_Response_message_members = {
  "compare_flexbe_utilities::srv",  // message namespace
  "VoxelGridFilter_Response",  // message name
  1,  // number of fields
  sizeof(compare_flexbe_utilities::srv::VoxelGridFilter_Response),
  false,  // has_any_key_member_
  VoxelGridFilter_Response_message_member_array,  // message members
  VoxelGridFilter_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  VoxelGridFilter_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VoxelGridFilter_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VoxelGridFilter_Response_message_members,
  get_message_typesupport_handle_function,
  &compare_flexbe_utilities__srv__VoxelGridFilter_Response__get_type_hash,
  &compare_flexbe_utilities__srv__VoxelGridFilter_Response__get_type_description,
  &compare_flexbe_utilities__srv__VoxelGridFilter_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace compare_flexbe_utilities


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<compare_flexbe_utilities::srv::VoxelGridFilter_Response>()
{
  return &::compare_flexbe_utilities::srv::rosidl_typesupport_introspection_cpp::VoxelGridFilter_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, compare_flexbe_utilities, srv, VoxelGridFilter_Response)() {
  return &::compare_flexbe_utilities::srv::rosidl_typesupport_introspection_cpp::VoxelGridFilter_Response_message_type_support_handle;
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
// #include "compare_flexbe_utilities/srv/detail/voxel_grid_filter__functions.h"
// already included above
// #include "compare_flexbe_utilities/srv/detail/voxel_grid_filter__struct.hpp"
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

namespace compare_flexbe_utilities
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void VoxelGridFilter_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) compare_flexbe_utilities::srv::VoxelGridFilter_Event(_init);
}

void VoxelGridFilter_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<compare_flexbe_utilities::srv::VoxelGridFilter_Event *>(message_memory);
  typed_message->~VoxelGridFilter_Event();
}

size_t size_function__VoxelGridFilter_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<compare_flexbe_utilities::srv::VoxelGridFilter_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VoxelGridFilter_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<compare_flexbe_utilities::srv::VoxelGridFilter_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__VoxelGridFilter_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<compare_flexbe_utilities::srv::VoxelGridFilter_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__VoxelGridFilter_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const compare_flexbe_utilities::srv::VoxelGridFilter_Request *>(
    get_const_function__VoxelGridFilter_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<compare_flexbe_utilities::srv::VoxelGridFilter_Request *>(untyped_value);
  value = item;
}

void assign_function__VoxelGridFilter_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<compare_flexbe_utilities::srv::VoxelGridFilter_Request *>(
    get_function__VoxelGridFilter_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const compare_flexbe_utilities::srv::VoxelGridFilter_Request *>(untyped_value);
  item = value;
}

void resize_function__VoxelGridFilter_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<compare_flexbe_utilities::srv::VoxelGridFilter_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__VoxelGridFilter_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<compare_flexbe_utilities::srv::VoxelGridFilter_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VoxelGridFilter_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<compare_flexbe_utilities::srv::VoxelGridFilter_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__VoxelGridFilter_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<compare_flexbe_utilities::srv::VoxelGridFilter_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__VoxelGridFilter_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const compare_flexbe_utilities::srv::VoxelGridFilter_Response *>(
    get_const_function__VoxelGridFilter_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<compare_flexbe_utilities::srv::VoxelGridFilter_Response *>(untyped_value);
  value = item;
}

void assign_function__VoxelGridFilter_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<compare_flexbe_utilities::srv::VoxelGridFilter_Response *>(
    get_function__VoxelGridFilter_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const compare_flexbe_utilities::srv::VoxelGridFilter_Response *>(untyped_value);
  item = value;
}

void resize_function__VoxelGridFilter_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<compare_flexbe_utilities::srv::VoxelGridFilter_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VoxelGridFilter_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(compare_flexbe_utilities::srv::VoxelGridFilter_Event, info),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<compare_flexbe_utilities::srv::VoxelGridFilter_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(compare_flexbe_utilities::srv::VoxelGridFilter_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__VoxelGridFilter_Event__request,  // size() function pointer
    get_const_function__VoxelGridFilter_Event__request,  // get_const(index) function pointer
    get_function__VoxelGridFilter_Event__request,  // get(index) function pointer
    fetch_function__VoxelGridFilter_Event__request,  // fetch(index, &value) function pointer
    assign_function__VoxelGridFilter_Event__request,  // assign(index, value) function pointer
    resize_function__VoxelGridFilter_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<compare_flexbe_utilities::srv::VoxelGridFilter_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(compare_flexbe_utilities::srv::VoxelGridFilter_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__VoxelGridFilter_Event__response,  // size() function pointer
    get_const_function__VoxelGridFilter_Event__response,  // get_const(index) function pointer
    get_function__VoxelGridFilter_Event__response,  // get(index) function pointer
    fetch_function__VoxelGridFilter_Event__response,  // fetch(index, &value) function pointer
    assign_function__VoxelGridFilter_Event__response,  // assign(index, value) function pointer
    resize_function__VoxelGridFilter_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VoxelGridFilter_Event_message_members = {
  "compare_flexbe_utilities::srv",  // message namespace
  "VoxelGridFilter_Event",  // message name
  3,  // number of fields
  sizeof(compare_flexbe_utilities::srv::VoxelGridFilter_Event),
  false,  // has_any_key_member_
  VoxelGridFilter_Event_message_member_array,  // message members
  VoxelGridFilter_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  VoxelGridFilter_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VoxelGridFilter_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VoxelGridFilter_Event_message_members,
  get_message_typesupport_handle_function,
  &compare_flexbe_utilities__srv__VoxelGridFilter_Event__get_type_hash,
  &compare_flexbe_utilities__srv__VoxelGridFilter_Event__get_type_description,
  &compare_flexbe_utilities__srv__VoxelGridFilter_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace compare_flexbe_utilities


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<compare_flexbe_utilities::srv::VoxelGridFilter_Event>()
{
  return &::compare_flexbe_utilities::srv::rosidl_typesupport_introspection_cpp::VoxelGridFilter_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, compare_flexbe_utilities, srv, VoxelGridFilter_Event)() {
  return &::compare_flexbe_utilities::srv::rosidl_typesupport_introspection_cpp::VoxelGridFilter_Event_message_type_support_handle;
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
// #include "compare_flexbe_utilities/srv/detail/voxel_grid_filter__functions.h"
// already included above
// #include "compare_flexbe_utilities/srv/detail/voxel_grid_filter__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace compare_flexbe_utilities
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers VoxelGridFilter_service_members = {
  "compare_flexbe_utilities::srv",  // service namespace
  "VoxelGridFilter",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<compare_flexbe_utilities::srv::VoxelGridFilter>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t VoxelGridFilter_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VoxelGridFilter_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<compare_flexbe_utilities::srv::VoxelGridFilter_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<compare_flexbe_utilities::srv::VoxelGridFilter_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<compare_flexbe_utilities::srv::VoxelGridFilter_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<compare_flexbe_utilities::srv::VoxelGridFilter>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<compare_flexbe_utilities::srv::VoxelGridFilter>,
  &compare_flexbe_utilities__srv__VoxelGridFilter__get_type_hash,
  &compare_flexbe_utilities__srv__VoxelGridFilter__get_type_description,
  &compare_flexbe_utilities__srv__VoxelGridFilter__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace compare_flexbe_utilities


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<compare_flexbe_utilities::srv::VoxelGridFilter>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::compare_flexbe_utilities::srv::rosidl_typesupport_introspection_cpp::VoxelGridFilter_service_type_support_handle;
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
        ::compare_flexbe_utilities::srv::VoxelGridFilter_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::compare_flexbe_utilities::srv::VoxelGridFilter_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::compare_flexbe_utilities::srv::VoxelGridFilter_Event
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, compare_flexbe_utilities, srv, VoxelGridFilter)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<compare_flexbe_utilities::srv::VoxelGridFilter>();
}

#ifdef __cplusplus
}
#endif
