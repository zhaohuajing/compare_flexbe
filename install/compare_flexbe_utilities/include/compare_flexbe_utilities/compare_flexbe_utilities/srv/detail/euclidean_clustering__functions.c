// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from compare_flexbe_utilities:srv/EuclideanClustering.idl
// generated code does not contain a copyright notice
#include "compare_flexbe_utilities/srv/detail/euclidean_clustering__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `input`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"
// Member `camera_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
compare_flexbe_utilities__srv__EuclideanClustering_Request__init(compare_flexbe_utilities__srv__EuclideanClustering_Request * msg)
{
  if (!msg) {
    return false;
  }
  // input
  if (!sensor_msgs__msg__PointCloud2__init(&msg->input)) {
    compare_flexbe_utilities__srv__EuclideanClustering_Request__fini(msg);
    return false;
  }
  // camera_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->camera_pose)) {
    compare_flexbe_utilities__srv__EuclideanClustering_Request__fini(msg);
    return false;
  }
  // cluster_tolerance
  // min_cluster_size
  // max_cluster_size
  return true;
}

void
compare_flexbe_utilities__srv__EuclideanClustering_Request__fini(compare_flexbe_utilities__srv__EuclideanClustering_Request * msg)
{
  if (!msg) {
    return;
  }
  // input
  sensor_msgs__msg__PointCloud2__fini(&msg->input);
  // camera_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->camera_pose);
  // cluster_tolerance
  // min_cluster_size
  // max_cluster_size
}

bool
compare_flexbe_utilities__srv__EuclideanClustering_Request__are_equal(const compare_flexbe_utilities__srv__EuclideanClustering_Request * lhs, const compare_flexbe_utilities__srv__EuclideanClustering_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // input
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->input), &(rhs->input)))
  {
    return false;
  }
  // camera_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->camera_pose), &(rhs->camera_pose)))
  {
    return false;
  }
  // cluster_tolerance
  if (lhs->cluster_tolerance != rhs->cluster_tolerance) {
    return false;
  }
  // min_cluster_size
  if (lhs->min_cluster_size != rhs->min_cluster_size) {
    return false;
  }
  // max_cluster_size
  if (lhs->max_cluster_size != rhs->max_cluster_size) {
    return false;
  }
  return true;
}

bool
compare_flexbe_utilities__srv__EuclideanClustering_Request__copy(
  const compare_flexbe_utilities__srv__EuclideanClustering_Request * input,
  compare_flexbe_utilities__srv__EuclideanClustering_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // input
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->input), &(output->input)))
  {
    return false;
  }
  // camera_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->camera_pose), &(output->camera_pose)))
  {
    return false;
  }
  // cluster_tolerance
  output->cluster_tolerance = input->cluster_tolerance;
  // min_cluster_size
  output->min_cluster_size = input->min_cluster_size;
  // max_cluster_size
  output->max_cluster_size = input->max_cluster_size;
  return true;
}

