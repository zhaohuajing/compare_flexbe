// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from compare_flexbe_utilities:srv/PlaneSegmentation.idl
// generated code does not contain a copyright notice
#include "compare_flexbe_utilities/srv/detail/plane_segmentation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `input`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"

bool
compare_flexbe_utilities__srv__PlaneSegmentation_Request__init(compare_flexbe_utilities__srv__PlaneSegmentation_Request * msg)
{
  if (!msg) {
    return false;
  }
  // input
  if (!sensor_msgs__msg__PointCloud2__init(&msg->input)) {
    compare_flexbe_utilities__srv__PlaneSegmentation_Request__fini(msg);
    return false;
  }
  // use_voxel
  // leaf_size
  // distance_threshold
  // max_iterations
  return true;
}

void
compare_flexbe_utilities__srv__PlaneSegmentation_Request__fini(compare_flexbe_utilities__srv__PlaneSegmentation_Request * msg)
{
  if (!msg) {
    return;
  }
  // input
  sensor_msgs__msg__PointCloud2__fini(&msg->input);
  // use_voxel
  // leaf_size
  // distance_threshold
  // max_iterations
}

bool
compare_flexbe_utilities__srv__PlaneSegmentation_Request__are_equal(const compare_flexbe_utilities__srv__PlaneSegmentation_Request * lhs, const compare_flexbe_utilities__srv__PlaneSegmentation_Request * rhs)
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
  // use_voxel
  if (lhs->use_voxel != rhs->use_voxel) {
    return false;
  }
  // leaf_size
  if (lhs->leaf_size != rhs->leaf_size) {
    return false;
  }
  // distance_threshold
  if (lhs->distance_threshold != rhs->distance_threshold) {
    return false;
  }
  // max_iterations
  if (lhs->max_iterations != rhs->max_iterations) {
    return false;
  }
  return true;
}

bool
compare_flexbe_utilities__srv__PlaneSegmentation_Request__copy(
  const compare_flexbe_utilities__srv__PlaneSegmentation_Request * input,
  compare_flexbe_utilities__srv__PlaneSegmentation_Request * output)
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
  // use_voxel
  output->use_voxel = input->use_voxel;
  // leaf_size
  output->leaf_size = input->leaf_size;
  // distance_threshold
  output->distance_threshold = input->distance_threshold;
  // max_iterations
  output->max_iterations = input->max_iterations;
  return true;
}

