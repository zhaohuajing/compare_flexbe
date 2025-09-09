// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from compare_flexbe_utilities:srv/MoveToNamedPose.idl
// generated code does not contain a copyright notice

#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__MOVE_TO_NAMED_POSE__BUILDER_HPP_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__MOVE_TO_NAMED_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "compare_flexbe_utilities/srv/detail/move_to_named_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace compare_flexbe_utilities
{

namespace srv
{

namespace builder
{

class Init_MoveToNamedPose_Request_target_name
{
public:
  Init_MoveToNamedPose_Request_target_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::compare_flexbe_utilities::srv::MoveToNamedPose_Request target_name(::compare_flexbe_utilities::srv::MoveToNamedPose_Request::_target_name_type arg)
  {
    msg_.target_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::MoveToNamedPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::compare_flexbe_utilities::srv::MoveToNamedPose_Request>()
{
  return compare_flexbe_utilities::srv::builder::Init_MoveToNamedPose_Request_target_name();
}

}  // namespace compare_flexbe_utilities


namespace compare_flexbe_utilities
{

namespace srv
{

namespace builder
{

class Init_MoveToNamedPose_Response_success
{
public:
  Init_MoveToNamedPose_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::compare_flexbe_utilities::srv::MoveToNamedPose_Response success(::compare_flexbe_utilities::srv::MoveToNamedPose_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::MoveToNamedPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::compare_flexbe_utilities::srv::MoveToNamedPose_Response>()
{
  return compare_flexbe_utilities::srv::builder::Init_MoveToNamedPose_Response_success();
}

}  // namespace compare_flexbe_utilities

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__MOVE_TO_NAMED_POSE__BUILDER_HPP_
