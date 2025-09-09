// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flexbe_msgs:srv/GetUserdata.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "flexbe_msgs/srv/get_userdata.hpp"


#ifndef FLEXBE_MSGS__SRV__DETAIL__GET_USERDATA__BUILDER_HPP_
#define FLEXBE_MSGS__SRV__DETAIL__GET_USERDATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flexbe_msgs/srv/detail/get_userdata__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flexbe_msgs
{

namespace srv
{

namespace builder
{

class Init_GetUserdata_Request_userdata_key
{
public:
  Init_GetUserdata_Request_userdata_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::flexbe_msgs::srv::GetUserdata_Request userdata_key(::flexbe_msgs::srv::GetUserdata_Request::_userdata_key_type arg)
  {
    msg_.userdata_key = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::srv::GetUserdata_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::srv::GetUserdata_Request>()
{
  return flexbe_msgs::srv::builder::Init_GetUserdata_Request_userdata_key();
}

}  // namespace flexbe_msgs


namespace flexbe_msgs
{

namespace srv
{

namespace builder
{

class Init_GetUserdata_Response_userdata
{
public:
  explicit Init_GetUserdata_Response_userdata(::flexbe_msgs::srv::GetUserdata_Response & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::srv::GetUserdata_Response userdata(::flexbe_msgs::srv::GetUserdata_Response::_userdata_type arg)
  {
    msg_.userdata = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::srv::GetUserdata_Response msg_;
};

class Init_GetUserdata_Response_message
{
public:
  explicit Init_GetUserdata_Response_message(::flexbe_msgs::srv::GetUserdata_Response & msg)
  : msg_(msg)
  {}
  Init_GetUserdata_Response_userdata message(::flexbe_msgs::srv::GetUserdata_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_GetUserdata_Response_userdata(msg_);
  }

private:
  ::flexbe_msgs::srv::GetUserdata_Response msg_;
};

class Init_GetUserdata_Response_success
{
public:
  Init_GetUserdata_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetUserdata_Response_message success(::flexbe_msgs::srv::GetUserdata_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetUserdata_Response_message(msg_);
  }

private:
  ::flexbe_msgs::srv::GetUserdata_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::srv::GetUserdata_Response>()
{
  return flexbe_msgs::srv::builder::Init_GetUserdata_Response_success();
}

}  // namespace flexbe_msgs


namespace flexbe_msgs
{

namespace srv
{

namespace builder
{

class Init_GetUserdata_Event_response
{
public:
  explicit Init_GetUserdata_Event_response(::flexbe_msgs::srv::GetUserdata_Event & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::srv::GetUserdata_Event response(::flexbe_msgs::srv::GetUserdata_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::srv::GetUserdata_Event msg_;
};

class Init_GetUserdata_Event_request
{
public:
  explicit Init_GetUserdata_Event_request(::flexbe_msgs::srv::GetUserdata_Event & msg)
  : msg_(msg)
  {}
  Init_GetUserdata_Event_response request(::flexbe_msgs::srv::GetUserdata_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetUserdata_Event_response(msg_);
  }

private:
  ::flexbe_msgs::srv::GetUserdata_Event msg_;
};

class Init_GetUserdata_Event_info
{
public:
  Init_GetUserdata_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetUserdata_Event_request info(::flexbe_msgs::srv::GetUserdata_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetUserdata_Event_request(msg_);
  }

private:
  ::flexbe_msgs::srv::GetUserdata_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::srv::GetUserdata_Event>()
{
  return flexbe_msgs::srv::builder::Init_GetUserdata_Event_info();
}

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__SRV__DETAIL__GET_USERDATA__BUILDER_HPP_
