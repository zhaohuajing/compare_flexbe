// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from flexbe_msgs:msg/BehaviorSelection.idl
// generated code does not contain a copyright notice

#include "flexbe_msgs/msg/detail/behavior_selection__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
const rosidl_type_hash_t *
flexbe_msgs__msg__BehaviorSelection__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd6, 0x10, 0x62, 0x62, 0x63, 0x02, 0x16, 0xd3,
      0xd2, 0x97, 0x43, 0xa3, 0x4f, 0x59, 0x84, 0x8b,
      0x20, 0x2c, 0x42, 0x9c, 0x10, 0xe3, 0x3d, 0xa8,
      0x80, 0x1f, 0xce, 0x42, 0xf6, 0xa7, 0xc2, 0x67,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "flexbe_msgs/msg/detail/behavior_modification__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t flexbe_msgs__msg__BehaviorModification__EXPECTED_HASH = {1, {
    0x26, 0x84, 0x48, 0x77, 0x5f, 0x24, 0x10, 0xbe,
    0xe1, 0xcf, 0xfc, 0xbf, 0xd8, 0x63, 0xd2, 0xb6,
    0x98, 0x5a, 0x87, 0x7b, 0x0e, 0x18, 0xea, 0x4e,
    0x54, 0x00, 0xeb, 0x9f, 0xe0, 0x29, 0x50, 0xa6,
  }};
#endif

static char flexbe_msgs__msg__BehaviorSelection__TYPE_NAME[] = "flexbe_msgs/msg/BehaviorSelection";
static char flexbe_msgs__msg__BehaviorModification__TYPE_NAME[] = "flexbe_msgs/msg/BehaviorModification";

// Define type names, field names, and default values
static char flexbe_msgs__msg__BehaviorSelection__FIELD_NAME__behavior_key[] = "behavior_key";
static char flexbe_msgs__msg__BehaviorSelection__FIELD_NAME__behavior_id[] = "behavior_id";
static char flexbe_msgs__msg__BehaviorSelection__FIELD_NAME__autonomy_level[] = "autonomy_level";
static char flexbe_msgs__msg__BehaviorSelection__FIELD_NAME__arg_keys[] = "arg_keys";
static char flexbe_msgs__msg__BehaviorSelection__FIELD_NAME__arg_values[] = "arg_values";
static char flexbe_msgs__msg__BehaviorSelection__FIELD_NAME__input_keys[] = "input_keys";
static char flexbe_msgs__msg__BehaviorSelection__FIELD_NAME__input_values[] = "input_values";
static char flexbe_msgs__msg__BehaviorSelection__FIELD_NAME__modifications[] = "modifications";

static rosidl_runtime_c__type_description__Field flexbe_msgs__msg__BehaviorSelection__FIELDS[] = {
  {
    {flexbe_msgs__msg__BehaviorSelection__FIELD_NAME__behavior_key, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__BehaviorSelection__FIELD_NAME__behavior_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__BehaviorSelection__FIELD_NAME__autonomy_level, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__BehaviorSelection__FIELD_NAME__arg_keys, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__BehaviorSelection__FIELD_NAME__arg_values, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__BehaviorSelection__FIELD_NAME__input_keys, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__BehaviorSelection__FIELD_NAME__input_values, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__BehaviorSelection__FIELD_NAME__modifications, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {flexbe_msgs__msg__BehaviorModification__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription flexbe_msgs__msg__BehaviorSelection__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {flexbe_msgs__msg__BehaviorModification__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
flexbe_msgs__msg__BehaviorSelection__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {flexbe_msgs__msg__BehaviorSelection__TYPE_NAME, 33, 33},
      {flexbe_msgs__msg__BehaviorSelection__FIELDS, 8, 8},
    },
    {flexbe_msgs__msg__BehaviorSelection__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&flexbe_msgs__msg__BehaviorModification__EXPECTED_HASH, flexbe_msgs__msg__BehaviorModification__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = flexbe_msgs__msg__BehaviorModification__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 behavior_key  # This is id key in behavior library\n"
  "int32 behavior_id   # checksum id of particular behavior encoding\n"
  "\n"
  "uint8 autonomy_level\n"
  "string[] arg_keys\n"
  "string[] arg_values\n"
  "\n"
  "string[] input_keys\n"
  "string[] input_values\n"
  "\n"
  "flexbe_msgs/BehaviorModification[] modifications";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
flexbe_msgs__msg__BehaviorSelection__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {flexbe_msgs__msg__BehaviorSelection__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 275, 275},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
flexbe_msgs__msg__BehaviorSelection__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *flexbe_msgs__msg__BehaviorSelection__get_individual_type_description_source(NULL),
    sources[1] = *flexbe_msgs__msg__BehaviorModification__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
