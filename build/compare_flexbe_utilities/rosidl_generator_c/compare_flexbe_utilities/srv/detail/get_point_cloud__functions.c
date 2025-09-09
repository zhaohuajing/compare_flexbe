// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from compare_flexbe_utilities:srv/GetPointCloud.idl
// generated code does not contain a copyright notice
#include "compare_flexbe_utilities/srv/detail/get_point_cloud__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `camera_topic`
// Member `target_frame`
#include "rosidl_runtime_c/string_functions.h"

bool
compare_flexbe_utilities__srv__GetPointCloud_Request__init(compare_flexbe_utilities__srv__GetPointCloud_Request * msg)
{
  if (!msg) {
    return false;
  }
  // camera_topic
  if (!rosidl_runtime_c__String__init(&msg->camera_topic)) {
    compare_flexbe_utilities__srv__GetPointCloud_Request__fini(msg);
    return false;
  }
  // target_frame
  if (!rosidl_runtime_c__String__init(&msg->target_frame)) {
    compare_flexbe_utilities__srv__GetPointCloud_Request__fini(msg);
    return false;
  }
  // timeout_sec
  return true;
}

void
compare_flexbe_utilities__srv__GetPointCloud_Request__fini(compare_flexbe_utilities__srv__GetPointCloud_Request * msg)
{
  if (!msg) {
    return;
  }
  // camera_topic
  rosidl_runtime_c__String__fini(&msg->camera_topic);
  // target_frame
  rosidl_runtime_c__String__fini(&msg->target_frame);
  // timeout_sec
}

bool
compare_flexbe_utilities__srv__GetPointCloud_Request__are_equal(const compare_flexbe_utilities__srv__GetPointCloud_Request * lhs, const compare_flexbe_utilities__srv__GetPointCloud_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // camera_topic
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->camera_topic), &(rhs->camera_topic)))
  {
    return false;
  }
  // target_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_frame), &(rhs->target_frame)))
  {
    return false;
  }
  // timeout_sec
  if (lhs->timeout_sec != rhs->timeout_sec) {
    return false;
  }
  return true;
}

bool
compare_flexbe_utilities__srv__GetPointCloud_Request__copy(
  const compare_flexbe_utilities__srv__GetPointCloud_Request * input,
  compare_flexbe_utilities__srv__GetPointCloud_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // camera_topic
  if (!rosidl_runtime_c__String__copy(
      &(input->camera_topic), &(output->camera_topic)))
  {
    return false;
  }
  // target_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->target_frame), &(output->target_frame)))
  {
    return false;
  }
  // timeout_sec
  output->timeout_sec = input->timeout_sec;
  return true;
}

