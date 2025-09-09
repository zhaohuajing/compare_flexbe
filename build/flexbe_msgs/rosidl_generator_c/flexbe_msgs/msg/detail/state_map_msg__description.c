// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from flexbe_msgs:msg/StateMapMsg.idl
// generated code does not contain a copyright notice

#include "flexbe_msgs/msg/detail/state_map_msg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
const rosidl_type_hash_t *
flexbe_msgs__msg__StateMapMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x68, 0x1b, 0x57, 0x75, 0x5b, 0xeb, 0x5e, 0x5d,
      0xc8, 0xeb, 0xa1, 0x6f, 0xce, 0x07, 0x72, 0xea,
      0x7a, 0xab, 0x6e, 0x8f, 0x55, 0xc2, 0xc8, 0xd9,
      0x47, 0xea, 0xad, 0xdd, 0xbe, 0x1b, 0xa6, 0x44,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char flexbe_msgs__msg__StateMapMsg__TYPE_NAME[] = "flexbe_msgs/msg/StateMapMsg";

// Define type names, field names, and default values
static char flexbe_msgs__msg__StateMapMsg__FIELD_NAME__behavior_id[] = "behavior_id";
static char flexbe_msgs__msg__StateMapMsg__FIELD_NAME__state_ids[] = "state_ids";
static char flexbe_msgs__msg__StateMapMsg__FIELD_NAME__state_paths[] = "state_paths";

static rosidl_runtime_c__type_description__Field flexbe_msgs__msg__StateMapMsg__FIELDS[] = {
  {
    {flexbe_msgs__msg__StateMapMsg__FIELD_NAME__behavior_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__StateMapMsg__FIELD_NAME__state_ids, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__StateMapMsg__FIELD_NAME__state_paths, 11, 11},
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
flexbe_msgs__msg__StateMapMsg__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {flexbe_msgs__msg__StateMapMsg__TYPE_NAME, 27, 27},
      {flexbe_msgs__msg__StateMapMsg__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Mapping between numeric ids and state path in given behavior\n"
  "\n"
  "int32 behavior_id  # Behavior ID assigned in ContainerStructure.msg\n"
  "\n"
  "# Ordered lists of corresponding state id hash code and state path\n"
  "int32[] state_ids\n"
  "string[] state_paths\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
flexbe_msgs__msg__StateMapMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {flexbe_msgs__msg__StateMapMsg__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 240, 240},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
flexbe_msgs__msg__StateMapMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *flexbe_msgs__msg__StateMapMsg__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