compare_flexbe_utilities__srv__EuclideanClustering_Request *
compare_flexbe_utilities__srv__EuclideanClustering_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compare_flexbe_utilities__srv__EuclideanClustering_Request * msg = (compare_flexbe_utilities__srv__EuclideanClustering_Request *)allocator.allocate(sizeof(compare_flexbe_utilities__srv__EuclideanClustering_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(compare_flexbe_utilities__srv__EuclideanClustering_Request));
  bool success = compare_flexbe_utilities__srv__EuclideanClustering_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
compare_flexbe_utilities__srv__EuclideanClustering_Request__destroy(compare_flexbe_utilities__srv__EuclideanClustering_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    compare_flexbe_utilities__srv__EuclideanClustering_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
compare_flexbe_utilities__srv__EuclideanClustering_Request__Sequence__init(compare_flexbe_utilities__srv__EuclideanClustering_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compare_flexbe_utilities__srv__EuclideanClustering_Request * data = NULL;

  if (size) {
    data = (compare_flexbe_utilities__srv__EuclideanClustering_Request *)allocator.zero_allocate(size, sizeof(compare_flexbe_utilities__srv__EuclideanClustering_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = compare_flexbe_utilities__srv__EuclideanClustering_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        compare_flexbe_utilities__srv__EuclideanClustering_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
compare_flexbe_utilities__srv__EuclideanClustering_Request__Sequence__fini(compare_flexbe_utilities__srv__EuclideanClustering_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      compare_flexbe_utilities__srv__EuclideanClustering_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

compare_flexbe_utilities__srv__EuclideanClustering_Request__Sequence *
compare_flexbe_utilities__srv__EuclideanClustering_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compare_flexbe_utilities__srv__EuclideanClustering_Request__Sequence * array = (compare_flexbe_utilities__srv__EuclideanClustering_Request__Sequence *)allocator.allocate(sizeof(compare_flexbe_utilities__srv__EuclideanClustering_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = compare_flexbe_utilities__srv__EuclideanClustering_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
compare_flexbe_utilities__srv__EuclideanClustering_Request__Sequence__destroy(compare_flexbe_utilities__srv__EuclideanClustering_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    compare_flexbe_utilities__srv__EuclideanClustering_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
compare_flexbe_utilities__srv__EuclideanClustering_Request__Sequence__are_equal(const compare_flexbe_utilities__srv__EuclideanClustering_Request__Sequence * lhs, const compare_flexbe_utilities__srv__EuclideanClustering_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!compare_flexbe_utilities__srv__EuclideanClustering_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
compare_flexbe_utilities__srv__EuclideanClustering_Request__Sequence__copy(
  const compare_flexbe_utilities__srv__EuclideanClustering_Request__Sequence * input,
  compare_flexbe_utilities__srv__EuclideanClustering_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(compare_flexbe_utilities__srv__EuclideanClustering_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    compare_flexbe_utilities__srv__EuclideanClustering_Request * data =
      (compare_flexbe_utilities__srv__EuclideanClustering_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!compare_flexbe_utilities__srv__EuclideanClustering_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          compare_flexbe_utilities__srv__EuclideanClustering_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!compare_flexbe_utilities__srv__EuclideanClustering_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `target_cluster_indices`
// Member `obstacle_cluster_indices`
#include "pcl_msgs/msg/detail/point_indices__functions.h"

bool
compare_flexbe_utilities__srv__EuclideanClustering_Response__init(compare_flexbe_utilities__srv__EuclideanClustering_Response * msg)
{
  if (!msg) {
    return false;
  }
  // target_cluster_indices
  if (!pcl_msgs__msg__PointIndices__init(&msg->target_cluster_indices)) {
    compare_flexbe_utilities__srv__EuclideanClustering_Response__fini(msg);
    return false;
  }
  // obstacle_cluster_indices
  if (!pcl_msgs__msg__PointIndices__Sequence__init(&msg->obstacle_cluster_indices, 0)) {
    compare_flexbe_utilities__srv__EuclideanClustering_Response__fini(msg);
    return false;
  }
  return true;
}

void
compare_flexbe_utilities__srv__EuclideanClustering_Response__fini(compare_flexbe_utilities__srv__EuclideanClustering_Response * msg)
{
  if (!msg) {
    return;
  }
  // target_cluster_indices
  pcl_msgs__msg__PointIndices__fini(&msg->target_cluster_indices);
  // obstacle_cluster_indices
  pcl_msgs__msg__PointIndices__Sequence__fini(&msg->obstacle_cluster_indices);
}

bool
compare_flexbe_utilities__srv__EuclideanClustering_Response__are_equal(const compare_flexbe_utilities__srv__EuclideanClustering_Response * lhs, const compare_flexbe_utilities__srv__EuclideanClustering_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_cluster_indices
  if (!pcl_msgs__msg__PointIndices__are_equal(
      &(lhs->target_cluster_indices), &(rhs->target_cluster_indices)))
  {
    return false;
  }
  // obstacle_cluster_indices
  if (!pcl_msgs__msg__PointIndices__Sequence__are_equal(
      &(lhs->obstacle_cluster_indices), &(rhs->obstacle_cluster_indices)))
  {
    return false;
  }
  return true;
}

bool
compare_flexbe_utilities__srv__EuclideanClustering_Response__copy(
  const compare_flexbe_utilities__srv__EuclideanClustering_Response * input,
  compare_flexbe_utilities__srv__EuclideanClustering_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // target_cluster_indices
  if (!pcl_msgs__msg__PointIndices__copy(
      &(input->target_cluster_indices), &(output->target_cluster_indices)))
  {
    return false;
  }
  // obstacle_cluster_indices
  if (!pcl_msgs__msg__PointIndices__Sequence__copy(
      &(input->obstacle_cluster_indices), &(output->obstacle_cluster_indices)))
  {
    return false;
  }
  return true;
}

compare_flexbe_utilities__srv__EuclideanClustering_Response *
compare_flexbe_utilities__srv__EuclideanClustering_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compare_flexbe_utilities__srv__EuclideanClustering_Response * msg = (compare_flexbe_utilities__srv__EuclideanClustering_Response *)allocator.allocate(sizeof(compare_flexbe_utilities__srv__EuclideanClustering_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(compare_flexbe_utilities__srv__EuclideanClustering_Response));
  bool success = compare_flexbe_utilities__srv__EuclideanClustering_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
compare_flexbe_utilities__srv__EuclideanClustering_Response__destroy(compare_flexbe_utilities__srv__EuclideanClustering_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    compare_flexbe_utilities__srv__EuclideanClustering_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
compare_flexbe_utilities__srv__EuclideanClustering_Response__Sequence__init(compare_flexbe_utilities__srv__EuclideanClustering_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compare_flexbe_utilities__srv__EuclideanClustering_Response * data = NULL;

  if (size) {
    data = (compare_flexbe_utilities__srv__EuclideanClustering_Response *)allocator.zero_allocate(size, sizeof(compare_flexbe_utilities__srv__EuclideanClustering_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = compare_flexbe_utilities__srv__EuclideanClustering_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        compare_flexbe_utilities__srv__EuclideanClustering_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
compare_flexbe_utilities__srv__EuclideanClustering_Response__Sequence__fini(compare_flexbe_utilities__srv__EuclideanClustering_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      compare_flexbe_utilities__srv__EuclideanClustering_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

compare_flexbe_utilities__srv__EuclideanClustering_Response__Sequence *
compare_flexbe_utilities__srv__EuclideanClustering_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compare_flexbe_utilities__srv__EuclideanClustering_Response__Sequence * array = (compare_flexbe_utilities__srv__EuclideanClustering_Response__Sequence *)allocator.allocate(sizeof(compare_flexbe_utilities__srv__EuclideanClustering_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = compare_flexbe_utilities__srv__EuclideanClustering_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
compare_flexbe_utilities__srv__EuclideanClustering_Response__Sequence__destroy(compare_flexbe_utilities__srv__EuclideanClustering_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    compare_flexbe_utilities__srv__EuclideanClustering_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
compare_flexbe_utilities__srv__EuclideanClustering_Response__Sequence__are_equal(const compare_flexbe_utilities__srv__EuclideanClustering_Response__Sequence * lhs, const compare_flexbe_utilities__srv__EuclideanClustering_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!compare_flexbe_utilities__srv__EuclideanClustering_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
compare_flexbe_utilities__srv__EuclideanClustering_Response__Sequence__copy(
  const compare_flexbe_utilities__srv__EuclideanClustering_Response__Sequence * input,
  compare_flexbe_utilities__srv__EuclideanClustering_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(compare_flexbe_utilities__srv__EuclideanClustering_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    compare_flexbe_utilities__srv__EuclideanClustering_Response * data =
      (compare_flexbe_utilities__srv__EuclideanClustering_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!compare_flexbe_utilities__srv__EuclideanClustering_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          compare_flexbe_utilities__srv__EuclideanClustering_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!compare_flexbe_utilities__srv__EuclideanClustering_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
