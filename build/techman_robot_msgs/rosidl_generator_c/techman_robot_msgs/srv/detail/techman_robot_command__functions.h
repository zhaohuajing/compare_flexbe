// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from techman_robot_msgs:srv/TechmanRobotCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "techman_robot_msgs/srv/techman_robot_command.h"


#ifndef TECHMAN_ROBOT_MSGS__SRV__DETAIL__TECHMAN_ROBOT_COMMAND__FUNCTIONS_H_
#define TECHMAN_ROBOT_MSGS__SRV__DETAIL__TECHMAN_ROBOT_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "techman_robot_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "techman_robot_msgs/srv/detail/techman_robot_command__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
const rosidl_type_hash_t *
techman_robot_msgs__srv__TechmanRobotCommand__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
const rosidl_runtime_c__type_description__TypeDescription *
techman_robot_msgs__srv__TechmanRobotCommand__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
const rosidl_runtime_c__type_description__TypeSource *
techman_robot_msgs__srv__TechmanRobotCommand__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
techman_robot_msgs__srv__TechmanRobotCommand__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/TechmanRobotCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * techman_robot_msgs__srv__TechmanRobotCommand_Request
 * )) before or use
 * techman_robot_msgs__srv__TechmanRobotCommand_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
bool
techman_robot_msgs__srv__TechmanRobotCommand_Request__init(techman_robot_msgs__srv__TechmanRobotCommand_Request * msg);

/// Finalize srv/TechmanRobotCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
void
techman_robot_msgs__srv__TechmanRobotCommand_Request__fini(techman_robot_msgs__srv__TechmanRobotCommand_Request * msg);

/// Create srv/TechmanRobotCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * techman_robot_msgs__srv__TechmanRobotCommand_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
techman_robot_msgs__srv__TechmanRobotCommand_Request *
techman_robot_msgs__srv__TechmanRobotCommand_Request__create(void);

