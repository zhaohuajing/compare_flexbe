// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from compare_flexbe_utilities:srv/MoveToNamedPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "compare_flexbe_utilities/srv/move_to_named_pose.hpp"


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


namespace compare_flexbe_utilities
{

namespace srv
{

namespace builder
{

class Init_MoveToNamedPose_Event_response
{
public:
  explicit Init_MoveToNamedPose_Event_response(::compare_flexbe_utilities::srv::MoveToNamedPose_Event & msg)
  : msg_(msg)
  {}
  ::compare_flexbe_utilities::srv::MoveToNamedPose_Event response(::compare_flexbe_utilities::srv::MoveToNamedPose_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::MoveToNamedPose_Event msg_;
};

class Init_MoveToNamedPose_Event_request
{
public:
  explicit Init_MoveToNamedPose_Event_request(::compare_flexbe_utilities::srv::MoveToNamedPose_Event & msg)
  : msg_(msg)
  {}
  Init_MoveToNamedPose_Event_response request(::compare_flexbe_utilities::srv::MoveToNamedPose_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MoveToNamedPose_Event_response(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::MoveToNamedPose_Event msg_;
};

class Init_MoveToNamedPose_Event_info
{
public:
  Init_MoveToNamedPose_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToNamedPose_Event_request info(::compare_flexbe_utilities::srv::MoveToNamedPose_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MoveToNamedPose_Event_request(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::MoveToNamedPose_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::compare_flexbe_utilities::srv::MoveToNamedPose_Event>()
{
  return compare_flexbe_utilities::srv::builder::Init_MoveToNamedPose_Event_info();
}

}  // namespace compare_flexbe_utilities

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__MOVE_TO_NAMED_POSE__BUILDER_HPP_