compare_flexbe_utilities__srv__GetPointCloud_Request *
compare_flexbe_utilities__srv__GetPointCloud_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compare_flexbe_utilities__srv__GetPointCloud_Request * msg = (compare_flexbe_utilities__srv__GetPointCloud_Request *)allocator.allocate(sizeof(compare_flexbe_utilities__srv__GetPointCloud_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(compare_flexbe_utilities__srv__GetPointCloud_Request));
  bool success = compare_flexbe_utilities__srv__GetPointCloud_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
compare_flexbe_utilities__srv__GetPointCloud_Request__destroy(compare_flexbe_utilities__srv__GetPointCloud_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    compare_flexbe_utilities__srv__GetPointCloud_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
compare_flexbe_utilities__srv__GetPointCloud_Request__Sequence__init(compare_flexbe_utilities__srv__GetPointCloud_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compare_flexbe_utilities__srv__GetPointCloud_Request * data = NULL;

  if (size) {
    data = (compare_flexbe_utilities__srv__GetPointCloud_Request *)allocator.zero_allocate(size, sizeof(compare_flexbe_utilities__srv__GetPointCloud_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = compare_flexbe_utilities__srv__GetPointCloud_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        compare_flexbe_utilities__srv__GetPointCloud_Request__fini(&data[i - 1]);
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
compare_flexbe_utilities__srv__GetPointCloud_Request__Sequence__fini(compare_flexbe_utilities__srv__GetPointCloud_Request__Sequence * array)
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
      compare_flexbe_utilities__srv__GetPointCloud_Request__fini(&array->data[i]);
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

compare_flexbe_utilities__srv__GetPointCloud_Request__Sequence *
compare_flexbe_utilities__srv__GetPointCloud_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compare_flexbe_utilities__srv__GetPointCloud_Request__Sequence * array = (compare_flexbe_utilities__srv__GetPointCloud_Request__Sequence *)allocator.allocate(sizeof(compare_flexbe_utilities__srv__GetPointCloud_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = compare_flexbe_utilities__srv__GetPointCloud_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
compare_flexbe_utilities__srv__GetPointCloud_Request__Sequence__destroy(compare_flexbe_utilities__srv__GetPointCloud_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    compare_flexbe_utilities__srv__GetPointCloud_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
compare_flexbe_utilities__srv__GetPointCloud_Request__Sequence__are_equal(const compare_flexbe_utilities__srv__GetPointCloud_Request__Sequence * lhs, const compare_flexbe_utilities__srv__GetPointCloud_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!compare_flexbe_utilities__srv__GetPointCloud_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
compare_flexbe_utilities__srv__GetPointCloud_Request__Sequence__copy(
  const compare_flexbe_utilities__srv__GetPointCloud_Request__Sequence * input,
  compare_flexbe_utilities__srv__GetPointCloud_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(compare_flexbe_utilities__srv__GetPointCloud_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    compare_flexbe_utilities__srv__GetPointCloud_Request * data =
      (compare_flexbe_utilities__srv__GetPointCloud_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!compare_flexbe_utilities__srv__GetPointCloud_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          compare_flexbe_utilities__srv__GetPointCloud_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!compare_flexbe_utilities__srv__GetPointCloud_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `cloud_out`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"
// Member `camera_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `cloud_frame`
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
compare_flexbe_utilities__srv__GetPointCloud_Response__init(compare_flexbe_utilities__srv__GetPointCloud_Response * msg)
{
  if (!msg) {
    return false;
  }
  // cloud_out
  if (!sensor_msgs__msg__PointCloud2__init(&msg->cloud_out)) {
    compare_flexbe_utilities__srv__GetPointCloud_Response__fini(msg);
    return false;
  }
  // camera_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->camera_pose)) {
    compare_flexbe_utilities__srv__GetPointCloud_Response__fini(msg);
    return false;
  }
  // cloud_frame
  if (!rosidl_runtime_c__String__init(&msg->cloud_frame)) {
    compare_flexbe_utilities__srv__GetPointCloud_Response__fini(msg);
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    compare_flexbe_utilities__srv__GetPointCloud_Response__fini(msg);
    return false;
  }
  return true;
}

void
compare_flexbe_utilities__srv__GetPointCloud_Response__fini(compare_flexbe_utilities__srv__GetPointCloud_Response * msg)
{
  if (!msg) {
    return;
  }
  // cloud_out
  sensor_msgs__msg__PointCloud2__fini(&msg->cloud_out);
  // camera_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->camera_pose);
  // cloud_frame
  rosidl_runtime_c__String__fini(&msg->cloud_frame);
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
compare_flexbe_utilities__srv__GetPointCloud_Response__are_equal(const compare_flexbe_utilities__srv__GetPointCloud_Response * lhs, const compare_flexbe_utilities__srv__GetPointCloud_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cloud_out
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->cloud_out), &(rhs->cloud_out)))
  {
    return false;
  }
  // camera_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->camera_pose), &(rhs->camera_pose)))
  {
    return false;
  }
  // cloud_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cloud_frame), &(rhs->cloud_frame)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
compare_flexbe_utilities__srv__GetPointCloud_Response__copy(
  const compare_flexbe_utilities__srv__GetPointCloud_Response * input,
  compare_flexbe_utilities__srv__GetPointCloud_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // cloud_out
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->cloud_out), &(output->cloud_out)))
  {
    return false;
  }
  // camera_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->camera_pose), &(output->camera_pose)))
  {
    return false;
  }
  // cloud_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->cloud_frame), &(output->cloud_frame)))
  {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

compare_flexbe_utilities__srv__GetPointCloud_Response *
compare_flexbe_utilities__srv__GetPointCloud_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compare_flexbe_utilities__srv__GetPointCloud_Response * msg = (compare_flexbe_utilities__srv__GetPointCloud_Response *)allocator.allocate(sizeof(compare_flexbe_utilities__srv__GetPointCloud_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(compare_flexbe_utilities__srv__GetPointCloud_Response));
  bool success = compare_flexbe_utilities__srv__GetPointCloud_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
compare_flexbe_utilities__srv__GetPointCloud_Response__destroy(compare_flexbe_utilities__srv__GetPointCloud_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    compare_flexbe_utilities__srv__GetPointCloud_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
compare_flexbe_utilities__srv__GetPointCloud_Response__Sequence__init(compare_flexbe_utilities__srv__GetPointCloud_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compare_flexbe_utilities__srv__GetPointCloud_Response * data = NULL;

  if (size) {
    data = (compare_flexbe_utilities__srv__GetPointCloud_Response *)allocator.zero_allocate(size, sizeof(compare_flexbe_utilities__srv__GetPointCloud_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = compare_flexbe_utilities__srv__GetPointCloud_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        compare_flexbe_utilities__srv__GetPointCloud_Response__fini(&data[i - 1]);
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
compare_flexbe_utilities__srv__GetPointCloud_Response__Sequence__fini(compare_flexbe_utilities__srv__GetPointCloud_Response__Sequence * array)
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
      compare_flexbe_utilities__srv__GetPointCloud_Response__fini(&array->data[i]);
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

compare_flexbe_utilities__srv__GetPointCloud_Response__Sequence *
compare_flexbe_utilities__srv__GetPointCloud_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compare_flexbe_utilities__srv__GetPointCloud_Response__Sequence * array = (compare_flexbe_utilities__srv__GetPointCloud_Response__Sequence *)allocator.allocate(sizeof(compare_flexbe_utilities__srv__GetPointCloud_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = compare_flexbe_utilities__srv__GetPointCloud_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
compare_flexbe_utilities__srv__GetPointCloud_Response__Sequence__destroy(compare_flexbe_utilities__srv__GetPointCloud_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    compare_flexbe_utilities__srv__GetPointCloud_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
compare_flexbe_utilities__srv__GetPointCloud_Response__Sequence__are_equal(const compare_flexbe_utilities__srv__GetPointCloud_Response__Sequence * lhs, const compare_flexbe_utilities__srv__GetPointCloud_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!compare_flexbe_utilities__srv__GetPointCloud_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
compare_flexbe_utilities__srv__GetPointCloud_Response__Sequence__copy(
  const compare_flexbe_utilities__srv__GetPointCloud_Response__Sequence * input,
  compare_flexbe_utilities__srv__GetPointCloud_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(compare_flexbe_utilities__srv__GetPointCloud_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    compare_flexbe_utilities__srv__GetPointCloud_Response * data =
      (compare_flexbe_utilities__srv__GetPointCloud_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!compare_flexbe_utilities__srv__GetPointCloud_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          compare_flexbe_utilities__srv__GetPointCloud_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!compare_flexbe_utilities__srv__GetPointCloud_Response__copy(
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
// #include "compare_flexbe_utilities/srv/detail/get_point_cloud__functions.h"

bool
compare_flexbe_utilities__srv__GetPointCloud_Event__init(compare_flexbe_utilities__srv__GetPointCloud_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    compare_flexbe_utilities__srv__GetPointCloud_Event__fini(msg);
    return false;
  }
  // request
  if (!compare_flexbe_utilities__srv__GetPointCloud_Request__Sequence__init(&msg->request, 0)) {
    compare_flexbe_utilities__srv__GetPointCloud_Event__fini(msg);
    return false;
  }
  // response
  if (!compare_flexbe_utilities__srv__GetPointCloud_Response__Sequence__init(&msg->response, 0)) {
    compare_flexbe_utilities__srv__GetPointCloud_Event__fini(msg);
    return false;
  }
  return true;
}

void
compare_flexbe_utilities__srv__GetPointCloud_Event__fini(compare_flexbe_utilities__srv__GetPointCloud_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  compare_flexbe_utilities__srv__GetPointCloud_Request__Sequence__fini(&msg->request);
  // response
  compare_flexbe_utilities__srv__GetPointCloud_Response__Sequence__fini(&msg->response);
}

bool
compare_flexbe_utilities__srv__GetPointCloud_Event__are_equal(const compare_flexbe_utilities__srv__GetPointCloud_Event * lhs, const compare_flexbe_utilities__srv__GetPointCloud_Event * rhs)
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
  if (!compare_flexbe_utilities__srv__GetPointCloud_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!compare_flexbe_utilities__srv__GetPointCloud_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
compare_flexbe_utilities__srv__GetPointCloud_Event__copy(
  const compare_flexbe_utilities__srv__GetPointCloud_Event * input,
  compare_flexbe_utilities__srv__GetPointCloud_Event * output)
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
  if (!compare_flexbe_utilities__srv__GetPointCloud_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!compare_flexbe_utilities__srv__GetPointCloud_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

compare_flexbe_utilities__srv__GetPointCloud_Event *
compare_flexbe_utilities__srv__GetPointCloud_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compare_flexbe_utilities__srv__GetPointCloud_Event * msg = (compare_flexbe_utilities__srv__GetPointCloud_Event *)allocator.allocate(sizeof(compare_flexbe_utilities__srv__GetPointCloud_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(compare_flexbe_utilities__srv__GetPointCloud_Event));
  bool success = compare_flexbe_utilities__srv__GetPointCloud_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
compare_flexbe_utilities__srv__GetPointCloud_Event__destroy(compare_flexbe_utilities__srv__GetPointCloud_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    compare_flexbe_utilities__srv__GetPointCloud_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
compare_flexbe_utilities__srv__GetPointCloud_Event__Sequence__init(compare_flexbe_utilities__srv__GetPointCloud_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compare_flexbe_utilities__srv__GetPointCloud_Event * data = NULL;

  if (size) {
    data = (compare_flexbe_utilities__srv__GetPointCloud_Event *)allocator.zero_allocate(size, sizeof(compare_flexbe_utilities__srv__GetPointCloud_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = compare_flexbe_utilities__srv__GetPointCloud_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        compare_flexbe_utilities__srv__GetPointCloud_Event__fini(&data[i - 1]);
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
compare_flexbe_utilities__srv__GetPointCloud_Event__Sequence__fini(compare_flexbe_utilities__srv__GetPointCloud_Event__Sequence * array)
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
      compare_flexbe_utilities__srv__GetPointCloud_Event__fini(&array->data[i]);
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

compare_flexbe_utilities__srv__GetPointCloud_Event__Sequence *
compare_flexbe_utilities__srv__GetPointCloud_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compare_flexbe_utilities__srv__GetPointCloud_Event__Sequence * array = (compare_flexbe_utilities__srv__GetPointCloud_Event__Sequence *)allocator.allocate(sizeof(compare_flexbe_utilities__srv__GetPointCloud_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = compare_flexbe_utilities__srv__GetPointCloud_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
compare_flexbe_utilities__srv__GetPointCloud_Event__Sequence__destroy(compare_flexbe_utilities__srv__GetPointCloud_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    compare_flexbe_utilities__srv__GetPointCloud_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
compare_flexbe_utilities__srv__GetPointCloud_Event__Sequence__are_equal(const compare_flexbe_utilities__srv__GetPointCloud_Event__Sequence * lhs, const compare_flexbe_utilities__srv__GetPointCloud_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!compare_flexbe_utilities__srv__GetPointCloud_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
compare_flexbe_utilities__srv__GetPointCloud_Event__Sequence__copy(
  const compare_flexbe_utilities__srv__GetPointCloud_Event__Sequence * input,
  compare_flexbe_utilities__srv__GetPointCloud_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(compare_flexbe_utilities__srv__GetPointCloud_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    compare_flexbe_utilities__srv__GetPointCloud_Event * data =
      (compare_flexbe_utilities__srv__GetPointCloud_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!compare_flexbe_utilities__srv__GetPointCloud_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          compare_flexbe_utilities__srv__GetPointCloud_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!compare_flexbe_utilities__srv__GetPointCloud_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
