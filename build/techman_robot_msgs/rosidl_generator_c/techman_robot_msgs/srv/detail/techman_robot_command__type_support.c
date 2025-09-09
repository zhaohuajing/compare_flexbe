// generated from rosidl_generator_c/resource/idl__type_support.c.em
// with input from techman_robot_msgs:srv/TechmanRobotCommand.idl
// generated code does not contain a copyright notice

#include <string.h>

#include "techman_robot_msgs/srv/detail/techman_robot_command__struct.h"
#include "techman_robot_msgs/srv/detail/techman_robot_command__functions.h"
#include "rosidl_typesupport_interface/macros.h"
#include "techman_robot_msgs/srv/detail/techman_robot_command__type_support.h"

#ifdef __cplusplus
extern "C"
{
#endif


void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  techman_robot_msgs,
  srv,
  TechmanRobotCommand
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message)
{
  if (!allocator || !info) {
    return NULL;
  }
  techman_robot_msgs__srv__TechmanRobotCommand_Event * event_msg = (techman_robot_msgs__srv__TechmanRobotCommand_Event *)(allocator->allocate(sizeof(techman_robot_msgs__srv__TechmanRobotCommand_Event), allocator->state));
  if (!techman_robot_msgs__srv__TechmanRobotCommand_Event__init(event_msg)) {
    allocator->deallocate(event_msg, allocator->state);
    return NULL;
  }

  event_msg->info.event_type = info->event_type;
  event_msg->info.sequence_number = info->sequence_number;
  event_msg->info.stamp.sec = info->stamp_sec;
  event_msg->info.stamp.nanosec = info->stamp_nanosec;
  memcpy(event_msg->info.client_gid, info->client_gid, 16);
  if (request_message) {
    techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence__init(
      &event_msg->request,
      1);
    if (!techman_robot_msgs__srv__TechmanRobotCommand_Request__copy((const techman_robot_msgs__srv__TechmanRobotCommand_Request *)(request_message), event_msg->request.data)) {
      allocator->deallocate(event_msg, allocator->state);
      return NULL;
    }
  }
  if (response_message) {
    techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence__init(
      &event_msg->response,
      1);
    if (!techman_robot_msgs__srv__TechmanRobotCommand_Response__copy((const techman_robot_msgs__srv__TechmanRobotCommand_Response *)(response_message), event_msg->response.data)) {
      allocator->deallocate(event_msg, allocator->state);
      return NULL;
    }
  }
  return event_msg;
}

// Forward declare the get type support functions for this type.
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  techman_robot_msgs,
  srv,
  TechmanRobotCommand
)(
  void * event_msg,
  rcutils_allocator_t * allocator)
{
  if (!allocator) {
    return false;
  }
  if (NULL == event_msg) {
    return false;
  }
  techman_robot_msgs__srv__TechmanRobotCommand_Event * _event_msg = (techman_robot_msgs__srv__TechmanRobotCommand_Event *)(event_msg);

  techman_robot_msgs__srv__TechmanRobotCommand_Event__fini((techman_robot_msgs__srv__TechmanRobotCommand_Event *)(_event_msg));
  if (_event_msg->request.data) {
    allocator->deallocate(_event_msg->request.data, allocator->state);
  }
  if (_event_msg->response.data) {
    allocator->deallocate(_event_msg->response.data, allocator->state);
  }
  allocator->deallocate(_event_msg, allocator->state);
  return true;
}

#ifdef __cplusplus
}
#endif
