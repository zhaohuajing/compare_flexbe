// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from compare_flexbe_utilities:srv/CartesianMoveToPose.idl
// generated code does not contain a copyright notice

#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__CARTESIAN_MOVE_TO_POSE__STRUCT_HPP_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__CARTESIAN_MOVE_TO_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'waypoints'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__compare_flexbe_utilities__srv__CartesianMoveToPose_Request __attribute__((deprecated))
#else
# define DEPRECATED__compare_flexbe_utilities__srv__CartesianMoveToPose_Request __declspec(deprecated)
#endif

namespace compare_flexbe_utilities
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CartesianMoveToPose_Request_
{
  using Type = CartesianMoveToPose_Request_<ContainerAllocator>;

  explicit CartesianMoveToPose_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit CartesianMoveToPose_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _waypoints_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _waypoints_type waypoints;

  // setters for named parameter idiom
  Type & set__waypoints(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    compare_flexbe_utilities::srv::CartesianMoveToPose_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const compare_flexbe_utilities::srv::CartesianMoveToPose_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::CartesianMoveToPose_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::CartesianMoveToPose_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::CartesianMoveToPose_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::CartesianMoveToPose_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::CartesianMoveToPose_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::CartesianMoveToPose_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::CartesianMoveToPose_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::CartesianMoveToPose_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__compare_flexbe_utilities__srv__CartesianMoveToPose_Request
    std::shared_ptr<compare_flexbe_utilities::srv::CartesianMoveToPose_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__compare_flexbe_utilities__srv__CartesianMoveToPose_Request
    std::shared_ptr<compare_flexbe_utilities::srv::CartesianMoveToPose_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianMoveToPose_Request_ & other) const
  {
    if (this->waypoints != other.waypoints) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianMoveToPose_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianMoveToPose_Request_

// alias to use template instance with default allocator
using CartesianMoveToPose_Request =
  compare_flexbe_utilities::srv::CartesianMoveToPose_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace compare_flexbe_utilities


#ifndef _WIN32
# define DEPRECATED__compare_flexbe_utilities__srv__CartesianMoveToPose_Response __attribute__((deprecated))
#else
# define DEPRECATED__compare_flexbe_utilities__srv__CartesianMoveToPose_Response __declspec(deprecated)
#endif

namespace compare_flexbe_utilities
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CartesianMoveToPose_Response_
{
  using Type = CartesianMoveToPose_Response_<ContainerAllocator>;

  explicit CartesianMoveToPose_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->percentage_planned = 0.0f;
    }
  }

  explicit CartesianMoveToPose_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->percentage_planned = 0.0f;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _percentage_planned_type =
    float;
  _percentage_planned_type percentage_planned;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__percentage_planned(
    const float & _arg)
  {
    this->percentage_planned = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    compare_flexbe_utilities::srv::CartesianMoveToPose_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const compare_flexbe_utilities::srv::CartesianMoveToPose_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::CartesianMoveToPose_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::CartesianMoveToPose_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::CartesianMoveToPose_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::CartesianMoveToPose_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::CartesianMoveToPose_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::CartesianMoveToPose_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::CartesianMoveToPose_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::CartesianMoveToPose_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__compare_flexbe_utilities__srv__CartesianMoveToPose_Response
    std::shared_ptr<compare_flexbe_utilities::srv::CartesianMoveToPose_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__compare_flexbe_utilities__srv__CartesianMoveToPose_Response
    std::shared_ptr<compare_flexbe_utilities::srv::CartesianMoveToPose_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianMoveToPose_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->percentage_planned != other.percentage_planned) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianMoveToPose_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianMoveToPose_Response_

// alias to use template instance with default allocator
using CartesianMoveToPose_Response =
  compare_flexbe_utilities::srv::CartesianMoveToPose_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace compare_flexbe_utilities

namespace compare_flexbe_utilities
{

namespace srv
{

struct CartesianMoveToPose
{
  using Request = compare_flexbe_utilities::srv::CartesianMoveToPose_Request;
  using Response = compare_flexbe_utilities::srv::CartesianMoveToPose_Response;
};

}  // namespace srv

}  // namespace compare_flexbe_utilities

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__CARTESIAN_MOVE_TO_POSE__STRUCT_HPP_
