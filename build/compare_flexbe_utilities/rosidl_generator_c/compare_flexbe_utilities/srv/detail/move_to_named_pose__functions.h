// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from compare_flexbe_utilities:srv/MoveToNamedPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "compare_flexbe_utilities/srv/move_to_named_pose.h"


#ifndef COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__MOVE_TO_NAMED_POSE__FUNCTIONS_H_
#define COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__MOVE_TO_NAMED_POSE__FUNCTIONS_H_

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
#include "compare_flexbe_utilities/msg/rosidl_generator_c__visibility_control.h"

#include "compare_flexbe_utilities/srv/detail/move_to_named_pose__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_type_hash_t *
compare_flexbe_utilities__srv__MoveToNamedPose__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_runtime_c__type_description__TypeDescription *
compare_flexbe_utilities__srv__MoveToNamedPose__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_runtime_c__type_description__TypeSource *
compare_flexbe_utilities__srv__MoveToNamedPose__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_runtime_c__type_description__TypeSource__Sequence *
compare_flexbe_utilities__srv__MoveToNamedPose__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/MoveToNamedPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * compare_flexbe_utilities__srv__MoveToNamedPose_Request
 * )) before or use
 * compare_flexbe_utilities__srv__MoveToNamedPose_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
bool
compare_flexbe_utilities__srv__MoveToNamedPose_Request__init(compare_flexbe_utilities__srv__MoveToNamedPose_Request * msg);

/// Finalize srv/MoveToNamedPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
void
compare_flexbe_utilities__srv__MoveToNamedPose_Request__fini(compare_flexbe_utilities__srv__MoveToNamedPose_Request * msg);

/// Create srv/MoveToNamedPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * compare_flexbe_utilities__srv__MoveToNamedPose_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
compare_flexbe_utilities__srv__MoveToNamedPose_Request *
compare_flexbe_utilities__srv__MoveToNamedPose_Request__create(void);

