// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from flexbe_msgs:srv/GetUserdata.idl
// generated code does not contain a copyright notice
#include "flexbe_msgs/srv/detail/get_userdata__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `userdata_key`
#include "rosidl_runtime_c/string_functions.h"

bool
flexbe_msgs__srv__GetUserdata_Request__init(flexbe_msgs__srv__GetUserdata_Request * msg)
{
  if (!msg) {
    return false;
  }
  // userdata_key
  if (!rosidl_runtime_c__String__init(&msg->userdata_key)) {
    flexbe_msgs__srv__GetUserdata_Request__fini(msg);
    return false;
  }
  return true;
}

void
flexbe_msgs__srv__GetUserdata_Request__fini(flexbe_msgs__srv__GetUserdata_Request * msg)
{
  if (!msg) {
    return;
  }
  // userdata_key
  rosidl_runtime_c__String__fini(&msg->userdata_key);
}

bool
flexbe_msgs__srv__GetUserdata_Request__are_equal(const flexbe_msgs__srv__GetUserdata_Request * lhs, const flexbe_msgs__srv__GetUserdata_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // userdata_key
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->userdata_key), &(rhs->userdata_key)))
  {
    return false;
  }
  return true;
}

bool
flexbe_msgs__srv__GetUserdata_Request__copy(
  const flexbe_msgs__srv__GetUserdata_Request * input,
  flexbe_msgs__srv__GetUserdata_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // userdata_key
  if (!rosidl_runtime_c__String__copy(
      &(input->userdata_key), &(output->userdata_key)))
  {
    return false;
  }
  return true;
}

