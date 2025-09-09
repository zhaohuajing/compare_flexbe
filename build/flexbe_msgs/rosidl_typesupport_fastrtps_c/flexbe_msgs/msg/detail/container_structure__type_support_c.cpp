// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from flexbe_msgs:msg/ContainerStructure.idl
// generated code does not contain a copyright notice
#include "flexbe_msgs/msg/detail/container_structure__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "flexbe_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "flexbe_msgs/msg/detail/container_structure__struct.h"
#include "flexbe_msgs/msg/detail/container_structure__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "flexbe_msgs/msg/detail/container__functions.h"  // containers

// forward declare type support functions

bool cdr_serialize_flexbe_msgs__msg__Container(
  const flexbe_msgs__msg__Container * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_flexbe_msgs__msg__Container(
  eprosima::fastcdr::Cdr & cdr,
  flexbe_msgs__msg__Container * ros_message);

size_t get_serialized_size_flexbe_msgs__msg__Container(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_flexbe_msgs__msg__Container(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_flexbe_msgs__msg__Container(
  const flexbe_msgs__msg__Container * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_flexbe_msgs__msg__Container(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_flexbe_msgs__msg__Container(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, flexbe_msgs, msg, Container)();


using _ContainerStructure__ros_msg_type = flexbe_msgs__msg__ContainerStructure;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flexbe_msgs
bool cdr_serialize_flexbe_msgs__msg__ContainerStructure(
  const flexbe_msgs__msg__ContainerStructure * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: behavior_id
  {
    cdr << ros_message->behavior_id;
  }

  // Field name: containers
  {
    size_t size = ros_message->containers.size;
    auto array_ptr = ros_message->containers.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_flexbe_msgs__msg__Container(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flexbe_msgs
bool cdr_deserialize_flexbe_msgs__msg__ContainerStructure(
  eprosima::fastcdr::Cdr & cdr,
  flexbe_msgs__msg__ContainerStructure * ros_message)
{
  // Field name: behavior_id
  {
    cdr >> ros_message->behavior_id;
  }

  // Field name: containers
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->containers.data) {
      flexbe_msgs__msg__Container__Sequence__fini(&ros_message->containers);
    }
    if (!flexbe_msgs__msg__Container__Sequence__init(&ros_message->containers, size)) {
      fprintf(stderr, "failed to create array for field 'containers'");
      return false;
    }
    auto array_ptr = ros_message->containers.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_flexbe_msgs__msg__Container(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flexbe_msgs
size_t get_serialized_size_flexbe_msgs__msg__ContainerStructure(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ContainerStructure__ros_msg_type * ros_message = static_cast<const _ContainerStructure__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: behavior_id
  {
    size_t item_size = sizeof(ros_message->behavior_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: containers
  {
    size_t array_size = ros_message->containers.size;
    auto array_ptr = ros_message->containers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_flexbe_msgs__msg__Container(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flexbe_msgs
size_t max_serialized_size_flexbe_msgs__msg__ContainerStructure(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: behavior_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: containers
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_flexbe_msgs__msg__Container(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = flexbe_msgs__msg__ContainerStructure;
    is_plain =
      (
      offsetof(DataType, containers) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flexbe_msgs
bool cdr_serialize_key_flexbe_msgs__msg__ContainerStructure(
  const flexbe_msgs__msg__ContainerStructure * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: behavior_id
  {
    cdr << ros_message->behavior_id;
  }

  // Field name: containers
  {
    size_t size = ros_message->containers.size;
    auto array_ptr = ros_message->containers.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_flexbe_msgs__msg__Container(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flexbe_msgs
size_t get_serialized_size_key_flexbe_msgs__msg__ContainerStructure(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ContainerStructure__ros_msg_type * ros_message = static_cast<const _ContainerStructure__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: behavior_id
  {
    size_t item_size = sizeof(ros_message->behavior_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: containers
  {
    size_t array_size = ros_message->containers.size;
    auto array_ptr = ros_message->containers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_flexbe_msgs__msg__Container(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flexbe_msgs
size_t max_serialized_size_key_flexbe_msgs__msg__ContainerStructure(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: behavior_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: containers
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_flexbe_msgs__msg__Container(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = flexbe_msgs__msg__ContainerStructure;
    is_plain =
      (
      offsetof(DataType, containers) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ContainerStructure__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const flexbe_msgs__msg__ContainerStructure * ros_message = static_cast<const flexbe_msgs__msg__ContainerStructure *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_flexbe_msgs__msg__ContainerStructure(ros_message, cdr);
}

static bool _ContainerStructure__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  flexbe_msgs__msg__ContainerStructure * ros_message = static_cast<flexbe_msgs__msg__ContainerStructure *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_flexbe_msgs__msg__ContainerStructure(cdr, ros_message);
}

static uint32_t _ContainerStructure__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_flexbe_msgs__msg__ContainerStructure(
      untyped_ros_message, 0));
}

static size_t _ContainerStructure__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_flexbe_msgs__msg__ContainerStructure(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ContainerStructure = {
  "flexbe_msgs::msg",
  "ContainerStructure",
  _ContainerStructure__cdr_serialize,
  _ContainerStructure__cdr_deserialize,
  _ContainerStructure__get_serialized_size,
  _ContainerStructure__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ContainerStructure__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ContainerStructure,
  get_message_typesupport_handle_function,
  &flexbe_msgs__msg__ContainerStructure__get_type_hash,
  &flexbe_msgs__msg__ContainerStructure__get_type_description,
  &flexbe_msgs__msg__ContainerStructure__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, flexbe_msgs, msg, ContainerStructure)() {
  return &_ContainerStructure__type_support;
}

#if defined(__cplusplus)
}
#endif
