// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from compare_flexbe_utilities:srv/EuclideanClustering.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "compare_flexbe_utilities/srv/euclidean_clustering.hpp"


#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__EUCLIDEAN_CLUSTERING__TRAITS_HPP_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__EUCLIDEAN_CLUSTERING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "compare_flexbe_utilities/srv/detail/euclidean_clustering__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'input'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"
// Member 'camera_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace compare_flexbe_utilities
{

namespace srv
{

inline void to_flow_style_yaml(
  const EuclideanClustering_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: input
  {
    out << "input: ";
    to_flow_style_yaml(msg.input, out);
    out << ", ";
  }

  // member: camera_pose
  {
    out << "camera_pose: ";
    to_flow_style_yaml(msg.camera_pose, out);
    out << ", ";
  }

  // member: cluster_tolerance
  {
    out << "cluster_tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.cluster_tolerance, out);
    out << ", ";
  }

  // member: min_cluster_size
  {
    out << "min_cluster_size: ";
    rosidl_generator_traits::value_to_yaml(msg.min_cluster_size, out);
    out << ", ";
  }

  // member: max_cluster_size
  {
    out << "max_cluster_size: ";
    rosidl_generator_traits::value_to_yaml(msg.max_cluster_size, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EuclideanClustering_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input:\n";
    to_block_style_yaml(msg.input, out, indentation + 2);
  }

  // member: camera_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_pose:\n";
    to_block_style_yaml(msg.camera_pose, out, indentation + 2);
  }

  // member: cluster_tolerance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster_tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.cluster_tolerance, out);
    out << "\n";
  }

  // member: min_cluster_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_cluster_size: ";
    rosidl_generator_traits::value_to_yaml(msg.min_cluster_size, out);
    out << "\n";
  }

  // member: max_cluster_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_cluster_size: ";
    rosidl_generator_traits::value_to_yaml(msg.max_cluster_size, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EuclideanClustering_Request & msg, bool use_flow_style = false)
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
  const compare_flexbe_utilities::srv::EuclideanClustering_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  compare_flexbe_utilities::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use compare_flexbe_utilities::srv::to_yaml() instead")]]
inline std::string to_yaml(const compare_flexbe_utilities::srv::EuclideanClustering_Request & msg)
{
  return compare_flexbe_utilities::srv::to_yaml(msg);
}

template<>
inline const char * data_type<compare_flexbe_utilities::srv::EuclideanClustering_Request>()
{
  return "compare_flexbe_utilities::srv::EuclideanClustering_Request";
}

template<>
inline const char * name<compare_flexbe_utilities::srv::EuclideanClustering_Request>()
{
  return "compare_flexbe_utilities/srv/EuclideanClustering_Request";
}

template<>
struct has_fixed_size<compare_flexbe_utilities::srv::EuclideanClustering_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value && has_fixed_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct has_bounded_size<compare_flexbe_utilities::srv::EuclideanClustering_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value && has_bounded_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct is_message<compare_flexbe_utilities::srv::EuclideanClustering_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'target_cluster_indices'
// Member 'obstacle_cluster_indices'
#include "pcl_msgs/msg/detail/point_indices__traits.hpp"

namespace compare_flexbe_utilities
{

namespace srv
{

inline void to_flow_style_yaml(
  const EuclideanClustering_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_cluster_indices
  {
    out << "target_cluster_indices: ";
    to_flow_style_yaml(msg.target_cluster_indices, out);
    out << ", ";
  }

  // member: obstacle_cluster_indices
  {
    if (msg.obstacle_cluster_indices.size() == 0) {
      out << "obstacle_cluster_indices: []";
    } else {
      out << "obstacle_cluster_indices: [";
      size_t pending_items = msg.obstacle_cluster_indices.size();
      for (auto item : msg.obstacle_cluster_indices) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EuclideanClustering_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_cluster_indices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_cluster_indices:\n";
    to_block_style_yaml(msg.target_cluster_indices, out, indentation + 2);
  }

  // member: obstacle_cluster_indices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.obstacle_cluster_indices.size() == 0) {
      out << "obstacle_cluster_indices: []\n";
    } else {
      out << "obstacle_cluster_indices:\n";
      for (auto item : msg.obstacle_cluster_indices) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EuclideanClustering_Response & msg, bool use_flow_style = false)
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
  const compare_flexbe_utilities::srv::EuclideanClustering_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  compare_flexbe_utilities::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use compare_flexbe_utilities::srv::to_yaml() instead")]]
inline std::string to_yaml(const compare_flexbe_utilities::srv::EuclideanClustering_Response & msg)
{
  return compare_flexbe_utilities::srv::to_yaml(msg);
}

template<>
inline const char * data_type<compare_flexbe_utilities::srv::EuclideanClustering_Response>()
{
  return "compare_flexbe_utilities::srv::EuclideanClustering_Response";
}

template<>
inline const char * name<compare_flexbe_utilities::srv::EuclideanClustering_Response>()
{
  return "compare_flexbe_utilities/srv/EuclideanClustering_Response";
}

template<>
struct has_fixed_size<compare_flexbe_utilities::srv::EuclideanClustering_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<compare_flexbe_utilities::srv::EuclideanClustering_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<compare_flexbe_utilities::srv::EuclideanClustering_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace compare_flexbe_utilities
{

namespace srv
{

inline void to_flow_style_yaml(
  const EuclideanClustering_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EuclideanClustering_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EuclideanClustering_Event & msg, bool use_flow_style = false)
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
  const compare_flexbe_utilities::srv::EuclideanClustering_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  compare_flexbe_utilities::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use compare_flexbe_utilities::srv::to_yaml() instead")]]
inline std::string to_yaml(const compare_flexbe_utilities::srv::EuclideanClustering_Event & msg)
{
  return compare_flexbe_utilities::srv::to_yaml(msg);
}

template<>
inline const char * data_type<compare_flexbe_utilities::srv::EuclideanClustering_Event>()
{
  return "compare_flexbe_utilities::srv::EuclideanClustering_Event";
}

template<>
inline const char * name<compare_flexbe_utilities::srv::EuclideanClustering_Event>()
{
  return "compare_flexbe_utilities/srv/EuclideanClustering_Event";
}

template<>
struct has_fixed_size<compare_flexbe_utilities::srv::EuclideanClustering_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<compare_flexbe_utilities::srv::EuclideanClustering_Event>
  : std::integral_constant<bool, has_bounded_size<compare_flexbe_utilities::srv::EuclideanClustering_Request>::value && has_bounded_size<compare_flexbe_utilities::srv::EuclideanClustering_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<compare_flexbe_utilities::srv::EuclideanClustering_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<compare_flexbe_utilities::srv::EuclideanClustering>()
{
  return "compare_flexbe_utilities::srv::EuclideanClustering";
}

template<>
inline const char * name<compare_flexbe_utilities::srv::EuclideanClustering>()
{
  return "compare_flexbe_utilities/srv/EuclideanClustering";
}

template<>
struct has_fixed_size<compare_flexbe_utilities::srv::EuclideanClustering>
  : std::integral_constant<
    bool,
    has_fixed_size<compare_flexbe_utilities::srv::EuclideanClustering_Request>::value &&
    has_fixed_size<compare_flexbe_utilities::srv::EuclideanClustering_Response>::value
  >
{
};

template<>
struct has_bounded_size<compare_flexbe_utilities::srv::EuclideanClustering>
  : std::integral_constant<
    bool,
    has_bounded_size<compare_flexbe_utilities::srv::EuclideanClustering_Request>::value &&
    has_bounded_size<compare_flexbe_utilities::srv::EuclideanClustering_Response>::value
  >
{
};

template<>
struct is_service<compare_flexbe_utilities::srv::EuclideanClustering>
  : std::true_type
{
};

template<>
struct is_service_request<compare_flexbe_utilities::srv::EuclideanClustering_Request>
  : std::true_type
{
};

template<>
struct is_service_response<compare_flexbe_utilities::srv::EuclideanClustering_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__EUCLIDEAN_CLUSTERING__TRAITS_HPP_