flexbe_msgs__srv__GetUserdata_Request *
flexbe_msgs__srv__GetUserdata_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__srv__GetUserdata_Request * msg = (flexbe_msgs__srv__GetUserdata_Request *)allocator.allocate(sizeof(flexbe_msgs__srv__GetUserdata_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flexbe_msgs__srv__GetUserdata_Request));
  bool success = flexbe_msgs__srv__GetUserdata_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flexbe_msgs__srv__GetUserdata_Request__destroy(flexbe_msgs__srv__GetUserdata_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flexbe_msgs__srv__GetUserdata_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flexbe_msgs__srv__GetUserdata_Request__Sequence__init(flexbe_msgs__srv__GetUserdata_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__srv__GetUserdata_Request * data = NULL;

  if (size) {
    data = (flexbe_msgs__srv__GetUserdata_Request *)allocator.zero_allocate(size, sizeof(flexbe_msgs__srv__GetUserdata_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flexbe_msgs__srv__GetUserdata_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flexbe_msgs__srv__GetUserdata_Request__fini(&data[i - 1]);
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
flexbe_msgs__srv__GetUserdata_Request__Sequence__fini(flexbe_msgs__srv__GetUserdata_Request__Sequence * array)
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
      flexbe_msgs__srv__GetUserdata_Request__fini(&array->data[i]);
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

flexbe_msgs__srv__GetUserdata_Request__Sequence *
flexbe_msgs__srv__GetUserdata_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__srv__GetUserdata_Request__Sequence * array = (flexbe_msgs__srv__GetUserdata_Request__Sequence *)allocator.allocate(sizeof(flexbe_msgs__srv__GetUserdata_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flexbe_msgs__srv__GetUserdata_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flexbe_msgs__srv__GetUserdata_Request__Sequence__destroy(flexbe_msgs__srv__GetUserdata_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flexbe_msgs__srv__GetUserdata_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flexbe_msgs__srv__GetUserdata_Request__Sequence__are_equal(const flexbe_msgs__srv__GetUserdata_Request__Sequence * lhs, const flexbe_msgs__srv__GetUserdata_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flexbe_msgs__srv__GetUserdata_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flexbe_msgs__srv__GetUserdata_Request__Sequence__copy(
  const flexbe_msgs__srv__GetUserdata_Request__Sequence * input,
  flexbe_msgs__srv__GetUserdata_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flexbe_msgs__srv__GetUserdata_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    flexbe_msgs__srv__GetUserdata_Request * data =
      (flexbe_msgs__srv__GetUserdata_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flexbe_msgs__srv__GetUserdata_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          flexbe_msgs__srv__GetUserdata_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flexbe_msgs__srv__GetUserdata_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `userdata`
#include "flexbe_msgs/msg/detail/userdata_info__functions.h"

bool
flexbe_msgs__srv__GetUserdata_Response__init(flexbe_msgs__srv__GetUserdata_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    flexbe_msgs__srv__GetUserdata_Response__fini(msg);
    return false;
  }
  // userdata
  if (!flexbe_msgs__msg__UserdataInfo__Sequence__init(&msg->userdata, 0)) {
    flexbe_msgs__srv__GetUserdata_Response__fini(msg);
    return false;
  }
  return true;
}

void
flexbe_msgs__srv__GetUserdata_Response__fini(flexbe_msgs__srv__GetUserdata_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // userdata
  flexbe_msgs__msg__UserdataInfo__Sequence__fini(&msg->userdata);
}

bool
flexbe_msgs__srv__GetUserdata_Response__are_equal(const flexbe_msgs__srv__GetUserdata_Response * lhs, const flexbe_msgs__srv__GetUserdata_Response * rhs)
{
  if (!lhs || !rhs) {
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
  // userdata
  if (!flexbe_msgs__msg__UserdataInfo__Sequence__are_equal(
      &(lhs->userdata), &(rhs->userdata)))
  {
    return false;
  }
  return true;
}

bool
flexbe_msgs__srv__GetUserdata_Response__copy(
  const flexbe_msgs__srv__GetUserdata_Response * input,
  flexbe_msgs__srv__GetUserdata_Response * output)
{
  if (!input || !output) {
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
  // userdata
  if (!flexbe_msgs__msg__UserdataInfo__Sequence__copy(
      &(input->userdata), &(output->userdata)))
  {
    return false;
  }
  return true;
}

flexbe_msgs__srv__GetUserdata_Response *
flexbe_msgs__srv__GetUserdata_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__srv__GetUserdata_Response * msg = (flexbe_msgs__srv__GetUserdata_Response *)allocator.allocate(sizeof(flexbe_msgs__srv__GetUserdata_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flexbe_msgs__srv__GetUserdata_Response));
  bool success = flexbe_msgs__srv__GetUserdata_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flexbe_msgs__srv__GetUserdata_Response__destroy(flexbe_msgs__srv__GetUserdata_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flexbe_msgs__srv__GetUserdata_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flexbe_msgs__srv__GetUserdata_Response__Sequence__init(flexbe_msgs__srv__GetUserdata_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__srv__GetUserdata_Response * data = NULL;

  if (size) {
    data = (flexbe_msgs__srv__GetUserdata_Response *)allocator.zero_allocate(size, sizeof(flexbe_msgs__srv__GetUserdata_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flexbe_msgs__srv__GetUserdata_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flexbe_msgs__srv__GetUserdata_Response__fini(&data[i - 1]);
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
flexbe_msgs__srv__GetUserdata_Response__Sequence__fini(flexbe_msgs__srv__GetUserdata_Response__Sequence * array)
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
      flexbe_msgs__srv__GetUserdata_Response__fini(&array->data[i]);
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

flexbe_msgs__srv__GetUserdata_Response__Sequence *
flexbe_msgs__srv__GetUserdata_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexbe_msgs__srv__GetUserdata_Response__Sequence * array = (flexbe_msgs__srv__GetUserdata_Response__Sequence *)allocator.allocate(sizeof(flexbe_msgs__srv__GetUserdata_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flexbe_msgs__srv__GetUserdata_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flexbe_msgs__srv__GetUserdata_Response__Sequence__destroy(flexbe_msgs__srv__GetUserdata_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flexbe_msgs__srv__GetUserdata_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flexbe_msgs__srv__GetUserdata_Response__Sequence__are_equal(const flexbe_msgs__srv__GetUserdata_Response__Sequence * lhs, const flexbe_msgs__srv__GetUserdata_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flexbe_msgs__srv__GetUserdata_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flexbe_msgs__srv__GetUserdata_Response__Sequence__copy(
  const flexbe_msgs__srv__GetUserdata_Response__Sequence * input,
  flexbe_msgs__srv__GetUserdata_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flexbe_msgs__srv__GetUserdata_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    flexbe_msgs__srv__GetUserdata_Response * data =
      (flexbe_msgs__srv__GetUserdata_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flexbe_msgs__srv__GetUserdata_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          flexbe_msgs__srv__GetUserdata_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flexbe_msgs__srv__GetUserdata_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
