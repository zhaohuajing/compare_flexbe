// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tm_msgs:srv/SetIO.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tm_msgs/srv/set_io.hpp"


#ifndef TM_MSGS__SRV__DETAIL__SET_IO__TRAITS_HPP_
#define TM_MSGS__SRV__DETAIL__SET_IO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tm_msgs/srv/detail/set_io__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetIO_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: module
  {
    out << "module: ";
    rosidl_generator_traits::value_to_yaml(msg.module, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: pin
  {
    out << "pin: ";
    rosidl_generator_traits::value_to_yaml(msg.pin, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetIO_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: module
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "module: ";
    rosidl_generator_traits::value_to_yaml(msg.module, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: pin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pin: ";
    rosidl_generator_traits::value_to_yaml(msg.pin, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetIO_Request & msg, bool use_flow_style = false)
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

}  // namespace tm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tm_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tm_msgs::srv::SetIO_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tm_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tm_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tm_msgs::srv::SetIO_Request & msg)
{
  return tm_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tm_msgs::srv::SetIO_Request>()
{
  return "tm_msgs::srv::SetIO_Request";
}

template<>
inline const char * name<tm_msgs::srv::SetIO_Request>()
{
  return "tm_msgs/srv/SetIO_Request";
}

template<>
struct has_fixed_size<tm_msgs::srv::SetIO_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tm_msgs::srv::SetIO_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tm_msgs::srv::SetIO_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetIO_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: ok
  {
    out << "ok: ";
    rosidl_generator_traits::value_to_yaml(msg.ok, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetIO_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ok: ";
    rosidl_generator_traits::value_to_yaml(msg.ok, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetIO_Response & msg, bool use_flow_style = false)
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

}  // namespace tm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tm_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tm_msgs::srv::SetIO_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tm_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tm_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tm_msgs::srv::SetIO_Response & msg)
{
  return tm_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tm_msgs::srv::SetIO_Response>()
{
  return "tm_msgs::srv::SetIO_Response";
}

template<>
inline const char * name<tm_msgs::srv::SetIO_Response>()
{
  return "tm_msgs/srv/SetIO_Response";
}

template<>
struct has_fixed_size<tm_msgs::srv::SetIO_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tm_msgs::srv::SetIO_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tm_msgs::srv::SetIO_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace tm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetIO_Event & msg,
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
  const SetIO_Event & msg,
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

inline std::string to_yaml(const SetIO_Event & msg, bool use_flow_style = false)
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

}  // namespace tm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tm_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tm_msgs::srv::SetIO_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  tm_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tm_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tm_msgs::srv::SetIO_Event & msg)
{
  return tm_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tm_msgs::srv::SetIO_Event>()
{
  return "tm_msgs::srv::SetIO_Event";
}

template<>
inline const char * name<tm_msgs::srv::SetIO_Event>()
{
  return "tm_msgs/srv/SetIO_Event";
}

template<>
struct has_fixed_size<tm_msgs::srv::SetIO_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tm_msgs::srv::SetIO_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<tm_msgs::srv::SetIO_Request>::value && has_bounded_size<tm_msgs::srv::SetIO_Response>::value> {};

template<>
struct is_message<tm_msgs::srv::SetIO_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tm_msgs::srv::SetIO>()
{
  return "tm_msgs::srv::SetIO";
}

template<>
inline const char * name<tm_msgs::srv::SetIO>()
{
  return "tm_msgs/srv/SetIO";
}

template<>
struct has_fixed_size<tm_msgs::srv::SetIO>
  : std::integral_constant<
    bool,
    has_fixed_size<tm_msgs::srv::SetIO_Request>::value &&
    has_fixed_size<tm_msgs::srv::SetIO_Response>::value
  >
{
};

template<>
struct has_bounded_size<tm_msgs::srv::SetIO>
  : std::integral_constant<
    bool,
    has_bounded_size<tm_msgs::srv::SetIO_Request>::value &&
    has_bounded_size<tm_msgs::srv::SetIO_Response>::value
  >
{
};

template<>
struct is_service<tm_msgs::srv::SetIO>
  : std::true_type
{
};

template<>
struct is_service_request<tm_msgs::srv::SetIO_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tm_msgs::srv::SetIO_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TM_MSGS__SRV__DETAIL__SET_IO__TRAITS_HPP_
