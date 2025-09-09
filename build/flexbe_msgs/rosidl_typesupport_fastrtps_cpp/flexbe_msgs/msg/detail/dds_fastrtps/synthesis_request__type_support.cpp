// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from flexbe_msgs:msg/SynthesisRequest.idl
// generated code does not contain a copyright notice
#include "flexbe_msgs/msg/detail/synthesis_request__rosidl_typesupport_fastrtps_cpp.hpp"
#include "flexbe_msgs/msg/detail/synthesis_request__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace flexbe_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flexbe_msgs
cdr_serialize(
  const flexbe_msgs::msg::SynthesisRequest & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: name
  cdr << ros_message.name;
  // Member: system
  cdr << ros_message.system;
  // Member: goal
  cdr << ros_message.goal;
  // Member: initial_condition
  cdr << ros_message.initial_condition;
  // Member: sm_outcomes
  {
    cdr << ros_message.sm_outcomes;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flexbe_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  flexbe_msgs::msg::SynthesisRequest & ros_message)
{
  // Member: name
  cdr >> ros_message.name;

  // Member: system
  cdr >> ros_message.system;

  // Member: goal
  cdr >> ros_message.goal;

  // Member: initial_condition
  cdr >> ros_message.initial_condition;

  // Member: sm_outcomes
  {
    cdr >> ros_message.sm_outcomes;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flexbe_msgs
get_serialized_size(
  const flexbe_msgs::msg::SynthesisRequest & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);
  // Member: system
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.system.size() + 1);
  // Member: goal
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.goal.size() + 1);
  // Member: initial_condition
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.initial_condition.size() + 1);
  // Member: sm_outcomes
  {
    size_t array_size = ros_message.sm_outcomes.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.sm_outcomes[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flexbe_msgs
max_serialized_size_SynthesisRequest(
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


  // Member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: system
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: goal
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: initial_condition
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: sm_outcomes
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
    using DataType = flexbe_msgs::msg::SynthesisRequest;
    is_plain =
      (
      offsetof(DataType, sm_outcomes) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SynthesisRequest__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const flexbe_msgs::msg::SynthesisRequest *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SynthesisRequest__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<flexbe_msgs::msg::SynthesisRequest *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SynthesisRequest__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const flexbe_msgs::msg::SynthesisRequest *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SynthesisRequest__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SynthesisRequest(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SynthesisRequest__callbacks = {
  "flexbe_msgs::msg",
  "SynthesisRequest",
  _SynthesisRequest__cdr_serialize,
  _SynthesisRequest__cdr_deserialize,
  _SynthesisRequest__get_serialized_size,
  _SynthesisRequest__max_serialized_size
};

static rosidl_message_type_support_t _SynthesisRequest__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SynthesisRequest__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace flexbe_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_flexbe_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<flexbe_msgs::msg::SynthesisRequest>()
{
  return &flexbe_msgs::msg::typesupport_fastrtps_cpp::_SynthesisRequest__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, flexbe_msgs, msg, SynthesisRequest)() {
  return &flexbe_msgs::msg::typesupport_fastrtps_cpp::_SynthesisRequest__handle;
}

#ifdef __cplusplus
}
#endif
