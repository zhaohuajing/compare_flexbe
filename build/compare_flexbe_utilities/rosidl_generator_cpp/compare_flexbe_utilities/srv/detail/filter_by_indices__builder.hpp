// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from compare_flexbe_utilities:srv/FilterByIndices.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "compare_flexbe_utilities/srv/filter_by_indices.hpp"


#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__FILTER_BY_INDICES__BUILDER_HPP_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__FILTER_BY_INDICES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "compare_flexbe_utilities/srv/detail/filter_by_indices__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace compare_flexbe_utilities
{

namespace srv
{

namespace builder
{

class Init_FilterByIndices_Request_target_indices
{
public:
  explicit Init_FilterByIndices_Request_target_indices(::compare_flexbe_utilities::srv::FilterByIndices_Request & msg)
  : msg_(msg)
  {}
  ::compare_flexbe_utilities::srv::FilterByIndices_Request target_indices(::compare_flexbe_utilities::srv::FilterByIndices_Request::_target_indices_type arg)
  {
    msg_.target_indices = std::move(arg);
    return std::move(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::FilterByIndices_Request msg_;
};

class Init_FilterByIndices_Request_input_cloud
{
public:
  Init_FilterByIndices_Request_input_cloud()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FilterByIndices_Request_target_indices input_cloud(::compare_flexbe_utilities::srv::FilterByIndices_Request::_input_cloud_type arg)
  {
    msg_.input_cloud = std::move(arg);
    return Init_FilterByIndices_Request_target_indices(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::FilterByIndices_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::compare_flexbe_utilities::srv::FilterByIndices_Request>()
{
  return compare_flexbe_utilities::srv::builder::Init_FilterByIndices_Request_input_cloud();
}

}  // namespace compare_flexbe_utilities


namespace compare_flexbe_utilities
{

namespace srv
{

namespace builder
{

class Init_FilterByIndices_Response_filtered_cloud
{
public:
  Init_FilterByIndices_Response_filtered_cloud()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::compare_flexbe_utilities::srv::FilterByIndices_Response filtered_cloud(::compare_flexbe_utilities::srv::FilterByIndices_Response::_filtered_cloud_type arg)
  {
    msg_.filtered_cloud = std::move(arg);
    return std::move(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::FilterByIndices_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::compare_flexbe_utilities::srv::FilterByIndices_Response>()
{
  return compare_flexbe_utilities::srv::builder::Init_FilterByIndices_Response_filtered_cloud();
}

}  // namespace compare_flexbe_utilities


namespace compare_flexbe_utilities
{

namespace srv
{

namespace builder
{

class Init_FilterByIndices_Event_response
{
public:
  explicit Init_FilterByIndices_Event_response(::compare_flexbe_utilities::srv::FilterByIndices_Event & msg)
  : msg_(msg)
  {}
  ::compare_flexbe_utilities::srv::FilterByIndices_Event response(::compare_flexbe_utilities::srv::FilterByIndices_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::FilterByIndices_Event msg_;
};

class Init_FilterByIndices_Event_request
{
public:
  explicit Init_FilterByIndices_Event_request(::compare_flexbe_utilities::srv::FilterByIndices_Event & msg)
  : msg_(msg)
  {}
  Init_FilterByIndices_Event_response request(::compare_flexbe_utilities::srv::FilterByIndices_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_FilterByIndices_Event_response(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::FilterByIndices_Event msg_;
};

class Init_FilterByIndices_Event_info
{
public:
  Init_FilterByIndices_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FilterByIndices_Event_request info(::compare_flexbe_utilities::srv::FilterByIndices_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_FilterByIndices_Event_request(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::FilterByIndices_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::compare_flexbe_utilities::srv::FilterByIndices_Event>()
{
  return compare_flexbe_utilities::srv::builder::Init_FilterByIndices_Event_info();
}

}  // namespace compare_flexbe_utilities

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__FILTER_BY_INDICES__BUILDER_HPP_
