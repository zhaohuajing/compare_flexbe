// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from flexbe_msgs:msg/OutcomeCondition.idl
// generated code does not contain a copyright notice

#include "flexbe_msgs/msg/detail/outcome_condition__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
const rosidl_type_hash_t *
flexbe_msgs__msg__OutcomeCondition__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x65, 0x7d, 0xd9, 0x55, 0x5a, 0x7e, 0x99, 0xde,
      0xb1, 0xcd, 0x0e, 0x2d, 0x12, 0x17, 0x0e, 0xda,
      0x79, 0x6e, 0xe5, 0xf4, 0x7d, 0x18, 0x75, 0xf5,
      0x92, 0x57, 0x0f, 0xad, 0xf5, 0x19, 0x40, 0x58,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char flexbe_msgs__msg__OutcomeCondition__TYPE_NAME[] = "flexbe_msgs/msg/OutcomeCondition";

// Define type names, field names, and default values
static char flexbe_msgs__msg__OutcomeCondition__FIELD_NAME__state_name[] = "state_name";
static char flexbe_msgs__msg__OutcomeCondition__FIELD_NAME__state_outcome[] = "state_outcome";

static rosidl_runtime_c__type_description__Field flexbe_msgs__msg__OutcomeCondition__FIELDS[] = {
  {
    {flexbe_msgs__msg__OutcomeCondition__FIELD_NAME__state_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__OutcomeCondition__FIELD_NAME__state_outcome, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
flexbe_msgs__msg__OutcomeCondition__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {flexbe_msgs__msg__OutcomeCondition__TYPE_NAME, 32, 32},
      {flexbe_msgs__msg__OutcomeCondition__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Defines a conjunction of required state outcomes in order to return a concurrency outcome\n"
  "string[] state_name\n"
  "string[] state_outcome";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
flexbe_msgs__msg__OutcomeCondition__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {flexbe_msgs__msg__OutcomeCondition__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 134, 134},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
flexbe_msgs__msg__OutcomeCondition__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *flexbe_msgs__msg__OutcomeCondition__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
