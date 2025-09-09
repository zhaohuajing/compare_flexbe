// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flexbe_msgs:msg/UserdataInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "flexbe_msgs/msg/userdata_info.hpp"


#ifndef FLEXBE_MSGS__MSG__DETAIL__USERDATA_INFO__BUILDER_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__USERDATA_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flexbe_msgs/msg/detail/userdata_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flexbe_msgs
{

namespace msg
{

namespace builder
{

class Init_UserdataInfo_data
{
public:
  explicit Init_UserdataInfo_data(::flexbe_msgs::msg::UserdataInfo & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::msg::UserdataInfo data(::flexbe_msgs::msg::UserdataInfo::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::msg::UserdataInfo msg_;
};

class Init_UserdataInfo_type
{
public:
  explicit Init_UserdataInfo_type(::flexbe_msgs::msg::UserdataInfo & msg)
  : msg_(msg)
  {}
  Init_UserdataInfo_data type(::flexbe_msgs::msg::UserdataInfo::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_UserdataInfo_data(msg_);
  }

private:
  ::flexbe_msgs::msg::UserdataInfo msg_;
};

class Init_UserdataInfo_key
{
public:
  explicit Init_UserdataInfo_key(::flexbe_msgs::msg::UserdataInfo & msg)
  : msg_(msg)
  {}
  Init_UserdataInfo_type key(::flexbe_msgs::msg::UserdataInfo::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_UserdataInfo_type(msg_);
  }

private:
  ::flexbe_msgs::msg::UserdataInfo msg_;
};

class Init_UserdataInfo_state
{
public:
  Init_UserdataInfo_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UserdataInfo_key state(::flexbe_msgs::msg::UserdataInfo::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_UserdataInfo_key(msg_);
  }

private:
  ::flexbe_msgs::msg::UserdataInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::msg::UserdataInfo>()
{
  return flexbe_msgs::msg::builder::Init_UserdataInfo_state();
}

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__USERDATA_INFO__BUILDER_HPP_
