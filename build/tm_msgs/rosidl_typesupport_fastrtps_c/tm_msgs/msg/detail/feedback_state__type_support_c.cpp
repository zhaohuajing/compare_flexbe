// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tm_msgs:msg/FeedbackState.idl
// generated code does not contain a copyright notice
#include "tm_msgs/msg/detail/feedback_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tm_msgs/msg/detail/feedback_state__struct.h"
#include "tm_msgs/msg/detail/feedback_state__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // cb_analog_input, cb_analog_output, cb_digital_input, cb_digital_output, ee_analog_input, ee_analog_output, ee_digital_input, ee_digital_output, joint_pos, joint_tor, joint_tor_average, joint_tor_max, joint_tor_min, joint_vel, tcp_force, tcp_speed, tool0_pose, tool_pose
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // cb_analog_input, cb_analog_output, cb_digital_input, cb_digital_output, ee_analog_input, ee_analog_output, ee_digital_input, ee_digital_output, joint_pos, joint_tor, joint_tor_average, joint_tor_max, joint_tor_min, joint_vel, tcp_force, tcp_speed, tool0_pose, tool_pose
#include "rosidl_runtime_c/string.h"  // error_content
#include "rosidl_runtime_c/string_functions.h"  // error_content
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tm_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tm_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tm_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _FeedbackState__ros_msg_type = tm_msgs__msg__FeedbackState;

