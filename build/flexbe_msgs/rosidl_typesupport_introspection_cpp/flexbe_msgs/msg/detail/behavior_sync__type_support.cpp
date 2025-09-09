// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from flexbe_msgs:msg/BehaviorSync.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "flexbe_msgs/msg/detail/behavior_sync__functions.h"
#include "flexbe_msgs/msg/detail/behavior_sync__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace flexbe_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void BehaviorSync_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) flexbe_msgs::msg::BehaviorSync(_init);
}

void BehaviorSync_fini_function(void * message_memory)
{
  auto typed_message = static_cast<flexbe_msgs::msg::BehaviorSync *>(message_memory);
  typed_message->~BehaviorSync();
}

size_t size_function__BehaviorSync__current_state_checksums(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BehaviorSync__current_state_checksums(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__BehaviorSync__current_state_checksums(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__BehaviorSync__current_state_checksums(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__BehaviorSync__current_state_checksums(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__BehaviorSync__current_state_checksums(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__BehaviorSync__current_state_checksums(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__BehaviorSync__current_state_checksums(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BehaviorSync_message_member_array[2] = {
  {
    "behavior_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::BehaviorSync, behavior_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current_state_checksums",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::BehaviorSync, current_state_checksums),  // bytes offset in struct
    nullptr,  // default value
    size_function__BehaviorSync__current_state_checksums,  // size() function pointer
    get_const_function__BehaviorSync__current_state_checksums,  // get_const(index) function pointer
    get_function__BehaviorSync__current_state_checksums,  // get(index) function pointer
    fetch_function__BehaviorSync__current_state_checksums,  // fetch(index, &value) function pointer
    assign_function__BehaviorSync__current_state_checksums,  // assign(index, value) function pointer
    resize_function__BehaviorSync__current_state_checksums  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BehaviorSync_message_members = {
  "flexbe_msgs::msg",  // message namespace
  "BehaviorSync",  // message name
  2,  // number of fields
  sizeof(flexbe_msgs::msg::BehaviorSync),
  false,  // has_any_key_member_
  BehaviorSync_message_member_array,  // message members
  BehaviorSync_init_function,  // function to initialize message memory (memory has to be allocated)
  BehaviorSync_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BehaviorSync_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BehaviorSync_message_members,
  get_message_typesupport_handle_function,
  &flexbe_msgs__msg__BehaviorSync__get_type_hash,
  &flexbe_msgs__msg__BehaviorSync__get_type_description,
  &flexbe_msgs__msg__BehaviorSync__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace flexbe_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<flexbe_msgs::msg::BehaviorSync>()
{
  return &::flexbe_msgs::msg::rosidl_typesupport_introspection_cpp::BehaviorSync_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, flexbe_msgs, msg, BehaviorSync)() {
  return &::flexbe_msgs::msg::rosidl_typesupport_introspection_cpp::BehaviorSync_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
