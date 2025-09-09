// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from compare_flexbe_utilities:srv/VoxelGridFilter.idl
// generated code does not contain a copyright notice

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