/// Destroy srv/TechmanRobotCommand message.
/**
 * It calls
 * techman_robot_msgs__srv__TechmanRobotCommand_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
void
techman_robot_msgs__srv__TechmanRobotCommand_Request__destroy(techman_robot_msgs__srv__TechmanRobotCommand_Request * msg);

/// Check for srv/TechmanRobotCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
bool
techman_robot_msgs__srv__TechmanRobotCommand_Request__are_equal(const techman_robot_msgs__srv__TechmanRobotCommand_Request * lhs, const techman_robot_msgs__srv__TechmanRobotCommand_Request * rhs);

/// Copy a srv/TechmanRobotCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
bool
techman_robot_msgs__srv__TechmanRobotCommand_Request__copy(
  const techman_robot_msgs__srv__TechmanRobotCommand_Request * input,
  techman_robot_msgs__srv__TechmanRobotCommand_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
const rosidl_type_hash_t *
techman_robot_msgs__srv__TechmanRobotCommand_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
const rosidl_runtime_c__type_description__TypeDescription *
techman_robot_msgs__srv__TechmanRobotCommand_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
const rosidl_runtime_c__type_description__TypeSource *
techman_robot_msgs__srv__TechmanRobotCommand_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
techman_robot_msgs__srv__TechmanRobotCommand_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/TechmanRobotCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * techman_robot_msgs__srv__TechmanRobotCommand_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
bool
techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence__init(techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence * array, size_t size);

/// Finalize array of srv/TechmanRobotCommand messages.
/**
 * It calls
 * techman_robot_msgs__srv__TechmanRobotCommand_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
void
techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence__fini(techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence * array);

/// Create array of srv/TechmanRobotCommand messages.
/**
 * It allocates the memory for the array and calls
 * techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence *
techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence__create(size_t size);

/// Destroy array of srv/TechmanRobotCommand messages.
/**
 * It calls
 * techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
void
techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence__destroy(techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence * array);

/// Check for srv/TechmanRobotCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
bool
techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence__are_equal(const techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence * lhs, const techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence * rhs);

/// Copy an array of srv/TechmanRobotCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
bool
techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence__copy(
  const techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence * input,
  techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence * output);

/// Initialize srv/TechmanRobotCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * techman_robot_msgs__srv__TechmanRobotCommand_Response
 * )) before or use
 * techman_robot_msgs__srv__TechmanRobotCommand_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
bool
techman_robot_msgs__srv__TechmanRobotCommand_Response__init(techman_robot_msgs__srv__TechmanRobotCommand_Response * msg);

/// Finalize srv/TechmanRobotCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
void
techman_robot_msgs__srv__TechmanRobotCommand_Response__fini(techman_robot_msgs__srv__TechmanRobotCommand_Response * msg);

/// Create srv/TechmanRobotCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * techman_robot_msgs__srv__TechmanRobotCommand_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
techman_robot_msgs__srv__TechmanRobotCommand_Response *
techman_robot_msgs__srv__TechmanRobotCommand_Response__create(void);

/// Destroy srv/TechmanRobotCommand message.
/**
 * It calls
 * techman_robot_msgs__srv__TechmanRobotCommand_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
void
techman_robot_msgs__srv__TechmanRobotCommand_Response__destroy(techman_robot_msgs__srv__TechmanRobotCommand_Response * msg);

/// Check for srv/TechmanRobotCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
bool
techman_robot_msgs__srv__TechmanRobotCommand_Response__are_equal(const techman_robot_msgs__srv__TechmanRobotCommand_Response * lhs, const techman_robot_msgs__srv__TechmanRobotCommand_Response * rhs);

/// Copy a srv/TechmanRobotCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
bool
techman_robot_msgs__srv__TechmanRobotCommand_Response__copy(
  const techman_robot_msgs__srv__TechmanRobotCommand_Response * input,
  techman_robot_msgs__srv__TechmanRobotCommand_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
const rosidl_type_hash_t *
techman_robot_msgs__srv__TechmanRobotCommand_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
const rosidl_runtime_c__type_description__TypeDescription *
techman_robot_msgs__srv__TechmanRobotCommand_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
const rosidl_runtime_c__type_description__TypeSource *
techman_robot_msgs__srv__TechmanRobotCommand_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
techman_robot_msgs__srv__TechmanRobotCommand_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/TechmanRobotCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * techman_robot_msgs__srv__TechmanRobotCommand_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
bool
techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence__init(techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence * array, size_t size);

/// Finalize array of srv/TechmanRobotCommand messages.
/**
 * It calls
 * techman_robot_msgs__srv__TechmanRobotCommand_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
void
techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence__fini(techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence * array);

/// Create array of srv/TechmanRobotCommand messages.
/**
 * It allocates the memory for the array and calls
 * techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence *
techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence__create(size_t size);

/// Destroy array of srv/TechmanRobotCommand messages.
/**
 * It calls
 * techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
void
techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence__destroy(techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence * array);

/// Check for srv/TechmanRobotCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
bool
techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence__are_equal(const techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence * lhs, const techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence * rhs);

/// Copy an array of srv/TechmanRobotCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
bool
techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence__copy(
  const techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence * input,
  techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence * output);

/// Initialize srv/TechmanRobotCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * techman_robot_msgs__srv__TechmanRobotCommand_Event
 * )) before or use
 * techman_robot_msgs__srv__TechmanRobotCommand_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
bool
techman_robot_msgs__srv__TechmanRobotCommand_Event__init(techman_robot_msgs__srv__TechmanRobotCommand_Event * msg);

/// Finalize srv/TechmanRobotCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
void
techman_robot_msgs__srv__TechmanRobotCommand_Event__fini(techman_robot_msgs__srv__TechmanRobotCommand_Event * msg);

/// Create srv/TechmanRobotCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * techman_robot_msgs__srv__TechmanRobotCommand_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
techman_robot_msgs__srv__TechmanRobotCommand_Event *
techman_robot_msgs__srv__TechmanRobotCommand_Event__create(void);

/// Destroy srv/TechmanRobotCommand message.
/**
 * It calls
 * techman_robot_msgs__srv__TechmanRobotCommand_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
void
techman_robot_msgs__srv__TechmanRobotCommand_Event__destroy(techman_robot_msgs__srv__TechmanRobotCommand_Event * msg);

/// Check for srv/TechmanRobotCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
bool
techman_robot_msgs__srv__TechmanRobotCommand_Event__are_equal(const techman_robot_msgs__srv__TechmanRobotCommand_Event * lhs, const techman_robot_msgs__srv__TechmanRobotCommand_Event * rhs);

/// Copy a srv/TechmanRobotCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
bool
techman_robot_msgs__srv__TechmanRobotCommand_Event__copy(
  const techman_robot_msgs__srv__TechmanRobotCommand_Event * input,
  techman_robot_msgs__srv__TechmanRobotCommand_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
const rosidl_type_hash_t *
techman_robot_msgs__srv__TechmanRobotCommand_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
const rosidl_runtime_c__type_description__TypeDescription *
techman_robot_msgs__srv__TechmanRobotCommand_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
const rosidl_runtime_c__type_description__TypeSource *
techman_robot_msgs__srv__TechmanRobotCommand_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
techman_robot_msgs__srv__TechmanRobotCommand_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/TechmanRobotCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * techman_robot_msgs__srv__TechmanRobotCommand_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
bool
techman_robot_msgs__srv__TechmanRobotCommand_Event__Sequence__init(techman_robot_msgs__srv__TechmanRobotCommand_Event__Sequence * array, size_t size);

/// Finalize array of srv/TechmanRobotCommand messages.
/**
 * It calls
 * techman_robot_msgs__srv__TechmanRobotCommand_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
void
techman_robot_msgs__srv__TechmanRobotCommand_Event__Sequence__fini(techman_robot_msgs__srv__TechmanRobotCommand_Event__Sequence * array);

/// Create array of srv/TechmanRobotCommand messages.
/**
 * It allocates the memory for the array and calls
 * techman_robot_msgs__srv__TechmanRobotCommand_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
techman_robot_msgs__srv__TechmanRobotCommand_Event__Sequence *
techman_robot_msgs__srv__TechmanRobotCommand_Event__Sequence__create(size_t size);

/// Destroy array of srv/TechmanRobotCommand messages.
/**
 * It calls
 * techman_robot_msgs__srv__TechmanRobotCommand_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
void
techman_robot_msgs__srv__TechmanRobotCommand_Event__Sequence__destroy(techman_robot_msgs__srv__TechmanRobotCommand_Event__Sequence * array);

/// Check for srv/TechmanRobotCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
bool
techman_robot_msgs__srv__TechmanRobotCommand_Event__Sequence__are_equal(const techman_robot_msgs__srv__TechmanRobotCommand_Event__Sequence * lhs, const techman_robot_msgs__srv__TechmanRobotCommand_Event__Sequence * rhs);

/// Copy an array of srv/TechmanRobotCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_techman_robot_msgs
bool
techman_robot_msgs__srv__TechmanRobotCommand_Event__Sequence__copy(
  const techman_robot_msgs__srv__TechmanRobotCommand_Event__Sequence * input,
  techman_robot_msgs__srv__TechmanRobotCommand_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // TECHMAN_ROBOT_MSGS__SRV__DETAIL__TECHMAN_ROBOT_COMMAND__FUNCTIONS_H_
