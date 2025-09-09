// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from tm_msgs:msg/FeedbackState.idl
// generated code does not contain a copyright notice

#include "tm_msgs/msg/detail/feedback_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
const rosidl_type_hash_t *
tm_msgs__msg__FeedbackState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaa, 0x74, 0xd5, 0x67, 0x0e, 0xeb, 0xdb, 0x4c,
      0xd9, 0x62, 0xd5, 0xef, 0xe1, 0x2d, 0xad, 0x87,
      0x0a, 0x97, 0x97, 0xb7, 0x45, 0x47, 0x04, 0x0f,
      0x38, 0xc6, 0x21, 0x61, 0x71, 0x3b, 0xfe, 0x76,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char tm_msgs__msg__FeedbackState__TYPE_NAME[] = "tm_msgs/msg/FeedbackState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char tm_msgs__msg__FeedbackState__FIELD_NAME__header[] = "header";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__is_svr_connected[] = "is_svr_connected";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__is_sct_connected[] = "is_sct_connected";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__tmsrv_cperr[] = "tmsrv_cperr";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__tmscript_cperr[] = "tmscript_cperr";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__tmsrv_dataerr[] = "tmsrv_dataerr";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__tmscript_dataerr[] = "tmscript_dataerr";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__max_not_connect_in_s[] = "max_not_connect_in_s";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__disconnection_times[] = "disconnection_times";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__joint_pos[] = "joint_pos";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__joint_vel[] = "joint_vel";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__joint_tor[] = "joint_tor";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__tool0_pose[] = "tool0_pose";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__tool_pose[] = "tool_pose";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__tcp_speed[] = "tcp_speed";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__tcp_force[] = "tcp_force";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__joint_tor_average[] = "joint_tor_average";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__joint_tor_min[] = "joint_tor_min";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__joint_tor_max[] = "joint_tor_max";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__robot_link[] = "robot_link";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__is_data_table_correct[] = "is_data_table_correct";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__robot_error[] = "robot_error";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__project_run[] = "project_run";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__project_pause[] = "project_pause";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__safetyguard_a[] = "safetyguard_a";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__e_stop[] = "e_stop";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__camera_light[] = "camera_light";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__error_code[] = "error_code";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__project_speed[] = "project_speed";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__ma_mode[] = "ma_mode";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__robot_light[] = "robot_light";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__cb_digital_output[] = "cb_digital_output";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__cb_digital_input[] = "cb_digital_input";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__cb_analog_output[] = "cb_analog_output";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__cb_analog_input[] = "cb_analog_input";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__ee_digital_output[] = "ee_digital_output";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__ee_digital_input[] = "ee_digital_input";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__ee_analog_output[] = "ee_analog_output";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__ee_analog_input[] = "ee_analog_input";
static char tm_msgs__msg__FeedbackState__FIELD_NAME__error_content[] = "error_content";

static rosidl_runtime_c__type_description__Field tm_msgs__msg__FeedbackState__FIELDS[] = {
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__is_svr_connected, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__is_sct_connected, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__tmsrv_cperr, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__tmscript_cperr, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__tmsrv_dataerr, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__tmscript_dataerr, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__max_not_connect_in_s, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__disconnection_times, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__joint_pos, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__joint_vel, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__joint_tor, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__tool0_pose, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__tool_pose, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__tcp_speed, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__tcp_force, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__joint_tor_average, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__joint_tor_min, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__joint_tor_max, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__robot_link, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__is_data_table_correct, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__robot_error, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__project_run, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__project_pause, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__safetyguard_a, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__e_stop, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__camera_light, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__error_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__project_speed, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__ma_mode, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__robot_light, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__cb_digital_output, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__cb_digital_input, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__cb_analog_output, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__cb_analog_input, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__ee_digital_output, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__ee_digital_input, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__ee_analog_output, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__ee_analog_input, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__msg__FeedbackState__FIELD_NAME__error_content, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription tm_msgs__msg__FeedbackState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tm_msgs__msg__FeedbackState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tm_msgs__msg__FeedbackState__TYPE_NAME, 25, 25},
      {tm_msgs__msg__FeedbackState__FIELDS, 40, 40},
    },
    {tm_msgs__msg__FeedbackState__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "\n"
  "# Connection Status\n"
  "bool is_svr_connected       # Ethernet connection\n"
  "bool is_sct_connected       # Listen Node connection\n"
  "\n"
  "# Response ROS Node Status\n"
  "int32 tmsrv_cperr           # TM Ethernet Slave Communication Last CPERR Error Code\n"
  "int32 tmscript_cperr        # External Script Communication Last CPERR Error Code\n"
  "int32 tmsrv_dataerr         # TMSVR Communication Last Data Error Code\n"
  "int32 tmscript_dataerr      # External Script Communication TMSCT (or TMSTA) Last Data Error Code\n"
  "\n"
  "# Disconnection Message\n"
  "int32 max_not_connect_in_s\n"
  "int32 disconnection_times\n"
  "\n"
  "# Movement\n"
  "float64[] joint_pos\n"
  "float64[] joint_vel\n"
  "float64[] joint_tor\n"
  "float64[] tool0_pose         # flange_pose\n"
  "float64[] tool_pose\n"
  "float64[] tcp_speed\n"
  "float64[] tcp_force\n"
  "\n"
  "# Torque Data(for TM-Flow 1.84)\n"
  "float64[] joint_tor_average\n"
  "float64[] joint_tor_min\n"
  "float64[] joint_tor_max\n"
  "\n"
  "# Status\n"
  "bool robot_link              # Link Robot Controller\n"
  "bool is_data_table_correct   # Data Table Setting is Correct\n"
  "bool robot_error             # Error or Not\n"
  "bool project_run             # Project Runing or not\n"
  "bool project_pause           # Project Pause or not\n"
  "bool safetyguard_a           # Safety IO(Safeguard Port A trigger) \n"
  "bool e_stop                  # Emergency STOP\n"
  "uint8 camera_light           # Light\n"
  "int32 error_code             # Last Error Code\n"
  "int32 project_speed          # Project Running Speed\n"
  "int32 ma_mode                # M/A Mode\n"
  "int32 robot_light            # Robot light\n"
  "\n"
  "# IO\n"
  "uint8[] cb_digital_output\n"
  "uint8[] cb_digital_input\n"
  "float32[] cb_analog_output\n"
  "float32[] cb_analog_input\n"
  "uint8[] ee_digital_output\n"
  "uint8[] ee_digital_input\n"
  "float32[] ee_analog_output\n"
  "float32[] ee_analog_input\n"
  "\n"
  "# String\n"
  "string error_content\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
tm_msgs__msg__FeedbackState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tm_msgs__msg__FeedbackState__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1725, 1725},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tm_msgs__msg__FeedbackState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tm_msgs__msg__FeedbackState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
