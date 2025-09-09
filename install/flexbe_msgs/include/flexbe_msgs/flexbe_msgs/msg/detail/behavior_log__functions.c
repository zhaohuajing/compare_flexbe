// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from flexbe_msgs:msg/BehaviorLog.idl
// generated code does not contain a copyright notice
#include "flexbe_msgs/msg/detail/behavior_log__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `text`
#include "rosidl_runtime_c/string_functions.h"

bool
flexbe_msgs__msg__BehaviorLog__init(flexbe_msgs__msg__BehaviorLog * msg)
{
  if (!msg) {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__init(&msg->text)) {
    flexbe_msgs__msg__BehaviorLog__fini(msg);
    return false;
  }
  // status_code
  return true;
}

void
flexbe_msgs__msg__BehaviorLog__fini(flexbe_msgs__msg__BehaviorLog * msg)
{
  if (!msg) {
    return;
  }
  // text
  rosidl_runtime_c__String__fini(&msg->text);
  // status_code
}

bool
flexbe_msgs__msg__BehaviorLog__are_equal(const flexbe_msgs__msg__BehaviorLog * lhs, const flexbe_msgs__msg__BehaviorLog * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->text), &(rhs->text)))
  {
    return false;
  }
  // status_code
  if (lhs->status_code != rhs->status_code) {
    return false;
  }
  return true;
}

bool
flexbe_msgs__msg__BehaviorLog__copy(
  const flexbe_msgs__msg__BehaviorLog * input,
  flexbe_msgs__msg__BehaviorLog * output)
{
  if (!input || !output) {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__copy(
      &(input->text), &(output->text)))
  {
    return false;
  }
  // status_code
  output->status_code = input->status_code;
  return true;
}

flexbe_msgs__msg__BehaviorLog *
flexbe_msgs__msg__BehaviorLog__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__BehaviorLog * msg = (flexbe_msgs__msg__BehaviorLog *)allocator.allocate(sizeof(flexbe_msgs__msg__BehaviorLog), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flexbe_msgs__msg__BehaviorLog));
  bool success = flexbe_msgs__msg__BehaviorLog__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flexbe_msgs__msg__BehaviorLog__destroy(flexbe_msgs__msg__BehaviorLog * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flexbe_msgs__msg__BehaviorLog__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flexbe_msgs__msg__BehaviorLog__Sequence__init(flexbe_msgs__msg__BehaviorLog__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__BehaviorLog * data = NULL;

  if (size) {
    data = (flexbe_msgs__msg__BehaviorLog *)allocator.zero_allocate(size, sizeof(flexbe_msgs__msg__BehaviorLog), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flexbe_msgs__msg__BehaviorLog__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flexbe_msgs__msg__BehaviorLog__fini(&data[i - 1]);
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
flexbe_msgs__msg__BehaviorLog__Sequence__fini(flexbe_msgs__msg__BehaviorLog__Sequence * array)
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
      flexbe_msgs__msg__BehaviorLog__fini(&array->data[i]);
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

flexbe_msgs__msg__BehaviorLog__Sequence *
flexbe_msgs__msg__BehaviorLog__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__msg__BehaviorLog__Sequence * array = (flexbe_msgs__msg__BehaviorLog__Sequence *)allocator.allocate(sizeof(flexbe_msgs__msg__BehaviorLog__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flexbe_msgs__msg__BehaviorLog__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flexbe_msgs__msg__BehaviorLog__Sequence__destroy(flexbe_msgs__msg__BehaviorLog__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flexbe_msgs__msg__BehaviorLog__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flexbe_msgs__msg__BehaviorLog__Sequence__are_equal(const flexbe_msgs__msg__BehaviorLog__Sequence * lhs, const flexbe_msgs__msg__BehaviorLog__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flexbe_msgs__msg__BehaviorLog__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flexbe_msgs__msg__BehaviorLog__Sequence__copy(
  const flexbe_msgs__msg__BehaviorLog__Sequence * input,
  flexbe_msgs__msg__BehaviorLog__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flexbe_msgs__msg__BehaviorLog);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    flexbe_msgs__msg__BehaviorLog * data =
      (flexbe_msgs__msg__BehaviorLog *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flexbe_msgs__msg__BehaviorLog__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          flexbe_msgs__msg__BehaviorLog__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flexbe_msgs__msg__BehaviorLog__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
