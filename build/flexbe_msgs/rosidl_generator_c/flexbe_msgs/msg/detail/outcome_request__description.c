// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from flexbe_msgs:msg/OutcomeRequest.idl
// generated code does not contain a copyright notice

#include "flexbe_msgs/msg/detail/outcome_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
const rosidl_type_hash_t *
flexbe_msgs__msg__OutcomeRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5c, 0x67, 0x6e, 0xd9, 0xc6, 0x75, 0x96, 0xcc,
      0x94, 0x17, 0xd4, 0x97, 0xca, 0x29, 0x51, 0x75,
      0xf3, 0x54, 0xd0, 0x47, 0xd2, 0xb2, 0x6e, 0xdc,
      0x9f, 0x5a, 0x76, 0xd2, 0xab, 0x74, 0xba, 0x18,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char flexbe_msgs__msg__OutcomeRequest__TYPE_NAME[] = "flexbe_msgs/msg/OutcomeRequest";

// Define type names, field names, and default values
static char flexbe_msgs__msg__OutcomeRequest__FIELD_NAME__outcome[] = "outcome";
static char flexbe_msgs__msg__OutcomeRequest__FIELD_NAME__target[] = "target";

static rosidl_runtime_c__type_description__Field flexbe_msgs__msg__OutcomeRequest__FIELDS[] = {
  {
    {flexbe_msgs__msg__OutcomeRequest__FIELD_NAME__outcome, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__OutcomeRequest__FIELD_NAME__target, 6, 6},
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
flexbe_msgs__msg__OutcomeRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {flexbe_msgs__msg__OutcomeRequest__TYPE_NAME, 30, 30},
      {flexbe_msgs__msg__OutcomeRequest__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 outcome\n"
  "int32 target   # state id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
flexbe_msgs__msg__OutcomeRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {flexbe_msgs__msg__OutcomeRequest__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 39, 39},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
flexbe_msgs__msg__OutcomeRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *flexbe_msgs__msg__OutcomeRequest__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
