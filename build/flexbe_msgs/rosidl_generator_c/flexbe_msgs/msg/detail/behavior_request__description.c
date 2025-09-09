// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from flexbe_msgs:msg/BehaviorRequest.idl
// generated code does not contain a copyright notice

#include "flexbe_msgs/msg/detail/behavior_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
const rosidl_type_hash_t *
flexbe_msgs__msg__BehaviorRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa4, 0x57, 0x0b, 0xc3, 0x5e, 0x69, 0x72, 0x65,
      0xcb, 0x8d, 0xc4, 0x15, 0x89, 0x70, 0xbe, 0xdd,
      0xef, 0x89, 0x56, 0xa2, 0x91, 0x16, 0xb5, 0x28,
      0xe8, 0xfc, 0x41, 0x25, 0x46, 0x51, 0x29, 0xe3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "flexbe_msgs/msg/detail/container__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t flexbe_msgs__msg__Container__EXPECTED_HASH = {1, {
    0x84, 0x38, 0x84, 0xcf, 0x9f, 0x8b, 0x2f, 0xc1,
    0x96, 0xd0, 0x69, 0xf0, 0x56, 0xf7, 0x6a, 0xa4,
    0x8a, 0xe9, 0x6b, 0xf2, 0xcf, 0x43, 0xbd, 0x0b,
    0x96, 0x61, 0x0f, 0x4c, 0xb8, 0x10, 0x29, 0x90,
  }};
#endif

static char flexbe_msgs__msg__BehaviorRequest__TYPE_NAME[] = "flexbe_msgs/msg/BehaviorRequest";
static char flexbe_msgs__msg__Container__TYPE_NAME[] = "flexbe_msgs/msg/Container";

// Define type names, field names, and default values
static char flexbe_msgs__msg__BehaviorRequest__FIELD_NAME__behavior_name[] = "behavior_name";
static char flexbe_msgs__msg__BehaviorRequest__FIELD_NAME__autonomy_level[] = "autonomy_level";
static char flexbe_msgs__msg__BehaviorRequest__FIELD_NAME__arg_keys[] = "arg_keys";
static char flexbe_msgs__msg__BehaviorRequest__FIELD_NAME__arg_values[] = "arg_values";
static char flexbe_msgs__msg__BehaviorRequest__FIELD_NAME__structure[] = "structure";

static rosidl_runtime_c__type_description__Field flexbe_msgs__msg__BehaviorRequest__FIELDS[] = {
  {
    {flexbe_msgs__msg__BehaviorRequest__FIELD_NAME__behavior_name, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__BehaviorRequest__FIELD_NAME__autonomy_level, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__BehaviorRequest__FIELD_NAME__arg_keys, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__BehaviorRequest__FIELD_NAME__arg_values, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__BehaviorRequest__FIELD_NAME__structure, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {flexbe_msgs__msg__Container__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription flexbe_msgs__msg__BehaviorRequest__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {flexbe_msgs__msg__Container__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
flexbe_msgs__msg__BehaviorRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {flexbe_msgs__msg__BehaviorRequest__TYPE_NAME, 31, 31},
      {flexbe_msgs__msg__BehaviorRequest__FIELDS, 5, 5},
    },
    {flexbe_msgs__msg__BehaviorRequest__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&flexbe_msgs__msg__Container__EXPECTED_HASH, flexbe_msgs__msg__Container__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = flexbe_msgs__msg__Container__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string behavior_name\n"
  "\n"
  "uint8 autonomy_level\n"
  "string[] arg_keys\n"
  "string[] arg_values\n"
  "\n"
  "Container[] structure";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
flexbe_msgs__msg__BehaviorRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {flexbe_msgs__msg__BehaviorRequest__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 103, 103},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
flexbe_msgs__msg__BehaviorRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *flexbe_msgs__msg__BehaviorRequest__get_individual_type_description_source(NULL),
    sources[1] = *flexbe_msgs__msg__Container__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
