// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from flexbe_msgs:msg/BehaviorLog.idl
// generated code does not contain a copyright notice

#include "flexbe_msgs/msg/detail/behavior_log__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
const rosidl_type_hash_t *
flexbe_msgs__msg__BehaviorLog__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9d, 0xbf, 0x8d, 0x6c, 0xd4, 0x6c, 0x34, 0xb6,
      0x91, 0x82, 0xdd, 0xdb, 0xac, 0xd4, 0x89, 0x2c,
      0x81, 0x81, 0x52, 0xc7, 0x8b, 0xf6, 0x53, 0x70,
      0xab, 0x5d, 0x31, 0x5b, 0xb9, 0x6e, 0x19, 0xce,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char flexbe_msgs__msg__BehaviorLog__TYPE_NAME[] = "flexbe_msgs/msg/BehaviorLog";

// Define type names, field names, and default values
static char flexbe_msgs__msg__BehaviorLog__FIELD_NAME__text[] = "text";
static char flexbe_msgs__msg__BehaviorLog__FIELD_NAME__status_code[] = "status_code";

static rosidl_runtime_c__type_description__Field flexbe_msgs__msg__BehaviorLog__FIELDS[] = {
  {
    {flexbe_msgs__msg__BehaviorLog__FIELD_NAME__text, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__BehaviorLog__FIELD_NAME__status_code, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
flexbe_msgs__msg__BehaviorLog__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {flexbe_msgs__msg__BehaviorLog__TYPE_NAME, 27, 27},
      {flexbe_msgs__msg__BehaviorLog__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string text\n"
  "\n"
  "uint8 INFO \\t\\t= 0\n"
  "uint8 WARN  \\t= 1\n"
  "uint8 HINT  \\t= 2\n"
  "uint8 ERROR \\t= 3\n"
  "uint8 DEBUG \\t= 10\n"
  "\n"
  "uint8 status_code";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
flexbe_msgs__msg__BehaviorLog__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {flexbe_msgs__msg__BehaviorLog__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 117, 117},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
flexbe_msgs__msg__BehaviorLog__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *flexbe_msgs__msg__BehaviorLog__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
