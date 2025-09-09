// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from compare_flexbe_utilities:srv/PlaneSegmentation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "compare_flexbe_utilities/srv/plane_segmentation.hpp"


#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__PLANE_SEGMENTATION__TRAITS_HPP_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__PLANE_SEGMENTATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "compare_flexbe_utilities/srv/detail/plane_segmentation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'input'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"

namespace compare_flexbe_utilities
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlaneSegmentation_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: input
  {
    out << "input: ";
    to_flow_style_yaml(msg.input, out);
    out << ", ";
  }

  // member: use_voxel
  {
    out << "use_voxel: ";
    rosidl_generator_traits::value_to_yaml(msg.use_voxel, out);
    out << ", ";
  }

  // member: leaf_size
  {
    out << "leaf_size: ";
    rosidl_generator_traits::value_to_yaml(msg.leaf_size, out);
    out << ", ";
  }

  // member: distance_threshold
  {
    out << "distance_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_threshold, out);
    out << ", ";
  }

  // member: max_iterations
  {
    out << "max_iterations: ";
    rosidl_generator_traits::value_to_yaml(msg.max_iterations, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlaneSegmentation_Request & msg,
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

  // member: use_voxel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_voxel: ";
    rosidl_generator_traits::value_to_yaml(msg.use_voxel, out);
    out << "\n";
  }

  // member: leaf_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leaf_size: ";
    rosidl_generator_traits::value_to_yaml(msg.leaf_size, out);
    out << "\n";
  }

  // member: distance_threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_threshold, out);
    out << "\n";
  }

  // member: max_iterations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_iterations: ";
    rosidl_generator_traits::value_to_yaml(msg.max_iterations, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlaneSegmentation_Request & msg, bool use_flow_style = false)
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
  const compare_flexbe_utilities::srv::PlaneSegmentation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  compare_flexbe_utilities::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use compare_flexbe_utilities::srv::to_yaml() instead")]]
inline std::string to_yaml(const compare_flexbe_utilities::srv::PlaneSegmentation_Request & msg)
{
  return compare_flexbe_utilities::srv::to_yaml(msg);
}

template<>
inline const char * data_type<compare_flexbe_utilities::srv::PlaneSegmentation_Request>()
{
  return "compare_flexbe_utilities::srv::PlaneSegmentation_Request";
}

template<>
inline const char * name<compare_flexbe_utilities::srv::PlaneSegmentation_Request>()
{
  return "compare_flexbe_utilities/srv/PlaneSegmentation_Request";
}

template<>
struct has_fixed_size<compare_flexbe_utilities::srv::PlaneSegmentation_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct has_bounded_size<compare_flexbe_utilities::srv::PlaneSegmentation_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct is_message<compare_flexbe_utilities::srv::PlaneSegmentation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'without_plane'
// already included above
// #include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"
// Member 'plane_indices'
#include "pcl_msgs/msg/detail/point_indices__traits.hpp"

