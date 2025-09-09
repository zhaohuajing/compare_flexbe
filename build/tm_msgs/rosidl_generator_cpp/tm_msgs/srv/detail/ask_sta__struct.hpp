// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tm_msgs:srv/AskSta.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tm_msgs/srv/ask_sta.hpp"


#ifndef TM_MSGS__SRV__DETAIL__ASK_STA__STRUCT_HPP_
#define TM_MSGS__SRV__DETAIL__ASK_STA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tm_msgs__srv__AskSta_Request __attribute__((deprecated))
#else
# define DEPRECATED__tm_msgs__srv__AskSta_Request __declspec(deprecated)
#endif

namespace tm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AskSta_Request_
{
  using Type = AskSta_Request_<ContainerAllocator>;

  explicit AskSta_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->subcmd = "";
      this->subdata = "";
      this->wait_time = 0.0;
    }
  }

  explicit AskSta_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : subcmd(_alloc),
    subdata(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->subcmd = "";
      this->subdata = "";
      this->wait_time = 0.0;
    }
  }

  // field types and members
  using _subcmd_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _subcmd_type subcmd;
  using _subdata_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _subdata_type subdata;
  using _wait_time_type =
    double;
  _wait_time_type wait_time;

  // setters for named parameter idiom
  Type & set__subcmd(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->subcmd = _arg;
    return *this;
  }
  Type & set__subdata(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->subdata = _arg;
    return *this;
  }
  Type & set__wait_time(
    const double & _arg)
  {
    this->wait_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tm_msgs::srv::AskSta_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tm_msgs::srv::AskSta_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tm_msgs::srv::AskSta_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tm_msgs::srv::AskSta_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tm_msgs::srv::AskSta_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::srv::AskSta_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tm_msgs::srv::AskSta_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::srv::AskSta_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tm_msgs::srv::AskSta_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tm_msgs::srv::AskSta_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tm_msgs__srv__AskSta_Request
    std::shared_ptr<tm_msgs::srv::AskSta_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tm_msgs__srv__AskSta_Request
    std::shared_ptr<tm_msgs::srv::AskSta_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AskSta_Request_ & other) const
  {
    if (this->subcmd != other.subcmd) {
      return false;
    }
    if (this->subdata != other.subdata) {
      return false;
    }
    if (this->wait_time != other.wait_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const AskSta_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AskSta_Request_

// alias to use template instance with default allocator
using AskSta_Request =
  tm_msgs::srv::AskSta_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tm_msgs


#ifndef _WIN32
# define DEPRECATED__tm_msgs__srv__AskSta_Response __attribute__((deprecated))
#else
# define DEPRECATED__tm_msgs__srv__AskSta_Response __declspec(deprecated)
#endif

namespace tm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AskSta_Response_
{
  using Type = AskSta_Response_<ContainerAllocator>;

  explicit AskSta_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ok = false;
      this->subcmd = "";
      this->subdata = "";
    }
  }

  explicit AskSta_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : subcmd(_alloc),
    subdata(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ok = false;
      this->subcmd = "";
      this->subdata = "";
    }
  }

  // field types and members
  using _ok_type =
    bool;
  _ok_type ok;
  using _subcmd_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _subcmd_type subcmd;
  using _subdata_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _subdata_type subdata;

  // setters for named parameter idiom
  Type & set__ok(
    const bool & _arg)
  {
    this->ok = _arg;
    return *this;
  }
  Type & set__subcmd(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->subcmd = _arg;
    return *this;
  }
  Type & set__subdata(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->subdata = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tm_msgs::srv::AskSta_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tm_msgs::srv::AskSta_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tm_msgs::srv::AskSta_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tm_msgs::srv::AskSta_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tm_msgs::srv::AskSta_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::srv::AskSta_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tm_msgs::srv::AskSta_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::srv::AskSta_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tm_msgs::srv::AskSta_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tm_msgs::srv::AskSta_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tm_msgs__srv__AskSta_Response
    std::shared_ptr<tm_msgs::srv::AskSta_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tm_msgs__srv__AskSta_Response
    std::shared_ptr<tm_msgs::srv::AskSta_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AskSta_Response_ & other) const
  {
    if (this->ok != other.ok) {
      return false;
    }
    if (this->subcmd != other.subcmd) {
      return false;
    }
    if (this->subdata != other.subdata) {
      return false;
    }
    return true;
  }
  bool operator!=(const AskSta_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AskSta_Response_

// alias to use template instance with default allocator
using AskSta_Response =
  tm_msgs::srv::AskSta_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tm_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tm_msgs__srv__AskSta_Event __attribute__((deprecated))
#else
# define DEPRECATED__tm_msgs__srv__AskSta_Event __declspec(deprecated)
#endif

namespace tm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AskSta_Event_
{
  using Type = AskSta_Event_<ContainerAllocator>;

  explicit AskSta_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit AskSta_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<tm_msgs::srv::AskSta_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tm_msgs::srv::AskSta_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<tm_msgs::srv::AskSta_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tm_msgs::srv::AskSta_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<tm_msgs::srv::AskSta_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tm_msgs::srv::AskSta_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<tm_msgs::srv::AskSta_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tm_msgs::srv::AskSta_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tm_msgs::srv::AskSta_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const tm_msgs::srv::AskSta_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tm_msgs::srv::AskSta_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tm_msgs::srv::AskSta_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tm_msgs::srv::AskSta_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::srv::AskSta_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tm_msgs::srv::AskSta_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::srv::AskSta_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tm_msgs::srv::AskSta_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tm_msgs::srv::AskSta_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tm_msgs__srv__AskSta_Event
    std::shared_ptr<tm_msgs::srv::AskSta_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tm_msgs__srv__AskSta_Event
    std::shared_ptr<tm_msgs::srv::AskSta_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AskSta_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const AskSta_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AskSta_Event_

// alias to use template instance with default allocator
using AskSta_Event =
  tm_msgs::srv::AskSta_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tm_msgs

namespace tm_msgs
{

namespace srv
{

struct AskSta
{
  using Request = tm_msgs::srv::AskSta_Request;
  using Response = tm_msgs::srv::AskSta_Response;
  using Event = tm_msgs::srv::AskSta_Event;
};

}  // namespace srv

}  // namespace tm_msgs

#endif  // TM_MSGS__SRV__DETAIL__ASK_STA__STRUCT_HPP_
