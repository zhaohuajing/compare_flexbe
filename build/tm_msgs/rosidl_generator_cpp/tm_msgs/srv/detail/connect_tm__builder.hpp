// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tm_msgs:srv/ConnectTM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tm_msgs/srv/connect_tm.hpp"


#ifndef TM_MSGS__SRV__DETAIL__CONNECT_TM__BUILDER_HPP_
#define TM_MSGS__SRV__DETAIL__CONNECT_TM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tm_msgs/srv/detail/connect_tm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tm_msgs
{

namespace srv
{

namespace builder
{

class Init_ConnectTM_Request_timeval
{
public:
  explicit Init_ConnectTM_Request_timeval(::tm_msgs::srv::ConnectTM_Request & msg)
  : msg_(msg)
  {}
  ::tm_msgs::srv::ConnectTM_Request timeval(::tm_msgs::srv::ConnectTM_Request::_timeval_type arg)
  {
    msg_.timeval = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_msgs::srv::ConnectTM_Request msg_;
};

class Init_ConnectTM_Request_timeout
{
public:
  explicit Init_ConnectTM_Request_timeout(::tm_msgs::srv::ConnectTM_Request & msg)
  : msg_(msg)
  {}
  Init_ConnectTM_Request_timeval timeout(::tm_msgs::srv::ConnectTM_Request::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return Init_ConnectTM_Request_timeval(msg_);
  }

private:
  ::tm_msgs::srv::ConnectTM_Request msg_;
};

class Init_ConnectTM_Request_reconnect
{
public:
  explicit Init_ConnectTM_Request_reconnect(::tm_msgs::srv::ConnectTM_Request & msg)
  : msg_(msg)
  {}
  Init_ConnectTM_Request_timeout reconnect(::tm_msgs::srv::ConnectTM_Request::_reconnect_type arg)
  {
    msg_.reconnect = std::move(arg);
    return Init_ConnectTM_Request_timeout(msg_);
  }

private:
  ::tm_msgs::srv::ConnectTM_Request msg_;
};

class Init_ConnectTM_Request_connect
{
public:
  explicit Init_ConnectTM_Request_connect(::tm_msgs::srv::ConnectTM_Request & msg)
  : msg_(msg)
  {}
  Init_ConnectTM_Request_reconnect connect(::tm_msgs::srv::ConnectTM_Request::_connect_type arg)
  {
    msg_.connect = std::move(arg);
    return Init_ConnectTM_Request_reconnect(msg_);
  }

private:
  ::tm_msgs::srv::ConnectTM_Request msg_;
};

class Init_ConnectTM_Request_server
{
public:
  Init_ConnectTM_Request_server()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConnectTM_Request_connect server(::tm_msgs::srv::ConnectTM_Request::_server_type arg)
  {
    msg_.server = std::move(arg);
    return Init_ConnectTM_Request_connect(msg_);
  }

private:
  ::tm_msgs::srv::ConnectTM_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_msgs::srv::ConnectTM_Request>()
{
  return tm_msgs::srv::builder::Init_ConnectTM_Request_server();
}

}  // namespace tm_msgs


namespace tm_msgs
{

namespace srv
{

namespace builder
{

class Init_ConnectTM_Response_ok
{
public:
  Init_ConnectTM_Response_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tm_msgs::srv::ConnectTM_Response ok(::tm_msgs::srv::ConnectTM_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_msgs::srv::ConnectTM_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_msgs::srv::ConnectTM_Response>()
{
  return tm_msgs::srv::builder::Init_ConnectTM_Response_ok();
}

}  // namespace tm_msgs


namespace tm_msgs
{

namespace srv
{

namespace builder
{

class Init_ConnectTM_Event_response
{
public:
  explicit Init_ConnectTM_Event_response(::tm_msgs::srv::ConnectTM_Event & msg)
  : msg_(msg)
  {}
  ::tm_msgs::srv::ConnectTM_Event response(::tm_msgs::srv::ConnectTM_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_msgs::srv::ConnectTM_Event msg_;
};

class Init_ConnectTM_Event_request
{
public:
  explicit Init_ConnectTM_Event_request(::tm_msgs::srv::ConnectTM_Event & msg)
  : msg_(msg)
  {}
  Init_ConnectTM_Event_response request(::tm_msgs::srv::ConnectTM_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ConnectTM_Event_response(msg_);
  }

private:
  ::tm_msgs::srv::ConnectTM_Event msg_;
};

class Init_ConnectTM_Event_info
{
public:
  Init_ConnectTM_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConnectTM_Event_request info(::tm_msgs::srv::ConnectTM_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ConnectTM_Event_request(msg_);
  }

private:
  ::tm_msgs::srv::ConnectTM_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_msgs::srv::ConnectTM_Event>()
{
  return tm_msgs::srv::builder::Init_ConnectTM_Event_info();
}

}  // namespace tm_msgs

#endif  // TM_MSGS__SRV__DETAIL__CONNECT_TM__BUILDER_HPP_
