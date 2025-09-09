// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from compare_flexbe_utilities:srv/VoxelGridFilter.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "compare_flexbe_utilities/srv/voxel_grid_filter.h"


#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__VOXEL_GRID_FILTER__STRUCT_H_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__VOXEL_GRID_FILTER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'input'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"

/// Struct defined in srv/VoxelGridFilter in the package compare_flexbe_utilities.
typedef struct compare_flexbe_utilities__srv__VoxelGridFilter_Request
{
  sensor_msgs__msg__PointCloud2 input;
} compare_flexbe_utilities__srv__VoxelGridFilter_Request;

// Struct for a sequence of compare_flexbe_utilities__srv__VoxelGridFilter_Request.
typedef struct compare_flexbe_utilities__srv__VoxelGridFilter_Request__Sequence
{
  compare_flexbe_utilities__srv__VoxelGridFilter_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} compare_flexbe_utilities__srv__VoxelGridFilter_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'filtered'
// already included above
// #include "sensor_msgs/msg/detail/point_cloud2__struct.h"

/// Struct defined in srv/VoxelGridFilter in the package compare_flexbe_utilities.
typedef struct compare_flexbe_utilities__srv__VoxelGridFilter_Response
{
  sensor_msgs__msg__PointCloud2 filtered;
} compare_flexbe_utilities__srv__VoxelGridFilter_Response;

// Struct for a sequence of compare_flexbe_utilities__srv__VoxelGridFilter_Response.
typedef struct compare_flexbe_utilities__srv__VoxelGridFilter_Response__Sequence
{
  compare_flexbe_utilities__srv__VoxelGridFilter_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} compare_flexbe_utilities__srv__VoxelGridFilter_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  compare_flexbe_utilities__srv__VoxelGridFilter_Event__request__MAX_SIZE = 1
};
// response
enum
{
  compare_flexbe_utilities__srv__VoxelGridFilter_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/VoxelGridFilter in the package compare_flexbe_utilities.
typedef struct compare_flexbe_utilities__srv__VoxelGridFilter_Event
{
  service_msgs__msg__ServiceEventInfo info;
  compare_flexbe_utilities__srv__VoxelGridFilter_Request__Sequence request;
  compare_flexbe_utilities__srv__VoxelGridFilter_Response__Sequence response;
} compare_flexbe_utilities__srv__VoxelGridFilter_Event;

// Struct for a sequence of compare_flexbe_utilities__srv__VoxelGridFilter_Event.
typedef struct compare_flexbe_utilities__srv__VoxelGridFilter_Event__Sequence
{
  compare_flexbe_utilities__srv__VoxelGridFilter_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} compare_flexbe_utilities__srv__VoxelGridFilter_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__VOXEL_GRID_FILTER__STRUCT_H_
