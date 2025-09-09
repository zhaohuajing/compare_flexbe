// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from flexbe_msgs:msg/StateMapMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "flexbe_msgs/msg/detail/state_map_msg__rosidl_typesupport_introspection_c.h"
#include "flexbe_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "flexbe_msgs/msg/detail/state_map_msg__functions.h"
#include "flexbe_msgs/msg/detail/state_map_msg__struct.h"


// Include directives for member types
// Member `state_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `state_paths`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__StateMapMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flexbe_msgs__msg__StateMapMsg__init(message_memory);
}

void flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__StateMapMsg_fini_function(void * message_memory)
{
  flexbe_msgs__msg__StateMapMsg__fini(message_memory);
}

size_t flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__size_function__StateMapMsg__state_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__get_const_function__StateMapMsg__state_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__get_function__StateMapMsg__state_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__fetch_function__StateMapMsg__state_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__get_const_function__StateMapMsg__state_ids(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__assign_function__StateMapMsg__state_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__get_function__StateMapMsg__state_ids(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__resize_function__StateMapMsg__state_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__size_function__StateMapMsg__state_paths(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__get_const_function__StateMapMsg__state_paths(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__get_function__StateMapMsg__state_paths(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__fetch_function__StateMapMsg__state_paths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__get_const_function__StateMapMsg__state_paths(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__assign_function__StateMapMsg__state_paths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__get_function__StateMapMsg__state_paths(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__resize_function__StateMapMsg__state_paths(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__StateMapMsg_message_member_array[3] = {
  {
    "behavior_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__StateMapMsg, behavior_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__StateMapMsg, state_ids),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__size_function__StateMapMsg__state_ids,  // size() function pointer
    flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__get_const_function__StateMapMsg__state_ids,  // get_const(index) function pointer
    flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__get_function__StateMapMsg__state_ids,  // get(index) function pointer
    flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__fetch_function__StateMapMsg__state_ids,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__assign_function__StateMapMsg__state_ids,  // assign(index, value) function pointer
    flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__resize_function__StateMapMsg__state_ids  // resize(index) function pointer
  },
  {
    "state_paths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__StateMapMsg, state_paths),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__size_function__StateMapMsg__state_paths,  // size() function pointer
    flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__get_const_function__StateMapMsg__state_paths,  // get_const(index) function pointer
    flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__get_function__StateMapMsg__state_paths,  // get(index) function pointer
    flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__fetch_function__StateMapMsg__state_paths,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__assign_function__StateMapMsg__state_paths,  // assign(index, value) function pointer
    flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__resize_function__StateMapMsg__state_paths  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__StateMapMsg_message_members = {
  "flexbe_msgs__msg",  // message namespace
  "StateMapMsg",  // message name
  3,  // number of fields
  sizeof(flexbe_msgs__msg__StateMapMsg),
  false,  // has_any_key_member_
  flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__StateMapMsg_message_member_array,  // message members
  flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__StateMapMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__StateMapMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__StateMapMsg_message_type_support_handle = {
  0,
  &flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__StateMapMsg_message_members,
  get_message_typesupport_handle_function,
  &flexbe_msgs__msg__StateMapMsg__get_type_hash,
  &flexbe_msgs__msg__StateMapMsg__get_type_description,
  &flexbe_msgs__msg__StateMapMsg__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flexbe_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, msg, StateMapMsg)() {
  if (!flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__StateMapMsg_message_type_support_handle.typesupport_identifier) {
    flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__StateMapMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &flexbe_msgs__msg__StateMapMsg__rosidl_typesupport_introspection_c__StateMapMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
