// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from flexbe_msgs:msg/BEStatus.idl
// generated code does not contain a copyright notice

#include "flexbe_msgs/msg/detail/be_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
const rosidl_type_hash_t *
flexbe_msgs__msg__BEStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2b, 0xed, 0xde, 0x72, 0xec, 0x6e, 0x0b, 0x31,
      0x53, 0x38, 0x07, 0xf5, 0xae, 0x96, 0x44, 0x9c,
      0xab, 0x17, 0xe3, 0x8d, 0xe9, 0x2d, 0x50, 0xd2,
      0xb5, 0xa8, 0x42, 0xd1, 0x3f, 0xdd, 0xfc, 0x15,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char flexbe_msgs__msg__BEStatus__TYPE_NAME[] = "flexbe_msgs/msg/BEStatus";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char flexbe_msgs__msg__BEStatus__FIELD_NAME__stamp[] = "stamp";
static char flexbe_msgs__msg__BEStatus__FIELD_NAME__behavior_id[] = "behavior_id";
static char flexbe_msgs__msg__BEStatus__FIELD_NAME__code[] = "code";
static char flexbe_msgs__msg__BEStatus__FIELD_NAME__args[] = "args";

static rosidl_runtime_c__type_description__Field flexbe_msgs__msg__BEStatus__FIELDS[] = {
  {
    {flexbe_msgs__msg__BEStatus__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__BEStatus__FIELD_NAME__behavior_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__BEStatus__FIELD_NAME__code, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__BEStatus__FIELD_NAME__args, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription flexbe_msgs__msg__BEStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
flexbe_msgs__msg__BEStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {flexbe_msgs__msg__BEStatus__TYPE_NAME, 24, 24},
      {flexbe_msgs__msg__BEStatus__FIELDS, 4, 4},
    },
    {flexbe_msgs__msg__BEStatus__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Behavior Status\n"
  "uint8 STARTED = 0\n"
  "uint8 FINISHED = 1\n"
  "uint8 FAILED = 2\n"
  "\n"
  "uint8 LOCKED = 4\n"
  "uint8 WAITING = 5\n"
  "uint8 SWITCHING = 6\n"
  "\n"
  "# General problems\n"
  "uint8 WARNING = 10\n"
  "uint8 ERROR = 11\n"
  "\n"
  "# Engine Status\n"
  "uint8 READY = 20\n"
  "uint8 RUNNING = 30\n"
  "\n"
  "builtin_interfaces/Time stamp\n"
  "int32 behavior_id  # id (checksum) of particular behavior encoding\n"
  "uint8 code\n"
  "\n"
  "string[] args";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
flexbe_msgs__msg__BEStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {flexbe_msgs__msg__BEStatus__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 361, 361},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
flexbe_msgs__msg__BEStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *flexbe_msgs__msg__BEStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
