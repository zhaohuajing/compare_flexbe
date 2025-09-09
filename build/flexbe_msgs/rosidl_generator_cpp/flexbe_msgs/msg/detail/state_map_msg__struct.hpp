// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flexbe_msgs:msg/StateMapMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "flexbe_msgs/msg/state_map_msg.hpp"


#ifndef FLEXBE_MSGS__MSG__DETAIL__STATE_MAP_MSG__STRUCT_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__STATE_MAP_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__flexbe_msgs__msg__StateMapMsg __attribute__((deprecated))
#else
# define DEPRECATED__flexbe_msgs__msg__StateMapMsg __declspec(deprecated)
#endif

namespace flexbe_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StateMapMsg_
{
  using Type = StateMapMsg_<ContainerAllocator>;

  explicit StateMapMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_id = 0l;
    }
  }

  explicit StateMapMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_id = 0l;
    }
  }

  // field types and members
  using _behavior_id_type =
    int32_t;
  _behavior_id_type behavior_id;
  using _state_ids_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _state_ids_type state_ids;
  using _state_paths_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _state_paths_type state_paths;

  // setters for named parameter idiom
  Type & set__behavior_id(
    const int32_t & _arg)
  {
    this->behavior_id = _arg;
    return *this;
  }
  Type & set__state_ids(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->state_ids = _arg;
    return *this;
  }
  Type & set__state_paths(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->state_paths = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flexbe_msgs::msg::StateMapMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexbe_msgs::msg::StateMapMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexbe_msgs::msg::StateMapMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexbe_msgs::msg::StateMapMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::StateMapMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::StateMapMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::StateMapMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::StateMapMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexbe_msgs::msg::StateMapMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexbe_msgs::msg::StateMapMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexbe_msgs__msg__StateMapMsg
    std::shared_ptr<flexbe_msgs::msg::StateMapMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexbe_msgs__msg__StateMapMsg
    std::shared_ptr<flexbe_msgs::msg::StateMapMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateMapMsg_ & other) const
  {
    if (this->behavior_id != other.behavior_id) {
      return false;
    }
    if (this->state_ids != other.state_ids) {
      return false;
    }
    if (this->state_paths != other.state_paths) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateMapMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateMapMsg_

// alias to use template instance with default allocator
using StateMapMsg =
  flexbe_msgs::msg::StateMapMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__STATE_MAP_MSG__STRUCT_HPP_
