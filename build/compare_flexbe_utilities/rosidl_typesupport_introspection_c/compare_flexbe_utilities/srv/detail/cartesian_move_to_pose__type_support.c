// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from compare_flexbe_utilities:srv/CartesianMoveToPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "compare_flexbe_utilities/srv/detail/cartesian_move_to_pose__rosidl_typesupport_introspection_c.h"
#include "compare_flexbe_utilities/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "compare_flexbe_utilities/srv/detail/cartesian_move_to_pose__functions.h"
#include "compare_flexbe_utilities/srv/detail/cartesian_move_to_pose__struct.h"


// Include directives for member types
// Member `waypoints`
#include "geometry_msgs/msg/pose.h"
// Member `waypoints`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__CartesianMoveToPose_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  compare_flexbe_utilities__srv__CartesianMoveToPose_Request__init(message_memory);
}

void compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__CartesianMoveToPose_Request_fini_function(void * message_memory)
{
  compare_flexbe_utilities__srv__CartesianMoveToPose_Request__fini(message_memory);
}

size_t compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__size_function__CartesianMoveToPose_Request__waypoints(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__get_const_function__CartesianMoveToPose_Request__waypoints(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__get_function__CartesianMoveToPose_Request__waypoints(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__fetch_function__CartesianMoveToPose_Request__waypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__get_const_function__CartesianMoveToPose_Request__waypoints(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__assign_function__CartesianMoveToPose_Request__waypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__get_function__CartesianMoveToPose_Request__waypoints(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__resize_function__CartesianMoveToPose_Request__waypoints(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__CartesianMoveToPose_Request_message_member_array[1] = {
  {
    "waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(compare_flexbe_utilities__srv__CartesianMoveToPose_Request, waypoints),  // bytes offset in struct
    NULL,  // default value
    compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__size_function__CartesianMoveToPose_Request__waypoints,  // size() function pointer
    compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__get_const_function__CartesianMoveToPose_Request__waypoints,  // get_const(index) function pointer
    compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__get_function__CartesianMoveToPose_Request__waypoints,  // get(index) function pointer
    compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__fetch_function__CartesianMoveToPose_Request__waypoints,  // fetch(index, &value) function pointer
    compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__assign_function__CartesianMoveToPose_Request__waypoints,  // assign(index, value) function pointer
    compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__resize_function__CartesianMoveToPose_Request__waypoints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__CartesianMoveToPose_Request_message_members = {
  "compare_flexbe_utilities__srv",  // message namespace
  "CartesianMoveToPose_Request",  // message name
  1,  // number of fields
  sizeof(compare_flexbe_utilities__srv__CartesianMoveToPose_Request),
  false,  // has_any_key_member_
  compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__CartesianMoveToPose_Request_message_member_array,  // message members
  compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__CartesianMoveToPose_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__CartesianMoveToPose_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__CartesianMoveToPose_Request_message_type_support_handle = {
  0,
  &compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__CartesianMoveToPose_Request_message_members,
  get_message_typesupport_handle_function,
  &compare_flexbe_utilities__srv__CartesianMoveToPose_Request__get_type_hash,
  &compare_flexbe_utilities__srv__CartesianMoveToPose_Request__get_type_description,
  &compare_flexbe_utilities__srv__CartesianMoveToPose_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_compare_flexbe_utilities
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, compare_flexbe_utilities, srv, CartesianMoveToPose_Request)() {
  compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__CartesianMoveToPose_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__CartesianMoveToPose_Request_message_type_support_handle.typesupport_identifier) {
    compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__CartesianMoveToPose_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__CartesianMoveToPose_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "compare_flexbe_utilities/srv/detail/cartesian_move_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "compare_flexbe_utilities/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "compare_flexbe_utilities/srv/detail/cartesian_move_to_pose__functions.h"
// already included above
// #include "compare_flexbe_utilities/srv/detail/cartesian_move_to_pose__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void compare_flexbe_utilities__srv__CartesianMoveToPose_Response__rosidl_typesupport_introspection_c__CartesianMoveToPose_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  compare_flexbe_utilities__srv__CartesianMoveToPose_Response__init(message_memory);
}

void compare_flexbe_utilities__srv__CartesianMoveToPose_Response__rosidl_typesupport_introspection_c__CartesianMoveToPose_Response_fini_function(void * message_memory)
{
  compare_flexbe_utilities__srv__CartesianMoveToPose_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember compare_flexbe_utilities__srv__CartesianMoveToPose_Response__rosidl_typesupport_introspection_c__CartesianMoveToPose_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(compare_flexbe_utilities__srv__CartesianMoveToPose_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "percentage_planned",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(compare_flexbe_utilities__srv__CartesianMoveToPose_Response, percentage_planned),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers compare_flexbe_utilities__srv__CartesianMoveToPose_Response__rosidl_typesupport_introspection_c__CartesianMoveToPose_Response_message_members = {
  "compare_flexbe_utilities__srv",  // message namespace
  "CartesianMoveToPose_Response",  // message name
  2,  // number of fields
  sizeof(compare_flexbe_utilities__srv__CartesianMoveToPose_Response),
  false,  // has_any_key_member_
  compare_flexbe_utilities__srv__CartesianMoveToPose_Response__rosidl_typesupport_introspection_c__CartesianMoveToPose_Response_message_member_array,  // message members
  compare_flexbe_utilities__srv__CartesianMoveToPose_Response__rosidl_typesupport_introspection_c__CartesianMoveToPose_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  compare_flexbe_utilities__srv__CartesianMoveToPose_Response__rosidl_typesupport_introspection_c__CartesianMoveToPose_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t compare_flexbe_utilities__srv__CartesianMoveToPose_Response__rosidl_typesupport_introspection_c__CartesianMoveToPose_Response_message_type_support_handle = {
  0,
  &compare_flexbe_utilities__srv__CartesianMoveToPose_Response__rosidl_typesupport_introspection_c__CartesianMoveToPose_Response_message_members,
  get_message_typesupport_handle_function,
  &compare_flexbe_utilities__srv__CartesianMoveToPose_Response__get_type_hash,
  &compare_flexbe_utilities__srv__CartesianMoveToPose_Response__get_type_description,
  &compare_flexbe_utilities__srv__CartesianMoveToPose_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_compare_flexbe_utilities
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, compare_flexbe_utilities, srv, CartesianMoveToPose_Response)() {
  if (!compare_flexbe_utilities__srv__CartesianMoveToPose_Response__rosidl_typesupport_introspection_c__CartesianMoveToPose_Response_message_type_support_handle.typesupport_identifier) {
    compare_flexbe_utilities__srv__CartesianMoveToPose_Response__rosidl_typesupport_introspection_c__CartesianMoveToPose_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &compare_flexbe_utilities__srv__CartesianMoveToPose_Response__rosidl_typesupport_introspection_c__CartesianMoveToPose_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "compare_flexbe_utilities/srv/detail/cartesian_move_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "compare_flexbe_utilities/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "compare_flexbe_utilities/srv/detail/cartesian_move_to_pose__functions.h"
// already included above
// #include "compare_flexbe_utilities/srv/detail/cartesian_move_to_pose__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "compare_flexbe_utilities/srv/cartesian_move_to_pose.h"
// Member `request`
// Member `response`
// already included above
// #include "compare_flexbe_utilities/srv/detail/cartesian_move_to_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__CartesianMoveToPose_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  compare_flexbe_utilities__srv__CartesianMoveToPose_Event__init(message_memory);
}

void compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__CartesianMoveToPose_Event_fini_function(void * message_memory)
{
  compare_flexbe_utilities__srv__CartesianMoveToPose_Event__fini(message_memory);
}

size_t compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__size_function__CartesianMoveToPose_Event__request(
  const void * untyped_member)
{
  const compare_flexbe_utilities__srv__CartesianMoveToPose_Request__Sequence * member =
    (const compare_flexbe_utilities__srv__CartesianMoveToPose_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__get_const_function__CartesianMoveToPose_Event__request(
  const void * untyped_member, size_t index)
{
  const compare_flexbe_utilities__srv__CartesianMoveToPose_Request__Sequence * member =
    (const compare_flexbe_utilities__srv__CartesianMoveToPose_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__get_function__CartesianMoveToPose_Event__request(
  void * untyped_member, size_t index)
{
  compare_flexbe_utilities__srv__CartesianMoveToPose_Request__Sequence * member =
    (compare_flexbe_utilities__srv__CartesianMoveToPose_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__fetch_function__CartesianMoveToPose_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const compare_flexbe_utilities__srv__CartesianMoveToPose_Request * item =
    ((const compare_flexbe_utilities__srv__CartesianMoveToPose_Request *)
    compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__get_const_function__CartesianMoveToPose_Event__request(untyped_member, index));
  compare_flexbe_utilities__srv__CartesianMoveToPose_Request * value =
    (compare_flexbe_utilities__srv__CartesianMoveToPose_Request *)(untyped_value);
  *value = *item;
}

void compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__assign_function__CartesianMoveToPose_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  compare_flexbe_utilities__srv__CartesianMoveToPose_Request * item =
    ((compare_flexbe_utilities__srv__CartesianMoveToPose_Request *)
    compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__get_function__CartesianMoveToPose_Event__request(untyped_member, index));
  const compare_flexbe_utilities__srv__CartesianMoveToPose_Request * value =
    (const compare_flexbe_utilities__srv__CartesianMoveToPose_Request *)(untyped_value);
  *item = *value;
}

bool compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__resize_function__CartesianMoveToPose_Event__request(
  void * untyped_member, size_t size)
{
  compare_flexbe_utilities__srv__CartesianMoveToPose_Request__Sequence * member =
    (compare_flexbe_utilities__srv__CartesianMoveToPose_Request__Sequence *)(untyped_member);
  compare_flexbe_utilities__srv__CartesianMoveToPose_Request__Sequence__fini(member);
  return compare_flexbe_utilities__srv__CartesianMoveToPose_Request__Sequence__init(member, size);
}

size_t compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__size_function__CartesianMoveToPose_Event__response(
  const void * untyped_member)
{
  const compare_flexbe_utilities__srv__CartesianMoveToPose_Response__Sequence * member =
    (const compare_flexbe_utilities__srv__CartesianMoveToPose_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__get_const_function__CartesianMoveToPose_Event__response(
  const void * untyped_member, size_t index)
{
  const compare_flexbe_utilities__srv__CartesianMoveToPose_Response__Sequence * member =
    (const compare_flexbe_utilities__srv__CartesianMoveToPose_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__get_function__CartesianMoveToPose_Event__response(
  void * untyped_member, size_t index)
{
  compare_flexbe_utilities__srv__CartesianMoveToPose_Response__Sequence * member =
    (compare_flexbe_utilities__srv__CartesianMoveToPose_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__fetch_function__CartesianMoveToPose_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const compare_flexbe_utilities__srv__CartesianMoveToPose_Response * item =
    ((const compare_flexbe_utilities__srv__CartesianMoveToPose_Response *)
    compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__get_const_function__CartesianMoveToPose_Event__response(untyped_member, index));
  compare_flexbe_utilities__srv__CartesianMoveToPose_Response * value =
    (compare_flexbe_utilities__srv__CartesianMoveToPose_Response *)(untyped_value);
  *value = *item;
}

void compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__assign_function__CartesianMoveToPose_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  compare_flexbe_utilities__srv__CartesianMoveToPose_Response * item =
    ((compare_flexbe_utilities__srv__CartesianMoveToPose_Response *)
    compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__get_function__CartesianMoveToPose_Event__response(untyped_member, index));
  const compare_flexbe_utilities__srv__CartesianMoveToPose_Response * value =
    (const compare_flexbe_utilities__srv__CartesianMoveToPose_Response *)(untyped_value);
  *item = *value;
}

bool compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__resize_function__CartesianMoveToPose_Event__response(
  void * untyped_member, size_t size)
{
  compare_flexbe_utilities__srv__CartesianMoveToPose_Response__Sequence * member =
    (compare_flexbe_utilities__srv__CartesianMoveToPose_Response__Sequence *)(untyped_member);
  compare_flexbe_utilities__srv__CartesianMoveToPose_Response__Sequence__fini(member);
  return compare_flexbe_utilities__srv__CartesianMoveToPose_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__CartesianMoveToPose_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(compare_flexbe_utilities__srv__CartesianMoveToPose_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(compare_flexbe_utilities__srv__CartesianMoveToPose_Event, request),  // bytes offset in struct
    NULL,  // default value
    compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__size_function__CartesianMoveToPose_Event__request,  // size() function pointer
    compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__get_const_function__CartesianMoveToPose_Event__request,  // get_const(index) function pointer
    compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__get_function__CartesianMoveToPose_Event__request,  // get(index) function pointer
    compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__fetch_function__CartesianMoveToPose_Event__request,  // fetch(index, &value) function pointer
    compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__assign_function__CartesianMoveToPose_Event__request,  // assign(index, value) function pointer
    compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__resize_function__CartesianMoveToPose_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(compare_flexbe_utilities__srv__CartesianMoveToPose_Event, response),  // bytes offset in struct
    NULL,  // default value
    compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__size_function__CartesianMoveToPose_Event__response,  // size() function pointer
    compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__get_const_function__CartesianMoveToPose_Event__response,  // get_const(index) function pointer
    compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__get_function__CartesianMoveToPose_Event__response,  // get(index) function pointer
    compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__fetch_function__CartesianMoveToPose_Event__response,  // fetch(index, &value) function pointer
    compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__assign_function__CartesianMoveToPose_Event__response,  // assign(index, value) function pointer
    compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__resize_function__CartesianMoveToPose_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__CartesianMoveToPose_Event_message_members = {
  "compare_flexbe_utilities__srv",  // message namespace
  "CartesianMoveToPose_Event",  // message name
  3,  // number of fields
  sizeof(compare_flexbe_utilities__srv__CartesianMoveToPose_Event),
  false,  // has_any_key_member_
  compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__CartesianMoveToPose_Event_message_member_array,  // message members
  compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__CartesianMoveToPose_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__CartesianMoveToPose_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__CartesianMoveToPose_Event_message_type_support_handle = {
  0,
  &compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__CartesianMoveToPose_Event_message_members,
  get_message_typesupport_handle_function,
  &compare_flexbe_utilities__srv__CartesianMoveToPose_Event__get_type_hash,
  &compare_flexbe_utilities__srv__CartesianMoveToPose_Event__get_type_description,
  &compare_flexbe_utilities__srv__CartesianMoveToPose_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_compare_flexbe_utilities
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, compare_flexbe_utilities, srv, CartesianMoveToPose_Event)() {
  compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__CartesianMoveToPose_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__CartesianMoveToPose_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, compare_flexbe_utilities, srv, CartesianMoveToPose_Request)();
  compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__CartesianMoveToPose_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, compare_flexbe_utilities, srv, CartesianMoveToPose_Response)();
  if (!compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__CartesianMoveToPose_Event_message_type_support_handle.typesupport_identifier) {
    compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__CartesianMoveToPose_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__CartesianMoveToPose_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "compare_flexbe_utilities/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "compare_flexbe_utilities/srv/detail/cartesian_move_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers compare_flexbe_utilities__srv__detail__cartesian_move_to_pose__rosidl_typesupport_introspection_c__CartesianMoveToPose_service_members = {
  "compare_flexbe_utilities__srv",  // service namespace
  "CartesianMoveToPose",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // compare_flexbe_utilities__srv__detail__cartesian_move_to_pose__rosidl_typesupport_introspection_c__CartesianMoveToPose_Request_message_type_support_handle,
  NULL,  // response message
  // compare_flexbe_utilities__srv__detail__cartesian_move_to_pose__rosidl_typesupport_introspection_c__CartesianMoveToPose_Response_message_type_support_handle
  NULL  // event_message
  // compare_flexbe_utilities__srv__detail__cartesian_move_to_pose__rosidl_typesupport_introspection_c__CartesianMoveToPose_Response_message_type_support_handle
};


static rosidl_service_type_support_t compare_flexbe_utilities__srv__detail__cartesian_move_to_pose__rosidl_typesupport_introspection_c__CartesianMoveToPose_service_type_support_handle = {
  0,
  &compare_flexbe_utilities__srv__detail__cartesian_move_to_pose__rosidl_typesupport_introspection_c__CartesianMoveToPose_service_members,
  get_service_typesupport_handle_function,
  &compare_flexbe_utilities__srv__CartesianMoveToPose_Request__rosidl_typesupport_introspection_c__CartesianMoveToPose_Request_message_type_support_handle,
  &compare_flexbe_utilities__srv__CartesianMoveToPose_Response__rosidl_typesupport_introspection_c__CartesianMoveToPose_Response_message_type_support_handle,
  &compare_flexbe_utilities__srv__CartesianMoveToPose_Event__rosidl_typesupport_introspection_c__CartesianMoveToPose_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    compare_flexbe_utilities,
    srv,
    CartesianMoveToPose
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    compare_flexbe_utilities,
    srv,
    CartesianMoveToPose
  ),
  &compare_flexbe_utilities__srv__CartesianMoveToPose__get_type_hash,
  &compare_flexbe_utilities__srv__CartesianMoveToPose__get_type_description,
  &compare_flexbe_utilities__srv__CartesianMoveToPose__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, compare_flexbe_utilities, srv, CartesianMoveToPose_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, compare_flexbe_utilities, srv, CartesianMoveToPose_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, compare_flexbe_utilities, srv, CartesianMoveToPose_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_compare_flexbe_utilities
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, compare_flexbe_utilities, srv, CartesianMoveToPose)(void) {
  if (!compare_flexbe_utilities__srv__detail__cartesian_move_to_pose__rosidl_typesupport_introspection_c__CartesianMoveToPose_service_type_support_handle.typesupport_identifier) {
    compare_flexbe_utilities__srv__detail__cartesian_move_to_pose__rosidl_typesupport_introspection_c__CartesianMoveToPose_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)compare_flexbe_utilities__srv__detail__cartesian_move_to_pose__rosidl_typesupport_introspection_c__CartesianMoveToPose_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, compare_flexbe_utilities, srv, CartesianMoveToPose_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, compare_flexbe_utilities, srv, CartesianMoveToPose_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, compare_flexbe_utilities, srv, CartesianMoveToPose_Event)()->data;
  }

  return &compare_flexbe_utilities__srv__detail__cartesian_move_to_pose__rosidl_typesupport_introspection_c__CartesianMoveToPose_service_type_support_handle;
}
