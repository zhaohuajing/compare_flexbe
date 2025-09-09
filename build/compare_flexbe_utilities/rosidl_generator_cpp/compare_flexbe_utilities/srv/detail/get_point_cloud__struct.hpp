// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from compare_flexbe_utilities:srv/GetPointCloud.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "compare_flexbe_utilities/srv/get_point_cloud.hpp"


#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__GET_POINT_CLOUD__STRUCT_HPP_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__GET_POINT_CLOUD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__compare_flexbe_utilities__srv__GetPointCloud_Request __attribute__((deprecated))
#else
# define DEPRECATED__compare_flexbe_utilities__srv__GetPointCloud_Request __declspec(deprecated)
#endif

namespace compare_flexbe_utilities
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPointCloud_Request_
{
  using Type = GetPointCloud_Request_<ContainerAllocator>;

  explicit GetPointCloud_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_topic = "";
      this->target_frame = "";
      this->timeout_sec = 0.0f;
    }
  }

  explicit GetPointCloud_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : camera_topic(_alloc),
    target_frame(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_topic = "";
      this->target_frame = "";
      this->timeout_sec = 0.0f;
    }
  }

  // field types and members
  using _camera_topic_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _camera_topic_type camera_topic;
  using _target_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_frame_type target_frame;
  using _timeout_sec_type =
    float;
  _timeout_sec_type timeout_sec;

  // setters for named parameter idiom
  Type & set__camera_topic(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->camera_topic = _arg;
    return *this;
  }
  Type & set__target_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_frame = _arg;
    return *this;
  }
  Type & set__timeout_sec(
    const float & _arg)
  {
    this->timeout_sec = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    compare_flexbe_utilities::srv::GetPointCloud_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const compare_flexbe_utilities::srv::GetPointCloud_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::GetPointCloud_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::GetPointCloud_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::GetPointCloud_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::GetPointCloud_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::GetPointCloud_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::GetPointCloud_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::GetPointCloud_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::GetPointCloud_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__compare_flexbe_utilities__srv__GetPointCloud_Request
    std::shared_ptr<compare_flexbe_utilities::srv::GetPointCloud_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__compare_flexbe_utilities__srv__GetPointCloud_Request
    std::shared_ptr<compare_flexbe_utilities::srv::GetPointCloud_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPointCloud_Request_ & other) const
  {
    if (this->camera_topic != other.camera_topic) {
      return false;
    }
    if (this->target_frame != other.target_frame) {
      return false;
    }
    if (this->timeout_sec != other.timeout_sec) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPointCloud_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPointCloud_Request_

// alias to use template instance with default allocator
using GetPointCloud_Request =
  compare_flexbe_utilities::srv::GetPointCloud_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace compare_flexbe_utilities


// Include directives for member types
// Member 'cloud_out'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"
// Member 'camera_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__compare_flexbe_utilities__srv__GetPointCloud_Response __attribute__((deprecated))
#else
# define DEPRECATED__compare_flexbe_utilities__srv__GetPointCloud_Response __declspec(deprecated)
#endif

namespace compare_flexbe_utilities
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPointCloud_Response_
{
  using Type = GetPointCloud_Response_<ContainerAllocator>;

  explicit GetPointCloud_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cloud_out(_init),
    camera_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cloud_frame = "";
      this->success = false;
      this->message = "";
    }
  }

  explicit GetPointCloud_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cloud_out(_alloc, _init),
    camera_pose(_alloc, _init),
    cloud_frame(_alloc),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cloud_frame = "";
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _cloud_out_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _cloud_out_type cloud_out;
  using _camera_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _camera_pose_type camera_pose;
  using _cloud_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cloud_frame_type cloud_frame;
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__cloud_out(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->cloud_out = _arg;
    return *this;
  }
  Type & set__camera_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->camera_pose = _arg;
    return *this;
  }
  Type & set__cloud_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cloud_frame = _arg;
    return *this;
  }
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

  // constant declarations

  // pointer types
  using RawPtr =
    compare_flexbe_utilities::srv::GetPointCloud_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const compare_flexbe_utilities::srv::GetPointCloud_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::GetPointCloud_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::GetPointCloud_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::GetPointCloud_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::GetPointCloud_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::GetPointCloud_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::GetPointCloud_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::GetPointCloud_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::GetPointCloud_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__compare_flexbe_utilities__srv__GetPointCloud_Response
    std::shared_ptr<compare_flexbe_utilities::srv::GetPointCloud_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__compare_flexbe_utilities__srv__GetPointCloud_Response
    std::shared_ptr<compare_flexbe_utilities::srv::GetPointCloud_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPointCloud_Response_ & other) const
  {
    if (this->cloud_out != other.cloud_out) {
      return false;
    }
    if (this->camera_pose != other.camera_pose) {
      return false;
    }
    if (this->cloud_frame != other.cloud_frame) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPointCloud_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPointCloud_Response_

// alias to use template instance with default allocator
using GetPointCloud_Response =
  compare_flexbe_utilities::srv::GetPointCloud_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace compare_flexbe_utilities


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__compare_flexbe_utilities__srv__GetPointCloud_Event __attribute__((deprecated))
#else
# define DEPRECATED__compare_flexbe_utilities__srv__GetPointCloud_Event __declspec(deprecated)
#endif

namespace compare_flexbe_utilities
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPointCloud_Event_
{
  using Type = GetPointCloud_Event_<ContainerAllocator>;

  explicit GetPointCloud_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetPointCloud_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<compare_flexbe_utilities::srv::GetPointCloud_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<compare_flexbe_utilities::srv::GetPointCloud_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<compare_flexbe_utilities::srv::GetPointCloud_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<compare_flexbe_utilities::srv::GetPointCloud_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<compare_flexbe_utilities::srv::GetPointCloud_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<compare_flexbe_utilities::srv::GetPointCloud_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<compare_flexbe_utilities::srv::GetPointCloud_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<compare_flexbe_utilities::srv::GetPointCloud_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    compare_flexbe_utilities::srv::GetPointCloud_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const compare_flexbe_utilities::srv::GetPointCloud_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::GetPointCloud_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<compare_flexbe_utilities::srv::GetPointCloud_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::GetPointCloud_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::GetPointCloud_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      compare_flexbe_utilities::srv::GetPointCloud_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<compare_flexbe_utilities::srv::GetPointCloud_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::GetPointCloud_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<compare_flexbe_utilities::srv::GetPointCloud_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__compare_flexbe_utilities__srv__GetPointCloud_Event
    std::shared_ptr<compare_flexbe_utilities::srv::GetPointCloud_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__compare_flexbe_utilities__srv__GetPointCloud_Event
    std::shared_ptr<compare_flexbe_utilities::srv::GetPointCloud_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPointCloud_Event_ & other) const
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
  bool operator!=(const GetPointCloud_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPointCloud_Event_

// alias to use template instance with default allocator
using GetPointCloud_Event =
  compare_flexbe_utilities::srv::GetPointCloud_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace compare_flexbe_utilities

namespace compare_flexbe_utilities
{

namespace srv
{

struct GetPointCloud
{
  using Request = compare_flexbe_utilities::srv::GetPointCloud_Request;
  using Response = compare_flexbe_utilities::srv::GetPointCloud_Response;
  using Event = compare_flexbe_utilities::srv::GetPointCloud_Event;
};

}  // namespace srv

}  // namespace compare_flexbe_utilities

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__GET_POINT_CLOUD__STRUCT_HPP_