namespace compare_flexbe_utilities
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlaneSegmentation_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: without_plane
  {
    out << "without_plane: ";
    to_flow_style_yaml(msg.without_plane, out);
    out << ", ";
  }

  // member: plane_indices
  {
    out << "plane_indices: ";
    to_flow_style_yaml(msg.plane_indices, out);
    out << ", ";
  }

  // member: plane_coefficients
  {
    if (msg.plane_coefficients.size() == 0) {
      out << "plane_coefficients: []";
    } else {
      out << "plane_coefficients: [";
      size_t pending_items = msg.plane_coefficients.size();
      for (auto item : msg.plane_coefficients) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: inlier_count
  {
    out << "inlier_count: ";
    rosidl_generator_traits::value_to_yaml(msg.inlier_count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlaneSegmentation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: without_plane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "without_plane:\n";
    to_block_style_yaml(msg.without_plane, out, indentation + 2);
  }

  // member: plane_indices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plane_indices:\n";
    to_block_style_yaml(msg.plane_indices, out, indentation + 2);
  }

  // member: plane_coefficients
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.plane_coefficients.size() == 0) {
      out << "plane_coefficients: []\n";
    } else {
      out << "plane_coefficients:\n";
      for (auto item : msg.plane_coefficients) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: inlier_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inlier_count: ";
    rosidl_generator_traits::value_to_yaml(msg.inlier_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlaneSegmentation_Response & msg, bool use_flow_style = false)
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
  const compare_flexbe_utilities::srv::PlaneSegmentation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  compare_flexbe_utilities::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use compare_flexbe_utilities::srv::to_yaml() instead")]]
inline std::string to_yaml(const compare_flexbe_utilities::srv::PlaneSegmentation_Response & msg)
{
  return compare_flexbe_utilities::srv::to_yaml(msg);
}

template<>
inline const char * data_type<compare_flexbe_utilities::srv::PlaneSegmentation_Response>()
{
  return "compare_flexbe_utilities::srv::PlaneSegmentation_Response";
}

template<>
inline const char * name<compare_flexbe_utilities::srv::PlaneSegmentation_Response>()
{
  return "compare_flexbe_utilities/srv/PlaneSegmentation_Response";
}

template<>
struct has_fixed_size<compare_flexbe_utilities::srv::PlaneSegmentation_Response>
  : std::integral_constant<bool, has_fixed_size<pcl_msgs::msg::PointIndices>::value && has_fixed_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct has_bounded_size<compare_flexbe_utilities::srv::PlaneSegmentation_Response>
  : std::integral_constant<bool, has_bounded_size<pcl_msgs::msg::PointIndices>::value && has_bounded_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct is_message<compare_flexbe_utilities::srv::PlaneSegmentation_Response>
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
  const PlaneSegmentation_Event & msg,
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
  const PlaneSegmentation_Event & msg,
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

inline std::string to_yaml(const PlaneSegmentation_Event & msg, bool use_flow_style = false)
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
  const compare_flexbe_utilities::srv::PlaneSegmentation_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  compare_flexbe_utilities::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use compare_flexbe_utilities::srv::to_yaml() instead")]]
inline std::string to_yaml(const compare_flexbe_utilities::srv::PlaneSegmentation_Event & msg)
{
  return compare_flexbe_utilities::srv::to_yaml(msg);
}

template<>
inline const char * data_type<compare_flexbe_utilities::srv::PlaneSegmentation_Event>()
{
  return "compare_flexbe_utilities::srv::PlaneSegmentation_Event";
}

template<>
inline const char * name<compare_flexbe_utilities::srv::PlaneSegmentation_Event>()
{
  return "compare_flexbe_utilities/srv/PlaneSegmentation_Event";
}

template<>
struct has_fixed_size<compare_flexbe_utilities::srv::PlaneSegmentation_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<compare_flexbe_utilities::srv::PlaneSegmentation_Event>
  : std::integral_constant<bool, has_bounded_size<compare_flexbe_utilities::srv::PlaneSegmentation_Request>::value && has_bounded_size<compare_flexbe_utilities::srv::PlaneSegmentation_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<compare_flexbe_utilities::srv::PlaneSegmentation_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<compare_flexbe_utilities::srv::PlaneSegmentation>()
{
  return "compare_flexbe_utilities::srv::PlaneSegmentation";
}

template<>
inline const char * name<compare_flexbe_utilities::srv::PlaneSegmentation>()
{
  return "compare_flexbe_utilities/srv/PlaneSegmentation";
}

template<>
struct has_fixed_size<compare_flexbe_utilities::srv::PlaneSegmentation>
  : std::integral_constant<
    bool,
    has_fixed_size<compare_flexbe_utilities::srv::PlaneSegmentation_Request>::value &&
    has_fixed_size<compare_flexbe_utilities::srv::PlaneSegmentation_Response>::value
  >
{
};

template<>
struct has_bounded_size<compare_flexbe_utilities::srv::PlaneSegmentation>
  : std::integral_constant<
    bool,
    has_bounded_size<compare_flexbe_utilities::srv::PlaneSegmentation_Request>::value &&
    has_bounded_size<compare_flexbe_utilities::srv::PlaneSegmentation_Response>::value
  >
{
};

template<>
struct is_service<compare_flexbe_utilities::srv::PlaneSegmentation>
  : std::true_type
{
};

template<>
struct is_service_request<compare_flexbe_utilities::srv::PlaneSegmentation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<compare_flexbe_utilities::srv::PlaneSegmentation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__PLANE_SEGMENTATION__TRAITS_HPP_
