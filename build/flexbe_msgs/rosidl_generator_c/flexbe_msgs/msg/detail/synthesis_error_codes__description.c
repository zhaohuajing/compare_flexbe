// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from flexbe_msgs:msg/SynthesisErrorCodes.idl
// generated code does not contain a copyright notice

#include "flexbe_msgs/msg/detail/synthesis_error_codes__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
const rosidl_type_hash_t *
flexbe_msgs__msg__SynthesisErrorCodes__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf7, 0x7a, 0xd4, 0xc8, 0x49, 0x3f, 0x3a, 0xe5,
      0xdd, 0x0c, 0x9f, 0xe7, 0x9f, 0xd8, 0xc5, 0x06,
      0xf4, 0xd0, 0xea, 0x5d, 0x32, 0x59, 0x5a, 0x80,
      0x04, 0xc3, 0x91, 0x9f, 0x35, 0x96, 0xb3, 0xfc,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char flexbe_msgs__msg__SynthesisErrorCodes__TYPE_NAME[] = "flexbe_msgs/msg/SynthesisErrorCodes";

// Define type names, field names, and default values
static char flexbe_msgs__msg__SynthesisErrorCodes__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field flexbe_msgs__msg__SynthesisErrorCodes__FIELDS[] = {
  {
    {flexbe_msgs__msg__SynthesisErrorCodes__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
flexbe_msgs__msg__SynthesisErrorCodes__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {flexbe_msgs__msg__SynthesisErrorCodes__TYPE_NAME, 35, 35},
      {flexbe_msgs__msg__SynthesisErrorCodes__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 value\n"
  "\n"
  "# success\n"
  "int32 SUCCESS = 1\n"
  "\n"
  "# all other values will be considered as any sort of error";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
flexbe_msgs__msg__SynthesisErrorCodes__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {flexbe_msgs__msg__SynthesisErrorCodes__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 100, 100},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
flexbe_msgs__msg__SynthesisErrorCodes__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *flexbe_msgs__msg__SynthesisErrorCodes__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
