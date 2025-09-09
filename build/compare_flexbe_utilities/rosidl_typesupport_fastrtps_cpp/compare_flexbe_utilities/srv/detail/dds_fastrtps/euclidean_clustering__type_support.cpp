// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from compare_flexbe_utilities:srv/EuclideanClustering.idl
// generated code does not contain a copyright notice
#include "compare_flexbe_utilities/srv/detail/euclidean_clustering__rosidl_typesupport_fastrtps_cpp.hpp"
#include "compare_flexbe_utilities/srv/detail/euclidean_clustering__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::PointCloud2 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::PointCloud2 &);
size_t get_serialized_size(
  const sensor_msgs::msg::PointCloud2 &,
  size_t current_alignment);
size_t
max_serialized_size_PointCloud2(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::PoseStamped &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::PoseStamped &);
size_t get_serialized_size(
  const geometry_msgs::msg::PoseStamped &,
  size_t current_alignment);
size_t
max_serialized_size_PoseStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace compare_flexbe_utilities
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_compare_flexbe_utilities
cdr_serialize(
  const compare_flexbe_utilities::srv::EuclideanClustering_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: input
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.input,
    cdr);
  // Member: camera_pose
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.camera_pose,
    cdr);
  // Member: cluster_tolerance
  cdr << ros_message.cluster_tolerance;
  // Member: min_cluster_size
  cdr << ros_message.min_cluster_size;
  // Member: max_cluster_size
  cdr << ros_message.max_cluster_size;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_compare_flexbe_utilities
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  compare_flexbe_utilities::srv::EuclideanClustering_Request & ros_message)
{
  // Member: input
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.input);

  // Member: camera_pose
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.camera_pose);

  // Member: cluster_tolerance
  cdr >> ros_message.cluster_tolerance;

  // Member: min_cluster_size
  cdr >> ros_message.min_cluster_size;

  // Member: max_cluster_size
  cdr >> ros_message.max_cluster_size;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_compare_flexbe_utilities
