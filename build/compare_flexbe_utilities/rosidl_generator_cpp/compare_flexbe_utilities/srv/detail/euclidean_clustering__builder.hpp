// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from compare_flexbe_utilities:srv/EuclideanClustering.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "compare_flexbe_utilities/srv/euclidean_clustering.hpp"


#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__EUCLIDEAN_CLUSTERING__BUILDER_HPP_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__EUCLIDEAN_CLUSTERING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "compare_flexbe_utilities/srv/detail/euclidean_clustering__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace compare_flexbe_utilities
{

namespace srv
{

namespace builder
{

class Init_EuclideanClustering_Request_max_cluster_size
{
public:
  explicit Init_EuclideanClustering_Request_max_cluster_size(::compare_flexbe_utilities::srv::EuclideanClustering_Request & msg)
  : msg_(msg)
  {}
  ::compare_flexbe_utilities::srv::EuclideanClustering_Request max_cluster_size(::compare_flexbe_utilities::srv::EuclideanClustering_Request::_max_cluster_size_type arg)
  {
    msg_.max_cluster_size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::EuclideanClustering_Request msg_;
};

class Init_EuclideanClustering_Request_min_cluster_size
{
public:
  explicit Init_EuclideanClustering_Request_min_cluster_size(::compare_flexbe_utilities::srv::EuclideanClustering_Request & msg)
  : msg_(msg)
  {}
  Init_EuclideanClustering_Request_max_cluster_size min_cluster_size(::compare_flexbe_utilities::srv::EuclideanClustering_Request::_min_cluster_size_type arg)
  {
    msg_.min_cluster_size = std::move(arg);
    return Init_EuclideanClustering_Request_max_cluster_size(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::EuclideanClustering_Request msg_;
};

class Init_EuclideanClustering_Request_cluster_tolerance
{
public:
  explicit Init_EuclideanClustering_Request_cluster_tolerance(::compare_flexbe_utilities::srv::EuclideanClustering_Request & msg)
  : msg_(msg)
  {}
  Init_EuclideanClustering_Request_min_cluster_size cluster_tolerance(::compare_flexbe_utilities::srv::EuclideanClustering_Request::_cluster_tolerance_type arg)
  {
    msg_.cluster_tolerance = std::move(arg);
    return Init_EuclideanClustering_Request_min_cluster_size(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::EuclideanClustering_Request msg_;
};

class Init_EuclideanClustering_Request_camera_pose
{
public:
  explicit Init_EuclideanClustering_Request_camera_pose(::compare_flexbe_utilities::srv::EuclideanClustering_Request & msg)
  : msg_(msg)
  {}
  Init_EuclideanClustering_Request_cluster_tolerance camera_pose(::compare_flexbe_utilities::srv::EuclideanClustering_Request::_camera_pose_type arg)
  {
    msg_.camera_pose = std::move(arg);
    return Init_EuclideanClustering_Request_cluster_tolerance(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::EuclideanClustering_Request msg_;
};

class Init_EuclideanClustering_Request_input
{
public:
  Init_EuclideanClustering_Request_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EuclideanClustering_Request_camera_pose input(::compare_flexbe_utilities::srv::EuclideanClustering_Request::_input_type arg)
  {
    msg_.input = std::move(arg);
    return Init_EuclideanClustering_Request_camera_pose(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::EuclideanClustering_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::compare_flexbe_utilities::srv::EuclideanClustering_Request>()
{
  return compare_flexbe_utilities::srv::builder::Init_EuclideanClustering_Request_input();
}

}  // namespace compare_flexbe_utilities


namespace compare_flexbe_utilities
{

namespace srv
{

namespace builder
{

class Init_EuclideanClustering_Response_obstacle_cluster_indices
{
public:
  explicit Init_EuclideanClustering_Response_obstacle_cluster_indices(::compare_flexbe_utilities::srv::EuclideanClustering_Response & msg)
  : msg_(msg)
  {}
  ::compare_flexbe_utilities::srv::EuclideanClustering_Response obstacle_cluster_indices(::compare_flexbe_utilities::srv::EuclideanClustering_Response::_obstacle_cluster_indices_type arg)
  {
    msg_.obstacle_cluster_indices = std::move(arg);
    return std::move(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::EuclideanClustering_Response msg_;
};

class Init_EuclideanClustering_Response_target_cluster_indices
{
public:
  Init_EuclideanClustering_Response_target_cluster_indices()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EuclideanClustering_Response_obstacle_cluster_indices target_cluster_indices(::compare_flexbe_utilities::srv::EuclideanClustering_Response::_target_cluster_indices_type arg)
  {
    msg_.target_cluster_indices = std::move(arg);
    return Init_EuclideanClustering_Response_obstacle_cluster_indices(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::EuclideanClustering_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::compare_flexbe_utilities::srv::EuclideanClustering_Response>()
{
  return compare_flexbe_utilities::srv::builder::Init_EuclideanClustering_Response_target_cluster_indices();
}

}  // namespace compare_flexbe_utilities


namespace compare_flexbe_utilities
{

namespace srv
{

namespace builder
{

class Init_EuclideanClustering_Event_response
{
public:
  explicit Init_EuclideanClustering_Event_response(::compare_flexbe_utilities::srv::EuclideanClustering_Event & msg)
  : msg_(msg)
  {}
  ::compare_flexbe_utilities::srv::EuclideanClustering_Event response(::compare_flexbe_utilities::srv::EuclideanClustering_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::EuclideanClustering_Event msg_;
};

class Init_EuclideanClustering_Event_request
{
public:
  explicit Init_EuclideanClustering_Event_request(::compare_flexbe_utilities::srv::EuclideanClustering_Event & msg)
  : msg_(msg)
  {}
  Init_EuclideanClustering_Event_response request(::compare_flexbe_utilities::srv::EuclideanClustering_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_EuclideanClustering_Event_response(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::EuclideanClustering_Event msg_;
};

class Init_EuclideanClustering_Event_info
{
public:
  Init_EuclideanClustering_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EuclideanClustering_Event_request info(::compare_flexbe_utilities::srv::EuclideanClustering_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_EuclideanClustering_Event_request(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::EuclideanClustering_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::compare_flexbe_utilities::srv::EuclideanClustering_Event>()
{
  return compare_flexbe_utilities::srv::builder::Init_EuclideanClustering_Event_info();
}

}  // namespace compare_flexbe_utilities

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__EUCLIDEAN_CLUSTERING__BUILDER_HPP_
