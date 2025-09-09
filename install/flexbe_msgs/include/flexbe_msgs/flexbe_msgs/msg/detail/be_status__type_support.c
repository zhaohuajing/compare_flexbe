// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from flexbe_msgs:msg/BEStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "flexbe_msgs/msg/detail/be_status__rosidl_typesupport_introspection_c.h"
#include "flexbe_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "flexbe_msgs/msg/detail/be_status__functions.h"
#include "flexbe_msgs/msg/detail/be_status__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `args`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__BEStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flexbe_msgs__msg__BEStatus__init(message_memory);
}

void flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__BEStatus_fini_function(void * message_memory)
{
  flexbe_msgs__msg__BEStatus__fini(message_memory);
}

size_t flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__size_function__BEStatus__args(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__get_const_function__BEStatus__args(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__get_function__BEStatus__args(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__fetch_function__BEStatus__args(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__get_const_function__BEStatus__args(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__assign_function__BEStatus__args(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__get_function__BEStatus__args(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__resize_function__BEStatus__args(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__BEStatus_message_member_array[4] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__BEStatus, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "behavior_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__BEStatus, behavior_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__BEStatus, code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "args",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs__msg__BEStatus, args),  // bytes offset in struct
    NULL,  // default value
    flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__size_function__BEStatus__args,  // size() function pointer
    flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__get_const_function__BEStatus__args,  // get_const(index) function pointer
    flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__get_function__BEStatus__args,  // get(index) function pointer
    flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__fetch_function__BEStatus__args,  // fetch(index, &value) function pointer
    flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__assign_function__BEStatus__args,  // assign(index, value) function pointer
    flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__resize_function__BEStatus__args  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__BEStatus_message_members = {
  "flexbe_msgs__msg",  // message namespace
  "BEStatus",  // message name
  4,  // number of fields
  sizeof(flexbe_msgs__msg__BEStatus),
  flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__BEStatus_message_member_array,  // message members
  flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__BEStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__BEStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__BEStatus_message_type_support_handle = {
  0,
  &flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__BEStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flexbe_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexbe_msgs, msg, BEStatus)() {
  flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__BEStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__BEStatus_message_type_support_handle.typesupport_identifier) {
    flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__BEStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &flexbe_msgs__msg__BEStatus__rosidl_typesupport_introspection_c__BEStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
