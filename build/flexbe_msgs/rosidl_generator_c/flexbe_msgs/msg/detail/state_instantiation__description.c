// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from flexbe_msgs:msg/StateInstantiation.idl
// generated code does not contain a copyright notice

#include "flexbe_msgs/msg/detail/state_instantiation__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
const rosidl_type_hash_t *
flexbe_msgs__msg__StateInstantiation__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x03, 0x07, 0xe9, 0x49, 0xd2, 0x2a, 0x7d, 0x26,
      0xc1, 0xfe, 0x4f, 0x18, 0xdd, 0xdd, 0x99, 0xb8,
      0x75, 0xa8, 0x8b, 0x8e, 0xbf, 0x6e, 0xe7, 0x76,
      0x7d, 0x50, 0x7f, 0x53, 0x99, 0xbd, 0x09, 0x10,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "flexbe_msgs/msg/detail/outcome_condition__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t flexbe_msgs__msg__OutcomeCondition__EXPECTED_HASH = {1, {
    0x65, 0x7d, 0xd9, 0x55, 0x5a, 0x7e, 0x99, 0xde,
    0xb1, 0xcd, 0x0e, 0x2d, 0x12, 0x17, 0x0e, 0xda,
    0x79, 0x6e, 0xe5, 0xf4, 0x7d, 0x18, 0x75, 0xf5,
    0x92, 0x57, 0x0f, 0xad, 0xf5, 0x19, 0x40, 0x58,
  }};
#endif

static char flexbe_msgs__msg__StateInstantiation__TYPE_NAME[] = "flexbe_msgs/msg/StateInstantiation";
static char flexbe_msgs__msg__OutcomeCondition__TYPE_NAME[] = "flexbe_msgs/msg/OutcomeCondition";

// Define type names, field names, and default values
static char flexbe_msgs__msg__StateInstantiation__FIELD_NAME__state_path[] = "state_path";
static char flexbe_msgs__msg__StateInstantiation__FIELD_NAME__state_class[] = "state_class";
static char flexbe_msgs__msg__StateInstantiation__FIELD_NAME__initial_state_name[] = "initial_state_name";
static char flexbe_msgs__msg__StateInstantiation__FIELD_NAME__input_keys[] = "input_keys";
static char flexbe_msgs__msg__StateInstantiation__FIELD_NAME__output_keys[] = "output_keys";
static char flexbe_msgs__msg__StateInstantiation__FIELD_NAME__cond_outcome[] = "cond_outcome";
static char flexbe_msgs__msg__StateInstantiation__FIELD_NAME__cond_transition[] = "cond_transition";
static char flexbe_msgs__msg__StateInstantiation__FIELD_NAME__behavior_class[] = "behavior_class";
static char flexbe_msgs__msg__StateInstantiation__FIELD_NAME__parameter_names[] = "parameter_names";
static char flexbe_msgs__msg__StateInstantiation__FIELD_NAME__parameter_values[] = "parameter_values";
static char flexbe_msgs__msg__StateInstantiation__FIELD_NAME__position[] = "position";
static char flexbe_msgs__msg__StateInstantiation__FIELD_NAME__outcomes[] = "outcomes";
static char flexbe_msgs__msg__StateInstantiation__FIELD_NAME__transitions[] = "transitions";
static char flexbe_msgs__msg__StateInstantiation__FIELD_NAME__autonomy[] = "autonomy";
static char flexbe_msgs__msg__StateInstantiation__FIELD_NAME__userdata_keys[] = "userdata_keys";
static char flexbe_msgs__msg__StateInstantiation__FIELD_NAME__userdata_remapping[] = "userdata_remapping";

