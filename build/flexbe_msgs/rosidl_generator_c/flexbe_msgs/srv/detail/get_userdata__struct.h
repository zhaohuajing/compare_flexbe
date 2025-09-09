// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexbe_msgs:srv/GetUserdata.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "flexbe_msgs/srv/get_userdata.h"


#ifndef FLEXBE_MSGS__SRV__DETAIL__GET_USERDATA__STRUCT_H_
#define FLEXBE_MSGS__SRV__DETAIL__GET_USERDATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'userdata_key'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetUserdata in the package flexbe_msgs.
typedef struct flexbe_msgs__srv__GetUserdata_Request
{
  rosidl_runtime_c__String userdata_key;
} flexbe_msgs__srv__GetUserdata_Request;

// Struct for a sequence of flexbe_msgs__srv__GetUserdata_Request.
typedef struct flexbe_msgs__srv__GetUserdata_Request__Sequence
{
  flexbe_msgs__srv__GetUserdata_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__srv__GetUserdata_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'userdata'
#include "flexbe_msgs/msg/detail/userdata_info__struct.h"

/// Struct defined in srv/GetUserdata in the package flexbe_msgs.
typedef struct flexbe_msgs__srv__GetUserdata_Response
{
  bool success;
  rosidl_runtime_c__String message;
  flexbe_msgs__msg__UserdataInfo__Sequence userdata;
} flexbe_msgs__srv__GetUserdata_Response;

// Struct for a sequence of flexbe_msgs__srv__GetUserdata_Response.
typedef struct flexbe_msgs__srv__GetUserdata_Response__Sequence
{
  flexbe_msgs__srv__GetUserdata_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__srv__GetUserdata_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  flexbe_msgs__srv__GetUserdata_Event__request__MAX_SIZE = 1
};
// response
enum
{
  flexbe_msgs__srv__GetUserdata_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetUserdata in the package flexbe_msgs.
typedef struct flexbe_msgs__srv__GetUserdata_Event
{
  service_msgs__msg__ServiceEventInfo info;
  flexbe_msgs__srv__GetUserdata_Request__Sequence request;
  flexbe_msgs__srv__GetUserdata_Response__Sequence response;
} flexbe_msgs__srv__GetUserdata_Event;

// Struct for a sequence of flexbe_msgs__srv__GetUserdata_Event.
typedef struct flexbe_msgs__srv__GetUserdata_Event__Sequence
{
  flexbe_msgs__srv__GetUserdata_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexbe_msgs__srv__GetUserdata_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXBE_MSGS__SRV__DETAIL__GET_USERDATA__STRUCT_H_
