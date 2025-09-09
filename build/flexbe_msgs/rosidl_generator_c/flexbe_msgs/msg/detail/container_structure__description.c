// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from flexbe_msgs:msg/ContainerStructure.idl
// generated code does not contain a copyright notice

#include "flexbe_msgs/msg/detail/container_structure__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
const rosidl_type_hash_t *
flexbe_msgs__msg__ContainerStructure__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x02, 0x3d, 0x87, 0x2f, 0xaa, 0xcd, 0xac, 0xfe,
      0x9d, 0xe3, 0x79, 0x87, 0xa8, 0x36, 0x97, 0x60,
      0xe3, 0x10, 0xb9, 0x02, 0x24, 0x24, 0xfc, 0xf4,
      0x45, 0xae, 0x7a, 0x6f, 0xb5, 0x30, 0x1c, 0x13,
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

static char flexbe_msgs__msg__ContainerStructure__TYPE_NAME[] = "flexbe_msgs/msg/ContainerStructure";
static char flexbe_msgs__msg__Container__TYPE_NAME[] = "flexbe_msgs/msg/Container";

// Define type names, field names, and default values
static char flexbe_msgs__msg__ContainerStructure__FIELD_NAME__behavior_id[] = "behavior_id";
static char flexbe_msgs__msg__ContainerStructure__FIELD_NAME__containers[] = "containers";

static rosidl_runtime_c__type_description__Field flexbe_msgs__msg__ContainerStructure__FIELDS[] = {
  {
    {flexbe_msgs__msg__ContainerStructure__FIELD_NAME__behavior_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__ContainerStructure__FIELD_NAME__containers, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {flexbe_msgs__msg__Container__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription flexbe_msgs__msg__ContainerStructure__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {flexbe_msgs__msg__Container__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
flexbe_msgs__msg__ContainerStructure__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {flexbe_msgs__msg__ContainerStructure__TYPE_NAME, 34, 34},
      {flexbe_msgs__msg__ContainerStructure__FIELDS, 2, 2},
    },
    {flexbe_msgs__msg__ContainerStructure__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&flexbe_msgs__msg__Container__EXPECTED_HASH, flexbe_msgs__msg__Container__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = flexbe_msgs__msg__Container__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 behavior_id       # id (checksum) of particular behavior encoding\n"
  "Container[] containers";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
flexbe_msgs__msg__ContainerStructure__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {flexbe_msgs__msg__ContainerStructure__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 94, 94},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
flexbe_msgs__msg__ContainerStructure__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *flexbe_msgs__msg__ContainerStructure__get_individual_type_description_source(NULL),
    sources[1] = *flexbe_msgs__msg__Container__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
