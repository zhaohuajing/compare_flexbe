// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from compare_flexbe_utilities:srv/VoxelGridFilter.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "compare_flexbe_utilities/srv/voxel_grid_filter.hpp"


#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__VOXEL_GRID_FILTER__TRAITS_HPP_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__VOXEL_GRID_FILTER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "compare_flexbe_utilities/srv/detail/voxel_grid_filter__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'input'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"

namespace compare_flexbe_utilities
{

namespace srv
{

inline void to_flow_style_yaml(
  const VoxelGridFilter_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: input
  {
    out << "input: ";
    to_flow_style_yaml(msg.input, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VoxelGridFilter_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VoxelGridFilter_Request & msg, bool use_flow_style = false)
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
  const compare_flexbe_utilities::srv::VoxelGridFilter_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  compare_flexbe_utilities::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use compare_flexbe_utilities::srv::to_yaml() instead")]]
inline std::string to_yaml(const compare_flexbe_utilities::srv::VoxelGridFilter_Request & msg)
{
  return compare_flexbe_utilities::srv::to_yaml(msg);
}

template<>
inline const char * data_type<compare_flexbe_utilities::srv::VoxelGridFilter_Request>()
{
  return "compare_flexbe_utilities::srv::VoxelGridFilter_Request";
}

template<>
inline const char * name<compare_flexbe_utilities::srv::VoxelGridFilter_Request>()
{
  return "compare_flexbe_utilities/srv/VoxelGridFilter_Request";
}

template<>
struct has_fixed_size<compare_flexbe_utilities::srv::VoxelGridFilter_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct has_bounded_size<compare_flexbe_utilities::srv::VoxelGridFilter_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct is_message<compare_flexbe_utilities::srv::VoxelGridFilter_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'filtered'
// already included above
// #include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"

namespace compare_flexbe_utilities
{

namespace srv
{

inline void to_flow_style_yaml(
  const VoxelGridFilter_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: filtered
  {
    out << "filtered: ";
    to_flow_style_yaml(msg.filtered, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VoxelGridFilter_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: filtered
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtered:\n";
    to_block_style_yaml(msg.filtered, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VoxelGridFilter_Response & msg, bool use_flow_style = false)
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
  const compare_flexbe_utilities::srv::VoxelGridFilter_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  compare_flexbe_utilities::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use compare_flexbe_utilities::srv::to_yaml() instead")]]
inline std::string to_yaml(const compare_flexbe_utilities::srv::VoxelGridFilter_Response & msg)
{
  return compare_flexbe_utilities::srv::to_yaml(msg);
}

template<>
inline const char * data_type<compare_flexbe_utilities::srv::VoxelGridFilter_Response>()
{
  return "compare_flexbe_utilities::srv::VoxelGridFilter_Response";
}

template<>
inline const char * name<compare_flexbe_utilities::srv::VoxelGridFilter_Response>()
{
  return "compare_flexbe_utilities/srv/VoxelGridFilter_Response";
}

template<>
struct has_fixed_size<compare_flexbe_utilities::srv::VoxelGridFilter_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct has_bounded_size<compare_flexbe_utilities::srv::VoxelGridFilter_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct is_message<compare_flexbe_utilities::srv::VoxelGridFilter_Response>
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
  const VoxelGridFilter_Event & msg,
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
  const VoxelGridFilter_Event & msg,
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

inline std::string to_yaml(const VoxelGridFilter_Event & msg, bool use_flow_style = false)
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
  const compare_flexbe_utilities::srv::VoxelGridFilter_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  compare_flexbe_utilities::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use compare_flexbe_utilities::srv::to_yaml() instead")]]
inline std::string to_yaml(const compare_flexbe_utilities::srv::VoxelGridFilter_Event & msg)
{
  return compare_flexbe_utilities::srv::to_yaml(msg);
}

template<>
inline const char * data_type<compare_flexbe_utilities::srv::VoxelGridFilter_Event>()
{
  return "compare_flexbe_utilities::srv::VoxelGridFilter_Event";
}

template<>
inline const char * name<compare_flexbe_utilities::srv::VoxelGridFilter_Event>()
{
  return "compare_flexbe_utilities/srv/VoxelGridFilter_Event";
}

template<>
struct has_fixed_size<compare_flexbe_utilities::srv::VoxelGridFilter_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<compare_flexbe_utilities::srv::VoxelGridFilter_Event>
  : std::integral_constant<bool, has_bounded_size<compare_flexbe_utilities::srv::VoxelGridFilter_Request>::value && has_bounded_size<compare_flexbe_utilities::srv::VoxelGridFilter_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<compare_flexbe_utilities::srv::VoxelGridFilter_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<compare_flexbe_utilities::srv::VoxelGridFilter>()
{
  return "compare_flexbe_utilities::srv::VoxelGridFilter";
}

template<>
inline const char * name<compare_flexbe_utilities::srv::VoxelGridFilter>()
{
  return "compare_flexbe_utilities/srv/VoxelGridFilter";
}

template<>
struct has_fixed_size<compare_flexbe_utilities::srv::VoxelGridFilter>
  : std::integral_constant<
    bool,
    has_fixed_size<compare_flexbe_utilities::srv::VoxelGridFilter_Request>::value &&
    has_fixed_size<compare_flexbe_utilities::srv::VoxelGridFilter_Response>::value
  >
{
};

template<>
struct has_bounded_size<compare_flexbe_utilities::srv::VoxelGridFilter>
  : std::integral_constant<
    bool,
    has_bounded_size<compare_flexbe_utilities::srv::VoxelGridFilter_Request>::value &&
    has_bounded_size<compare_flexbe_utilities::srv::VoxelGridFilter_Response>::value
  >
{
};

template<>
struct is_service<compare_flexbe_utilities::srv::VoxelGridFilter>
  : std::true_type
{
};

template<>
struct is_service_request<compare_flexbe_utilities::srv::VoxelGridFilter_Request>
  : std::true_type
{
};

template<>
struct is_service_response<compare_flexbe_utilities::srv::VoxelGridFilter_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__VOXEL_GRID_FILTER__TRAITS_HPP_
