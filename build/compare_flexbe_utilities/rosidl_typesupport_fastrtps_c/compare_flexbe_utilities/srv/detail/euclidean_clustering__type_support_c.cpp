// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from compare_flexbe_utilities:srv/EuclideanClustering.idl
// generated code does not contain a copyright notice
#include "compare_flexbe_utilities/srv/detail/euclidean_clustering__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "compare_flexbe_utilities/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "compare_flexbe_utilities/srv/detail/euclidean_clustering__struct.h"
#include "compare_flexbe_utilities/srv/detail/euclidean_clustering__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/pose_stamped__functions.h"  // camera_pose
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"  // input

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
bool cdr_serialize_geometry_msgs__msg__PoseStamped(
  const geometry_msgs__msg__PoseStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
bool cdr_deserialize_geometry_msgs__msg__PoseStamped(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__PoseStamped * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
size_t get_serialized_size_geometry_msgs__msg__PoseStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
size_t max_serialized_size_geometry_msgs__msg__PoseStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
bool cdr_serialize_key_geometry_msgs__msg__PoseStamped(
  const geometry_msgs__msg__PoseStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
size_t get_serialized_size_key_geometry_msgs__msg__PoseStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
size_t max_serialized_size_key_geometry_msgs__msg__PoseStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseStamped)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
bool cdr_serialize_sensor_msgs__msg__PointCloud2(
  const sensor_msgs__msg__PointCloud2 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
bool cdr_deserialize_sensor_msgs__msg__PointCloud2(
  eprosima::fastcdr::Cdr & cdr,
  sensor_msgs__msg__PointCloud2 * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
size_t get_serialized_size_sensor_msgs__msg__PointCloud2(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
size_t max_serialized_size_sensor_msgs__msg__PointCloud2(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
bool cdr_serialize_key_sensor_msgs__msg__PointCloud2(
  const sensor_msgs__msg__PointCloud2 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
size_t get_serialized_size_key_sensor_msgs__msg__PointCloud2(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
size_t max_serialized_size_key_sensor_msgs__msg__PointCloud2(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2)();


using _EuclideanClustering_Request__ros_msg_type = compare_flexbe_utilities__srv__EuclideanClustering_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_compare_flexbe_utilities
bool cdr_serialize_compare_flexbe_utilities__srv__EuclideanClustering_Request(
  const compare_flexbe_utilities__srv__EuclideanClustering_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: input
  {
    cdr_serialize_sensor_msgs__msg__PointCloud2(
      &ros_message->input, cdr);
  }

  // Field name: camera_pose
  {
    cdr_serialize_geometry_msgs__msg__PoseStamped(
      &ros_message->camera_pose, cdr);
  }

  // Field name: cluster_tolerance
  {
    cdr << ros_message->cluster_tolerance;
  }

  // Field name: min_cluster_size
  {
    cdr << ros_message->min_cluster_size;
  }

  // Field name: max_cluster_size
  {
    cdr << ros_message->max_cluster_size;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_compare_flexbe_utilities
bool cdr_deserialize_compare_flexbe_utilities__srv__EuclideanClustering_Request(
  eprosima::fastcdr::Cdr & cdr,
  compare_flexbe_utilities__srv__EuclideanClustering_Request * ros_message)
{
  // Field name: input
  {
    cdr_deserialize_sensor_msgs__msg__PointCloud2(cdr, &ros_message->input);
  }

  // Field name: camera_pose
  {
    cdr_deserialize_geometry_msgs__msg__PoseStamped(cdr, &ros_message->camera_pose);
  }

  // Field name: cluster_tolerance
  {
    cdr >> ros_message->cluster_tolerance;
  }

  // Field name: min_cluster_size
  {
    cdr >> ros_message->min_cluster_size;
  }

  // Field name: max_cluster_size
  {
    cdr >> ros_message->max_cluster_size;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_compare_flexbe_utilities
size_t get_serialized_size_compare_flexbe_utilities__srv__EuclideanClustering_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EuclideanClustering_Request__ros_msg_type * ros_message = static_cast<const _EuclideanClustering_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: input
  current_alignment += get_serialized_size_sensor_msgs__msg__PointCloud2(
    &(ros_message->input), current_alignment);

  // Field name: camera_pose
  current_alignment += get_serialized_size_geometry_msgs__msg__PoseStamped(
    &(ros_message->camera_pose), current_alignment);

  // Field name: cluster_tolerance
  {
    size_t item_size = sizeof(ros_message->cluster_tolerance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: min_cluster_size
  {
    size_t item_size = sizeof(ros_message->min_cluster_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_cluster_size
  {
    size_t item_size = sizeof(ros_message->max_cluster_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_compare_flexbe_utilities
size_t max_serialized_size_compare_flexbe_utilities__srv__EuclideanClustering_Request(
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

  // Field name: input
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__PointCloud2(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: camera_pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__PoseStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: cluster_tolerance
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: min_cluster_size
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: max_cluster_size
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
    using DataType = compare_flexbe_utilities__srv__EuclideanClustering_Request;
    is_plain =
      (
      offsetof(DataType, max_cluster_size) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_compare_flexbe_utilities
bool cdr_serialize_key_compare_flexbe_utilities__srv__EuclideanClustering_Request(
  const compare_flexbe_utilities__srv__EuclideanClustering_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: input
  {
    cdr_serialize_key_sensor_msgs__msg__PointCloud2(
      &ros_message->input, cdr);
  }

  // Field name: camera_pose
  {
    cdr_serialize_key_geometry_msgs__msg__PoseStamped(
      &ros_message->camera_pose, cdr);
  }

  // Field name: cluster_tolerance
  {
    cdr << ros_message->cluster_tolerance;
  }

  // Field name: min_cluster_size
  {
    cdr << ros_message->min_cluster_size;
  }

  // Field name: max_cluster_size
  {
    cdr << ros_message->max_cluster_size;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_compare_flexbe_utilities
size_t get_serialized_size_key_compare_flexbe_utilities__srv__EuclideanClustering_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EuclideanClustering_Request__ros_msg_type * ros_message = static_cast<const _EuclideanClustering_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: input
  current_alignment += get_serialized_size_key_sensor_msgs__msg__PointCloud2(
    &(ros_message->input), current_alignment);

  // Field name: camera_pose
  current_alignment += get_serialized_size_key_geometry_msgs__msg__PoseStamped(
    &(ros_message->camera_pose), current_alignment);

  // Field name: cluster_tolerance
  {
    size_t item_size = sizeof(ros_message->cluster_tolerance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: min_cluster_size
  {
    size_t item_size = sizeof(ros_message->min_cluster_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_cluster_size
  {
    size_t item_size = sizeof(ros_message->max_cluster_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_compare_flexbe_utilities
size_t max_serialized_size_key_compare_flexbe_utilities__srv__EuclideanClustering_Request(
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
  // Field name: input
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_sensor_msgs__msg__PointCloud2(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: camera_pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__PoseStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: cluster_tolerance
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: min_cluster_size
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: max_cluster_size
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
    using DataType = compare_flexbe_utilities__srv__EuclideanClustering_Request;
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
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const compare_flexbe_utilities__srv__EuclideanClustering_Request * ros_message = static_cast<const compare_flexbe_utilities__srv__EuclideanClustering_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_compare_flexbe_utilities__srv__EuclideanClustering_Request(ros_message, cdr);
}

static bool _EuclideanClustering_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  compare_flexbe_utilities__srv__EuclideanClustering_Request * ros_message = static_cast<compare_flexbe_utilities__srv__EuclideanClustering_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_compare_flexbe_utilities__srv__EuclideanClustering_Request(cdr, ros_message);
}

static uint32_t _EuclideanClustering_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_compare_flexbe_utilities__srv__EuclideanClustering_Request(
      untyped_ros_message, 0));
}

static size_t _EuclideanClustering_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_compare_flexbe_utilities__srv__EuclideanClustering_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EuclideanClustering_Request = {
  "compare_flexbe_utilities::srv",
  "EuclideanClustering_Request",
  _EuclideanClustering_Request__cdr_serialize,
  _EuclideanClustering_Request__cdr_deserialize,
  _EuclideanClustering_Request__get_serialized_size,
  _EuclideanClustering_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _EuclideanClustering_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EuclideanClustering_Request,
  get_message_typesupport_handle_function,
  &compare_flexbe_utilities__srv__EuclideanClustering_Request__get_type_hash,
  &compare_flexbe_utilities__srv__EuclideanClustering_Request__get_type_description,
  &compare_flexbe_utilities__srv__EuclideanClustering_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, compare_flexbe_utilities, srv, EuclideanClustering_Request)() {
  return &_EuclideanClustering_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "compare_flexbe_utilities/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "compare_flexbe_utilities/srv/detail/euclidean_clustering__struct.h"
// already included above
// #include "compare_flexbe_utilities/srv/detail/euclidean_clustering__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "pcl_msgs/msg/detail/point_indices__functions.h"  // obstacle_cluster_indices, target_cluster_indices

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
bool cdr_serialize_pcl_msgs__msg__PointIndices(
  const pcl_msgs__msg__PointIndices * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
bool cdr_deserialize_pcl_msgs__msg__PointIndices(
  eprosima::fastcdr::Cdr & cdr,
  pcl_msgs__msg__PointIndices * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
size_t get_serialized_size_pcl_msgs__msg__PointIndices(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
size_t max_serialized_size_pcl_msgs__msg__PointIndices(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
bool cdr_serialize_key_pcl_msgs__msg__PointIndices(
  const pcl_msgs__msg__PointIndices * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
size_t get_serialized_size_key_pcl_msgs__msg__PointIndices(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
size_t max_serialized_size_key_pcl_msgs__msg__PointIndices(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pcl_msgs, msg, PointIndices)();


using _EuclideanClustering_Response__ros_msg_type = compare_flexbe_utilities__srv__EuclideanClustering_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_compare_flexbe_utilities
bool cdr_serialize_compare_flexbe_utilities__srv__EuclideanClustering_Response(
  const compare_flexbe_utilities__srv__EuclideanClustering_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: target_cluster_indices
  {
    cdr_serialize_pcl_msgs__msg__PointIndices(
      &ros_message->target_cluster_indices, cdr);
  }

  // Field name: obstacle_cluster_indices
  {
    size_t size = ros_message->obstacle_cluster_indices.size;
    auto array_ptr = ros_message->obstacle_cluster_indices.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_pcl_msgs__msg__PointIndices(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_compare_flexbe_utilities
bool cdr_deserialize_compare_flexbe_utilities__srv__EuclideanClustering_Response(
  eprosima::fastcdr::Cdr & cdr,
  compare_flexbe_utilities__srv__EuclideanClustering_Response * ros_message)
{
  // Field name: target_cluster_indices
  {
    cdr_deserialize_pcl_msgs__msg__PointIndices(cdr, &ros_message->target_cluster_indices);
  }

  // Field name: obstacle_cluster_indices
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->obstacle_cluster_indices.data) {
      pcl_msgs__msg__PointIndices__Sequence__fini(&ros_message->obstacle_cluster_indices);
    }
    if (!pcl_msgs__msg__PointIndices__Sequence__init(&ros_message->obstacle_cluster_indices, size)) {
      fprintf(stderr, "failed to create array for field 'obstacle_cluster_indices'");
      return false;
    }
    auto array_ptr = ros_message->obstacle_cluster_indices.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_pcl_msgs__msg__PointIndices(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_compare_flexbe_utilities
size_t get_serialized_size_compare_flexbe_utilities__srv__EuclideanClustering_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EuclideanClustering_Response__ros_msg_type * ros_message = static_cast<const _EuclideanClustering_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: target_cluster_indices
  current_alignment += get_serialized_size_pcl_msgs__msg__PointIndices(
    &(ros_message->target_cluster_indices), current_alignment);

  // Field name: obstacle_cluster_indices
  {
    size_t array_size = ros_message->obstacle_cluster_indices.size;
    auto array_ptr = ros_message->obstacle_cluster_indices.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_pcl_msgs__msg__PointIndices(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_compare_flexbe_utilities
size_t max_serialized_size_compare_flexbe_utilities__srv__EuclideanClustering_Response(
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

  // Field name: target_cluster_indices
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_pcl_msgs__msg__PointIndices(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: obstacle_cluster_indices
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
      size_t inner_size;
      inner_size =
        max_serialized_size_pcl_msgs__msg__PointIndices(
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
    using DataType = compare_flexbe_utilities__srv__EuclideanClustering_Response;
    is_plain =
      (
      offsetof(DataType, obstacle_cluster_indices) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_compare_flexbe_utilities
bool cdr_serialize_key_compare_flexbe_utilities__srv__EuclideanClustering_Response(
  const compare_flexbe_utilities__srv__EuclideanClustering_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: target_cluster_indices
  {
    cdr_serialize_key_pcl_msgs__msg__PointIndices(
      &ros_message->target_cluster_indices, cdr);
  }

  // Field name: obstacle_cluster_indices
  {
    size_t size = ros_message->obstacle_cluster_indices.size;
    auto array_ptr = ros_message->obstacle_cluster_indices.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_pcl_msgs__msg__PointIndices(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_compare_flexbe_utilities
size_t get_serialized_size_key_compare_flexbe_utilities__srv__EuclideanClustering_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EuclideanClustering_Response__ros_msg_type * ros_message = static_cast<const _EuclideanClustering_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: target_cluster_indices
  current_alignment += get_serialized_size_key_pcl_msgs__msg__PointIndices(
    &(ros_message->target_cluster_indices), current_alignment);

  // Field name: obstacle_cluster_indices
  {
    size_t array_size = ros_message->obstacle_cluster_indices.size;
    auto array_ptr = ros_message->obstacle_cluster_indices.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_pcl_msgs__msg__PointIndices(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_compare_flexbe_utilities
size_t max_serialized_size_key_compare_flexbe_utilities__srv__EuclideanClustering_Response(
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
  // Field name: target_cluster_indices
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_pcl_msgs__msg__PointIndices(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: obstacle_cluster_indices
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
      size_t inner_size;
      inner_size =
        max_serialized_size_key_pcl_msgs__msg__PointIndices(
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
    using DataType = compare_flexbe_utilities__srv__EuclideanClustering_Response;
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
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const compare_flexbe_utilities__srv__EuclideanClustering_Response * ros_message = static_cast<const compare_flexbe_utilities__srv__EuclideanClustering_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_compare_flexbe_utilities__srv__EuclideanClustering_Response(ros_message, cdr);
}

static bool _EuclideanClustering_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  compare_flexbe_utilities__srv__EuclideanClustering_Response * ros_message = static_cast<compare_flexbe_utilities__srv__EuclideanClustering_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_compare_flexbe_utilities__srv__EuclideanClustering_Response(cdr, ros_message);
}

static uint32_t _EuclideanClustering_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_compare_flexbe_utilities__srv__EuclideanClustering_Response(
      untyped_ros_message, 0));
}

static size_t _EuclideanClustering_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_compare_flexbe_utilities__srv__EuclideanClustering_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EuclideanClustering_Response = {
  "compare_flexbe_utilities::srv",
  "EuclideanClustering_Response",
  _EuclideanClustering_Response__cdr_serialize,
  _EuclideanClustering_Response__cdr_deserialize,
  _EuclideanClustering_Response__get_serialized_size,
  _EuclideanClustering_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _EuclideanClustering_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EuclideanClustering_Response,
  get_message_typesupport_handle_function,
  &compare_flexbe_utilities__srv__EuclideanClustering_Response__get_type_hash,
  &compare_flexbe_utilities__srv__EuclideanClustering_Response__get_type_description,
  &compare_flexbe_utilities__srv__EuclideanClustering_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, compare_flexbe_utilities, srv, EuclideanClustering_Response)() {
  return &_EuclideanClustering_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "compare_flexbe_utilities/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "compare_flexbe_utilities/srv/detail/euclidean_clustering__struct.h"
// already included above
// #include "compare_flexbe_utilities/srv/detail/euclidean_clustering__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

bool cdr_serialize_compare_flexbe_utilities__srv__EuclideanClustering_Request(
  const compare_flexbe_utilities__srv__EuclideanClustering_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_compare_flexbe_utilities__srv__EuclideanClustering_Request(
  eprosima::fastcdr::Cdr & cdr,
  compare_flexbe_utilities__srv__EuclideanClustering_Request * ros_message);

size_t get_serialized_size_compare_flexbe_utilities__srv__EuclideanClustering_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_compare_flexbe_utilities__srv__EuclideanClustering_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_compare_flexbe_utilities__srv__EuclideanClustering_Request(
  const compare_flexbe_utilities__srv__EuclideanClustering_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_compare_flexbe_utilities__srv__EuclideanClustering_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_compare_flexbe_utilities__srv__EuclideanClustering_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, compare_flexbe_utilities, srv, EuclideanClustering_Request)();

bool cdr_serialize_compare_flexbe_utilities__srv__EuclideanClustering_Response(
  const compare_flexbe_utilities__srv__EuclideanClustering_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_compare_flexbe_utilities__srv__EuclideanClustering_Response(
  eprosima::fastcdr::Cdr & cdr,
  compare_flexbe_utilities__srv__EuclideanClustering_Response * ros_message);

size_t get_serialized_size_compare_flexbe_utilities__srv__EuclideanClustering_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_compare_flexbe_utilities__srv__EuclideanClustering_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_compare_flexbe_utilities__srv__EuclideanClustering_Response(
  const compare_flexbe_utilities__srv__EuclideanClustering_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_compare_flexbe_utilities__srv__EuclideanClustering_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_compare_flexbe_utilities__srv__EuclideanClustering_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, compare_flexbe_utilities, srv, EuclideanClustering_Response)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_compare_flexbe_utilities
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();


using _EuclideanClustering_Event__ros_msg_type = compare_flexbe_utilities__srv__EuclideanClustering_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_compare_flexbe_utilities
bool cdr_serialize_compare_flexbe_utilities__srv__EuclideanClustering_Event(
  const compare_flexbe_utilities__srv__EuclideanClustering_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_compare_flexbe_utilities__srv__EuclideanClustering_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_compare_flexbe_utilities__srv__EuclideanClustering_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_compare_flexbe_utilities
bool cdr_deserialize_compare_flexbe_utilities__srv__EuclideanClustering_Event(
  eprosima::fastcdr::Cdr & cdr,
  compare_flexbe_utilities__srv__EuclideanClustering_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->request.data) {
      compare_flexbe_utilities__srv__EuclideanClustering_Request__Sequence__fini(&ros_message->request);
    }
    if (!compare_flexbe_utilities__srv__EuclideanClustering_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_compare_flexbe_utilities__srv__EuclideanClustering_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->response.data) {
      compare_flexbe_utilities__srv__EuclideanClustering_Response__Sequence__fini(&ros_message->response);
    }
    if (!compare_flexbe_utilities__srv__EuclideanClustering_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_compare_flexbe_utilities__srv__EuclideanClustering_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_compare_flexbe_utilities
size_t get_serialized_size_compare_flexbe_utilities__srv__EuclideanClustering_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EuclideanClustering_Event__ros_msg_type * ros_message = static_cast<const _EuclideanClustering_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_compare_flexbe_utilities__srv__EuclideanClustering_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_compare_flexbe_utilities__srv__EuclideanClustering_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_compare_flexbe_utilities
size_t max_serialized_size_compare_flexbe_utilities__srv__EuclideanClustering_Event(
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

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_compare_flexbe_utilities__srv__EuclideanClustering_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_compare_flexbe_utilities__srv__EuclideanClustering_Response(
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
    using DataType = compare_flexbe_utilities__srv__EuclideanClustering_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_compare_flexbe_utilities
bool cdr_serialize_key_compare_flexbe_utilities__srv__EuclideanClustering_Event(
  const compare_flexbe_utilities__srv__EuclideanClustering_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_compare_flexbe_utilities__srv__EuclideanClustering_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_compare_flexbe_utilities__srv__EuclideanClustering_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_compare_flexbe_utilities
size_t get_serialized_size_key_compare_flexbe_utilities__srv__EuclideanClustering_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EuclideanClustering_Event__ros_msg_type * ros_message = static_cast<const _EuclideanClustering_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_compare_flexbe_utilities__srv__EuclideanClustering_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_compare_flexbe_utilities__srv__EuclideanClustering_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_compare_flexbe_utilities
size_t max_serialized_size_key_compare_flexbe_utilities__srv__EuclideanClustering_Event(
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
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_compare_flexbe_utilities__srv__EuclideanClustering_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_compare_flexbe_utilities__srv__EuclideanClustering_Response(
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
    using DataType = compare_flexbe_utilities__srv__EuclideanClustering_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _EuclideanClustering_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const compare_flexbe_utilities__srv__EuclideanClustering_Event * ros_message = static_cast<const compare_flexbe_utilities__srv__EuclideanClustering_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_compare_flexbe_utilities__srv__EuclideanClustering_Event(ros_message, cdr);
}

static bool _EuclideanClustering_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  compare_flexbe_utilities__srv__EuclideanClustering_Event * ros_message = static_cast<compare_flexbe_utilities__srv__EuclideanClustering_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_compare_flexbe_utilities__srv__EuclideanClustering_Event(cdr, ros_message);
}

static uint32_t _EuclideanClustering_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_compare_flexbe_utilities__srv__EuclideanClustering_Event(
      untyped_ros_message, 0));
}

static size_t _EuclideanClustering_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_compare_flexbe_utilities__srv__EuclideanClustering_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EuclideanClustering_Event = {
  "compare_flexbe_utilities::srv",
  "EuclideanClustering_Event",
  _EuclideanClustering_Event__cdr_serialize,
  _EuclideanClustering_Event__cdr_deserialize,
  _EuclideanClustering_Event__get_serialized_size,
  _EuclideanClustering_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _EuclideanClustering_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EuclideanClustering_Event,
  get_message_typesupport_handle_function,
  &compare_flexbe_utilities__srv__EuclideanClustering_Event__get_type_hash,
  &compare_flexbe_utilities__srv__EuclideanClustering_Event__get_type_description,
  &compare_flexbe_utilities__srv__EuclideanClustering_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, compare_flexbe_utilities, srv, EuclideanClustering_Event)() {
  return &_EuclideanClustering_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "compare_flexbe_utilities/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "compare_flexbe_utilities/srv/euclidean_clustering.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t EuclideanClustering__callbacks = {
  "compare_flexbe_utilities::srv",
  "EuclideanClustering",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, compare_flexbe_utilities, srv, EuclideanClustering_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, compare_flexbe_utilities, srv, EuclideanClustering_Response)(),
};

static rosidl_service_type_support_t EuclideanClustering__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &EuclideanClustering__callbacks,
  get_service_typesupport_handle_function,
  &_EuclideanClustering_Request__type_support,
  &_EuclideanClustering_Response__type_support,
  &_EuclideanClustering_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    compare_flexbe_utilities,
    srv,
    EuclideanClustering
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    compare_flexbe_utilities,
    srv,
    EuclideanClustering
  ),
  &compare_flexbe_utilities__srv__EuclideanClustering__get_type_hash,
  &compare_flexbe_utilities__srv__EuclideanClustering__get_type_description,
  &compare_flexbe_utilities__srv__EuclideanClustering__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, compare_flexbe_utilities, srv, EuclideanClustering)() {
  return &EuclideanClustering__handle;
}

#if defined(__cplusplus)
}
#endif
