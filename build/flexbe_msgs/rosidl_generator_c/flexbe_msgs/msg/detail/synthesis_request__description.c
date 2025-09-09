// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from flexbe_msgs:msg/SynthesisRequest.idl
// generated code does not contain a copyright notice

#include "flexbe_msgs/msg/detail/synthesis_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
const rosidl_type_hash_t *
flexbe_msgs__msg__SynthesisRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x68, 0x70, 0x74, 0x12, 0x09, 0x4a, 0x23, 0x6e,
      0xa3, 0x4a, 0xee, 0x9b, 0xb4, 0x9f, 0x2e, 0xb1,
      0x42, 0xf2, 0xc4, 0x64, 0x8f, 0x3b, 0xd2, 0xce,
      0xad, 0x98, 0xf1, 0x7b, 0xc4, 0x66, 0x3a, 0xdb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char flexbe_msgs__msg__SynthesisRequest__TYPE_NAME[] = "flexbe_msgs/msg/SynthesisRequest";

// Define type names, field names, and default values
static char flexbe_msgs__msg__SynthesisRequest__FIELD_NAME__name[] = "name";
static char flexbe_msgs__msg__SynthesisRequest__FIELD_NAME__system[] = "system";
static char flexbe_msgs__msg__SynthesisRequest__FIELD_NAME__goal[] = "goal";
static char flexbe_msgs__msg__SynthesisRequest__FIELD_NAME__initial_condition[] = "initial_condition";
static char flexbe_msgs__msg__SynthesisRequest__FIELD_NAME__sm_outcomes[] = "sm_outcomes";

static rosidl_runtime_c__type_description__Field flexbe_msgs__msg__SynthesisRequest__FIELDS[] = {
  {
    {flexbe_msgs__msg__SynthesisRequest__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__SynthesisRequest__FIELD_NAME__system, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__SynthesisRequest__FIELD_NAME__goal, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__SynthesisRequest__FIELD_NAME__initial_condition, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__SynthesisRequest__FIELD_NAME__sm_outcomes, 11, 11},
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
flexbe_msgs__msg__SynthesisRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {flexbe_msgs__msg__SynthesisRequest__TYPE_NAME, 32, 32},
      {flexbe_msgs__msg__SynthesisRequest__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Minimal template for the request data provided by the FlexBE synthesis interface.\n"
  "# Either refer this message as 'request' in the goal part of your synthesis action\n"
  "# or implement your own by at least supporting the fields listed below.\n"
  "\n"
  "# Identifier of this synthesis query, can for example be used to set the name of the resulting state machine\n"
  "string name\n"
  "\n"
  "# Identifier of the system (i.e., configuration data set) to be used by the synthesis tool\n"
  "string system\n"
  "\n"
  "# Goal to be achieved by the synthesized behavior\n"
  "string goal\n"
  "\n"
  "# Initial conditions from which the synthesized behavior will start\n"
  "string initial_condition\n"
  "\n"
  "# Available outcomes of the generated state machine,\n"
  "# i.e., possible results of the synthesized behavior\n"
  "string[] sm_outcomes";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
flexbe_msgs__msg__SynthesisRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {flexbe_msgs__msg__SynthesisRequest__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 751, 751},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
flexbe_msgs__msg__SynthesisRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *flexbe_msgs__msg__SynthesisRequest__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
