// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tm_msgs:srv/SetEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tm_msgs/srv/set_event.h"


#ifndef TM_MSGS__SRV__DETAIL__SET_EVENT__STRUCT_H_
#define TM_MSGS__SRV__DETAIL__SET_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TAG'.
enum
{
  tm_msgs__srv__SetEvent_Request__TAG = 1
};

/// Constant 'WAIT_TAG'.
enum
{
  tm_msgs__srv__SetEvent_Request__WAIT_TAG = 2
};

/// Constant 'STOP'.
enum
{
  tm_msgs__srv__SetEvent_Request__STOP = 11
};

/// Constant 'PAUSE'.
enum
{
  tm_msgs__srv__SetEvent_Request__PAUSE = 12
};

/// Constant 'RESUME'.
enum
{
  tm_msgs__srv__SetEvent_Request__RESUME = 13
};

/// Constant 'EXIT'.
enum
{
  tm_msgs__srv__SetEvent_Request__EXIT = -1
};

/// Struct defined in srv/SetEvent in the package tm_msgs.
typedef struct tm_msgs__srv__SetEvent_Request
{
  int8_t func;
  /// if fun is TAG or WAIT_TAG, arg0 is the tag number.
  int8_t arg0;
  /// if fun is TAG or WAIT_TAG, arg1 is timeout in ms.
  int8_t arg1;
} tm_msgs__srv__SetEvent_Request;

// Struct for a sequence of tm_msgs__srv__SetEvent_Request.
typedef struct tm_msgs__srv__SetEvent_Request__Sequence
{
  tm_msgs__srv__SetEvent_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tm_msgs__srv__SetEvent_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetEvent in the package tm_msgs.
typedef struct tm_msgs__srv__SetEvent_Response
{
  bool ok;
} tm_msgs__srv__SetEvent_Response;

// Struct for a sequence of tm_msgs__srv__SetEvent_Response.
typedef struct tm_msgs__srv__SetEvent_Response__Sequence
{
  tm_msgs__srv__SetEvent_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tm_msgs__srv__SetEvent_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  tm_msgs__srv__SetEvent_Event__request__MAX_SIZE = 1
};
// response
enum
{
  tm_msgs__srv__SetEvent_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetEvent in the package tm_msgs.
typedef struct tm_msgs__srv__SetEvent_Event
{
  service_msgs__msg__ServiceEventInfo info;
  tm_msgs__srv__SetEvent_Request__Sequence request;
  tm_msgs__srv__SetEvent_Response__Sequence response;
} tm_msgs__srv__SetEvent_Event;

// Struct for a sequence of tm_msgs__srv__SetEvent_Event.
typedef struct tm_msgs__srv__SetEvent_Event__Sequence
{
  tm_msgs__srv__SetEvent_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tm_msgs__srv__SetEvent_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TM_MSGS__SRV__DETAIL__SET_EVENT__STRUCT_H_
