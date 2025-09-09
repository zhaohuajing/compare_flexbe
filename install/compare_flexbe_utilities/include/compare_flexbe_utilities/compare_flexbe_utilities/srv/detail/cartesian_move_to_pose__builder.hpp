// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from compare_flexbe_utilities:srv/CartesianMoveToPose.idl
// generated code does not contain a copyright notice

#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__CARTESIAN_MOVE_TO_POSE__BUILDER_HPP_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__CARTESIAN_MOVE_TO_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "compare_flexbe_utilities/srv/detail/cartesian_move_to_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace compare_flexbe_utilities
{

namespace srv
{

namespace builder
{

class Init_CartesianMoveToPose_Request_waypoints
{
public:
  Init_CartesianMoveToPose_Request_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::compare_flexbe_utilities::srv::CartesianMoveToPose_Request waypoints(::compare_flexbe_utilities::srv::CartesianMoveToPose_Request::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::CartesianMoveToPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::compare_flexbe_utilities::srv::CartesianMoveToPose_Request>()
{
  return compare_flexbe_utilities::srv::builder::Init_CartesianMoveToPose_Request_waypoints();
}

}  // namespace compare_flexbe_utilities


namespace compare_flexbe_utilities
{

namespace srv
{

namespace builder
{

class Init_CartesianMoveToPose_Response_percentage_planned
{
public:
  explicit Init_CartesianMoveToPose_Response_percentage_planned(::compare_flexbe_utilities::srv::CartesianMoveToPose_Response & msg)
  : msg_(msg)
  {}
  ::compare_flexbe_utilities::srv::CartesianMoveToPose_Response percentage_planned(::compare_flexbe_utilities::srv::CartesianMoveToPose_Response::_percentage_planned_type arg)
  {
    msg_.percentage_planned = std::move(arg);
    return std::move(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::CartesianMoveToPose_Response msg_;
};

class Init_CartesianMoveToPose_Response_success
{
public:
  Init_CartesianMoveToPose_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CartesianMoveToPose_Response_percentage_planned success(::compare_flexbe_utilities::srv::CartesianMoveToPose_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CartesianMoveToPose_Response_percentage_planned(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::CartesianMoveToPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::compare_flexbe_utilities::srv::CartesianMoveToPose_Response>()
{
  return compare_flexbe_utilities::srv::builder::Init_CartesianMoveToPose_Response_success();
}

}  // namespace compare_flexbe_utilities

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__CARTESIAN_MOVE_TO_POSE__BUILDER_HPP_
