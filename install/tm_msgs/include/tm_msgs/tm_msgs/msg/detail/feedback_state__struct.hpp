// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tm_msgs:msg/FeedbackState.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__MSG__DETAIL__FEEDBACK_STATE__STRUCT_HPP_
#define TM_MSGS__MSG__DETAIL__FEEDBACK_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tm_msgs__msg__FeedbackState __attribute__((deprecated))
#else
# define DEPRECATED__tm_msgs__msg__FeedbackState __declspec(deprecated)
#endif

namespace tm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FeedbackState_
{
  using Type = FeedbackState_<ContainerAllocator>;

  explicit FeedbackState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_svr_connected = false;
      this->is_sct_connected = false;
      this->tmsrv_cperr = 0l;
      this->tmscript_cperr = 0l;
      this->tmsrv_dataerr = 0l;
      this->tmscript_dataerr = 0l;
      this->max_not_connect_in_s = 0l;
      this->disconnection_times = 0l;
      this->robot_link = false;
      this->is_data_table_correct = false;
      this->robot_error = false;
      this->project_run = false;
      this->project_pause = false;
      this->safetyguard_a = false;
      this->e_stop = false;
      this->camera_light = 0;
      this->error_code = 0l;
      this->project_speed = 0l;
      this->ma_mode = 0l;
      this->robot_light = 0l;
      this->error_content = "";
    }
  }

  explicit FeedbackState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    error_content(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_svr_connected = false;
      this->is_sct_connected = false;
      this->tmsrv_cperr = 0l;
      this->tmscript_cperr = 0l;
      this->tmsrv_dataerr = 0l;
      this->tmscript_dataerr = 0l;
      this->max_not_connect_in_s = 0l;
      this->disconnection_times = 0l;
      this->robot_link = false;
      this->is_data_table_correct = false;
      this->robot_error = false;
      this->project_run = false;
      this->project_pause = false;
      this->safetyguard_a = false;
      this->e_stop = false;
      this->camera_light = 0;
      this->error_code = 0l;
      this->project_speed = 0l;
      this->ma_mode = 0l;
      this->robot_light = 0l;
      this->error_content = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _is_svr_connected_type =
    bool;
  _is_svr_connected_type is_svr_connected;
  using _is_sct_connected_type =
    bool;
  _is_sct_connected_type is_sct_connected;
  using _tmsrv_cperr_type =
    int32_t;
  _tmsrv_cperr_type tmsrv_cperr;
  using _tmscript_cperr_type =
    int32_t;
  _tmscript_cperr_type tmscript_cperr;
  using _tmsrv_dataerr_type =
    int32_t;
  _tmsrv_dataerr_type tmsrv_dataerr;
  using _tmscript_dataerr_type =
    int32_t;
  _tmscript_dataerr_type tmscript_dataerr;
  using _max_not_connect_in_s_type =
    int32_t;
  _max_not_connect_in_s_type max_not_connect_in_s;
  using _disconnection_times_type =
    int32_t;
  _disconnection_times_type disconnection_times;
  using _joint_pos_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joint_pos_type joint_pos;
  using _joint_vel_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joint_vel_type joint_vel;
  using _joint_tor_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joint_tor_type joint_tor;
  using _tool0_pose_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _tool0_pose_type tool0_pose;
  using _tool_pose_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _tool_pose_type tool_pose;
  using _tcp_speed_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _tcp_speed_type tcp_speed;
  using _tcp_force_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _tcp_force_type tcp_force;
  using _joint_tor_average_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joint_tor_average_type joint_tor_average;
  using _joint_tor_min_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joint_tor_min_type joint_tor_min;
  using _joint_tor_max_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joint_tor_max_type joint_tor_max;
  using _robot_link_type =
    bool;
  _robot_link_type robot_link;
  using _is_data_table_correct_type =
    bool;
  _is_data_table_correct_type is_data_table_correct;
  using _robot_error_type =
    bool;
  _robot_error_type robot_error;
  using _project_run_type =
    bool;
  _project_run_type project_run;
  using _project_pause_type =
    bool;
  _project_pause_type project_pause;
  using _safetyguard_a_type =
    bool;
  _safetyguard_a_type safetyguard_a;
  using _e_stop_type =
    bool;
  _e_stop_type e_stop;
  using _camera_light_type =
    uint8_t;
  _camera_light_type camera_light;
  using _error_code_type =
    int32_t;
  _error_code_type error_code;
  using _project_speed_type =
    int32_t;
  _project_speed_type project_speed;
  using _ma_mode_type =
    int32_t;
  _ma_mode_type ma_mode;
  using _robot_light_type =
    int32_t;
  _robot_light_type robot_light;
  using _cb_digital_output_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _cb_digital_output_type cb_digital_output;
  using _cb_digital_input_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _cb_digital_input_type cb_digital_input;
  using _cb_analog_output_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _cb_analog_output_type cb_analog_output;
  using _cb_analog_input_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _cb_analog_input_type cb_analog_input;
  using _ee_digital_output_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _ee_digital_output_type ee_digital_output;
  using _ee_digital_input_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _ee_digital_input_type ee_digital_input;
  using _ee_analog_output_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _ee_analog_output_type ee_analog_output;
  using _ee_analog_input_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _ee_analog_input_type ee_analog_input;
  using _error_content_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_content_type error_content;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__is_svr_connected(
    const bool & _arg)
  {
    this->is_svr_connected = _arg;
    return *this;
  }
  Type & set__is_sct_connected(
    const bool & _arg)
  {
    this->is_sct_connected = _arg;
    return *this;
  }
  Type & set__tmsrv_cperr(
    const int32_t & _arg)
  {
    this->tmsrv_cperr = _arg;
    return *this;
  }
  Type & set__tmscript_cperr(
    const int32_t & _arg)
  {
    this->tmscript_cperr = _arg;
    return *this;
  }
  Type & set__tmsrv_dataerr(
    const int32_t & _arg)
  {
    this->tmsrv_dataerr = _arg;
    return *this;
  }
  Type & set__tmscript_dataerr(
    const int32_t & _arg)
  {
    this->tmscript_dataerr = _arg;
    return *this;
  }
  Type & set__max_not_connect_in_s(
    const int32_t & _arg)
  {
    this->max_not_connect_in_s = _arg;
    return *this;
  }
  Type & set__disconnection_times(
    const int32_t & _arg)
  {
    this->disconnection_times = _arg;
    return *this;
  }
  Type & set__joint_pos(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joint_pos = _arg;
    return *this;
  }
  Type & set__joint_vel(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joint_vel = _arg;
    return *this;
  }
  Type & set__joint_tor(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joint_tor = _arg;
    return *this;
  }
  Type & set__tool0_pose(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->tool0_pose = _arg;
    return *this;
  }
  Type & set__tool_pose(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->tool_pose = _arg;
    return *this;
  }
  Type & set__tcp_speed(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->tcp_speed = _arg;
    return *this;
  }
  Type & set__tcp_force(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->tcp_force = _arg;
    return *this;
  }
  Type & set__joint_tor_average(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joint_tor_average = _arg;
    return *this;
  }
  Type & set__joint_tor_min(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joint_tor_min = _arg;
    return *this;
  }
  Type & set__joint_tor_max(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joint_tor_max = _arg;
    return *this;
  }
  Type & set__robot_link(
    const bool & _arg)
  {
    this->robot_link = _arg;
    return *this;
  }
  Type & set__is_data_table_correct(
    const bool & _arg)
  {
    this->is_data_table_correct = _arg;
    return *this;
  }
  Type & set__robot_error(
    const bool & _arg)
  {
    this->robot_error = _arg;
    return *this;
  }
  Type & set__project_run(
    const bool & _arg)
  {
    this->project_run = _arg;
    return *this;
  }
  Type & set__project_pause(
    const bool & _arg)
  {
    this->project_pause = _arg;
    return *this;
  }
  Type & set__safetyguard_a(
    const bool & _arg)
  {
    this->safetyguard_a = _arg;
    return *this;
  }
  Type & set__e_stop(
    const bool & _arg)
  {
    this->e_stop = _arg;
    return *this;
  }
  Type & set__camera_light(
    const uint8_t & _arg)
  {
    this->camera_light = _arg;
    return *this;
  }
  Type & set__error_code(
    const int32_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__project_speed(
    const int32_t & _arg)
  {
    this->project_speed = _arg;
    return *this;
  }
  Type & set__ma_mode(
    const int32_t & _arg)
  {
    this->ma_mode = _arg;
    return *this;
  }
  Type & set__robot_light(
    const int32_t & _arg)
  {
    this->robot_light = _arg;
    return *this;
  }
  Type & set__cb_digital_output(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->cb_digital_output = _arg;
    return *this;
  }
  Type & set__cb_digital_input(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->cb_digital_input = _arg;
    return *this;
  }
  Type & set__cb_analog_output(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->cb_analog_output = _arg;
    return *this;
  }
  Type & set__cb_analog_input(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->cb_analog_input = _arg;
    return *this;
  }
  Type & set__ee_digital_output(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->ee_digital_output = _arg;
    return *this;
  }
  Type & set__ee_digital_input(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->ee_digital_input = _arg;
    return *this;
  }
  Type & set__ee_analog_output(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->ee_analog_output = _arg;
    return *this;
  }
  Type & set__ee_analog_input(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->ee_analog_input = _arg;
    return *this;
  }
  Type & set__error_content(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_content = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tm_msgs::msg::FeedbackState_<ContainerAllocator> *;
  using ConstRawPtr =
    const tm_msgs::msg::FeedbackState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tm_msgs::msg::FeedbackState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tm_msgs::msg::FeedbackState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tm_msgs::msg::FeedbackState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::msg::FeedbackState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tm_msgs::msg::FeedbackState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::msg::FeedbackState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tm_msgs::msg::FeedbackState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tm_msgs::msg::FeedbackState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tm_msgs__msg__FeedbackState
    std::shared_ptr<tm_msgs::msg::FeedbackState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tm_msgs__msg__FeedbackState
    std::shared_ptr<tm_msgs::msg::FeedbackState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FeedbackState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->is_svr_connected != other.is_svr_connected) {
      return false;
    }
    if (this->is_sct_connected != other.is_sct_connected) {
      return false;
    }
    if (this->tmsrv_cperr != other.tmsrv_cperr) {
      return false;
    }
    if (this->tmscript_cperr != other.tmscript_cperr) {
      return false;
    }
    if (this->tmsrv_dataerr != other.tmsrv_dataerr) {
      return false;
    }
    if (this->tmscript_dataerr != other.tmscript_dataerr) {
      return false;
    }
    if (this->max_not_connect_in_s != other.max_not_connect_in_s) {
      return false;
    }
    if (this->disconnection_times != other.disconnection_times) {
      return false;
    }
    if (this->joint_pos != other.joint_pos) {
      return false;
    }
    if (this->joint_vel != other.joint_vel) {
      return false;
    }
    if (this->joint_tor != other.joint_tor) {
      return false;
    }
    if (this->tool0_pose != other.tool0_pose) {
      return false;
    }
    if (this->tool_pose != other.tool_pose) {
      return false;
    }
    if (this->tcp_speed != other.tcp_speed) {
      return false;
    }
    if (this->tcp_force != other.tcp_force) {
      return false;
    }
    if (this->joint_tor_average != other.joint_tor_average) {
      return false;
    }
    if (this->joint_tor_min != other.joint_tor_min) {
      return false;
    }
    if (this->joint_tor_max != other.joint_tor_max) {
      return false;
    }
    if (this->robot_link != other.robot_link) {
      return false;
    }
    if (this->is_data_table_correct != other.is_data_table_correct) {
      return false;
    }
    if (this->robot_error != other.robot_error) {
      return false;
    }
    if (this->project_run != other.project_run) {
      return false;
    }
    if (this->project_pause != other.project_pause) {
      return false;
    }
    if (this->safetyguard_a != other.safetyguard_a) {
      return false;
    }
    if (this->e_stop != other.e_stop) {
      return false;
    }
    if (this->camera_light != other.camera_light) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->project_speed != other.project_speed) {
      return false;
    }
    if (this->ma_mode != other.ma_mode) {
      return false;
    }
    if (this->robot_light != other.robot_light) {
      return false;
    }
    if (this->cb_digital_output != other.cb_digital_output) {
      return false;
    }
    if (this->cb_digital_input != other.cb_digital_input) {
      return false;
    }
    if (this->cb_analog_output != other.cb_analog_output) {
      return false;
    }
    if (this->cb_analog_input != other.cb_analog_input) {
      return false;
    }
    if (this->ee_digital_output != other.ee_digital_output) {
      return false;
    }
    if (this->ee_digital_input != other.ee_digital_input) {
      return false;
    }
    if (this->ee_analog_output != other.ee_analog_output) {
      return false;
    }
    if (this->ee_analog_input != other.ee_analog_input) {
      return false;
    }
    if (this->error_content != other.error_content) {
      return false;
    }
    return true;
  }
  bool operator!=(const FeedbackState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FeedbackState_

// alias to use template instance with default allocator
using FeedbackState =
  tm_msgs::msg::FeedbackState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tm_msgs

#endif  // TM_MSGS__MSG__DETAIL__FEEDBACK_STATE__STRUCT_HPP_
