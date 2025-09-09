// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from compare_flexbe_utilities:srv/PlaneSegmentation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "compare_flexbe_utilities/srv/plane_segmentation.hpp"


#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__PLANE_SEGMENTATION__STRUCT_HPP_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__PLANE_SEGMENTATION__STRUCT_HPP_

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
# define DEPRECATED__compare_flexbe_utilities__srv__PlaneSegmentation_Request __attribute__((deprecated))
#else
# define DEPRECATED__compare_flexbe_utilities__srv__PlaneSegmentation_Request __declspec(deprecated)
#endif

namespace compare_flexbe_utilities
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlaneSegmentation_Request_
{
  using Type = PlaneSegmentation_Request_<ContainerAllocator>;

  explicit PlaneSegmentation_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->use_voxel = false;
      this->leaf_size = 0.0f;
      this->distance_threshold = 0.0f;
      this->max_iterations = 0l;
    }
  }

  explicit PlaneSegmentation_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->use_voxel = false;
      this->leaf_size = 0.0f;
      this->distance_threshold = 0.0f;
      this->max_iterations = 0l;
    }
  }

  // field types and members
  using _input_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _input_type input;
  using _use_voxel_type =
    bool;
  _use_voxel_type use_voxel;
  using _leaf_size_type =
    float;
  _leaf_size_type leaf_size;
  using _distance_threshold_type =
    float;
  _distance_threshold_type distance_threshold;
  using _max_iterations_type =
    int32_t;
  _max_iterations_type max_iterations;

  // setters for named parameter idiom
  Type & set__input(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->input = _arg;
    return *this;
  }
  Type & set__use_voxel(
    const bool & _arg)
  {
    this->use_voxel = _arg;
    return *this;
  }
  Type & set__leaf_size(
    const float & _arg)
  {
    this->leaf_size = _arg;
    return *this;
  }
  Type & set__distance_threshold(
    const float & _arg)
  {
    this->distance_threshold = _arg;
    return *this;
  }
  Type & set__max_iterations(
    const int32_t & _arg)
  {
    this->max_iterations = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    compare_flexbe_utilities::srv::PlaneSegmentation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const compare_flexbe_utilities::srv::PlaneSegmentation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::PlaneSegmentation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::PlaneSegmentation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::PlaneSegmentation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::PlaneSegmentation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::PlaneSegmentation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::PlaneSegmentation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::PlaneSegmentation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::PlaneSegmentation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__compare_flexbe_utilities__srv__PlaneSegmentation_Request
    std::shared_ptr<compare_flexbe_utilities::srv::PlaneSegmentation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__compare_flexbe_utilities__srv__PlaneSegmentation_Request
    std::shared_ptr<compare_flexbe_utilities::srv::PlaneSegmentation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlaneSegmentation_Request_ & other) const
  {
    if (this->input != other.input) {
      return false;
    }
    if (this->use_voxel != other.use_voxel) {
      return false;
    }
    if (this->leaf_size != other.leaf_size) {
      return false;
    }
    if (this->distance_threshold != other.distance_threshold) {
      return false;
    }
    if (this->max_iterations != other.max_iterations) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlaneSegmentation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlaneSegmentation_Request_

// alias to use template instance with default allocator
using PlaneSegmentation_Request =
  compare_flexbe_utilities::srv::PlaneSegmentation_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace compare_flexbe_utilities


// Include directives for member types
// Member 'without_plane'
// already included above
// #include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"
// Member 'plane_indices'
#include "pcl_msgs/msg/detail/point_indices__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__compare_flexbe_utilities__srv__PlaneSegmentation_Response __attribute__((deprecated))
#else
# define DEPRECATED__compare_flexbe_utilities__srv__PlaneSegmentation_Response __declspec(deprecated)
#endif

namespace compare_flexbe_utilities
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlaneSegmentation_Response_
{
  using Type = PlaneSegmentation_Response_<ContainerAllocator>;

  explicit PlaneSegmentation_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : without_plane(_init),
    plane_indices(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 4>::iterator, float>(this->plane_coefficients.begin(), this->plane_coefficients.end(), 0.0f);
      this->inlier_count = 0l;
    }
  }

  explicit PlaneSegmentation_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : without_plane(_alloc, _init),
    plane_indices(_alloc, _init),
    plane_coefficients(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 4>::iterator, float>(this->plane_coefficients.begin(), this->plane_coefficients.end(), 0.0f);
      this->inlier_count = 0l;
    }
  }

  // field types and members
  using _without_plane_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _without_plane_type without_plane;
  using _plane_indices_type =
    pcl_msgs::msg::PointIndices_<ContainerAllocator>;
  _plane_indices_type plane_indices;
  using _plane_coefficients_type =
    std::array<float, 4>;
  _plane_coefficients_type plane_coefficients;
  using _inlier_count_type =
    int32_t;
  _inlier_count_type inlier_count;

  // setters for named parameter idiom
  Type & set__without_plane(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->without_plane = _arg;
    return *this;
  }
  Type & set__plane_indices(
    const pcl_msgs::msg::PointIndices_<ContainerAllocator> & _arg)
  {
    this->plane_indices = _arg;
    return *this;
  }
  Type & set__plane_coefficients(
    const std::array<float, 4> & _arg)
  {
    this->plane_coefficients = _arg;
    return *this;
  }
  Type & set__inlier_count(
    const int32_t & _arg)
  {
    this->inlier_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    compare_flexbe_utilities::srv::PlaneSegmentation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const compare_flexbe_utilities::srv::PlaneSegmentation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::PlaneSegmentation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::PlaneSegmentation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::PlaneSegmentation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::PlaneSegmentation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::PlaneSegmentation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::PlaneSegmentation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::PlaneSegmentation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::PlaneSegmentation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__compare_flexbe_utilities__srv__PlaneSegmentation_Response
    std::shared_ptr<compare_flexbe_utilities::srv::PlaneSegmentation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__compare_flexbe_utilities__srv__PlaneSegmentation_Response
    std::shared_ptr<compare_flexbe_utilities::srv::PlaneSegmentation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlaneSegmentation_Response_ & other) const
  {
    if (this->without_plane != other.without_plane) {
      return false;
    }
    if (this->plane_indices != other.plane_indices) {
      return false;
    }
    if (this->plane_coefficients != other.plane_coefficients) {
      return false;
    }
    if (this->inlier_count != other.inlier_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlaneSegmentation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlaneSegmentation_Response_

// alias to use template instance with default allocator
using PlaneSegmentation_Response =
  compare_flexbe_utilities::srv::PlaneSegmentation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace compare_flexbe_utilities


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__compare_flexbe_utilities__srv__PlaneSegmentation_Event __attribute__((deprecated))
#else
# define DEPRECATED__compare_flexbe_utilities__srv__PlaneSegmentation_Event __declspec(deprecated)
#endif

namespace compare_flexbe_utilities
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlaneSegmentation_Event_
{
  using Type = PlaneSegmentation_Event_<ContainerAllocator>;

  explicit PlaneSegmentation_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit PlaneSegmentation_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<compare_flexbe_utilities::srv::PlaneSegmentation_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<compare_flexbe_utilities::srv::PlaneSegmentation_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<compare_flexbe_utilities::srv::PlaneSegmentation_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<compare_flexbe_utilities::srv::PlaneSegmentation_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<compare_flexbe_utilities::srv::PlaneSegmentation_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<compare_flexbe_utilities::srv::PlaneSegmentation_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<compare_flexbe_utilities::srv::PlaneSegmentation_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<compare_flexbe_utilities::srv::PlaneSegmentation_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    compare_flexbe_utilities::srv::PlaneSegmentation_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const compare_flexbe_utilities::srv::PlaneSegmentation_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::PlaneSegmentation_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::PlaneSegmentation_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::PlaneSegmentation_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::PlaneSegmentation_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::PlaneSegmentation_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::PlaneSegmentation_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::PlaneSegmentation_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::PlaneSegmentation_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__compare_flexbe_utilities__srv__PlaneSegmentation_Event
    std::shared_ptr<compare_flexbe_utilities::srv::PlaneSegmentation_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__compare_flexbe_utilities__srv__PlaneSegmentation_Event
    std::shared_ptr<compare_flexbe_utilities::srv::PlaneSegmentation_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlaneSegmentation_Event_ & other) const
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
  bool operator!=(const PlaneSegmentation_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlaneSegmentation_Event_

// alias to use template instance with default allocator
using PlaneSegmentation_Event =
  compare_flexbe_utilities::srv::PlaneSegmentation_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace compare_flexbe_utilities

namespace compare_flexbe_utilities
{

namespace srv
{

struct PlaneSegmentation
{
  using Request = compare_flexbe_utilities::srv::PlaneSegmentation_Request;
  using Response = compare_flexbe_utilities::srv::PlaneSegmentation_Response;
  using Event = compare_flexbe_utilities::srv::PlaneSegmentation_Event;
};

}  // namespace srv

}  // namespace compare_flexbe_utilities

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__PLANE_SEGMENTATION__STRUCT_HPP_
