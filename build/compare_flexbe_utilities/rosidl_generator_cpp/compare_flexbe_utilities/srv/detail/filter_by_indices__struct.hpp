// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from compare_flexbe_utilities:srv/FilterByIndices.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "compare_flexbe_utilities/srv/filter_by_indices.hpp"


#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__FILTER_BY_INDICES__STRUCT_HPP_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__FILTER_BY_INDICES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'input_cloud'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"
// Member 'target_indices'
#include "pcl_msgs/msg/detail/point_indices__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__compare_flexbe_utilities__srv__FilterByIndices_Request __attribute__((deprecated))
#else
# define DEPRECATED__compare_flexbe_utilities__srv__FilterByIndices_Request __declspec(deprecated)
#endif

namespace compare_flexbe_utilities
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FilterByIndices_Request_
{
  using Type = FilterByIndices_Request_<ContainerAllocator>;

  explicit FilterByIndices_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input_cloud(_init),
    target_indices(_init)
  {
    (void)_init;
  }

  explicit FilterByIndices_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input_cloud(_alloc, _init),
    target_indices(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _input_cloud_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _input_cloud_type input_cloud;
  using _target_indices_type =
    pcl_msgs::msg::PointIndices_<ContainerAllocator>;
  _target_indices_type target_indices;

  // setters for named parameter idiom
  Type & set__input_cloud(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->input_cloud = _arg;
    return *this;
  }
  Type & set__target_indices(
    const pcl_msgs::msg::PointIndices_<ContainerAllocator> & _arg)
  {
    this->target_indices = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    compare_flexbe_utilities::srv::FilterByIndices_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const compare_flexbe_utilities::srv::FilterByIndices_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::FilterByIndices_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::FilterByIndices_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::FilterByIndices_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::FilterByIndices_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::FilterByIndices_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::FilterByIndices_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::FilterByIndices_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::FilterByIndices_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__compare_flexbe_utilities__srv__FilterByIndices_Request
    std::shared_ptr<compare_flexbe_utilities::srv::FilterByIndices_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__compare_flexbe_utilities__srv__FilterByIndices_Request
    std::shared_ptr<compare_flexbe_utilities::srv::FilterByIndices_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FilterByIndices_Request_ & other) const
  {
    if (this->input_cloud != other.input_cloud) {
      return false;
    }
    if (this->target_indices != other.target_indices) {
      return false;
    }
    return true;
  }
  bool operator!=(const FilterByIndices_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FilterByIndices_Request_

// alias to use template instance with default allocator
using FilterByIndices_Request =
  compare_flexbe_utilities::srv::FilterByIndices_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace compare_flexbe_utilities


// Include directives for member types
// Member 'filtered_cloud'
// already included above
// #include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__compare_flexbe_utilities__srv__FilterByIndices_Response __attribute__((deprecated))
#else
# define DEPRECATED__compare_flexbe_utilities__srv__FilterByIndices_Response __declspec(deprecated)
#endif

namespace compare_flexbe_utilities
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FilterByIndices_Response_
{
  using Type = FilterByIndices_Response_<ContainerAllocator>;

  explicit FilterByIndices_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filtered_cloud(_init)
  {
    (void)_init;
  }

  explicit FilterByIndices_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filtered_cloud(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _filtered_cloud_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _filtered_cloud_type filtered_cloud;

  // setters for named parameter idiom
  Type & set__filtered_cloud(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->filtered_cloud = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    compare_flexbe_utilities::srv::FilterByIndices_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const compare_flexbe_utilities::srv::FilterByIndices_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::FilterByIndices_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::FilterByIndices_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::FilterByIndices_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::FilterByIndices_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::FilterByIndices_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::FilterByIndices_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::FilterByIndices_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::FilterByIndices_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__compare_flexbe_utilities__srv__FilterByIndices_Response
    std::shared_ptr<compare_flexbe_utilities::srv::FilterByIndices_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__compare_flexbe_utilities__srv__FilterByIndices_Response
    std::shared_ptr<compare_flexbe_utilities::srv::FilterByIndices_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FilterByIndices_Response_ & other) const
  {
    if (this->filtered_cloud != other.filtered_cloud) {
      return false;
    }
    return true;
  }
  bool operator!=(const FilterByIndices_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FilterByIndices_Response_

// alias to use template instance with default allocator
using FilterByIndices_Response =
  compare_flexbe_utilities::srv::FilterByIndices_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace compare_flexbe_utilities


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__compare_flexbe_utilities__srv__FilterByIndices_Event __attribute__((deprecated))
#else
# define DEPRECATED__compare_flexbe_utilities__srv__FilterByIndices_Event __declspec(deprecated)
#endif

namespace compare_flexbe_utilities
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FilterByIndices_Event_
{
  using Type = FilterByIndices_Event_<ContainerAllocator>;

  explicit FilterByIndices_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit FilterByIndices_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<compare_flexbe_utilities::srv::FilterByIndices_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<compare_flexbe_utilities::srv::FilterByIndices_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<compare_flexbe_utilities::srv::FilterByIndices_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<compare_flexbe_utilities::srv::FilterByIndices_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<compare_flexbe_utilities::srv::FilterByIndices_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<compare_flexbe_utilities::srv::FilterByIndices_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<compare_flexbe_utilities::srv::FilterByIndices_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<compare_flexbe_utilities::srv::FilterByIndices_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    compare_flexbe_utilities::srv::FilterByIndices_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const compare_flexbe_utilities::srv::FilterByIndices_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::FilterByIndices_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::FilterByIndices_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::FilterByIndices_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::FilterByIndices_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::FilterByIndices_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::FilterByIndices_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::FilterByIndices_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::FilterByIndices_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__compare_flexbe_utilities__srv__FilterByIndices_Event
    std::shared_ptr<compare_flexbe_utilities::srv::FilterByIndices_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__compare_flexbe_utilities__srv__FilterByIndices_Event
    std::shared_ptr<compare_flexbe_utilities::srv::FilterByIndices_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FilterByIndices_Event_ & other) const
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
  bool operator!=(const FilterByIndices_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FilterByIndices_Event_

// alias to use template instance with default allocator
using FilterByIndices_Event =
  compare_flexbe_utilities::srv::FilterByIndices_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace compare_flexbe_utilities

namespace compare_flexbe_utilities
{

namespace srv
{

struct FilterByIndices
{
  using Request = compare_flexbe_utilities::srv::FilterByIndices_Request;
  using Response = compare_flexbe_utilities::srv::FilterByIndices_Response;
  using Event = compare_flexbe_utilities::srv::FilterByIndices_Event;
};

}  // namespace srv

}  // namespace compare_flexbe_utilities

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__FILTER_BY_INDICES__STRUCT_HPP_
