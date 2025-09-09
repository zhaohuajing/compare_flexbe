// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from flexbe_msgs:msg/UserdataInfo.idl
// generated code does not contain a copyright notice

#include "flexbe_msgs/msg/detail/userdata_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
const rosidl_type_hash_t *
flexbe_msgs__msg__UserdataInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaa, 0x8b, 0xc3, 0x85, 0xa6, 0x0f, 0xca, 0xc6,
      0xb5, 0xf3, 0xf2, 0x2a, 0x14, 0x1b, 0x96, 0x14,
      0xdd, 0xd8, 0xc8, 0x72, 0xd5, 0x9d, 0x8b, 0x69,
      0xc8, 0x54, 0x6a, 0x86, 0x4c, 0x86, 0x19, 0x81,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char flexbe_msgs__msg__UserdataInfo__TYPE_NAME[] = "flexbe_msgs/msg/UserdataInfo";

// Define type names, field names, and default values
static char flexbe_msgs__msg__UserdataInfo__FIELD_NAME__state[] = "state";
static char flexbe_msgs__msg__UserdataInfo__FIELD_NAME__key[] = "key";
static char flexbe_msgs__msg__UserdataInfo__FIELD_NAME__type[] = "type";
static char flexbe_msgs__msg__UserdataInfo__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field flexbe_msgs__msg__UserdataInfo__FIELDS[] = {
  {
    {flexbe_msgs__msg__UserdataInfo__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__UserdataInfo__FIELD_NAME__key, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__UserdataInfo__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__UserdataInfo__FIELD_NAME__data, 4, 4},
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
flexbe_msgs__msg__UserdataInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {flexbe_msgs__msg__UserdataInfo__TYPE_NAME, 28, 28},
      {flexbe_msgs__msg__UserdataInfo__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string state\n"
  "string key\n"
  "string type\n"
  "string data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
flexbe_msgs__msg__UserdataInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {flexbe_msgs__msg__UserdataInfo__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 48, 48},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
flexbe_msgs__msg__UserdataInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *flexbe_msgs__msg__UserdataInfo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
