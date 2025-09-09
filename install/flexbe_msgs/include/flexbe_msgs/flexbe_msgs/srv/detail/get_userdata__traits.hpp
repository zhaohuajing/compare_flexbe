// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from flexbe_msgs:srv/GetUserdata.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__SRV__DETAIL__GET_USERDATA__TRAITS_HPP_
#define FLEXBE_MSGS__SRV__DETAIL__GET_USERDATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "flexbe_msgs/srv/detail/get_userdata__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace flexbe_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetUserdata_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: userdata_key
  {
    out << "userdata_key: ";
    rosidl_generator_traits::value_to_yaml(msg.userdata_key, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetUserdata_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: userdata_key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "userdata_key: ";
    rosidl_generator_traits::value_to_yaml(msg.userdata_key, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetUserdata_Request & msg, bool use_flow_style = false)
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

}  // namespace flexbe_msgs

namespace rosidl_generator_traits
{

[[deprecated("use flexbe_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const flexbe_msgs::srv::GetUserdata_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  flexbe_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flexbe_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const flexbe_msgs::srv::GetUserdata_Request & msg)
{
  return flexbe_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<flexbe_msgs::srv::GetUserdata_Request>()
{
  return "flexbe_msgs::srv::GetUserdata_Request";
}

template<>
inline const char * name<flexbe_msgs::srv::GetUserdata_Request>()
{
  return "flexbe_msgs/srv/GetUserdata_Request";
}

template<>
struct has_fixed_size<flexbe_msgs::srv::GetUserdata_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<flexbe_msgs::srv::GetUserdata_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<flexbe_msgs::srv::GetUserdata_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'userdata'
#include "flexbe_msgs/msg/detail/userdata_info__traits.hpp"

namespace flexbe_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetUserdata_Response & msg,
  std::ostream & out)
{
  out << "{";
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
    out << ", ";
  }

  // member: userdata
  {
    if (msg.userdata.size() == 0) {
      out << "userdata: []";
    } else {
      out << "userdata: [";
      size_t pending_items = msg.userdata.size();
      for (auto item : msg.userdata) {
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
  const GetUserdata_Response & msg,
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

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: userdata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.userdata.size() == 0) {
      out << "userdata: []\n";
    } else {
      out << "userdata:\n";
      for (auto item : msg.userdata) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetUserdata_Response & msg, bool use_flow_style = false)
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

}  // namespace flexbe_msgs

namespace rosidl_generator_traits
{

[[deprecated("use flexbe_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const flexbe_msgs::srv::GetUserdata_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  flexbe_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flexbe_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const flexbe_msgs::srv::GetUserdata_Response & msg)
{
  return flexbe_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<flexbe_msgs::srv::GetUserdata_Response>()
{
  return "flexbe_msgs::srv::GetUserdata_Response";
}

template<>
inline const char * name<flexbe_msgs::srv::GetUserdata_Response>()
{
  return "flexbe_msgs/srv/GetUserdata_Response";
}

template<>
struct has_fixed_size<flexbe_msgs::srv::GetUserdata_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<flexbe_msgs::srv::GetUserdata_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<flexbe_msgs::srv::GetUserdata_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<flexbe_msgs::srv::GetUserdata>()
{
  return "flexbe_msgs::srv::GetUserdata";
}

template<>
inline const char * name<flexbe_msgs::srv::GetUserdata>()
{
  return "flexbe_msgs/srv/GetUserdata";
}

template<>
struct has_fixed_size<flexbe_msgs::srv::GetUserdata>
  : std::integral_constant<
    bool,
    has_fixed_size<flexbe_msgs::srv::GetUserdata_Request>::value &&
    has_fixed_size<flexbe_msgs::srv::GetUserdata_Response>::value
  >
{
};

template<>
struct has_bounded_size<flexbe_msgs::srv::GetUserdata>
  : std::integral_constant<
    bool,
    has_bounded_size<flexbe_msgs::srv::GetUserdata_Request>::value &&
    has_bounded_size<flexbe_msgs::srv::GetUserdata_Response>::value
  >
{
};

template<>
struct is_service<flexbe_msgs::srv::GetUserdata>
  : std::true_type
{
};

template<>
struct is_service_request<flexbe_msgs::srv::GetUserdata_Request>
  : std::true_type
{
};

template<>
struct is_service_response<flexbe_msgs::srv::GetUserdata_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FLEXBE_MSGS__SRV__DETAIL__GET_USERDATA__TRAITS_HPP_
