// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from compare_flexbe_utilities:srv/MoveToNamedPose.idl
// generated code does not contain a copyright notice

#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__MOVE_TO_NAMED_POSE__TRAITS_HPP_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__MOVE_TO_NAMED_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "compare_flexbe_utilities/srv/detail/move_to_named_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace compare_flexbe_utilities
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveToNamedPose_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_name
  {
    out << "target_name: ";
    rosidl_generator_traits::value_to_yaml(msg.target_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToNamedPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_name: ";
    rosidl_generator_traits::value_to_yaml(msg.target_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToNamedPose_Request & msg, bool use_flow_style = false)
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
  const compare_flexbe_utilities::srv::MoveToNamedPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  compare_flexbe_utilities::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use compare_flexbe_utilities::srv::to_yaml() instead")]]
inline std::string to_yaml(const compare_flexbe_utilities::srv::MoveToNamedPose_Request & msg)
{
  return compare_flexbe_utilities::srv::to_yaml(msg);
}

template<>
inline const char * data_type<compare_flexbe_utilities::srv::MoveToNamedPose_Request>()
{
  return "compare_flexbe_utilities::srv::MoveToNamedPose_Request";
}

template<>
inline const char * name<compare_flexbe_utilities::srv::MoveToNamedPose_Request>()
{
  return "compare_flexbe_utilities/srv/MoveToNamedPose_Request";
}

template<>
struct has_fixed_size<compare_flexbe_utilities::srv::MoveToNamedPose_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<compare_flexbe_utilities::srv::MoveToNamedPose_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<compare_flexbe_utilities::srv::MoveToNamedPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace compare_flexbe_utilities
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveToNamedPose_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToNamedPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToNamedPose_Response & msg, bool use_flow_style = false)
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
  const compare_flexbe_utilities::srv::MoveToNamedPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  compare_flexbe_utilities::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use compare_flexbe_utilities::srv::to_yaml() instead")]]
inline std::string to_yaml(const compare_flexbe_utilities::srv::MoveToNamedPose_Response & msg)
{
  return compare_flexbe_utilities::srv::to_yaml(msg);
}

template<>
inline const char * data_type<compare_flexbe_utilities::srv::MoveToNamedPose_Response>()
{
  return "compare_flexbe_utilities::srv::MoveToNamedPose_Response";
}

template<>
inline const char * name<compare_flexbe_utilities::srv::MoveToNamedPose_Response>()
{
  return "compare_flexbe_utilities/srv/MoveToNamedPose_Response";
}

template<>
struct has_fixed_size<compare_flexbe_utilities::srv::MoveToNamedPose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<compare_flexbe_utilities::srv::MoveToNamedPose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<compare_flexbe_utilities::srv::MoveToNamedPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<compare_flexbe_utilities::srv::MoveToNamedPose>()
{
  return "compare_flexbe_utilities::srv::MoveToNamedPose";
}

template<>
inline const char * name<compare_flexbe_utilities::srv::MoveToNamedPose>()
{
  return "compare_flexbe_utilities/srv/MoveToNamedPose";
}

template<>
struct has_fixed_size<compare_flexbe_utilities::srv::MoveToNamedPose>
  : std::integral_constant<
    bool,
    has_fixed_size<compare_flexbe_utilities::srv::MoveToNamedPose_Request>::value &&
    has_fixed_size<compare_flexbe_utilities::srv::MoveToNamedPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<compare_flexbe_utilities::srv::MoveToNamedPose>
  : std::integral_constant<
    bool,
    has_bounded_size<compare_flexbe_utilities::srv::MoveToNamedPose_Request>::value &&
    has_bounded_size<compare_flexbe_utilities::srv::MoveToNamedPose_Response>::value
  >
{
};

template<>
struct is_service<compare_flexbe_utilities::srv::MoveToNamedPose>
  : std::true_type
{
};

template<>
struct is_service_request<compare_flexbe_utilities::srv::MoveToNamedPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<compare_flexbe_utilities::srv::MoveToNamedPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__MOVE_TO_NAMED_POSE__TRAITS_HPP_
