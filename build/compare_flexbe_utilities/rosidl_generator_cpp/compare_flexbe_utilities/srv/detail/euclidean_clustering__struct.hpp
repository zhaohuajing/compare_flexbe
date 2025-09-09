// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from compare_flexbe_utilities:srv/EuclideanClustering.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "compare_flexbe_utilities/srv/euclidean_clustering.hpp"


#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__EUCLIDEAN_CLUSTERING__STRUCT_HPP_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__EUCLIDEAN_CLUSTERING__STRUCT_HPP_

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
// Member 'camera_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__compare_flexbe_utilities__srv__EuclideanClustering_Request __attribute__((deprecated))
#else
# define DEPRECATED__compare_flexbe_utilities__srv__EuclideanClustering_Request __declspec(deprecated)
#endif

namespace compare_flexbe_utilities
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EuclideanClustering_Request_
{
  using Type = EuclideanClustering_Request_<ContainerAllocator>;

  explicit EuclideanClustering_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input(_init),
    camera_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cluster_tolerance = 0.0f;
      this->min_cluster_size = 0l;
      this->max_cluster_size = 0l;
    }
  }

  explicit EuclideanClustering_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input(_alloc, _init),
    camera_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cluster_tolerance = 0.0f;
      this->min_cluster_size = 0l;
      this->max_cluster_size = 0l;
    }
  }

  // field types and members
  using _input_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _input_type input;
  using _camera_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _camera_pose_type camera_pose;
  using _cluster_tolerance_type =
    float;
  _cluster_tolerance_type cluster_tolerance;
  using _min_cluster_size_type =
    int32_t;
  _min_cluster_size_type min_cluster_size;
  using _max_cluster_size_type =
    int32_t;
  _max_cluster_size_type max_cluster_size;

  // setters for named parameter idiom
  Type & set__input(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->input = _arg;
    return *this;
  }
  Type & set__camera_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->camera_pose = _arg;
    return *this;
  }
  Type & set__cluster_tolerance(
    const float & _arg)
  {
    this->cluster_tolerance = _arg;
    return *this;
  }
  Type & set__min_cluster_size(
    const int32_t & _arg)
  {
    this->min_cluster_size = _arg;
    return *this;
  }
  Type & set__max_cluster_size(
    const int32_t & _arg)
  {
    this->max_cluster_size = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    compare_flexbe_utilities::srv::EuclideanClustering_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const compare_flexbe_utilities::srv::EuclideanClustering_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::EuclideanClustering_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::EuclideanClustering_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::EuclideanClustering_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::EuclideanClustering_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::EuclideanClustering_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::EuclideanClustering_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::EuclideanClustering_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::EuclideanClustering_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__compare_flexbe_utilities__srv__EuclideanClustering_Request
    std::shared_ptr<compare_flexbe_utilities::srv::EuclideanClustering_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__compare_flexbe_utilities__srv__EuclideanClustering_Request
    std::shared_ptr<compare_flexbe_utilities::srv::EuclideanClustering_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EuclideanClustering_Request_ & other) const
  {
    if (this->input != other.input) {
      return false;
    }
    if (this->camera_pose != other.camera_pose) {
      return false;
    }
    if (this->cluster_tolerance != other.cluster_tolerance) {
      return false;
    }
    if (this->min_cluster_size != other.min_cluster_size) {
      return false;
    }
    if (this->max_cluster_size != other.max_cluster_size) {
      return false;
    }
    return true;
  }
  bool operator!=(const EuclideanClustering_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EuclideanClustering_Request_

// alias to use template instance with default allocator
using EuclideanClustering_Request =
  compare_flexbe_utilities::srv::EuclideanClustering_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace compare_flexbe_utilities


// Include directives for member types
// Member 'target_cluster_indices'
// Member 'obstacle_cluster_indices'
#include "pcl_msgs/msg/detail/point_indices__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__compare_flexbe_utilities__srv__EuclideanClustering_Response __attribute__((deprecated))
#else
# define DEPRECATED__compare_flexbe_utilities__srv__EuclideanClustering_Response __declspec(deprecated)
#endif

namespace compare_flexbe_utilities
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EuclideanClustering_Response_
{
  using Type = EuclideanClustering_Response_<ContainerAllocator>;

  explicit EuclideanClustering_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_cluster_indices(_init)
  {
    (void)_init;
  }

  explicit EuclideanClustering_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_cluster_indices(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _target_cluster_indices_type =
    pcl_msgs::msg::PointIndices_<ContainerAllocator>;
  _target_cluster_indices_type target_cluster_indices;
  using _obstacle_cluster_indices_type =
    std::vector<pcl_msgs::msg::PointIndices_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pcl_msgs::msg::PointIndices_<ContainerAllocator>>>;
  _obstacle_cluster_indices_type obstacle_cluster_indices;

  // setters for named parameter idiom
  Type & set__target_cluster_indices(
    const pcl_msgs::msg::PointIndices_<ContainerAllocator> & _arg)
  {
    this->target_cluster_indices = _arg;
    return *this;
  }
  Type & set__obstacle_cluster_indices(
    const std::vector<pcl_msgs::msg::PointIndices_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pcl_msgs::msg::PointIndices_<ContainerAllocator>>> & _arg)
  {
    this->obstacle_cluster_indices = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    compare_flexbe_utilities::srv::EuclideanClustering_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const compare_flexbe_utilities::srv::EuclideanClustering_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::EuclideanClustering_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::EuclideanClustering_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::EuclideanClustering_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::EuclideanClustering_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::EuclideanClustering_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::EuclideanClustering_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::EuclideanClustering_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::EuclideanClustering_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__compare_flexbe_utilities__srv__EuclideanClustering_Response
    std::shared_ptr<compare_flexbe_utilities::srv::EuclideanClustering_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__compare_flexbe_utilities__srv__EuclideanClustering_Response
    std::shared_ptr<compare_flexbe_utilities::srv::EuclideanClustering_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EuclideanClustering_Response_ & other) const
  {
    if (this->target_cluster_indices != other.target_cluster_indices) {
      return false;
    }
    if (this->obstacle_cluster_indices != other.obstacle_cluster_indices) {
      return false;
    }
    return true;
  }
  bool operator!=(const EuclideanClustering_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EuclideanClustering_Response_

// alias to use template instance with default allocator
using EuclideanClustering_Response =
  compare_flexbe_utilities::srv::EuclideanClustering_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace compare_flexbe_utilities


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__compare_flexbe_utilities__srv__EuclideanClustering_Event __attribute__((deprecated))
#else
# define DEPRECATED__compare_flexbe_utilities__srv__EuclideanClustering_Event __declspec(deprecated)
#endif

namespace compare_flexbe_utilities
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EuclideanClustering_Event_
{
  using Type = EuclideanClustering_Event_<ContainerAllocator>;

  explicit EuclideanClustering_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit EuclideanClustering_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<compare_flexbe_utilities::srv::EuclideanClustering_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<compare_flexbe_utilities::srv::EuclideanClustering_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<compare_flexbe_utilities::srv::EuclideanClustering_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<compare_flexbe_utilities::srv::EuclideanClustering_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<compare_flexbe_utilities::srv::EuclideanClustering_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<compare_flexbe_utilities::srv::EuclideanClustering_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<compare_flexbe_utilities::srv::EuclideanClustering_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<compare_flexbe_utilities::srv::EuclideanClustering_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    compare_flexbe_utilities::srv::EuclideanClustering_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const compare_flexbe_utilities::srv::EuclideanClustering_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::EuclideanClustering_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::EuclideanClustering_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::EuclideanClustering_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::EuclideanClustering_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::EuclideanClustering_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::EuclideanClustering_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::EuclideanClustering_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::EuclideanClustering_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__compare_flexbe_utilities__srv__EuclideanClustering_Event
    std::shared_ptr<compare_flexbe_utilities::srv::EuclideanClustering_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__compare_flexbe_utilities__srv__EuclideanClustering_Event
    std::shared_ptr<compare_flexbe_utilities::srv::EuclideanClustering_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EuclideanClustering_Event_ & other) const
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
  bool operator!=(const EuclideanClustering_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EuclideanClustering_Event_

// alias to use template instance with default allocator
using EuclideanClustering_Event =
  compare_flexbe_utilities::srv::EuclideanClustering_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace compare_flexbe_utilities

namespace compare_flexbe_utilities
{

namespace srv
{

struct EuclideanClustering
{
  using Request = compare_flexbe_utilities::srv::EuclideanClustering_Request;
  using Response = compare_flexbe_utilities::srv::EuclideanClustering_Response;
  using Event = compare_flexbe_utilities::srv::EuclideanClustering_Event;
};

}  // namespace srv

}  // namespace compare_flexbe_utilities

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__EUCLIDEAN_CLUSTERING__STRUCT_HPP_
