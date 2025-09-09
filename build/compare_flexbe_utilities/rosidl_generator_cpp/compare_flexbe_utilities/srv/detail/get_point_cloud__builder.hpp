// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from compare_flexbe_utilities:srv/GetPointCloud.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "compare_flexbe_utilities/srv/get_point_cloud.hpp"


#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__GET_POINT_CLOUD__BUILDER_HPP_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__GET_POINT_CLOUD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "compare_flexbe_utilities/srv/detail/get_point_cloud__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace compare_flexbe_utilities
{

namespace srv
{

namespace builder
{

class Init_GetPointCloud_Request_timeout_sec
{
public:
  explicit Init_GetPointCloud_Request_timeout_sec(::compare_flexbe_utilities::srv::GetPointCloud_Request & msg)
  : msg_(msg)
  {}
  ::compare_flexbe_utilities::srv::GetPointCloud_Request timeout_sec(::compare_flexbe_utilities::srv::GetPointCloud_Request::_timeout_sec_type arg)
  {
    msg_.timeout_sec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::GetPointCloud_Request msg_;
};

class Init_GetPointCloud_Request_target_frame
{
public:
  explicit Init_GetPointCloud_Request_target_frame(::compare_flexbe_utilities::srv::GetPointCloud_Request & msg)
  : msg_(msg)
  {}
  Init_GetPointCloud_Request_timeout_sec target_frame(::compare_flexbe_utilities::srv::GetPointCloud_Request::_target_frame_type arg)
  {
    msg_.target_frame = std::move(arg);
    return Init_GetPointCloud_Request_timeout_sec(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::GetPointCloud_Request msg_;
};

class Init_GetPointCloud_Request_camera_topic
{
public:
  Init_GetPointCloud_Request_camera_topic()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPointCloud_Request_target_frame camera_topic(::compare_flexbe_utilities::srv::GetPointCloud_Request::_camera_topic_type arg)
  {
    msg_.camera_topic = std::move(arg);
    return Init_GetPointCloud_Request_target_frame(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::GetPointCloud_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::compare_flexbe_utilities::srv::GetPointCloud_Request>()
{
  return compare_flexbe_utilities::srv::builder::Init_GetPointCloud_Request_camera_topic();
}

}  // namespace compare_flexbe_utilities


namespace compare_flexbe_utilities
{

namespace srv
{

namespace builder
{

class Init_GetPointCloud_Response_message
{
public:
  explicit Init_GetPointCloud_Response_message(::compare_flexbe_utilities::srv::GetPointCloud_Response & msg)
  : msg_(msg)
  {}
  ::compare_flexbe_utilities::srv::GetPointCloud_Response message(::compare_flexbe_utilities::srv::GetPointCloud_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::GetPointCloud_Response msg_;
};

class Init_GetPointCloud_Response_success
{
public:
  explicit Init_GetPointCloud_Response_success(::compare_flexbe_utilities::srv::GetPointCloud_Response & msg)
  : msg_(msg)
  {}
  Init_GetPointCloud_Response_message success(::compare_flexbe_utilities::srv::GetPointCloud_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetPointCloud_Response_message(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::GetPointCloud_Response msg_;
};

class Init_GetPointCloud_Response_cloud_frame
{
public:
  explicit Init_GetPointCloud_Response_cloud_frame(::compare_flexbe_utilities::srv::GetPointCloud_Response & msg)
  : msg_(msg)
  {}
  Init_GetPointCloud_Response_success cloud_frame(::compare_flexbe_utilities::srv::GetPointCloud_Response::_cloud_frame_type arg)
  {
    msg_.cloud_frame = std::move(arg);
    return Init_GetPointCloud_Response_success(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::GetPointCloud_Response msg_;
};

class Init_GetPointCloud_Response_camera_pose
{
public:
  explicit Init_GetPointCloud_Response_camera_pose(::compare_flexbe_utilities::srv::GetPointCloud_Response & msg)
  : msg_(msg)
  {}
  Init_GetPointCloud_Response_cloud_frame camera_pose(::compare_flexbe_utilities::srv::GetPointCloud_Response::_camera_pose_type arg)
  {
    msg_.camera_pose = std::move(arg);
    return Init_GetPointCloud_Response_cloud_frame(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::GetPointCloud_Response msg_;
};

class Init_GetPointCloud_Response_cloud_out
{
public:
  Init_GetPointCloud_Response_cloud_out()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPointCloud_Response_camera_pose cloud_out(::compare_flexbe_utilities::srv::GetPointCloud_Response::_cloud_out_type arg)
  {
    msg_.cloud_out = std::move(arg);
    return Init_GetPointCloud_Response_camera_pose(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::GetPointCloud_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::compare_flexbe_utilities::srv::GetPointCloud_Response>()
{
  return compare_flexbe_utilities::srv::builder::Init_GetPointCloud_Response_cloud_out();
}

}  // namespace compare_flexbe_utilities


namespace compare_flexbe_utilities
{

namespace srv
{

namespace builder
{

class Init_GetPointCloud_Event_response
{
public:
  explicit Init_GetPointCloud_Event_response(::compare_flexbe_utilities::srv::GetPointCloud_Event & msg)
  : msg_(msg)
  {}
  ::compare_flexbe_utilities::srv::GetPointCloud_Event response(::compare_flexbe_utilities::srv::GetPointCloud_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::GetPointCloud_Event msg_;
};

class Init_GetPointCloud_Event_request
{
public:
  explicit Init_GetPointCloud_Event_request(::compare_flexbe_utilities::srv::GetPointCloud_Event & msg)
  : msg_(msg)
  {}
  Init_GetPointCloud_Event_response request(::compare_flexbe_utilities::srv::GetPointCloud_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetPointCloud_Event_response(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::GetPointCloud_Event msg_;
};

class Init_GetPointCloud_Event_info
{
public:
  Init_GetPointCloud_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPointCloud_Event_request info(::compare_flexbe_utilities::srv::GetPointCloud_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetPointCloud_Event_request(msg_);
  }

private:
  ::compare_flexbe_utilities::srv::GetPointCloud_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::compare_flexbe_utilities::srv::GetPointCloud_Event>()
{
  return compare_flexbe_utilities::srv::builder::Init_GetPointCloud_Event_info();
}

}  // namespace compare_flexbe_utilities

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__GET_POINT_CLOUD__BUILDER_HPP_