static bool _FeedbackState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FeedbackState__ros_msg_type * ros_message = static_cast<const _FeedbackState__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: is_svr_connected
  {
    cdr << (ros_message->is_svr_connected ? true : false);
  }

  // Field name: is_sct_connected
  {
    cdr << (ros_message->is_sct_connected ? true : false);
  }

  // Field name: tmsrv_cperr
  {
    cdr << ros_message->tmsrv_cperr;
  }

  // Field name: tmscript_cperr
  {
    cdr << ros_message->tmscript_cperr;
  }

  // Field name: tmsrv_dataerr
  {
    cdr << ros_message->tmsrv_dataerr;
  }

  // Field name: tmscript_dataerr
  {
    cdr << ros_message->tmscript_dataerr;
  }

  // Field name: max_not_connect_in_s
  {
    cdr << ros_message->max_not_connect_in_s;
  }

  // Field name: disconnection_times
  {
    cdr << ros_message->disconnection_times;
  }

  // Field name: joint_pos
  {
    size_t size = ros_message->joint_pos.size;
    auto array_ptr = ros_message->joint_pos.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_vel
  {
    size_t size = ros_message->joint_vel.size;
    auto array_ptr = ros_message->joint_vel.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_tor
  {
    size_t size = ros_message->joint_tor.size;
    auto array_ptr = ros_message->joint_tor.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tool0_pose
  {
    size_t size = ros_message->tool0_pose.size;
    auto array_ptr = ros_message->tool0_pose.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tool_pose
  {
    size_t size = ros_message->tool_pose.size;
    auto array_ptr = ros_message->tool_pose.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tcp_speed
  {
    size_t size = ros_message->tcp_speed.size;
    auto array_ptr = ros_message->tcp_speed.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tcp_force
  {
    size_t size = ros_message->tcp_force.size;
    auto array_ptr = ros_message->tcp_force.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_tor_average
  {
    size_t size = ros_message->joint_tor_average.size;
    auto array_ptr = ros_message->joint_tor_average.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_tor_min
  {
    size_t size = ros_message->joint_tor_min.size;
    auto array_ptr = ros_message->joint_tor_min.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_tor_max
  {
    size_t size = ros_message->joint_tor_max.size;
    auto array_ptr = ros_message->joint_tor_max.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: robot_link
  {
    cdr << (ros_message->robot_link ? true : false);
  }

  // Field name: is_data_table_correct
  {
    cdr << (ros_message->is_data_table_correct ? true : false);
  }

  // Field name: robot_error
  {
    cdr << (ros_message->robot_error ? true : false);
  }

  // Field name: project_run
  {
    cdr << (ros_message->project_run ? true : false);
  }

  // Field name: project_pause
  {
    cdr << (ros_message->project_pause ? true : false);
  }

  // Field name: safetyguard_a
  {
    cdr << (ros_message->safetyguard_a ? true : false);
  }

  // Field name: e_stop
  {
    cdr << (ros_message->e_stop ? true : false);
  }

  // Field name: camera_light
  {
    cdr << ros_message->camera_light;
  }

  // Field name: error_code
  {
    cdr << ros_message->error_code;
  }

  // Field name: project_speed
  {
    cdr << ros_message->project_speed;
  }

  // Field name: ma_mode
  {
    cdr << ros_message->ma_mode;
  }

  // Field name: robot_light
  {
    cdr << ros_message->robot_light;
  }

  // Field name: cb_digital_output
  {
    size_t size = ros_message->cb_digital_output.size;
    auto array_ptr = ros_message->cb_digital_output.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cb_digital_input
  {
    size_t size = ros_message->cb_digital_input.size;
    auto array_ptr = ros_message->cb_digital_input.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cb_analog_output
  {
    size_t size = ros_message->cb_analog_output.size;
    auto array_ptr = ros_message->cb_analog_output.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cb_analog_input
  {
    size_t size = ros_message->cb_analog_input.size;
    auto array_ptr = ros_message->cb_analog_input.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ee_digital_output
  {
    size_t size = ros_message->ee_digital_output.size;
    auto array_ptr = ros_message->ee_digital_output.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ee_digital_input
  {
    size_t size = ros_message->ee_digital_input.size;
    auto array_ptr = ros_message->ee_digital_input.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ee_analog_output
  {
    size_t size = ros_message->ee_analog_output.size;
    auto array_ptr = ros_message->ee_analog_output.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ee_analog_input
  {
    size_t size = ros_message->ee_analog_input.size;
    auto array_ptr = ros_message->ee_analog_input.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: error_content
  {
    const rosidl_runtime_c__String * str = &ros_message->error_content;
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

  return true;
}

static bool _FeedbackState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FeedbackState__ros_msg_type * ros_message = static_cast<_FeedbackState__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: is_svr_connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_svr_connected = tmp ? true : false;
  }

  // Field name: is_sct_connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_sct_connected = tmp ? true : false;
  }

  // Field name: tmsrv_cperr
  {
    cdr >> ros_message->tmsrv_cperr;
  }

  // Field name: tmscript_cperr
  {
    cdr >> ros_message->tmscript_cperr;
  }

  // Field name: tmsrv_dataerr
  {
    cdr >> ros_message->tmsrv_dataerr;
  }

  // Field name: tmscript_dataerr
  {
    cdr >> ros_message->tmscript_dataerr;
  }

  // Field name: max_not_connect_in_s
  {
    cdr >> ros_message->max_not_connect_in_s;
  }

  // Field name: disconnection_times
  {
    cdr >> ros_message->disconnection_times;
  }

  // Field name: joint_pos
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_pos.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->joint_pos);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->joint_pos, size)) {
      fprintf(stderr, "failed to create array for field 'joint_pos'");
      return false;
    }
    auto array_ptr = ros_message->joint_pos.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_vel
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_vel.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->joint_vel);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->joint_vel, size)) {
      fprintf(stderr, "failed to create array for field 'joint_vel'");
      return false;
    }
    auto array_ptr = ros_message->joint_vel.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_tor
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_tor.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->joint_tor);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->joint_tor, size)) {
      fprintf(stderr, "failed to create array for field 'joint_tor'");
      return false;
    }
    auto array_ptr = ros_message->joint_tor.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: tool0_pose
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->tool0_pose.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->tool0_pose);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->tool0_pose, size)) {
      fprintf(stderr, "failed to create array for field 'tool0_pose'");
      return false;
    }
    auto array_ptr = ros_message->tool0_pose.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: tool_pose
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->tool_pose.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->tool_pose);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->tool_pose, size)) {
      fprintf(stderr, "failed to create array for field 'tool_pose'");
      return false;
    }
    auto array_ptr = ros_message->tool_pose.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: tcp_speed
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->tcp_speed.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->tcp_speed);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->tcp_speed, size)) {
      fprintf(stderr, "failed to create array for field 'tcp_speed'");
      return false;
    }
    auto array_ptr = ros_message->tcp_speed.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: tcp_force
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->tcp_force.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->tcp_force);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->tcp_force, size)) {
      fprintf(stderr, "failed to create array for field 'tcp_force'");
      return false;
    }
    auto array_ptr = ros_message->tcp_force.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_tor_average
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_tor_average.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->joint_tor_average);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->joint_tor_average, size)) {
      fprintf(stderr, "failed to create array for field 'joint_tor_average'");
      return false;
    }
    auto array_ptr = ros_message->joint_tor_average.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_tor_min
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_tor_min.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->joint_tor_min);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->joint_tor_min, size)) {
      fprintf(stderr, "failed to create array for field 'joint_tor_min'");
      return false;
    }
    auto array_ptr = ros_message->joint_tor_min.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_tor_max
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_tor_max.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->joint_tor_max);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->joint_tor_max, size)) {
      fprintf(stderr, "failed to create array for field 'joint_tor_max'");
      return false;
    }
    auto array_ptr = ros_message->joint_tor_max.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: robot_link
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->robot_link = tmp ? true : false;
  }

  // Field name: is_data_table_correct
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_data_table_correct = tmp ? true : false;
  }

  // Field name: robot_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->robot_error = tmp ? true : false;
  }

  // Field name: project_run
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->project_run = tmp ? true : false;
  }

  // Field name: project_pause
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->project_pause = tmp ? true : false;
  }

  // Field name: safetyguard_a
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->safetyguard_a = tmp ? true : false;
  }

  // Field name: e_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->e_stop = tmp ? true : false;
  }

  // Field name: camera_light
  {
    cdr >> ros_message->camera_light;
  }

  // Field name: error_code
  {
    cdr >> ros_message->error_code;
  }

  // Field name: project_speed
  {
    cdr >> ros_message->project_speed;
  }

  // Field name: ma_mode
  {
    cdr >> ros_message->ma_mode;
  }

  // Field name: robot_light
  {
    cdr >> ros_message->robot_light;
  }

  // Field name: cb_digital_output
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->cb_digital_output.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->cb_digital_output);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->cb_digital_output, size)) {
      fprintf(stderr, "failed to create array for field 'cb_digital_output'");
      return false;
    }
    auto array_ptr = ros_message->cb_digital_output.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cb_digital_input
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->cb_digital_input.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->cb_digital_input);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->cb_digital_input, size)) {
      fprintf(stderr, "failed to create array for field 'cb_digital_input'");
      return false;
    }
    auto array_ptr = ros_message->cb_digital_input.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cb_analog_output
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->cb_analog_output.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->cb_analog_output);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->cb_analog_output, size)) {
      fprintf(stderr, "failed to create array for field 'cb_analog_output'");
      return false;
    }
    auto array_ptr = ros_message->cb_analog_output.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cb_analog_input
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->cb_analog_input.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->cb_analog_input);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->cb_analog_input, size)) {
      fprintf(stderr, "failed to create array for field 'cb_analog_input'");
      return false;
    }
    auto array_ptr = ros_message->cb_analog_input.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ee_digital_output
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ee_digital_output.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->ee_digital_output);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->ee_digital_output, size)) {
      fprintf(stderr, "failed to create array for field 'ee_digital_output'");
      return false;
    }
    auto array_ptr = ros_message->ee_digital_output.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ee_digital_input
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ee_digital_input.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->ee_digital_input);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->ee_digital_input, size)) {
      fprintf(stderr, "failed to create array for field 'ee_digital_input'");
      return false;
    }
    auto array_ptr = ros_message->ee_digital_input.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ee_analog_output
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ee_analog_output.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->ee_analog_output);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->ee_analog_output, size)) {
      fprintf(stderr, "failed to create array for field 'ee_analog_output'");
      return false;
    }
    auto array_ptr = ros_message->ee_analog_output.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ee_analog_input
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ee_analog_input.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->ee_analog_input);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->ee_analog_input, size)) {
      fprintf(stderr, "failed to create array for field 'ee_analog_input'");
      return false;
    }
    auto array_ptr = ros_message->ee_analog_input.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: error_content
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->error_content.data) {
      rosidl_runtime_c__String__init(&ros_message->error_content);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->error_content,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'error_content'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tm_msgs
size_t get_serialized_size_tm_msgs__msg__FeedbackState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FeedbackState__ros_msg_type * ros_message = static_cast<const _FeedbackState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name is_svr_connected
  {
    size_t item_size = sizeof(ros_message->is_svr_connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_sct_connected
  {
    size_t item_size = sizeof(ros_message->is_sct_connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tmsrv_cperr
  {
    size_t item_size = sizeof(ros_message->tmsrv_cperr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tmscript_cperr
  {
    size_t item_size = sizeof(ros_message->tmscript_cperr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tmsrv_dataerr
  {
    size_t item_size = sizeof(ros_message->tmsrv_dataerr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tmscript_dataerr
  {
    size_t item_size = sizeof(ros_message->tmscript_dataerr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_not_connect_in_s
  {
    size_t item_size = sizeof(ros_message->max_not_connect_in_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name disconnection_times
  {
    size_t item_size = sizeof(ros_message->disconnection_times);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_pos
  {
    size_t array_size = ros_message->joint_pos.size;
    auto array_ptr = ros_message->joint_pos.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_vel
  {
    size_t array_size = ros_message->joint_vel.size;
    auto array_ptr = ros_message->joint_vel.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_tor
  {
    size_t array_size = ros_message->joint_tor.size;
    auto array_ptr = ros_message->joint_tor.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tool0_pose
  {
    size_t array_size = ros_message->tool0_pose.size;
    auto array_ptr = ros_message->tool0_pose.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tool_pose
  {
    size_t array_size = ros_message->tool_pose.size;
    auto array_ptr = ros_message->tool_pose.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tcp_speed
  {
    size_t array_size = ros_message->tcp_speed.size;
    auto array_ptr = ros_message->tcp_speed.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tcp_force
  {
    size_t array_size = ros_message->tcp_force.size;
    auto array_ptr = ros_message->tcp_force.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_tor_average
  {
    size_t array_size = ros_message->joint_tor_average.size;
    auto array_ptr = ros_message->joint_tor_average.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_tor_min
  {
    size_t array_size = ros_message->joint_tor_min.size;
    auto array_ptr = ros_message->joint_tor_min.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_tor_max
  {
    size_t array_size = ros_message->joint_tor_max.size;
    auto array_ptr = ros_message->joint_tor_max.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_link
  {
    size_t item_size = sizeof(ros_message->robot_link);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_data_table_correct
  {
    size_t item_size = sizeof(ros_message->is_data_table_correct);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_error
  {
    size_t item_size = sizeof(ros_message->robot_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name project_run
  {
    size_t item_size = sizeof(ros_message->project_run);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name project_pause
  {
    size_t item_size = sizeof(ros_message->project_pause);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name safetyguard_a
  {
    size_t item_size = sizeof(ros_message->safetyguard_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name e_stop
  {
    size_t item_size = sizeof(ros_message->e_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name camera_light
  {
    size_t item_size = sizeof(ros_message->camera_light);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_code
  {
    size_t item_size = sizeof(ros_message->error_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name project_speed
  {
    size_t item_size = sizeof(ros_message->project_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ma_mode
  {
    size_t item_size = sizeof(ros_message->ma_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_light
  {
    size_t item_size = sizeof(ros_message->robot_light);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cb_digital_output
  {
    size_t array_size = ros_message->cb_digital_output.size;
    auto array_ptr = ros_message->cb_digital_output.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cb_digital_input
  {
    size_t array_size = ros_message->cb_digital_input.size;
    auto array_ptr = ros_message->cb_digital_input.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cb_analog_output
  {
    size_t array_size = ros_message->cb_analog_output.size;
    auto array_ptr = ros_message->cb_analog_output.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cb_analog_input
  {
    size_t array_size = ros_message->cb_analog_input.size;
    auto array_ptr = ros_message->cb_analog_input.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ee_digital_output
  {
    size_t array_size = ros_message->ee_digital_output.size;
    auto array_ptr = ros_message->ee_digital_output.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ee_digital_input
  {
    size_t array_size = ros_message->ee_digital_input.size;
    auto array_ptr = ros_message->ee_digital_input.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ee_analog_output
  {
    size_t array_size = ros_message->ee_analog_output.size;
    auto array_ptr = ros_message->ee_analog_output.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ee_analog_input
  {
    size_t array_size = ros_message->ee_analog_input.size;
    auto array_ptr = ros_message->ee_analog_input.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_content
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error_content.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _FeedbackState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tm_msgs__msg__FeedbackState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tm_msgs
size_t max_serialized_size_tm_msgs__msg__FeedbackState(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: is_svr_connected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_sct_connected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tmsrv_cperr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tmscript_cperr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tmsrv_dataerr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tmscript_dataerr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_not_connect_in_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: disconnection_times
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_pos
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint_vel
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint_tor
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tool0_pose
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tool_pose
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tcp_speed
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tcp_force
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint_tor_average
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint_tor_min
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint_tor_max
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: robot_link
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_data_table_correct
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: robot_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: project_run
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: project_pause
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: safetyguard_a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: e_stop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: camera_light
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: project_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ma_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: robot_light
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cb_digital_output
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cb_digital_input
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cb_analog_output
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
  // member: cb_analog_input
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
  // member: ee_digital_output
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ee_digital_input
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ee_analog_output
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
  // member: ee_analog_input
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
  // member: error_content
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tm_msgs__msg__FeedbackState;
    is_plain =
      (
      offsetof(DataType, error_content) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FeedbackState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tm_msgs__msg__FeedbackState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FeedbackState = {
  "tm_msgs::msg",
  "FeedbackState",
  _FeedbackState__cdr_serialize,
  _FeedbackState__cdr_deserialize,
  _FeedbackState__get_serialized_size,
  _FeedbackState__max_serialized_size
};

static rosidl_message_type_support_t _FeedbackState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FeedbackState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tm_msgs, msg, FeedbackState)() {
  return &_FeedbackState__type_support;
}

#if defined(__cplusplus)
}
#endif
