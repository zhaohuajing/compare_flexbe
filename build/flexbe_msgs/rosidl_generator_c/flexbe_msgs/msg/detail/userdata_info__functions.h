// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from flexbe_msgs:msg/UserdataInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "flexbe_msgs/msg/userdata_info.h"


#ifndef FLEXBE_MSGS__MSG__DETAIL__USERDATA_INFO__FUNCTIONS_H_
#define FLEXBE_MSGS__MSG__DETAIL__USERDATA_INFO__FUNCTIONS_H_

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
#include "flexbe_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "flexbe_msgs/msg/detail/userdata_info__struct.h"

/// Initialize msg/UserdataInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * flexbe_msgs__msg__UserdataInfo
 * )) before or use
 * flexbe_msgs__msg__UserdataInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
bool
flexbe_msgs__msg__UserdataInfo__init(flexbe_msgs__msg__UserdataInfo * msg);

/// Finalize msg/UserdataInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
void
flexbe_msgs__msg__UserdataInfo__fini(flexbe_msgs__msg__UserdataInfo * msg);

/// Create msg/UserdataInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * flexbe_msgs__msg__UserdataInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
flexbe_msgs__msg__UserdataInfo *
flexbe_msgs__msg__UserdataInfo__create(void);

/// Destroy msg/UserdataInfo message.
/**
 * It calls
 * flexbe_msgs__msg__UserdataInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
void
flexbe_msgs__msg__UserdataInfo__destroy(flexbe_msgs__msg__UserdataInfo * msg);

/// Check for msg/UserdataInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
bool
flexbe_msgs__msg__UserdataInfo__are_equal(const flexbe_msgs__msg__UserdataInfo * lhs, const flexbe_msgs__msg__UserdataInfo * rhs);

/// Copy a msg/UserdataInfo message.
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
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
bool
flexbe_msgs__msg__UserdataInfo__copy(
  const flexbe_msgs__msg__UserdataInfo * input,
  flexbe_msgs__msg__UserdataInfo * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
const rosidl_type_hash_t *
flexbe_msgs__msg__UserdataInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
const rosidl_runtime_c__type_description__TypeDescription *
flexbe_msgs__msg__UserdataInfo__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
const rosidl_runtime_c__type_description__TypeSource *
flexbe_msgs__msg__UserdataInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
flexbe_msgs__msg__UserdataInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/UserdataInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * flexbe_msgs__msg__UserdataInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
bool
flexbe_msgs__msg__UserdataInfo__Sequence__init(flexbe_msgs__msg__UserdataInfo__Sequence * array, size_t size);

/// Finalize array of msg/UserdataInfo messages.
/**
 * It calls
 * flexbe_msgs__msg__UserdataInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
void
flexbe_msgs__msg__UserdataInfo__Sequence__fini(flexbe_msgs__msg__UserdataInfo__Sequence * array);

/// Create array of msg/UserdataInfo messages.
/**
 * It allocates the memory for the array and calls
 * flexbe_msgs__msg__UserdataInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
flexbe_msgs__msg__UserdataInfo__Sequence *
flexbe_msgs__msg__UserdataInfo__Sequence__create(size_t size);

/// Destroy array of msg/UserdataInfo messages.
/**
 * It calls
 * flexbe_msgs__msg__UserdataInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
void
flexbe_msgs__msg__UserdataInfo__Sequence__destroy(flexbe_msgs__msg__UserdataInfo__Sequence * array);

/// Check for msg/UserdataInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
bool
flexbe_msgs__msg__UserdataInfo__Sequence__are_equal(const flexbe_msgs__msg__UserdataInfo__Sequence * lhs, const flexbe_msgs__msg__UserdataInfo__Sequence * rhs);

/// Copy an array of msg/UserdataInfo messages.
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
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
bool
flexbe_msgs__msg__UserdataInfo__Sequence__copy(
  const flexbe_msgs__msg__UserdataInfo__Sequence * input,
  flexbe_msgs__msg__UserdataInfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FLEXBE_MSGS__MSG__DETAIL__USERDATA_INFO__FUNCTIONS_H_
