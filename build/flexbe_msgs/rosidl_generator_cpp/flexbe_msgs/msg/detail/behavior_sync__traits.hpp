// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from flexbe_msgs:msg/BehaviorSync.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "flexbe_msgs/msg/behavior_sync.hpp"


#ifndef FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SYNC__TRAITS_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SYNC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "flexbe_msgs/msg/detail/behavior_sync__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace flexbe_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BehaviorSync & msg,
  std::ostream & out)
{
  out << "{";
  // member: behavior_id
  {
    out << "behavior_id: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_id, out);
    out << ", ";
  }

  // member: current_state_checksums
  {
    if (msg.current_state_checksums.size() == 0) {
      out << "current_state_checksums: []";
    } else {
      out << "current_state_checksums: [";
      size_t pending_items = msg.current_state_checksums.size();
      for (auto item : msg.current_state_checksums) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const BehaviorSync & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: behavior_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "behavior_id: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_id, out);
    out << "\n";
  }

  // member: current_state_checksums
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.current_state_checksums.size() == 0) {
      out << "current_state_checksums: []\n";
    } else {
      out << "current_state_checksums:\n";
      for (auto item : msg.current_state_checksums) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BehaviorSync & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace flexbe_msgs

namespace rosidl_generator_traits
{

[[deprecated("use flexbe_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const flexbe_msgs::msg::BehaviorSync & msg,
  std::ostream & out, size_t indentation = 0)
{
  flexbe_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flexbe_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const flexbe_msgs::msg::BehaviorSync & msg)
{
  return flexbe_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<flexbe_msgs::msg::BehaviorSync>()
{
  return "flexbe_msgs::msg::BehaviorSync";
}

template<>
inline const char * name<flexbe_msgs::msg::BehaviorSync>()
{
  return "flexbe_msgs/msg/BehaviorSync";
}

template<>
struct has_fixed_size<flexbe_msgs::msg::BehaviorSync>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<flexbe_msgs::msg::BehaviorSync>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<flexbe_msgs::msg::BehaviorSync>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SYNC__TRAITS_HPP_
