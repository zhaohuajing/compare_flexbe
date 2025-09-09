// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from compare_flexbe_utilities:srv/PlaneSegmentation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "compare_flexbe_utilities/srv/plane_segmentation.hpp"


#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__PLANE_SEGMENTATION__BUILDER_HPP_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__PLANE_SEGMENTATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "compare_flexbe_utilities/srv/detail/plane_segmentation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace compare_flexbe_utilities
{

namespace srv
{

namespace builder
{

class Init_PlaneSegmentation_Request_max_iterations
{
public:
  explicit Init_PlaneSegmentation_Request_max_iterations(::compare_flexbe_utilities::srv::PlaneSegmentation_Request & msg)
  : msg_(msg)
  {}
  ::compare_flexbe_utilities::srv::PlaneSegmentation_Request max_iterations(::compare_flexbe_utilities::srv::PlaneSegmentation_Request::_max_iterations_type arg)
  {
    msg_.max_iterations = std::move(arg);
    return std::move(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::PlaneSegmentation_Request msg_;
};

class Init_PlaneSegmentation_Request_distance_threshold
{
public:
  explicit Init_PlaneSegmentation_Request_distance_threshold(::compare_flexbe_utilities::srv::PlaneSegmentation_Request & msg)
  : msg_(msg)
  {}
  Init_PlaneSegmentation_Request_max_iterations distance_threshold(::compare_flexbe_utilities::srv::PlaneSegmentation_Request::_distance_threshold_type arg)
  {
    msg_.distance_threshold = std::move(arg);
    return Init_PlaneSegmentation_Request_max_iterations(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::PlaneSegmentation_Request msg_;
};

class Init_PlaneSegmentation_Request_leaf_size
{
public:
  explicit Init_PlaneSegmentation_Request_leaf_size(::compare_flexbe_utilities::srv::PlaneSegmentation_Request & msg)
  : msg_(msg)
  {}
  Init_PlaneSegmentation_Request_distance_threshold leaf_size(::compare_flexbe_utilities::srv::PlaneSegmentation_Request::_leaf_size_type arg)
  {
    msg_.leaf_size = std::move(arg);
    return Init_PlaneSegmentation_Request_distance_threshold(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::PlaneSegmentation_Request msg_;
};

class Init_PlaneSegmentation_Request_use_voxel
{
public:
  explicit Init_PlaneSegmentation_Request_use_voxel(::compare_flexbe_utilities::srv::PlaneSegmentation_Request & msg)
  : msg_(msg)
  {}
  Init_PlaneSegmentation_Request_leaf_size use_voxel(::compare_flexbe_utilities::srv::PlaneSegmentation_Request::_use_voxel_type arg)
  {
    msg_.use_voxel = std::move(arg);
    return Init_PlaneSegmentation_Request_leaf_size(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::PlaneSegmentation_Request msg_;
};

class Init_PlaneSegmentation_Request_input
{
public:
  Init_PlaneSegmentation_Request_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlaneSegmentation_Request_use_voxel input(::compare_flexbe_utilities::srv::PlaneSegmentation_Request::_input_type arg)
  {
    msg_.input = std::move(arg);
    return Init_PlaneSegmentation_Request_use_voxel(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::PlaneSegmentation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::compare_flexbe_utilities::srv::PlaneSegmentation_Request>()
{
  return compare_flexbe_utilities::srv::builder::Init_PlaneSegmentation_Request_input();
}

}  // namespace compare_flexbe_utilities


namespace compare_flexbe_utilities
{

namespace srv
{

namespace builder
{

class Init_PlaneSegmentation_Response_inlier_count
{
public:
  explicit Init_PlaneSegmentation_Response_inlier_count(::compare_flexbe_utilities::srv::PlaneSegmentation_Response & msg)
  : msg_(msg)
  {}
  ::compare_flexbe_utilities::srv::PlaneSegmentation_Response inlier_count(::compare_flexbe_utilities::srv::PlaneSegmentation_Response::_inlier_count_type arg)
  {
    msg_.inlier_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::PlaneSegmentation_Response msg_;
};

class Init_PlaneSegmentation_Response_plane_coefficients
{
public:
  explicit Init_PlaneSegmentation_Response_plane_coefficients(::compare_flexbe_utilities::srv::PlaneSegmentation_Response & msg)
  : msg_(msg)
  {}
  Init_PlaneSegmentation_Response_inlier_count plane_coefficients(::compare_flexbe_utilities::srv::PlaneSegmentation_Response::_plane_coefficients_type arg)
  {
    msg_.plane_coefficients = std::move(arg);
    return Init_PlaneSegmentation_Response_inlier_count(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::PlaneSegmentation_Response msg_;
};

class Init_PlaneSegmentation_Response_plane_indices
{
public:
  explicit Init_PlaneSegmentation_Response_plane_indices(::compare_flexbe_utilities::srv::PlaneSegmentation_Response & msg)
  : msg_(msg)
  {}
  Init_PlaneSegmentation_Response_plane_coefficients plane_indices(::compare_flexbe_utilities::srv::PlaneSegmentation_Response::_plane_indices_type arg)
  {
    msg_.plane_indices = std::move(arg);
    return Init_PlaneSegmentation_Response_plane_coefficients(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::PlaneSegmentation_Response msg_;
};

class Init_PlaneSegmentation_Response_without_plane
{
public:
  Init_PlaneSegmentation_Response_without_plane()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlaneSegmentation_Response_plane_indices without_plane(::compare_flexbe_utilities::srv::PlaneSegmentation_Response::_without_plane_type arg)
  {
    msg_.without_plane = std::move(arg);
    return Init_PlaneSegmentation_Response_plane_indices(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::PlaneSegmentation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::compare_flexbe_utilities::srv::PlaneSegmentation_Response>()
{
  return compare_flexbe_utilities::srv::builder::Init_PlaneSegmentation_Response_without_plane();
}

}  // namespace compare_flexbe_utilities


namespace compare_flexbe_utilities
{

namespace srv
{

namespace builder
{

class Init_PlaneSegmentation_Event_response
{
public:
  explicit Init_PlaneSegmentation_Event_response(::compare_flexbe_utilities::srv::PlaneSegmentation_Event & msg)
  : msg_(msg)
  {}
  ::compare_flexbe_utilities::srv::PlaneSegmentation_Event response(::compare_flexbe_utilities::srv::PlaneSegmentation_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::PlaneSegmentation_Event msg_;
};

class Init_PlaneSegmentation_Event_request
{
public:
  explicit Init_PlaneSegmentation_Event_request(::compare_flexbe_utilities::srv::PlaneSegmentation_Event & msg)
  : msg_(msg)
  {}
  Init_PlaneSegmentation_Event_response request(::compare_flexbe_utilities::srv::PlaneSegmentation_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PlaneSegmentation_Event_response(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::PlaneSegmentation_Event msg_;
};

class Init_PlaneSegmentation_Event_info
{
public:
  Init_PlaneSegmentation_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlaneSegmentation_Event_request info(::compare_flexbe_utilities::srv::PlaneSegmentation_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_PlaneSegmentation_Event_request(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::PlaneSegmentation_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::compare_flexbe_utilities::srv::PlaneSegmentation_Event>()
{
  return compare_flexbe_utilities::srv::builder::Init_PlaneSegmentation_Event_info();
}

}  // namespace compare_flexbe_utilities

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__PLANE_SEGMENTATION__BUILDER_HPP_
