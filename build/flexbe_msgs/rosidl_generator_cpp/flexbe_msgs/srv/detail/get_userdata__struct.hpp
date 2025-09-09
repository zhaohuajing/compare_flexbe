// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flexbe_msgs:srv/GetUserdata.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "flexbe_msgs/srv/get_userdata.hpp"


#ifndef FLEXBE_MSGS__SRV__DETAIL__GET_USERDATA__STRUCT_HPP_
#define FLEXBE_MSGS__SRV__DETAIL__GET_USERDATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__flexbe_msgs__srv__GetUserdata_Request __attribute__((deprecated))
#else
# define DEPRECATED__flexbe_msgs__srv__GetUserdata_Request __declspec(deprecated)
#endif

namespace flexbe_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetUserdata_Request_
{
  using Type = GetUserdata_Request_<ContainerAllocator>;

  explicit GetUserdata_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->userdata_key = "";
    }
  }

  explicit GetUserdata_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : userdata_key(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->userdata_key = "";
    }
  }

  // field types and members
  using _userdata_key_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _userdata_key_type userdata_key;

  // setters for named parameter idiom
  Type & set__userdata_key(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->userdata_key = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flexbe_msgs::srv::GetUserdata_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexbe_msgs::srv::GetUserdata_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexbe_msgs::srv::GetUserdata_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexbe_msgs::srv::GetUserdata_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::srv::GetUserdata_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::srv::GetUserdata_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::srv::GetUserdata_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::srv::GetUserdata_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexbe_msgs::srv::GetUserdata_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexbe_msgs::srv::GetUserdata_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexbe_msgs__srv__GetUserdata_Request
    std::shared_ptr<flexbe_msgs::srv::GetUserdata_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexbe_msgs__srv__GetUserdata_Request
    std::shared_ptr<flexbe_msgs::srv::GetUserdata_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetUserdata_Request_ & other) const
  {
    if (this->userdata_key != other.userdata_key) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetUserdata_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetUserdata_Request_

// alias to use template instance with default allocator
using GetUserdata_Request =
  flexbe_msgs::srv::GetUserdata_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace flexbe_msgs


// Include directives for member types
// Member 'userdata'
#include "flexbe_msgs/msg/detail/userdata_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__flexbe_msgs__srv__GetUserdata_Response __attribute__((deprecated))
#else
# define DEPRECATED__flexbe_msgs__srv__GetUserdata_Response __declspec(deprecated)
#endif

namespace flexbe_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetUserdata_Response_
{
  using Type = GetUserdata_Response_<ContainerAllocator>;

  explicit GetUserdata_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit GetUserdata_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _userdata_type =
    std::vector<flexbe_msgs::msg::UserdataInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<flexbe_msgs::msg::UserdataInfo_<ContainerAllocator>>>;
  _userdata_type userdata;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__userdata(
    const std::vector<flexbe_msgs::msg::UserdataInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<flexbe_msgs::msg::UserdataInfo_<ContainerAllocator>>> & _arg)
  {
    this->userdata = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flexbe_msgs::srv::GetUserdata_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexbe_msgs::srv::GetUserdata_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexbe_msgs::srv::GetUserdata_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexbe_msgs::srv::GetUserdata_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::srv::GetUserdata_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::srv::GetUserdata_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::srv::GetUserdata_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::srv::GetUserdata_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexbe_msgs::srv::GetUserdata_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexbe_msgs::srv::GetUserdata_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexbe_msgs__srv__GetUserdata_Response
    std::shared_ptr<flexbe_msgs::srv::GetUserdata_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexbe_msgs__srv__GetUserdata_Response
    std::shared_ptr<flexbe_msgs::srv::GetUserdata_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetUserdata_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->userdata != other.userdata) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetUserdata_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetUserdata_Response_

// alias to use template instance with default allocator
using GetUserdata_Response =
  flexbe_msgs::srv::GetUserdata_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace flexbe_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__flexbe_msgs__srv__GetUserdata_Event __attribute__((deprecated))
#else
# define DEPRECATED__flexbe_msgs__srv__GetUserdata_Event __declspec(deprecated)
#endif

namespace flexbe_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetUserdata_Event_
{
  using Type = GetUserdata_Event_<ContainerAllocator>;

  explicit GetUserdata_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetUserdata_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<flexbe_msgs::srv::GetUserdata_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<flexbe_msgs::srv::GetUserdata_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<flexbe_msgs::srv::GetUserdata_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<flexbe_msgs::srv::GetUserdata_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<flexbe_msgs::srv::GetUserdata_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<flexbe_msgs::srv::GetUserdata_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<flexbe_msgs::srv::GetUserdata_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<flexbe_msgs::srv::GetUserdata_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flexbe_msgs::srv::GetUserdata_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexbe_msgs::srv::GetUserdata_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexbe_msgs::srv::GetUserdata_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexbe_msgs::srv::GetUserdata_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::srv::GetUserdata_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::srv::GetUserdata_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::srv::GetUserdata_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::srv::GetUserdata_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexbe_msgs::srv::GetUserdata_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexbe_msgs::srv::GetUserdata_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexbe_msgs__srv__GetUserdata_Event
    std::shared_ptr<flexbe_msgs::srv::GetUserdata_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexbe_msgs__srv__GetUserdata_Event
    std::shared_ptr<flexbe_msgs::srv::GetUserdata_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetUserdata_Event_ & other) const
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
  bool operator!=(const GetUserdata_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetUserdata_Event_

// alias to use template instance with default allocator
using GetUserdata_Event =
  flexbe_msgs::srv::GetUserdata_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace flexbe_msgs

namespace flexbe_msgs
{

namespace srv
{

struct GetUserdata
{
  using Request = flexbe_msgs::srv::GetUserdata_Request;
  using Response = flexbe_msgs::srv::GetUserdata_Response;
  using Event = flexbe_msgs::srv::GetUserdata_Event;
};

}  // namespace srv

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__SRV__DETAIL__GET_USERDATA__STRUCT_HPP_
