// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from compare_flexbe_utilities:srv/MoveToPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "compare_flexbe_utilities/srv/move_to_pose.hpp"


#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__MOVE_TO_POSE__BUILDER_HPP_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__MOVE_TO_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "compare_flexbe_utilities/srv/detail/move_to_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace compare_flexbe_utilities
{

namespace srv
{

namespace builder
{

class Init_MoveToPose_Request_target_pose
{
public:
  Init_MoveToPose_Request_target_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::compare_flexbe_utilities::srv::MoveToPose_Request target_pose(::compare_flexbe_utilities::srv::MoveToPose_Request::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::MoveToPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::compare_flexbe_utilities::srv::MoveToPose_Request>()
{
  return compare_flexbe_utilities::srv::builder::Init_MoveToPose_Request_target_pose();
}

}  // namespace compare_flexbe_utilities


namespace compare_flexbe_utilities
{

namespace srv
{

namespace builder
{

class Init_MoveToPose_Response_success
{
public:
  Init_MoveToPose_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::compare_flexbe_utilities::srv::MoveToPose_Response success(::compare_flexbe_utilities::srv::MoveToPose_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::MoveToPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::compare_flexbe_utilities::srv::MoveToPose_Response>()
{
  return compare_flexbe_utilities::srv::builder::Init_MoveToPose_Response_success();
}

}  // namespace compare_flexbe_utilities


namespace compare_flexbe_utilities
{

namespace srv
{

namespace builder
{

class Init_MoveToPose_Event_response
{
public:
  explicit Init_MoveToPose_Event_response(::compare_flexbe_utilities::srv::MoveToPose_Event & msg)
  : msg_(msg)
  {}
  ::compare_flexbe_utilities::srv::MoveToPose_Event response(::compare_flexbe_utilities::srv::MoveToPose_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::MoveToPose_Event msg_;
};

class Init_MoveToPose_Event_request
{
public:
  explicit Init_MoveToPose_Event_request(::compare_flexbe_utilities::srv::MoveToPose_Event & msg)
  : msg_(msg)
  {}
  Init_MoveToPose_Event_response request(::compare_flexbe_utilities::srv::MoveToPose_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MoveToPose_Event_response(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::MoveToPose_Event msg_;
};

class Init_MoveToPose_Event_info
{
public:
  Init_MoveToPose_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToPose_Event_request info(::compare_flexbe_utilities::srv::MoveToPose_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MoveToPose_Event_request(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::MoveToPose_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::compare_flexbe_utilities::srv::MoveToPose_Event>()
{
  return compare_flexbe_utilities::srv::builder::Init_MoveToPose_Event_info();
}

}  // namespace compare_flexbe_utilities

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__MOVE_TO_POSE__BUILDER_HPP_
