// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from flexbe_msgs:msg/CommandFeedback.idl
// generated code does not contain a copyright notice

#include "flexbe_msgs/msg/detail/command_feedback__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
const rosidl_type_hash_t *
flexbe_msgs__msg__CommandFeedback__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4d, 0x18, 0xfd, 0x6e, 0x01, 0x27, 0xf1, 0x20,
      0xc0, 0x48, 0x91, 0xf4, 0xd4, 0xb1, 0x0c, 0x5d,
      0x1c, 0x1f, 0xc6, 0x86, 0xc9, 0xc6, 0xf9, 0x35,
      0x65, 0x63, 0xdd, 0xfb, 0xba, 0x58, 0xfb, 0x01,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char flexbe_msgs__msg__CommandFeedback__TYPE_NAME[] = "flexbe_msgs/msg/CommandFeedback";

// Define type names, field names, and default values
static char flexbe_msgs__msg__CommandFeedback__FIELD_NAME__command[] = "command";
static char flexbe_msgs__msg__CommandFeedback__FIELD_NAME__args[] = "args";

static rosidl_runtime_c__type_description__Field flexbe_msgs__msg__CommandFeedback__FIELDS[] = {
  {
    {flexbe_msgs__msg__CommandFeedback__FIELD_NAME__command, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__CommandFeedback__FIELD_NAME__args, 4, 4},
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
flexbe_msgs__msg__CommandFeedback__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {flexbe_msgs__msg__CommandFeedback__TYPE_NAME, 31, 31},
      {flexbe_msgs__msg__CommandFeedback__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string command\n"
  "string[] args";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
flexbe_msgs__msg__CommandFeedback__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {flexbe_msgs__msg__CommandFeedback__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 28, 28},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
flexbe_msgs__msg__CommandFeedback__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *flexbe_msgs__msg__CommandFeedback__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
