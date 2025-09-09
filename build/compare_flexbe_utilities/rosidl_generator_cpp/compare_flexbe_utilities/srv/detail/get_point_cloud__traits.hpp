// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from compare_flexbe_utilities:srv/GetPointCloud.idl
// generated code does not contain a copyright notice

#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__GET_POINT_CLOUD__TRAITS_HPP_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__GET_POINT_CLOUD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "compare_flexbe_utilities/srv/detail/get_point_cloud__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace compare_flexbe_utilities
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPointCloud_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: camera_topic
  {
    out << "camera_topic: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_topic, out);
    out << ", ";
  }

  // member: target_frame
  {
    out << "target_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.target_frame, out);
    out << ", ";
  }

  // member: timeout_sec
  {
    out << "timeout_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_sec, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPointCloud_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: camera_topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_topic: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_topic, out);
    out << "\n";
  }

  // member: target_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.target_frame, out);
    out << "\n";
  }

  // member: timeout_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_sec, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPointCloud_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace compare_flexbe_utilities

namespace rosidl_generator_traits
{

[[deprecated("use compare_flexbe_utilities::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const compare_flexbe_utilities::srv::GetPointCloud_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  compare_flexbe_utilities::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use compare_flexbe_utilities::srv::to_yaml() instead")]]
inline std::string to_yaml(const compare_flexbe_utilities::srv::GetPointCloud_Request & msg)
{
  return compare_flexbe_utilities::srv::to_yaml(msg);
}

template<>
inline const char * data_type<compare_flexbe_utilities::srv::GetPointCloud_Request>()
{
  return "compare_flexbe_utilities::srv::GetPointCloud_Request";
}

template<>
inline const char * name<compare_flexbe_utilities::srv::GetPointCloud_Request>()
{
  return "compare_flexbe_utilities/srv/GetPointCloud_Request";
}

template<>
struct has_fixed_size<compare_flexbe_utilities::srv::GetPointCloud_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<compare_flexbe_utilities::srv::GetPointCloud_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<compare_flexbe_utilities::srv::GetPointCloud_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'cloud_out'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"
// Member 'camera_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace compare_flexbe_utilities
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPointCloud_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: cloud_out
  {
    out << "cloud_out: ";
    to_flow_style_yaml(msg.cloud_out, out);
    out << ", ";
  }

  // member: camera_pose
  {
    out << "camera_pose: ";
    to_flow_style_yaml(msg.camera_pose, out);
    out << ", ";
  }

  // member: cloud_frame
  {
    out << "cloud_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.cloud_frame, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPointCloud_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cloud_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cloud_out:\n";
    to_block_style_yaml(msg.cloud_out, out, indentation + 2);
  }

  // member: camera_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_pose:\n";
    to_block_style_yaml(msg.camera_pose, out, indentation + 2);
  }

  // member: cloud_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cloud_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.cloud_frame, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPointCloud_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace compare_flexbe_utilities

namespace rosidl_generator_traits
{

[[deprecated("use compare_flexbe_utilities::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const compare_flexbe_utilities::srv::GetPointCloud_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  compare_flexbe_utilities::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use compare_flexbe_utilities::srv::to_yaml() instead")]]
inline std::string to_yaml(const compare_flexbe_utilities::srv::GetPointCloud_Response & msg)
{
  return compare_flexbe_utilities::srv::to_yaml(msg);
}

template<>
inline const char * data_type<compare_flexbe_utilities::srv::GetPointCloud_Response>()
{
  return "compare_flexbe_utilities::srv::GetPointCloud_Response";
}

template<>
inline const char * name<compare_flexbe_utilities::srv::GetPointCloud_Response>()
{
  return "compare_flexbe_utilities/srv/GetPointCloud_Response";
}

template<>
struct has_fixed_size<compare_flexbe_utilities::srv::GetPointCloud_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<compare_flexbe_utilities::srv::GetPointCloud_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<compare_flexbe_utilities::srv::GetPointCloud_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<compare_flexbe_utilities::srv::GetPointCloud>()
{
  return "compare_flexbe_utilities::srv::GetPointCloud";
}

template<>
inline const char * name<compare_flexbe_utilities::srv::GetPointCloud>()
{
  return "compare_flexbe_utilities/srv/GetPointCloud";
}

template<>
struct has_fixed_size<compare_flexbe_utilities::srv::GetPointCloud>
  : std::integral_constant<
    bool,
    has_fixed_size<compare_flexbe_utilities::srv::GetPointCloud_Request>::value &&
    has_fixed_size<compare_flexbe_utilities::srv::GetPointCloud_Response>::value
  >
{
};

template<>
struct has_bounded_size<compare_flexbe_utilities::srv::GetPointCloud>
  : std::integral_constant<
    bool,
    has_bounded_size<compare_flexbe_utilities::srv::GetPointCloud_Request>::value &&
    has_bounded_size<compare_flexbe_utilities::srv::GetPointCloud_Response>::value
  >
{
};

template<>
struct is_service<compare_flexbe_utilities::srv::GetPointCloud>
  : std::true_type
{
};

template<>
struct is_service_request<compare_flexbe_utilities::srv::GetPointCloud_Request>
  : std::true_type
{
};

template<>
struct is_service_response<compare_flexbe_utilities::srv::GetPointCloud_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__GET_POINT_CLOUD__TRAITS_HPP_