static rosidl_runtime_c__type_description__Field flexbe_msgs__msg__StateInstantiation__FIELDS[] = {
  {
    {flexbe_msgs__msg__StateInstantiation__FIELD_NAME__state_path, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__StateInstantiation__FIELD_NAME__state_class, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__StateInstantiation__FIELD_NAME__initial_state_name, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__StateInstantiation__FIELD_NAME__input_keys, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__StateInstantiation__FIELD_NAME__output_keys, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__StateInstantiation__FIELD_NAME__cond_outcome, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__StateInstantiation__FIELD_NAME__cond_transition, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {flexbe_msgs__msg__OutcomeCondition__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__StateInstantiation__FIELD_NAME__behavior_class, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__StateInstantiation__FIELD_NAME__parameter_names, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__StateInstantiation__FIELD_NAME__parameter_values, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__StateInstantiation__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__StateInstantiation__FIELD_NAME__outcomes, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__StateInstantiation__FIELD_NAME__transitions, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__StateInstantiation__FIELD_NAME__autonomy, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__StateInstantiation__FIELD_NAME__userdata_keys, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__StateInstantiation__FIELD_NAME__userdata_remapping, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription flexbe_msgs__msg__StateInstantiation__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {flexbe_msgs__msg__OutcomeCondition__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
flexbe_msgs__msg__StateInstantiation__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {flexbe_msgs__msg__StateInstantiation__TYPE_NAME, 34, 34},
      {flexbe_msgs__msg__StateInstantiation__FIELDS, 16, 16},
    },
    {flexbe_msgs__msg__StateInstantiation__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&flexbe_msgs__msg__OutcomeCondition__EXPECTED_HASH, flexbe_msgs__msg__OutcomeCondition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = flexbe_msgs__msg__OutcomeCondition__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Describes a single instantiation of a state\n"
  "\n"
  "# Path of this state inside the behavior\n"
  "# Last segment of the path is the name of this state\n"
  "# e.g. \"/Inner_Statemachine/This_State\"\n"
  "string state_path\n"
  "\n"
  "# Specifies the class implementing this state\n"
  "# Use one of the provided CLASS constants if this is not a primitive state\n"
  "# e.g. \"CalculationState\"\n"
  "string CLASS_STATEMACHINE \\t= :STATEMACHINE\n"
  "string CLASS_CONCURRENCY \\t= :CONCURRENCY\n"
  "string CLASS_PRIORITY \\t\\t= :PRIORITY\n"
  "string CLASS_BEHAVIOR \\t\\t= :BEHAVIOR\n"
  "string state_class\n"
  "\n"
  "\n"
  "\n"
  "# Only relevant for state machine, priority, and concurrency\n"
  "# Name of the initial state / state to be monitored\n"
  "string initial_state_name\n"
  "# Input and output keys (can be remapped below)\n"
  "string[] input_keys\n"
  "string[] output_keys\n"
  "\n"
  "# Only relevant for concurrency\n"
  "# Outcome conditions\n"
  "string[] cond_outcome\n"
  "OutcomeCondition[] cond_transition\n"
  "\n"
  "# Only relevant for behavior\n"
  "# Name of the class implementing this state\n"
  "string behavior_class\n"
  "\n"
  "# Only relevant for primitive state\n"
  "# List of parameter names and values of this state\n"
  "# Order of names and values has to match\n"
  "string[] parameter_names\n"
  "string[] parameter_values\n"
  "\n"
  "\n"
  "\n"
  "# Position of this state in the editor [x,y]\n"
  "float32[2] position\n"
  "\n"
  "# Outcomes of this state\n"
  "# Defines the order of the lists: transitions, autonomy\n"
  "string[] outcomes\n"
  "# Transition targets (state names or container outcomes) of the outcomes\n"
  "string[] transitions\n"
  "# Required autonomy level of the outcomes\n"
  "int8[] autonomy\n"
  "\n"
  "# Userdata of this state\n"
  "# Merges own input_keys and output_keys, no duplicates\n"
  "string[] userdata_keys\n"
  "# Remapping of the corresponding own key (= key used by container)\n"
  "string[] userdata_remapping";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
flexbe_msgs__msg__StateInstantiation__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {flexbe_msgs__msg__StateInstantiation__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1658, 1658},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
flexbe_msgs__msg__StateInstantiation__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *flexbe_msgs__msg__StateInstantiation__get_individual_type_description_source(NULL),
    sources[1] = *flexbe_msgs__msg__OutcomeCondition__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
