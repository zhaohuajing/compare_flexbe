// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from techman_robot_msgs:srv/TechmanRobotCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "techman_robot_msgs/srv/techman_robot_command.hpp"


#ifndef TECHMAN_ROBOT_MSGS__SRV__DETAIL__TECHMAN_ROBOT_COMMAND__BUILDER_HPP_
#define TECHMAN_ROBOT_MSGS__SRV__DETAIL__TECHMAN_ROBOT_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "techman_robot_msgs/srv/detail/techman_robot_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace techman_robot_msgs
{

namespace srv
{

namespace builder
{

class Init_TechmanRobotCommand_Request_command_parameter_string
{
public:
  explicit Init_TechmanRobotCommand_Request_command_parameter_string(::techman_robot_msgs::srv::TechmanRobotCommand_Request & msg)
  : msg_(msg)
  {}
  ::techman_robot_msgs::srv::TechmanRobotCommand_Request command_parameter_string(::techman_robot_msgs::srv::TechmanRobotCommand_Request::_command_parameter_string_type arg)
  {
    msg_.command_parameter_string = std::move(arg);
    return std::move(msg_);
  }

private:
  ::techman_robot_msgs::srv::TechmanRobotCommand_Request msg_;
};

class Init_TechmanRobotCommand_Request_command
{
public:
  Init_TechmanRobotCommand_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TechmanRobotCommand_Request_command_parameter_string command(::techman_robot_msgs::srv::TechmanRobotCommand_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_TechmanRobotCommand_Request_command_parameter_string(msg_);
  }

private:
  ::techman_robot_msgs::srv::TechmanRobotCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::techman_robot_msgs::srv::TechmanRobotCommand_Request>()
{
  return techman_robot_msgs::srv::builder::Init_TechmanRobotCommand_Request_command();
}

}  // namespace techman_robot_msgs


namespace techman_robot_msgs
{

namespace srv
{

namespace builder
{

class Init_TechmanRobotCommand_Response_is_success
{
public:
  Init_TechmanRobotCommand_Response_is_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::techman_robot_msgs::srv::TechmanRobotCommand_Response is_success(::techman_robot_msgs::srv::TechmanRobotCommand_Response::_is_success_type arg)
  {
    msg_.is_success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::techman_robot_msgs::srv::TechmanRobotCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::techman_robot_msgs::srv::TechmanRobotCommand_Response>()
{
  return techman_robot_msgs::srv::builder::Init_TechmanRobotCommand_Response_is_success();
}

}  // namespace techman_robot_msgs


namespace techman_robot_msgs
{

namespace srv
{

namespace builder
{

class Init_TechmanRobotCommand_Event_response
{
public:
  explicit Init_TechmanRobotCommand_Event_response(::techman_robot_msgs::srv::TechmanRobotCommand_Event & msg)
  : msg_(msg)
  {}
  ::techman_robot_msgs::srv::TechmanRobotCommand_Event response(::techman_robot_msgs::srv::TechmanRobotCommand_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::techman_robot_msgs::srv::TechmanRobotCommand_Event msg_;
};

class Init_TechmanRobotCommand_Event_request
{
public:
  explicit Init_TechmanRobotCommand_Event_request(::techman_robot_msgs::srv::TechmanRobotCommand_Event & msg)
  : msg_(msg)
  {}
  Init_TechmanRobotCommand_Event_response request(::techman_robot_msgs::srv::TechmanRobotCommand_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TechmanRobotCommand_Event_response(msg_);
  }

private:
  ::techman_robot_msgs::srv::TechmanRobotCommand_Event msg_;
};

class Init_TechmanRobotCommand_Event_info
{
public:
  Init_TechmanRobotCommand_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TechmanRobotCommand_Event_request info(::techman_robot_msgs::srv::TechmanRobotCommand_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TechmanRobotCommand_Event_request(msg_);
  }

private:
  ::techman_robot_msgs::srv::TechmanRobotCommand_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::techman_robot_msgs::srv::TechmanRobotCommand_Event>()
{
  return techman_robot_msgs::srv::builder::Init_TechmanRobotCommand_Event_info();
}

}  // namespace techman_robot_msgs

#endif  // TECHMAN_ROBOT_MSGS__SRV__DETAIL__TECHMAN_ROBOT_COMMAND__BUILDER_HPP_
