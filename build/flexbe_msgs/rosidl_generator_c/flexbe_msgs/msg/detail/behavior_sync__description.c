// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from flexbe_msgs:msg/BehaviorSync.idl
// generated code does not contain a copyright notice

#include "flexbe_msgs/msg/detail/behavior_sync__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
const rosidl_type_hash_t *
flexbe_msgs__msg__BehaviorSync__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x50, 0xb4, 0x92, 0x0b, 0xbb, 0xdf, 0xc1, 0xfb,
      0x90, 0x10, 0x0f, 0xcb, 0x50, 0x76, 0x8c, 0xee,
      0x6a, 0x8e, 0x6d, 0xca, 0x2e, 0xa2, 0xa7, 0xd2,
      0x7c, 0x5e, 0xeb, 0x23, 0xba, 0xb0, 0xa9, 0xe5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char flexbe_msgs__msg__BehaviorSync__TYPE_NAME[] = "flexbe_msgs/msg/BehaviorSync";

// Define type names, field names, and default values
static char flexbe_msgs__msg__BehaviorSync__FIELD_NAME__behavior_id[] = "behavior_id";
static char flexbe_msgs__msg__BehaviorSync__FIELD_NAME__current_state_checksums[] = "current_state_checksums";

static rosidl_runtime_c__type_description__Field flexbe_msgs__msg__BehaviorSync__FIELDS[] = {
  {
    {flexbe_msgs__msg__BehaviorSync__FIELD_NAME__behavior_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__BehaviorSync__FIELD_NAME__current_state_checksums, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
flexbe_msgs__msg__BehaviorSync__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {flexbe_msgs__msg__BehaviorSync__TYPE_NAME, 28, 28},
      {flexbe_msgs__msg__BehaviorSync__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 INVALID = 0  # denotes unset id or checksum\n"
  "\n"
  "int32 behavior_id  # id (checksum) of particular behavior encoding\n"
  "\n"
  "int32[] current_state_checksums";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
flexbe_msgs__msg__BehaviorSync__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {flexbe_msgs__msg__BehaviorSync__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 150, 150},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
flexbe_msgs__msg__BehaviorSync__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *flexbe_msgs__msg__BehaviorSync__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
