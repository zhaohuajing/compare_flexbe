// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flexbe_msgs:msg/StateMapMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "flexbe_msgs/msg/state_map_msg.hpp"


#ifndef FLEXBE_MSGS__MSG__DETAIL__STATE_MAP_MSG__BUILDER_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__STATE_MAP_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flexbe_msgs/msg/detail/state_map_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flexbe_msgs
{

namespace msg
{

namespace builder
{

class Init_StateMapMsg_state_paths
{
public:
  explicit Init_StateMapMsg_state_paths(::flexbe_msgs::msg::StateMapMsg & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::msg::StateMapMsg state_paths(::flexbe_msgs::msg::StateMapMsg::_state_paths_type arg)
  {
    msg_.state_paths = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::msg::StateMapMsg msg_;
};

class Init_StateMapMsg_state_ids
{
public:
  explicit Init_StateMapMsg_state_ids(::flexbe_msgs::msg::StateMapMsg & msg)
  : msg_(msg)
  {}
  Init_StateMapMsg_state_paths state_ids(::flexbe_msgs::msg::StateMapMsg::_state_ids_type arg)
  {
    msg_.state_ids = std::move(arg);
    return Init_StateMapMsg_state_paths(msg_);
  }

private:
  ::flexbe_msgs::msg::StateMapMsg msg_;
};

class Init_StateMapMsg_behavior_id
{
public:
  Init_StateMapMsg_behavior_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateMapMsg_state_ids behavior_id(::flexbe_msgs::msg::StateMapMsg::_behavior_id_type arg)
  {
    msg_.behavior_id = std::move(arg);
    return Init_StateMapMsg_state_ids(msg_);
  }

private:
  ::flexbe_msgs::msg::StateMapMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::msg::StateMapMsg>()
{
  return flexbe_msgs::msg::builder::Init_StateMapMsg_behavior_id();
}

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__STATE_MAP_MSG__BUILDER_HPP_