compare_flexbe_utilities__srv__PlaneSegmentation_Request *
compare_flexbe_utilities__srv__PlaneSegmentation_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compare_flexbe_utilities__srv__PlaneSegmentation_Request * msg = (compare_flexbe_utilities__srv__PlaneSegmentation_Request *)allocator.allocate(sizeof(compare_flexbe_utilities__srv__PlaneSegmentation_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(compare_flexbe_utilities__srv__PlaneSegmentation_Request));
  bool success = compare_flexbe_utilities__srv__PlaneSegmentation_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
compare_flexbe_utilities__srv__PlaneSegmentation_Request__destroy(compare_flexbe_utilities__srv__PlaneSegmentation_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    compare_flexbe_utilities__srv__PlaneSegmentation_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
compare_flexbe_utilities__srv__PlaneSegmentation_Request__Sequence__init(compare_flexbe_utilities__srv__PlaneSegmentation_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compare_flexbe_utilities__srv__PlaneSegmentation_Request * data = NULL;

  if (size) {
    data = (compare_flexbe_utilities__srv__PlaneSegmentation_Request *)allocator.zero_allocate(size, sizeof(compare_flexbe_utilities__srv__PlaneSegmentation_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = compare_flexbe_utilities__srv__PlaneSegmentation_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        compare_flexbe_utilities__srv__PlaneSegmentation_Request__fini(&data[i - 1]);
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
compare_flexbe_utilities__srv__PlaneSegmentation_Request__Sequence__fini(compare_flexbe_utilities__srv__PlaneSegmentation_Request__Sequence * array)
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
      compare_flexbe_utilities__srv__PlaneSegmentation_Request__fini(&array->data[i]);
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

compare_flexbe_utilities__srv__PlaneSegmentation_Request__Sequence *
compare_flexbe_utilities__srv__PlaneSegmentation_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compare_flexbe_utilities__srv__PlaneSegmentation_Request__Sequence * array = (compare_flexbe_utilities__srv__PlaneSegmentation_Request__Sequence *)allocator.allocate(sizeof(compare_flexbe_utilities__srv__PlaneSegmentation_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = compare_flexbe_utilities__srv__PlaneSegmentation_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
compare_flexbe_utilities__srv__PlaneSegmentation_Request__Sequence__destroy(compare_flexbe_utilities__srv__PlaneSegmentation_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    compare_flexbe_utilities__srv__PlaneSegmentation_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
compare_flexbe_utilities__srv__PlaneSegmentation_Request__Sequence__are_equal(const compare_flexbe_utilities__srv__PlaneSegmentation_Request__Sequence * lhs, const compare_flexbe_utilities__srv__PlaneSegmentation_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!compare_flexbe_utilities__srv__PlaneSegmentation_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
compare_flexbe_utilities__srv__PlaneSegmentation_Request__Sequence__copy(
  const compare_flexbe_utilities__srv__PlaneSegmentation_Request__Sequence * input,
  compare_flexbe_utilities__srv__PlaneSegmentation_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(compare_flexbe_utilities__srv__PlaneSegmentation_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    compare_flexbe_utilities__srv__PlaneSegmentation_Request * data =
      (compare_flexbe_utilities__srv__PlaneSegmentation_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!compare_flexbe_utilities__srv__PlaneSegmentation_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          compare_flexbe_utilities__srv__PlaneSegmentation_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!compare_flexbe_utilities__srv__PlaneSegmentation_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `without_plane`
// already included above
// #include "sensor_msgs/msg/detail/point_cloud2__functions.h"
// Member `plane_indices`
#include "pcl_msgs/msg/detail/point_indices__functions.h"

bool
compare_flexbe_utilities__srv__PlaneSegmentation_Response__init(compare_flexbe_utilities__srv__PlaneSegmentation_Response * msg)
{
  if (!msg) {
    return false;
  }
  // without_plane
  if (!sensor_msgs__msg__PointCloud2__init(&msg->without_plane)) {
    compare_flexbe_utilities__srv__PlaneSegmentation_Response__fini(msg);
    return false;
  }
  // plane_indices
  if (!pcl_msgs__msg__PointIndices__init(&msg->plane_indices)) {
    compare_flexbe_utilities__srv__PlaneSegmentation_Response__fini(msg);
    return false;
  }
  // plane_coefficients
  // inlier_count
  return true;
}

void
compare_flexbe_utilities__srv__PlaneSegmentation_Response__fini(compare_flexbe_utilities__srv__PlaneSegmentation_Response * msg)
{
  if (!msg) {
    return;
  }
  // without_plane
  sensor_msgs__msg__PointCloud2__fini(&msg->without_plane);
  // plane_indices
  pcl_msgs__msg__PointIndices__fini(&msg->plane_indices);
  // plane_coefficients
  // inlier_count
}

bool
compare_flexbe_utilities__srv__PlaneSegmentation_Response__are_equal(const compare_flexbe_utilities__srv__PlaneSegmentation_Response * lhs, const compare_flexbe_utilities__srv__PlaneSegmentation_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // without_plane
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->without_plane), &(rhs->without_plane)))
  {
    return false;
  }
  // plane_indices
  if (!pcl_msgs__msg__PointIndices__are_equal(
      &(lhs->plane_indices), &(rhs->plane_indices)))
  {
    return false;
  }
  // plane_coefficients
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->plane_coefficients[i] != rhs->plane_coefficients[i]) {
      return false;
    }
  }
  // inlier_count
  if (lhs->inlier_count != rhs->inlier_count) {
    return false;
  }
  return true;
}

bool
compare_flexbe_utilities__srv__PlaneSegmentation_Response__copy(
  const compare_flexbe_utilities__srv__PlaneSegmentation_Response * input,
  compare_flexbe_utilities__srv__PlaneSegmentation_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // without_plane
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->without_plane), &(output->without_plane)))
  {
    return false;
  }
  // plane_indices
  if (!pcl_msgs__msg__PointIndices__copy(
      &(input->plane_indices), &(output->plane_indices)))
  {
    return false;
  }
  // plane_coefficients
  for (size_t i = 0; i < 4; ++i) {
    output->plane_coefficients[i] = input->plane_coefficients[i];
  }
  // inlier_count
  output->inlier_count = input->inlier_count;
  return true;
}

compare_flexbe_utilities__srv__PlaneSegmentation_Response *
compare_flexbe_utilities__srv__PlaneSegmentation_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compare_flexbe_utilities__srv__PlaneSegmentation_Response * msg = (compare_flexbe_utilities__srv__PlaneSegmentation_Response *)allocator.allocate(sizeof(compare_flexbe_utilities__srv__PlaneSegmentation_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(compare_flexbe_utilities__srv__PlaneSegmentation_Response));
  bool success = compare_flexbe_utilities__srv__PlaneSegmentation_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
compare_flexbe_utilities__srv__PlaneSegmentation_Response__destroy(compare_flexbe_utilities__srv__PlaneSegmentation_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    compare_flexbe_utilities__srv__PlaneSegmentation_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
compare_flexbe_utilities__srv__PlaneSegmentation_Response__Sequence__init(compare_flexbe_utilities__srv__PlaneSegmentation_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compare_flexbe_utilities__srv__PlaneSegmentation_Response * data = NULL;

  if (size) {
    data = (compare_flexbe_utilities__srv__PlaneSegmentation_Response *)allocator.zero_allocate(size, sizeof(compare_flexbe_utilities__srv__PlaneSegmentation_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = compare_flexbe_utilities__srv__PlaneSegmentation_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        compare_flexbe_utilities__srv__PlaneSegmentation_Response__fini(&data[i - 1]);
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
compare_flexbe_utilities__srv__PlaneSegmentation_Response__Sequence__fini(compare_flexbe_utilities__srv__PlaneSegmentation_Response__Sequence * array)
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
      compare_flexbe_utilities__srv__PlaneSegmentation_Response__fini(&array->data[i]);
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

compare_flexbe_utilities__srv__PlaneSegmentation_Response__Sequence *
compare_flexbe_utilities__srv__PlaneSegmentation_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compare_flexbe_utilities__srv__PlaneSegmentation_Response__Sequence * array = (compare_flexbe_utilities__srv__PlaneSegmentation_Response__Sequence *)allocator.allocate(sizeof(compare_flexbe_utilities__srv__PlaneSegmentation_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = compare_flexbe_utilities__srv__PlaneSegmentation_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
compare_flexbe_utilities__srv__PlaneSegmentation_Response__Sequence__destroy(compare_flexbe_utilities__srv__PlaneSegmentation_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    compare_flexbe_utilities__srv__PlaneSegmentation_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
compare_flexbe_utilities__srv__PlaneSegmentation_Response__Sequence__are_equal(const compare_flexbe_utilities__srv__PlaneSegmentation_Response__Sequence * lhs, const compare_flexbe_utilities__srv__PlaneSegmentation_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!compare_flexbe_utilities__srv__PlaneSegmentation_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
compare_flexbe_utilities__srv__PlaneSegmentation_Response__Sequence__copy(
  const compare_flexbe_utilities__srv__PlaneSegmentation_Response__Sequence * input,
  compare_flexbe_utilities__srv__PlaneSegmentation_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(compare_flexbe_utilities__srv__PlaneSegmentation_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    compare_flexbe_utilities__srv__PlaneSegmentation_Response * data =
      (compare_flexbe_utilities__srv__PlaneSegmentation_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!compare_flexbe_utilities__srv__PlaneSegmentation_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          compare_flexbe_utilities__srv__PlaneSegmentation_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!compare_flexbe_utilities__srv__PlaneSegmentation_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "compare_flexbe_utilities/srv/detail/plane_segmentation__functions.h"

bool
compare_flexbe_utilities__srv__PlaneSegmentation_Event__init(compare_flexbe_utilities__srv__PlaneSegmentation_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    compare_flexbe_utilities__srv__PlaneSegmentation_Event__fini(msg);
    return false;
  }
  // request
  if (!compare_flexbe_utilities__srv__PlaneSegmentation_Request__Sequence__init(&msg->request, 0)) {
    compare_flexbe_utilities__srv__PlaneSegmentation_Event__fini(msg);
    return false;
  }
  // response
  if (!compare_flexbe_utilities__srv__PlaneSegmentation_Response__Sequence__init(&msg->response, 0)) {
    compare_flexbe_utilities__srv__PlaneSegmentation_Event__fini(msg);
    return false;
  }
  return true;
}

void
compare_flexbe_utilities__srv__PlaneSegmentation_Event__fini(compare_flexbe_utilities__srv__PlaneSegmentation_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  compare_flexbe_utilities__srv__PlaneSegmentation_Request__Sequence__fini(&msg->request);
  // response
  compare_flexbe_utilities__srv__PlaneSegmentation_Response__Sequence__fini(&msg->response);
}

bool
compare_flexbe_utilities__srv__PlaneSegmentation_Event__are_equal(const compare_flexbe_utilities__srv__PlaneSegmentation_Event * lhs, const compare_flexbe_utilities__srv__PlaneSegmentation_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!compare_flexbe_utilities__srv__PlaneSegmentation_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!compare_flexbe_utilities__srv__PlaneSegmentation_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
compare_flexbe_utilities__srv__PlaneSegmentation_Event__copy(
  const compare_flexbe_utilities__srv__PlaneSegmentation_Event * input,
  compare_flexbe_utilities__srv__PlaneSegmentation_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!compare_flexbe_utilities__srv__PlaneSegmentation_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!compare_flexbe_utilities__srv__PlaneSegmentation_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

compare_flexbe_utilities__srv__PlaneSegmentation_Event *
compare_flexbe_utilities__srv__PlaneSegmentation_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compare_flexbe_utilities__srv__PlaneSegmentation_Event * msg = (compare_flexbe_utilities__srv__PlaneSegmentation_Event *)allocator.allocate(sizeof(compare_flexbe_utilities__srv__PlaneSegmentation_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(compare_flexbe_utilities__srv__PlaneSegmentation_Event));
  bool success = compare_flexbe_utilities__srv__PlaneSegmentation_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
compare_flexbe_utilities__srv__PlaneSegmentation_Event__destroy(compare_flexbe_utilities__srv__PlaneSegmentation_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    compare_flexbe_utilities__srv__PlaneSegmentation_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
compare_flexbe_utilities__srv__PlaneSegmentation_Event__Sequence__init(compare_flexbe_utilities__srv__PlaneSegmentation_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compare_flexbe_utilities__srv__PlaneSegmentation_Event * data = NULL;

  if (size) {
    data = (compare_flexbe_utilities__srv__PlaneSegmentation_Event *)allocator.zero_allocate(size, sizeof(compare_flexbe_utilities__srv__PlaneSegmentation_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = compare_flexbe_utilities__srv__PlaneSegmentation_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        compare_flexbe_utilities__srv__PlaneSegmentation_Event__fini(&data[i - 1]);
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
compare_flexbe_utilities__srv__PlaneSegmentation_Event__Sequence__fini(compare_flexbe_utilities__srv__PlaneSegmentation_Event__Sequence * array)
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
      compare_flexbe_utilities__srv__PlaneSegmentation_Event__fini(&array->data[i]);
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

compare_flexbe_utilities__srv__PlaneSegmentation_Event__Sequence *
compare_flexbe_utilities__srv__PlaneSegmentation_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compare_flexbe_utilities__srv__PlaneSegmentation_Event__Sequence * array = (compare_flexbe_utilities__srv__PlaneSegmentation_Event__Sequence *)allocator.allocate(sizeof(compare_flexbe_utilities__srv__PlaneSegmentation_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = compare_flexbe_utilities__srv__PlaneSegmentation_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
compare_flexbe_utilities__srv__PlaneSegmentation_Event__Sequence__destroy(compare_flexbe_utilities__srv__PlaneSegmentation_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    compare_flexbe_utilities__srv__PlaneSegmentation_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
compare_flexbe_utilities__srv__PlaneSegmentation_Event__Sequence__are_equal(const compare_flexbe_utilities__srv__PlaneSegmentation_Event__Sequence * lhs, const compare_flexbe_utilities__srv__PlaneSegmentation_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!compare_flexbe_utilities__srv__PlaneSegmentation_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
compare_flexbe_utilities__srv__PlaneSegmentation_Event__Sequence__copy(
  const compare_flexbe_utilities__srv__PlaneSegmentation_Event__Sequence * input,
  compare_flexbe_utilities__srv__PlaneSegmentation_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(compare_flexbe_utilities__srv__PlaneSegmentation_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    compare_flexbe_utilities__srv__PlaneSegmentation_Event * data =
      (compare_flexbe_utilities__srv__PlaneSegmentation_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!compare_flexbe_utilities__srv__PlaneSegmentation_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          compare_flexbe_utilities__srv__PlaneSegmentation_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!compare_flexbe_utilities__srv__PlaneSegmentation_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
