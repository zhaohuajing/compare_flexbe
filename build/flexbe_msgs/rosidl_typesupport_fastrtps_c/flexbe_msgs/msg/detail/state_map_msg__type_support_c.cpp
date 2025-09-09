// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from flexbe_msgs:msg/StateMapMsg.idl
// generated code does not contain a copyright notice
#include "flexbe_msgs/msg/detail/state_map_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "flexbe_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "flexbe_msgs/msg/detail/state_map_msg__struct.h"
#include "flexbe_msgs/msg/detail/state_map_msg__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // state_ids
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // state_ids
#include "rosidl_runtime_c/string.h"  // state_paths
#include "rosidl_runtime_c/string_functions.h"  // state_paths

// forward declare type support functions


using _StateMapMsg__ros_msg_type = flexbe_msgs__msg__StateMapMsg;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flexbe_msgs
bool cdr_serialize_flexbe_msgs__msg__StateMapMsg(
  const flexbe_msgs__msg__StateMapMsg * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: behavior_id
  {
    cdr << ros_message->behavior_id;
  }

  // Field name: state_ids
  {
    size_t size = ros_message->state_ids.size;
    auto array_ptr = ros_message->state_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: state_paths
  {
    size_t size = ros_message->state_paths.size;
    auto array_ptr = ros_message->state_paths.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flexbe_msgs
bool cdr_deserialize_flexbe_msgs__msg__StateMapMsg(
  eprosima::fastcdr::Cdr & cdr,
  flexbe_msgs__msg__StateMapMsg * ros_message)
{
  // Field name: behavior_id
  {
    cdr >> ros_message->behavior_id;
  }

  // Field name: state_ids
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

    if (ros_message->state_ids.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->state_ids);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->state_ids, size)) {
      fprintf(stderr, "failed to create array for field 'state_ids'");
      return false;
    }
    auto array_ptr = ros_message->state_ids.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: state_paths
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

    if (ros_message->state_paths.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->state_paths);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->state_paths, size)) {
      fprintf(stderr, "failed to create array for field 'state_paths'");
      return false;
    }
    auto array_ptr = ros_message->state_paths.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'state_paths'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flexbe_msgs
size_t get_serialized_size_flexbe_msgs__msg__StateMapMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StateMapMsg__ros_msg_type * ros_message = static_cast<const _StateMapMsg__ros_msg_type *>(untyped_ros_message);
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

  // Field name: state_ids
  {
    size_t array_size = ros_message->state_ids.size;
    auto array_ptr = ros_message->state_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: state_paths
  {
    size_t array_size = ros_message->state_paths.size;
    auto array_ptr = ros_message->state_paths.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flexbe_msgs
size_t max_serialized_size_flexbe_msgs__msg__StateMapMsg(
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

  // Field name: state_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: state_paths
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = flexbe_msgs__msg__StateMapMsg;
    is_plain =
      (
      offsetof(DataType, state_paths) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flexbe_msgs
bool cdr_serialize_key_flexbe_msgs__msg__StateMapMsg(
  const flexbe_msgs__msg__StateMapMsg * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: behavior_id
  {
    cdr << ros_message->behavior_id;
  }

  // Field name: state_ids
  {
    size_t size = ros_message->state_ids.size;
    auto array_ptr = ros_message->state_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: state_paths
  {
    size_t size = ros_message->state_paths.size;
    auto array_ptr = ros_message->state_paths.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flexbe_msgs
size_t get_serialized_size_key_flexbe_msgs__msg__StateMapMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StateMapMsg__ros_msg_type * ros_message = static_cast<const _StateMapMsg__ros_msg_type *>(untyped_ros_message);
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

  // Field name: state_ids
  {
    size_t array_size = ros_message->state_ids.size;
    auto array_ptr = ros_message->state_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: state_paths
  {
    size_t array_size = ros_message->state_paths.size;
    auto array_ptr = ros_message->state_paths.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flexbe_msgs
size_t max_serialized_size_key_flexbe_msgs__msg__StateMapMsg(
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

  // Field name: state_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: state_paths
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = flexbe_msgs__msg__StateMapMsg;
    is_plain =
      (
      offsetof(DataType, state_paths) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _StateMapMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const flexbe_msgs__msg__StateMapMsg * ros_message = static_cast<const flexbe_msgs__msg__StateMapMsg *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_flexbe_msgs__msg__StateMapMsg(ros_message, cdr);
}

static bool _StateMapMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  flexbe_msgs__msg__StateMapMsg * ros_message = static_cast<flexbe_msgs__msg__StateMapMsg *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_flexbe_msgs__msg__StateMapMsg(cdr, ros_message);
}

static uint32_t _StateMapMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_flexbe_msgs__msg__StateMapMsg(
      untyped_ros_message, 0));
}

static size_t _StateMapMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_flexbe_msgs__msg__StateMapMsg(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_StateMapMsg = {
  "flexbe_msgs::msg",
  "StateMapMsg",
  _StateMapMsg__cdr_serialize,
  _StateMapMsg__cdr_deserialize,
  _StateMapMsg__get_serialized_size,
  _StateMapMsg__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _StateMapMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StateMapMsg,
  get_message_typesupport_handle_function,
  &flexbe_msgs__msg__StateMapMsg__get_type_hash,
  &flexbe_msgs__msg__StateMapMsg__get_type_description,
  &flexbe_msgs__msg__StateMapMsg__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, flexbe_msgs, msg, StateMapMsg)() {
  return &_StateMapMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
