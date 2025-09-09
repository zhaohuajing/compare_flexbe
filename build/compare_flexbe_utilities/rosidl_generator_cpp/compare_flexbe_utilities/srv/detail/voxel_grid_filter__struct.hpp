// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from compare_flexbe_utilities:srv/VoxelGridFilter.idl
// generated code does not contain a copyright notice

#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__VOXEL_GRID_FILTER__STRUCT_HPP_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__VOXEL_GRID_FILTER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'input'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__compare_flexbe_utilities__srv__VoxelGridFilter_Request __attribute__((deprecated))
#else
# define DEPRECATED__compare_flexbe_utilities__srv__VoxelGridFilter_Request __declspec(deprecated)
#endif

namespace compare_flexbe_utilities
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct VoxelGridFilter_Request_
{
  using Type = VoxelGridFilter_Request_<ContainerAllocator>;

  explicit VoxelGridFilter_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input(_init)
  {
    (void)_init;
  }

  explicit VoxelGridFilter_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _input_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _input_type input;

  // setters for named parameter idiom
  Type & set__input(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->input = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    compare_flexbe_utilities::srv::VoxelGridFilter_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const compare_flexbe_utilities::srv::VoxelGridFilter_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::VoxelGridFilter_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::VoxelGridFilter_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::VoxelGridFilter_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::VoxelGridFilter_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::VoxelGridFilter_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::VoxelGridFilter_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::VoxelGridFilter_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::VoxelGridFilter_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__compare_flexbe_utilities__srv__VoxelGridFilter_Request
    std::shared_ptr<compare_flexbe_utilities::srv::VoxelGridFilter_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__compare_flexbe_utilities__srv__VoxelGridFilter_Request
    std::shared_ptr<compare_flexbe_utilities::srv::VoxelGridFilter_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VoxelGridFilter_Request_ & other) const
  {
    if (this->input != other.input) {
      return false;
    }
    return true;
  }
  bool operator!=(const VoxelGridFilter_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VoxelGridFilter_Request_

// alias to use template instance with default allocator
using VoxelGridFilter_Request =
  compare_flexbe_utilities::srv::VoxelGridFilter_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace compare_flexbe_utilities


// Include directives for member types
// Member 'filtered'
// already included above
// #include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__compare_flexbe_utilities__srv__VoxelGridFilter_Response __attribute__((deprecated))
#else
# define DEPRECATED__compare_flexbe_utilities__srv__VoxelGridFilter_Response __declspec(deprecated)
#endif

namespace compare_flexbe_utilities
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct VoxelGridFilter_Response_
{
  using Type = VoxelGridFilter_Response_<ContainerAllocator>;

  explicit VoxelGridFilter_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filtered(_init)
  {
    (void)_init;
  }

  explicit VoxelGridFilter_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filtered(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _filtered_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _filtered_type filtered;

  // setters for named parameter idiom
  Type & set__filtered(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->filtered = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    compare_flexbe_utilities::srv::VoxelGridFilter_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const compare_flexbe_utilities::srv::VoxelGridFilter_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::VoxelGridFilter_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::VoxelGridFilter_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::VoxelGridFilter_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::VoxelGridFilter_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::VoxelGridFilter_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::VoxelGridFilter_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::VoxelGridFilter_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::VoxelGridFilter_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__compare_flexbe_utilities__srv__VoxelGridFilter_Response
    std::shared_ptr<compare_flexbe_utilities::srv::VoxelGridFilter_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__compare_flexbe_utilities__srv__VoxelGridFilter_Response
    std::shared_ptr<compare_flexbe_utilities::srv::VoxelGridFilter_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VoxelGridFilter_Response_ & other) const
  {
    if (this->filtered != other.filtered) {
      return false;
    }
    return true;
  }
  bool operator!=(const VoxelGridFilter_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VoxelGridFilter_Response_

// alias to use template instance with default allocator
using VoxelGridFilter_Response =
  compare_flexbe_utilities::srv::VoxelGridFilter_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace compare_flexbe_utilities

namespace compare_flexbe_utilities
{

namespace srv
{

struct VoxelGridFilter
{
  using Request = compare_flexbe_utilities::srv::VoxelGridFilter_Request;
  using Response = compare_flexbe_utilities::srv::VoxelGridFilter_Response;
};

}  // namespace srv

}  // namespace compare_flexbe_utilities

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__VOXEL_GRID_FILTER__STRUCT_HPP_