get_serialized_size(
  const compare_flexbe_utilities::srv::EuclideanClustering_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: input

  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.input, current_alignment);
  // Member: camera_pose

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.camera_pose, current_alignment);
  // Member: cluster_tolerance
  {
    size_t item_size = sizeof(ros_message.cluster_tolerance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_cluster_size
  {
    size_t item_size = sizeof(ros_message.min_cluster_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_cluster_size
  {
    size_t item_size = sizeof(ros_message.max_cluster_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_compare_flexbe_utilities
max_serialized_size_EuclideanClustering_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: input
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PointCloud2(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: camera_pose
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PoseStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: cluster_tolerance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: min_cluster_size
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_cluster_size
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = compare_flexbe_utilities::srv::EuclideanClustering_Request;
    is_plain =
      (
      offsetof(DataType, max_cluster_size) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _EuclideanClustering_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const compare_flexbe_utilities::srv::EuclideanClustering_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EuclideanClustering_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<compare_flexbe_utilities::srv::EuclideanClustering_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EuclideanClustering_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const compare_flexbe_utilities::srv::EuclideanClustering_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EuclideanClustering_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EuclideanClustering_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EuclideanClustering_Request__callbacks = {
  "compare_flexbe_utilities::srv",
  "EuclideanClustering_Request",
  _EuclideanClustering_Request__cdr_serialize,
  _EuclideanClustering_Request__cdr_deserialize,
  _EuclideanClustering_Request__get_serialized_size,
  _EuclideanClustering_Request__max_serialized_size
};

static rosidl_message_type_support_t _EuclideanClustering_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EuclideanClustering_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace compare_flexbe_utilities

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_compare_flexbe_utilities
const rosidl_message_type_support_t *
get_message_type_support_handle<compare_flexbe_utilities::srv::EuclideanClustering_Request>()
{
  return &compare_flexbe_utilities::srv::typesupport_fastrtps_cpp::_EuclideanClustering_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, compare_flexbe_utilities, srv, EuclideanClustering_Request)() {
  return &compare_flexbe_utilities::srv::typesupport_fastrtps_cpp::_EuclideanClustering_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace pcl_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const pcl_msgs::msg::PointIndices &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  pcl_msgs::msg::PointIndices &);
size_t get_serialized_size(
  const pcl_msgs::msg::PointIndices &,
  size_t current_alignment);
size_t
max_serialized_size_PointIndices(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace pcl_msgs

// functions for pcl_msgs::msg::PointIndices already declared above


namespace compare_flexbe_utilities
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_compare_flexbe_utilities
cdr_serialize(
  const compare_flexbe_utilities::srv::EuclideanClustering_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: target_cluster_indices
  pcl_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.target_cluster_indices,
    cdr);
  // Member: obstacle_cluster_indices
  {
    size_t size = ros_message.obstacle_cluster_indices.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      pcl_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.obstacle_cluster_indices[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_compare_flexbe_utilities
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  compare_flexbe_utilities::srv::EuclideanClustering_Response & ros_message)
{
  // Member: target_cluster_indices
  pcl_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.target_cluster_indices);

  // Member: obstacle_cluster_indices
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.obstacle_cluster_indices.resize(size);
    for (size_t i = 0; i < size; i++) {
      pcl_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.obstacle_cluster_indices[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_compare_flexbe_utilities
get_serialized_size(
  const compare_flexbe_utilities::srv::EuclideanClustering_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: target_cluster_indices

  current_alignment +=
    pcl_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.target_cluster_indices, current_alignment);
  // Member: obstacle_cluster_indices
  {
    size_t array_size = ros_message.obstacle_cluster_indices.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        pcl_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.obstacle_cluster_indices[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_compare_flexbe_utilities
max_serialized_size_EuclideanClustering_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: target_cluster_indices
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        pcl_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PointIndices(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: obstacle_cluster_indices
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        pcl_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PointIndices(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = compare_flexbe_utilities::srv::EuclideanClustering_Response;
    is_plain =
      (
      offsetof(DataType, obstacle_cluster_indices) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _EuclideanClustering_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const compare_flexbe_utilities::srv::EuclideanClustering_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EuclideanClustering_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<compare_flexbe_utilities::srv::EuclideanClustering_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EuclideanClustering_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const compare_flexbe_utilities::srv::EuclideanClustering_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EuclideanClustering_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EuclideanClustering_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EuclideanClustering_Response__callbacks = {
  "compare_flexbe_utilities::srv",
  "EuclideanClustering_Response",
  _EuclideanClustering_Response__cdr_serialize,
  _EuclideanClustering_Response__cdr_deserialize,
  _EuclideanClustering_Response__get_serialized_size,
  _EuclideanClustering_Response__max_serialized_size
};

static rosidl_message_type_support_t _EuclideanClustering_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EuclideanClustering_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace compare_flexbe_utilities

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_compare_flexbe_utilities
const rosidl_message_type_support_t *
get_message_type_support_handle<compare_flexbe_utilities::srv::EuclideanClustering_Response>()
{
  return &compare_flexbe_utilities::srv::typesupport_fastrtps_cpp::_EuclideanClustering_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, compare_flexbe_utilities, srv, EuclideanClustering_Response)() {
  return &compare_flexbe_utilities::srv::typesupport_fastrtps_cpp::_EuclideanClustering_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace compare_flexbe_utilities
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _EuclideanClustering__callbacks = {
  "compare_flexbe_utilities::srv",
  "EuclideanClustering",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, compare_flexbe_utilities, srv, EuclideanClustering_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, compare_flexbe_utilities, srv, EuclideanClustering_Response)(),
};

static rosidl_service_type_support_t _EuclideanClustering__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EuclideanClustering__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace compare_flexbe_utilities

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_compare_flexbe_utilities
const rosidl_service_type_support_t *
get_service_type_support_handle<compare_flexbe_utilities::srv::EuclideanClustering>()
{
  return &compare_flexbe_utilities::srv::typesupport_fastrtps_cpp::_EuclideanClustering__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, compare_flexbe_utilities, srv, EuclideanClustering)() {
  return &compare_flexbe_utilities::srv::typesupport_fastrtps_cpp::_EuclideanClustering__handle;
}

#ifdef __cplusplus
}
#endif
