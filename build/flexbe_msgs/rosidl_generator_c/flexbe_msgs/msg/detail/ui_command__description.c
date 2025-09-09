// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from flexbe_msgs:msg/UICommand.idl
// generated code does not contain a copyright notice

#include "flexbe_msgs/msg/detail/ui_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
const rosidl_type_hash_t *
flexbe_msgs__msg__UICommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x83, 0x65, 0x43, 0xa2, 0x8c, 0xf7, 0x55, 0x53,
      0xfb, 0xb6, 0x8e, 0x25, 0x90, 0xc6, 0xb4, 0xf9,
      0x49, 0xb4, 0x4c, 0xf0, 0x7e, 0x4f, 0x09, 0x47,
      0x92, 0xe3, 0x6f, 0x79, 0xe6, 0xf6, 0x4b, 0x7e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char flexbe_msgs__msg__UICommand__TYPE_NAME[] = "flexbe_msgs/msg/UICommand";

// Define type names, field names, and default values
static char flexbe_msgs__msg__UICommand__FIELD_NAME__command[] = "command";
static char flexbe_msgs__msg__UICommand__FIELD_NAME__key[] = "key";

static rosidl_runtime_c__type_description__Field flexbe_msgs__msg__UICommand__FIELDS[] = {
  {
    {flexbe_msgs__msg__UICommand__FIELD_NAME__command, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__UICommand__FIELD_NAME__key, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
flexbe_msgs__msg__UICommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {flexbe_msgs__msg__UICommand__TYPE_NAME, 25, 25},
      {flexbe_msgs__msg__UICommand__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Sends a command to the command interface of the FlexBE UI.\n"
  "# In order to be successfully executed, the user needs to have ROS commands enabled and the keys have to match.\n"
  "\n"
  "# Command to be executed as it would be entered in the command interface\n"
  "string command\n"
  "\n"
  "# Security key, needs to match the key set in the UI\n"
  "string key";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
flexbe_msgs__msg__UICommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {flexbe_msgs__msg__UICommand__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 327, 327},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
flexbe_msgs__msg__UICommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *flexbe_msgs__msg__UICommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
