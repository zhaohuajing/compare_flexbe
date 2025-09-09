// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from compare_flexbe_utilities:srv/VoxelGridFilter.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "compare_flexbe_utilities/srv/voxel_grid_filter.hpp"


#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__VOXEL_GRID_FILTER__BUILDER_HPP_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__VOXEL_GRID_FILTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "compare_flexbe_utilities/srv/detail/voxel_grid_filter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace compare_flexbe_utilities
{

namespace srv
{

namespace builder
{

class Init_VoxelGridFilter_Request_input
{
public:
  Init_VoxelGridFilter_Request_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::compare_flexbe_utilities::srv::VoxelGridFilter_Request input(::compare_flexbe_utilities::srv::VoxelGridFilter_Request::_input_type arg)
  {
    msg_.input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::VoxelGridFilter_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::compare_flexbe_utilities::srv::VoxelGridFilter_Request>()
{
  return compare_flexbe_utilities::srv::builder::Init_VoxelGridFilter_Request_input();
}

}  // namespace compare_flexbe_utilities


namespace compare_flexbe_utilities
{

namespace srv
{

namespace builder
{

class Init_VoxelGridFilter_Response_filtered
{
public:
  Init_VoxelGridFilter_Response_filtered()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::compare_flexbe_utilities::srv::VoxelGridFilter_Response filtered(::compare_flexbe_utilities::srv::VoxelGridFilter_Response::_filtered_type arg)
  {
    msg_.filtered = std::move(arg);
    return std::move(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::VoxelGridFilter_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::compare_flexbe_utilities::srv::VoxelGridFilter_Response>()
{
  return compare_flexbe_utilities::srv::builder::Init_VoxelGridFilter_Response_filtered();
}

}  // namespace compare_flexbe_utilities


namespace compare_flexbe_utilities
{

namespace srv
{

namespace builder
{

class Init_VoxelGridFilter_Event_response
{
public:
  explicit Init_VoxelGridFilter_Event_response(::compare_flexbe_utilities::srv::VoxelGridFilter_Event & msg)
  : msg_(msg)
  {}
  ::compare_flexbe_utilities::srv::VoxelGridFilter_Event response(::compare_flexbe_utilities::srv::VoxelGridFilter_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::VoxelGridFilter_Event msg_;
};

class Init_VoxelGridFilter_Event_request
{
public:
  explicit Init_VoxelGridFilter_Event_request(::compare_flexbe_utilities::srv::VoxelGridFilter_Event & msg)
  : msg_(msg)
  {}
  Init_VoxelGridFilter_Event_response request(::compare_flexbe_utilities::srv::VoxelGridFilter_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_VoxelGridFilter_Event_response(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::VoxelGridFilter_Event msg_;
};

class Init_VoxelGridFilter_Event_info
{
public:
  Init_VoxelGridFilter_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VoxelGridFilter_Event_request info(::compare_flexbe_utilities::srv::VoxelGridFilter_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_VoxelGridFilter_Event_request(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::VoxelGridFilter_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::compare_flexbe_utilities::srv::VoxelGridFilter_Event>()
{
  return compare_flexbe_utilities::srv::builder::Init_VoxelGridFilter_Event_info();
}

}  // namespace compare_flexbe_utilities

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__VOXEL_GRID_FILTER__BUILDER_HPP_
