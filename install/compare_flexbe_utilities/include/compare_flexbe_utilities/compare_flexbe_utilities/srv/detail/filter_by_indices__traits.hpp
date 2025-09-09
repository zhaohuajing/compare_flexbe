// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from compare_flexbe_utilities:srv/FilterByIndices.idl
// generated code does not contain a copyright notice

#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__FILTER_BY_INDICES__TRAITS_HPP_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__FILTER_BY_INDICES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "compare_flexbe_utilities/srv/detail/filter_by_indices__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'input_cloud'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"
// Member 'target_indices'
#include "pcl_msgs/msg/detail/point_indices__traits.hpp"

namespace compare_flexbe_utilities
{

namespace srv
{

inline void to_flow_style_yaml(
  const FilterByIndices_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: input_cloud
  {
    out << "input_cloud: ";
    to_flow_style_yaml(msg.input_cloud, out);
    out << ", ";
  }

  // member: target_indices
  {
    out << "target_indices: ";
    to_flow_style_yaml(msg.target_indices, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FilterByIndices_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: input_cloud
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_cloud:\n";
    to_block_style_yaml(msg.input_cloud, out, indentation + 2);
  }

  // member: target_indices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_indices:\n";
    to_block_style_yaml(msg.target_indices, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FilterByIndices_Request & msg, bool use_flow_style = false)
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
  const compare_flexbe_utilities::srv::FilterByIndices_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  compare_flexbe_utilities::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use compare_flexbe_utilities::srv::to_yaml() instead")]]
inline std::string to_yaml(const compare_flexbe_utilities::srv::FilterByIndices_Request & msg)
{
  return compare_flexbe_utilities::srv::to_yaml(msg);
}

template<>
inline const char * data_type<compare_flexbe_utilities::srv::FilterByIndices_Request>()
{
  return "compare_flexbe_utilities::srv::FilterByIndices_Request";
}

template<>
inline const char * name<compare_flexbe_utilities::srv::FilterByIndices_Request>()
{
  return "compare_flexbe_utilities/srv/FilterByIndices_Request";
}

template<>
struct has_fixed_size<compare_flexbe_utilities::srv::FilterByIndices_Request>
  : std::integral_constant<bool, has_fixed_size<pcl_msgs::msg::PointIndices>::value && has_fixed_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct has_bounded_size<compare_flexbe_utilities::srv::FilterByIndices_Request>
  : std::integral_constant<bool, has_bounded_size<pcl_msgs::msg::PointIndices>::value && has_bounded_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct is_message<compare_flexbe_utilities::srv::FilterByIndices_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'filtered_cloud'
// already included above
// #include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"

namespace compare_flexbe_utilities
{

namespace srv
{

inline void to_flow_style_yaml(
  const FilterByIndices_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: filtered_cloud
  {
    out << "filtered_cloud: ";
    to_flow_style_yaml(msg.filtered_cloud, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FilterByIndices_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: filtered_cloud
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtered_cloud:\n";
    to_block_style_yaml(msg.filtered_cloud, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FilterByIndices_Response & msg, bool use_flow_style = false)
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
  const compare_flexbe_utilities::srv::FilterByIndices_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  compare_flexbe_utilities::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use compare_flexbe_utilities::srv::to_yaml() instead")]]
inline std::string to_yaml(const compare_flexbe_utilities::srv::FilterByIndices_Response & msg)
{
  return compare_flexbe_utilities::srv::to_yaml(msg);
}

template<>
inline const char * data_type<compare_flexbe_utilities::srv::FilterByIndices_Response>()
{
  return "compare_flexbe_utilities::srv::FilterByIndices_Response";
}

template<>
inline const char * name<compare_flexbe_utilities::srv::FilterByIndices_Response>()
{
  return "compare_flexbe_utilities/srv/FilterByIndices_Response";
}

template<>
struct has_fixed_size<compare_flexbe_utilities::srv::FilterByIndices_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct has_bounded_size<compare_flexbe_utilities::srv::FilterByIndices_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct is_message<compare_flexbe_utilities::srv::FilterByIndices_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<compare_flexbe_utilities::srv::FilterByIndices>()
{
  return "compare_flexbe_utilities::srv::FilterByIndices";
}

template<>
inline const char * name<compare_flexbe_utilities::srv::FilterByIndices>()
{
  return "compare_flexbe_utilities/srv/FilterByIndices";
}

template<>
struct has_fixed_size<compare_flexbe_utilities::srv::FilterByIndices>
  : std::integral_constant<
    bool,
    has_fixed_size<compare_flexbe_utilities::srv::FilterByIndices_Request>::value &&
    has_fixed_size<compare_flexbe_utilities::srv::FilterByIndices_Response>::value
  >
{
};

template<>
struct has_bounded_size<compare_flexbe_utilities::srv::FilterByIndices>
  : std::integral_constant<
    bool,
    has_bounded_size<compare_flexbe_utilities::srv::FilterByIndices_Request>::value &&
    has_bounded_size<compare_flexbe_utilities::srv::FilterByIndices_Response>::value
  >
{
};

template<>
struct is_service<compare_flexbe_utilities::srv::FilterByIndices>
  : std::true_type
{
};

template<>
struct is_service_request<compare_flexbe_utilities::srv::FilterByIndices_Request>
  : std::true_type
{
};

template<>
struct is_service_response<compare_flexbe_utilities::srv::FilterByIndices_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__FILTER_BY_INDICES__TRAITS_HPP_
