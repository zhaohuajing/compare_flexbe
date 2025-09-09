// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tm_msgs:srv/SendScript.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tm_msgs/srv/send_script.hpp"


#ifndef TM_MSGS__SRV__DETAIL__SEND_SCRIPT__BUILDER_HPP_
#define TM_MSGS__SRV__DETAIL__SEND_SCRIPT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tm_msgs/srv/detail/send_script__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tm_msgs
{

namespace srv
{

namespace builder
{

class Init_SendScript_Request_script
{
public:
  explicit Init_SendScript_Request_script(::tm_msgs::srv::SendScript_Request & msg)
  : msg_(msg)
  {}
  ::tm_msgs::srv::SendScript_Request script(::tm_msgs::srv::SendScript_Request::_script_type arg)
  {
    msg_.script = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_msgs::srv::SendScript_Request msg_;
};

class Init_SendScript_Request_id
{
public:
  Init_SendScript_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendScript_Request_script id(::tm_msgs::srv::SendScript_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SendScript_Request_script(msg_);
  }

private:
  ::tm_msgs::srv::SendScript_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_msgs::srv::SendScript_Request>()
{
  return tm_msgs::srv::builder::Init_SendScript_Request_id();
}

}  // namespace tm_msgs


namespace tm_msgs
{

namespace srv
{

namespace builder
{

class Init_SendScript_Response_ok
{
public:
  Init_SendScript_Response_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tm_msgs::srv::SendScript_Response ok(::tm_msgs::srv::SendScript_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_msgs::srv::SendScript_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_msgs::srv::SendScript_Response>()
{
  return tm_msgs::srv::builder::Init_SendScript_Response_ok();
}

}  // namespace tm_msgs


namespace tm_msgs
{

namespace srv
{

namespace builder
{

class Init_SendScript_Event_response
{
public:
  explicit Init_SendScript_Event_response(::tm_msgs::srv::SendScript_Event & msg)
  : msg_(msg)
  {}
  ::tm_msgs::srv::SendScript_Event response(::tm_msgs::srv::SendScript_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_msgs::srv::SendScript_Event msg_;
};

class Init_SendScript_Event_request
{
public:
  explicit Init_SendScript_Event_request(::tm_msgs::srv::SendScript_Event & msg)
  : msg_(msg)
  {}
  Init_SendScript_Event_response request(::tm_msgs::srv::SendScript_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SendScript_Event_response(msg_);
  }

private:
  ::tm_msgs::srv::SendScript_Event msg_;
};

class Init_SendScript_Event_info
{
public:
  Init_SendScript_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendScript_Event_request info(::tm_msgs::srv::SendScript_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SendScript_Event_request(msg_);
  }

private:
  ::tm_msgs::srv::SendScript_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_msgs::srv::SendScript_Event>()
{
  return tm_msgs::srv::builder::Init_SendScript_Event_info();
}

}  // namespace tm_msgs

#endif  // TM_MSGS__SRV__DETAIL__SEND_SCRIPT__BUILDER_HPP_