/// Destroy srv/MoveToNamedPose message.
/**
 * It calls
 * compare_flexbe_utilities__srv__MoveToNamedPose_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
void
compare_flexbe_utilities__srv__MoveToNamedPose_Request__destroy(compare_flexbe_utilities__srv__MoveToNamedPose_Request * msg);

/// Check for srv/MoveToNamedPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
bool
compare_flexbe_utilities__srv__MoveToNamedPose_Request__are_equal(const compare_flexbe_utilities__srv__MoveToNamedPose_Request * lhs, const compare_flexbe_utilities__srv__MoveToNamedPose_Request * rhs);

/// Copy a srv/MoveToNamedPose message.
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
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
bool
compare_flexbe_utilities__srv__MoveToNamedPose_Request__copy(
  const compare_flexbe_utilities__srv__MoveToNamedPose_Request * input,
  compare_flexbe_utilities__srv__MoveToNamedPose_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_type_hash_t *
compare_flexbe_utilities__srv__MoveToNamedPose_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_runtime_c__type_description__TypeDescription *
compare_flexbe_utilities__srv__MoveToNamedPose_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_runtime_c__type_description__TypeSource *
compare_flexbe_utilities__srv__MoveToNamedPose_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_runtime_c__type_description__TypeSource__Sequence *
compare_flexbe_utilities__srv__MoveToNamedPose_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/MoveToNamedPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * compare_flexbe_utilities__srv__MoveToNamedPose_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
bool
compare_flexbe_utilities__srv__MoveToNamedPose_Request__Sequence__init(compare_flexbe_utilities__srv__MoveToNamedPose_Request__Sequence * array, size_t size);

/// Finalize array of srv/MoveToNamedPose messages.
/**
 * It calls
 * compare_flexbe_utilities__srv__MoveToNamedPose_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
void
compare_flexbe_utilities__srv__MoveToNamedPose_Request__Sequence__fini(compare_flexbe_utilities__srv__MoveToNamedPose_Request__Sequence * array);

/// Create array of srv/MoveToNamedPose messages.
/**
 * It allocates the memory for the array and calls
 * compare_flexbe_utilities__srv__MoveToNamedPose_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
compare_flexbe_utilities__srv__MoveToNamedPose_Request__Sequence *
compare_flexbe_utilities__srv__MoveToNamedPose_Request__Sequence__create(size_t size);

/// Destroy array of srv/MoveToNamedPose messages.
/**
 * It calls
 * compare_flexbe_utilities__srv__MoveToNamedPose_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
void
compare_flexbe_utilities__srv__MoveToNamedPose_Request__Sequence__destroy(compare_flexbe_utilities__srv__MoveToNamedPose_Request__Sequence * array);

/// Check for srv/MoveToNamedPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
bool
compare_flexbe_utilities__srv__MoveToNamedPose_Request__Sequence__are_equal(const compare_flexbe_utilities__srv__MoveToNamedPose_Request__Sequence * lhs, const compare_flexbe_utilities__srv__MoveToNamedPose_Request__Sequence * rhs);

/// Copy an array of srv/MoveToNamedPose messages.
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
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
bool
compare_flexbe_utilities__srv__MoveToNamedPose_Request__Sequence__copy(
  const compare_flexbe_utilities__srv__MoveToNamedPose_Request__Sequence * input,
  compare_flexbe_utilities__srv__MoveToNamedPose_Request__Sequence * output);

/// Initialize srv/MoveToNamedPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * compare_flexbe_utilities__srv__MoveToNamedPose_Response
 * )) before or use
 * compare_flexbe_utilities__srv__MoveToNamedPose_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
bool
compare_flexbe_utilities__srv__MoveToNamedPose_Response__init(compare_flexbe_utilities__srv__MoveToNamedPose_Response * msg);

/// Finalize srv/MoveToNamedPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
void
compare_flexbe_utilities__srv__MoveToNamedPose_Response__fini(compare_flexbe_utilities__srv__MoveToNamedPose_Response * msg);

/// Create srv/MoveToNamedPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * compare_flexbe_utilities__srv__MoveToNamedPose_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
compare_flexbe_utilities__srv__MoveToNamedPose_Response *
compare_flexbe_utilities__srv__MoveToNamedPose_Response__create(void);

/// Destroy srv/MoveToNamedPose message.
/**
 * It calls
 * compare_flexbe_utilities__srv__MoveToNamedPose_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
void
compare_flexbe_utilities__srv__MoveToNamedPose_Response__destroy(compare_flexbe_utilities__srv__MoveToNamedPose_Response * msg);

/// Check for srv/MoveToNamedPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
bool
compare_flexbe_utilities__srv__MoveToNamedPose_Response__are_equal(const compare_flexbe_utilities__srv__MoveToNamedPose_Response * lhs, const compare_flexbe_utilities__srv__MoveToNamedPose_Response * rhs);

/// Copy a srv/MoveToNamedPose message.
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
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
bool
compare_flexbe_utilities__srv__MoveToNamedPose_Response__copy(
  const compare_flexbe_utilities__srv__MoveToNamedPose_Response * input,
  compare_flexbe_utilities__srv__MoveToNamedPose_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_type_hash_t *
compare_flexbe_utilities__srv__MoveToNamedPose_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_runtime_c__type_description__TypeDescription *
compare_flexbe_utilities__srv__MoveToNamedPose_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_runtime_c__type_description__TypeSource *
compare_flexbe_utilities__srv__MoveToNamedPose_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_runtime_c__type_description__TypeSource__Sequence *
compare_flexbe_utilities__srv__MoveToNamedPose_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/MoveToNamedPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * compare_flexbe_utilities__srv__MoveToNamedPose_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
bool
compare_flexbe_utilities__srv__MoveToNamedPose_Response__Sequence__init(compare_flexbe_utilities__srv__MoveToNamedPose_Response__Sequence * array, size_t size);

/// Finalize array of srv/MoveToNamedPose messages.
/**
 * It calls
 * compare_flexbe_utilities__srv__MoveToNamedPose_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
void
compare_flexbe_utilities__srv__MoveToNamedPose_Response__Sequence__fini(compare_flexbe_utilities__srv__MoveToNamedPose_Response__Sequence * array);

/// Create array of srv/MoveToNamedPose messages.
/**
 * It allocates the memory for the array and calls
 * compare_flexbe_utilities__srv__MoveToNamedPose_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
compare_flexbe_utilities__srv__MoveToNamedPose_Response__Sequence *
compare_flexbe_utilities__srv__MoveToNamedPose_Response__Sequence__create(size_t size);

/// Destroy array of srv/MoveToNamedPose messages.
/**
 * It calls
 * compare_flexbe_utilities__srv__MoveToNamedPose_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
void
compare_flexbe_utilities__srv__MoveToNamedPose_Response__Sequence__destroy(compare_flexbe_utilities__srv__MoveToNamedPose_Response__Sequence * array);

/// Check for srv/MoveToNamedPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
bool
compare_flexbe_utilities__srv__MoveToNamedPose_Response__Sequence__are_equal(const compare_flexbe_utilities__srv__MoveToNamedPose_Response__Sequence * lhs, const compare_flexbe_utilities__srv__MoveToNamedPose_Response__Sequence * rhs);

/// Copy an array of srv/MoveToNamedPose messages.
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
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
bool
compare_flexbe_utilities__srv__MoveToNamedPose_Response__Sequence__copy(
  const compare_flexbe_utilities__srv__MoveToNamedPose_Response__Sequence * input,
  compare_flexbe_utilities__srv__MoveToNamedPose_Response__Sequence * output);

/// Initialize srv/MoveToNamedPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * compare_flexbe_utilities__srv__MoveToNamedPose_Event
 * )) before or use
 * compare_flexbe_utilities__srv__MoveToNamedPose_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
bool
compare_flexbe_utilities__srv__MoveToNamedPose_Event__init(compare_flexbe_utilities__srv__MoveToNamedPose_Event * msg);

/// Finalize srv/MoveToNamedPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
void
compare_flexbe_utilities__srv__MoveToNamedPose_Event__fini(compare_flexbe_utilities__srv__MoveToNamedPose_Event * msg);

/// Create srv/MoveToNamedPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * compare_flexbe_utilities__srv__MoveToNamedPose_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
compare_flexbe_utilities__srv__MoveToNamedPose_Event *
compare_flexbe_utilities__srv__MoveToNamedPose_Event__create(void);

/// Destroy srv/MoveToNamedPose message.
/**
 * It calls
 * compare_flexbe_utilities__srv__MoveToNamedPose_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
void
compare_flexbe_utilities__srv__MoveToNamedPose_Event__destroy(compare_flexbe_utilities__srv__MoveToNamedPose_Event * msg);

/// Check for srv/MoveToNamedPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
bool
compare_flexbe_utilities__srv__MoveToNamedPose_Event__are_equal(const compare_flexbe_utilities__srv__MoveToNamedPose_Event * lhs, const compare_flexbe_utilities__srv__MoveToNamedPose_Event * rhs);

/// Copy a srv/MoveToNamedPose message.
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
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
bool
compare_flexbe_utilities__srv__MoveToNamedPose_Event__copy(
  const compare_flexbe_utilities__srv__MoveToNamedPose_Event * input,
  compare_flexbe_utilities__srv__MoveToNamedPose_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_type_hash_t *
compare_flexbe_utilities__srv__MoveToNamedPose_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_runtime_c__type_description__TypeDescription *
compare_flexbe_utilities__srv__MoveToNamedPose_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_runtime_c__type_description__TypeSource *
compare_flexbe_utilities__srv__MoveToNamedPose_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_runtime_c__type_description__TypeSource__Sequence *
compare_flexbe_utilities__srv__MoveToNamedPose_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/MoveToNamedPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * compare_flexbe_utilities__srv__MoveToNamedPose_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
bool
compare_flexbe_utilities__srv__MoveToNamedPose_Event__Sequence__init(compare_flexbe_utilities__srv__MoveToNamedPose_Event__Sequence * array, size_t size);

/// Finalize array of srv/MoveToNamedPose messages.
/**
 * It calls
 * compare_flexbe_utilities__srv__MoveToNamedPose_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
void
compare_flexbe_utilities__srv__MoveToNamedPose_Event__Sequence__fini(compare_flexbe_utilities__srv__MoveToNamedPose_Event__Sequence * array);

/// Create array of srv/MoveToNamedPose messages.
/**
 * It allocates the memory for the array and calls
 * compare_flexbe_utilities__srv__MoveToNamedPose_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
compare_flexbe_utilities__srv__MoveToNamedPose_Event__Sequence *
compare_flexbe_utilities__srv__MoveToNamedPose_Event__Sequence__create(size_t size);

/// Destroy array of srv/MoveToNamedPose messages.
/**
 * It calls
 * compare_flexbe_utilities__srv__MoveToNamedPose_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
void
compare_flexbe_utilities__srv__MoveToNamedPose_Event__Sequence__destroy(compare_flexbe_utilities__srv__MoveToNamedPose_Event__Sequence * array);

/// Check for srv/MoveToNamedPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
bool
compare_flexbe_utilities__srv__MoveToNamedPose_Event__Sequence__are_equal(const compare_flexbe_utilities__srv__MoveToNamedPose_Event__Sequence * lhs, const compare_flexbe_utilities__srv__MoveToNamedPose_Event__Sequence * rhs);

/// Copy an array of srv/MoveToNamedPose messages.
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
ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
bool
compare_flexbe_utilities__srv__MoveToNamedPose_Event__Sequence__copy(
  const compare_flexbe_utilities__srv__MoveToNamedPose_Event__Sequence * input,
  compare_flexbe_utilities__srv__MoveToNamedPose_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // COMPARE_FLEXBE_UTILITIES__SRV__DETAIL__MOVE_TO_NAMED_POSE__FUNCTIONS_H_
