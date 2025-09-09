// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from flexbe_msgs:msg/StateMapMsg.idl
// generated code does not contain a copyright notice
#include "flexbe_msgs/msg/detail/state_map_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `state_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `state_paths`
#include "rosidl_runtime_c/string_functions.h"

bool
flexbe_msgs__msg__StateMapMsg__init(flexbe_msgs__msg__StateMapMsg * msg)
{
  if (!msg) {
    return false;
  }
  // behavior_id
  // state_ids
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->state_ids, 0)) {
    flexbe_msgs__msg__StateMapMsg__fini(msg);
    return false;
  }
  // state_paths
  if (!rosidl_runtime_c__String__Sequence__init(&msg->state_paths, 0)) {
    flexbe_msgs__msg__StateMapMsg__fini(msg);
    return false;
  }
  return true;
}

void
flexbe_msgs__msg__StateMapMsg__fini(flexbe_msgs__msg__StateMapMsg * msg)
{
  if (!msg) {
    return;
  }
  // behavior_id
  // state_ids
  rosidl_runtime_c__int32__Sequence__fini(&msg->state_ids);
  // state_paths
  rosidl_runtime_c__String__Sequence__fini(&msg->state_paths);
}

bool
flexbe_msgs__msg__StateMapMsg__are_equal(const flexbe_msgs__msg__StateMapMsg * lhs, const flexbe_msgs__msg__StateMapMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // behavior_id
  if (lhs->behavior_id != rhs->behavior_id) {
    return false;
  }
  // state_ids
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->state_ids), &(rhs->state_ids)))
  {
    return false;
  }
  // state_paths
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->state_paths), &(rhs->state_paths)))
  {
    return false;
  }
  return true;
}

bool
flexbe_msgs__msg__StateMapMsg__copy(
  const flexbe_msgs__msg__StateMapMsg * input,
  flexbe_msgs__msg__StateMapMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // behavior_id
  output->behavior_id = input->behavior_id;
  // state_ids
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->state_ids), &(output->state_ids)))
  {
    return false;
  }
  // state_paths
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->state_paths), &(output->state_paths)))
  {
    return false;
  }
  return true;
}

flexbe_msgs__msg__StateMapMsg *
flexbe_msgs__msg__StateMapMsg__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__StateMapMsg * msg = (flexbe_msgs__msg__StateMapMsg *)allocator.allocate(sizeof(flexbe_msgs__msg__StateMapMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flexbe_msgs__msg__StateMapMsg));
  bool success = flexbe_msgs__msg__StateMapMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flexbe_msgs__msg__StateMapMsg__destroy(flexbe_msgs__msg__StateMapMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flexbe_msgs__msg__StateMapMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flexbe_msgs__msg__StateMapMsg__Sequence__init(flexbe_msgs__msg__StateMapMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__StateMapMsg * data = NULL;

  if (size) {
    data = (flexbe_msgs__msg__StateMapMsg *)allocator.zero_allocate(size, sizeof(flexbe_msgs__msg__StateMapMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flexbe_msgs__msg__StateMapMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flexbe_msgs__msg__StateMapMsg__fini(&data[i - 1]);
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
flexbe_msgs__msg__StateMapMsg__Sequence__fini(flexbe_msgs__msg__StateMapMsg__Sequence * array)
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
      flexbe_msgs__msg__StateMapMsg__fini(&array->data[i]);
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

flexbe_msgs__msg__StateMapMsg__Sequence *
flexbe_msgs__msg__StateMapMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__StateMapMsg__Sequence * array = (flexbe_msgs__msg__StateMapMsg__Sequence *)allocator.allocate(sizeof(flexbe_msgs__msg__StateMapMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flexbe_msgs__msg__StateMapMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flexbe_msgs__msg__StateMapMsg__Sequence__destroy(flexbe_msgs__msg__StateMapMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flexbe_msgs__msg__StateMapMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flexbe_msgs__msg__StateMapMsg__Sequence__are_equal(const flexbe_msgs__msg__StateMapMsg__Sequence * lhs, const flexbe_msgs__msg__StateMapMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flexbe_msgs__msg__StateMapMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flexbe_msgs__msg__StateMapMsg__Sequence__copy(
  const flexbe_msgs__msg__StateMapMsg__Sequence * input,
  flexbe_msgs__msg__StateMapMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flexbe_msgs__msg__StateMapMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    flexbe_msgs__msg__StateMapMsg * data =
      (flexbe_msgs__msg__StateMapMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flexbe_msgs__msg__StateMapMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          flexbe_msgs__msg__StateMapMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flexbe_msgs__msg__StateMapMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
