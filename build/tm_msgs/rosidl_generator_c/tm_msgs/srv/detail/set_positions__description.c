// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from tm_msgs:srv/SetPositions.idl
// generated code does not contain a copyright notice

#include "tm_msgs/srv/detail/set_positions__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
const rosidl_type_hash_t *
tm_msgs__srv__SetPositions__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x58, 0x5b, 0x5c, 0xcb, 0xa9, 0x96, 0xea, 0x3f,
      0xec, 0x12, 0x5d, 0x72, 0x4f, 0x20, 0x27, 0xb6,
      0xbd, 0xa4, 0xf5, 0xdc, 0x4c, 0x4b, 0xee, 0xc4,
      0xe2, 0x15, 0x07, 0xfd, 0x3a, 0xe1, 0x3a, 0xb9,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
const rosidl_type_hash_t *
tm_msgs__srv__SetPositions_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe5, 0x59, 0x49, 0x67, 0x07, 0x10, 0x75, 0x34,
      0xf4, 0x22, 0xb1, 0x59, 0x24, 0x53, 0x85, 0x3d,
      0xea, 0xf3, 0xbe, 0x44, 0xab, 0x98, 0x1e, 0xf1,
      0x0c, 0x7d, 0x82, 0x31, 0xa4, 0x84, 0x0c, 0xe6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
const rosidl_type_hash_t *
tm_msgs__srv__SetPositions_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xff, 0x2f, 0xbe, 0x06, 0x81, 0x48, 0xc3, 0x47,
      0x31, 0x26, 0x59, 0x51, 0xf0, 0x5f, 0xa2, 0xf2,
      0x62, 0xe3, 0x0a, 0x00, 0xff, 0xf0, 0xc6, 0x8b,
      0xa5, 0xe1, 0x3b, 0x15, 0x96, 0x25, 0xbb, 0x89,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
const rosidl_type_hash_t *
tm_msgs__srv__SetPositions_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa1, 0x1b, 0xa9, 0x5b, 0x6e, 0x93, 0x76, 0x26,
      0x67, 0x31, 0xd1, 0x18, 0xdd, 0xbb, 0x20, 0x5a,
      0x0b, 0x45, 0x07, 0x0f, 0x53, 0x84, 0x28, 0xbe,
      0x21, 0x61, 0x5d, 0xc5, 0xc5, 0xc2, 0x77, 0x2e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char tm_msgs__srv__SetPositions__TYPE_NAME[] = "tm_msgs/srv/SetPositions";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char tm_msgs__srv__SetPositions_Event__TYPE_NAME[] = "tm_msgs/srv/SetPositions_Event";
static char tm_msgs__srv__SetPositions_Request__TYPE_NAME[] = "tm_msgs/srv/SetPositions_Request";
static char tm_msgs__srv__SetPositions_Response__TYPE_NAME[] = "tm_msgs/srv/SetPositions_Response";

// Define type names, field names, and default values
static char tm_msgs__srv__SetPositions__FIELD_NAME__request_message[] = "request_message";
static char tm_msgs__srv__SetPositions__FIELD_NAME__response_message[] = "response_message";
static char tm_msgs__srv__SetPositions__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field tm_msgs__srv__SetPositions__FIELDS[] = {
  {
    {tm_msgs__srv__SetPositions__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {tm_msgs__srv__SetPositions_Request__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetPositions__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {tm_msgs__srv__SetPositions_Response__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetPositions__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {tm_msgs__srv__SetPositions_Event__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription tm_msgs__srv__SetPositions__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetPositions_Event__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetPositions_Request__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetPositions_Response__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tm_msgs__srv__SetPositions__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tm_msgs__srv__SetPositions__TYPE_NAME, 24, 24},
      {tm_msgs__srv__SetPositions__FIELDS, 3, 3},
    },
    {tm_msgs__srv__SetPositions__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = tm_msgs__srv__SetPositions_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = tm_msgs__srv__SetPositions_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = tm_msgs__srv__SetPositions_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char tm_msgs__srv__SetPositions_Request__FIELD_NAME__motion_type[] = "motion_type";
static char tm_msgs__srv__SetPositions_Request__FIELD_NAME__positions[] = "positions";
static char tm_msgs__srv__SetPositions_Request__FIELD_NAME__velocity[] = "velocity";
static char tm_msgs__srv__SetPositions_Request__FIELD_NAME__acc_time[] = "acc_time";
static char tm_msgs__srv__SetPositions_Request__FIELD_NAME__blend_percentage[] = "blend_percentage";
static char tm_msgs__srv__SetPositions_Request__FIELD_NAME__fine_goal[] = "fine_goal";

static rosidl_runtime_c__type_description__Field tm_msgs__srv__SetPositions_Request__FIELDS[] = {
  {
    {tm_msgs__srv__SetPositions_Request__FIELD_NAME__motion_type, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetPositions_Request__FIELD_NAME__positions, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetPositions_Request__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetPositions_Request__FIELD_NAME__acc_time, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetPositions_Request__FIELD_NAME__blend_percentage, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetPositions_Request__FIELD_NAME__fine_goal, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tm_msgs__srv__SetPositions_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tm_msgs__srv__SetPositions_Request__TYPE_NAME, 32, 32},
      {tm_msgs__srv__SetPositions_Request__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char tm_msgs__srv__SetPositions_Response__FIELD_NAME__ok[] = "ok";

static rosidl_runtime_c__type_description__Field tm_msgs__srv__SetPositions_Response__FIELDS[] = {
  {
    {tm_msgs__srv__SetPositions_Response__FIELD_NAME__ok, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tm_msgs__srv__SetPositions_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tm_msgs__srv__SetPositions_Response__TYPE_NAME, 33, 33},
      {tm_msgs__srv__SetPositions_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char tm_msgs__srv__SetPositions_Event__FIELD_NAME__info[] = "info";
static char tm_msgs__srv__SetPositions_Event__FIELD_NAME__request[] = "request";
static char tm_msgs__srv__SetPositions_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field tm_msgs__srv__SetPositions_Event__FIELDS[] = {
  {
    {tm_msgs__srv__SetPositions_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetPositions_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {tm_msgs__srv__SetPositions_Request__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetPositions_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {tm_msgs__srv__SetPositions_Response__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription tm_msgs__srv__SetPositions_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetPositions_Request__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetPositions_Response__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tm_msgs__srv__SetPositions_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tm_msgs__srv__SetPositions_Event__TYPE_NAME, 30, 30},
      {tm_msgs__srv__SetPositions_Event__FIELDS, 3, 3},
    },
    {tm_msgs__srv__SetPositions_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = tm_msgs__srv__SetPositions_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = tm_msgs__srv__SetPositions_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#motion_type :  PTP_J , PTP_T , LINE_J , LINE_T ,\n"
  "#               CIRC_J ,CIRC_T , PLINE_J ,PLINE_T\n"
  "# More details please refer to the TM_Robot_Expression.pdf(1.76 rev1.00) Chapter 8.6-8.9\n"
  "int8 PTP_J = 1\n"
  "int8 PTP_T = 2\n"
  "#int8 LINE_J = 3\n"
  "int8 LINE_T = 4\n"
  "#int8 CIRC_J = 5\n"
  "int8 CIRC_T = 6\n"
  "#int8 PLINE_J = 7\n"
  "int8 PLINE_T = 8\n"
  "\n"
  "int8 motion_type\n"
  "float64[] positions\n"
  "float64 velocity       # motion velocity: if expressed in Cartesian coordinate (unit: m/s) , if expressed in joint velocity (unit: rad/s, and the maximum value is limited to pi )\n"
  "float64 acc_time       # time to reach maximum speed (unit: ms)\n"
  "int32 blend_percentage # blending value: expressed as a percentage (unit: %, and the minimum value of 0 means no blending)\n"
  "bool fine_goal         # precise position mode : If activated, the amount of error in the final position will converge more.\n"
  "---\n"
  "# ok :  set motion status \n"
  "bool ok";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
tm_msgs__srv__SetPositions__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tm_msgs__srv__SetPositions__TYPE_NAME, 24, 24},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 888, 888},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
tm_msgs__srv__SetPositions_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tm_msgs__srv__SetPositions_Request__TYPE_NAME, 32, 32},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
tm_msgs__srv__SetPositions_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tm_msgs__srv__SetPositions_Response__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
tm_msgs__srv__SetPositions_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tm_msgs__srv__SetPositions_Event__TYPE_NAME, 30, 30},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tm_msgs__srv__SetPositions__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tm_msgs__srv__SetPositions__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *tm_msgs__srv__SetPositions_Event__get_individual_type_description_source(NULL);
    sources[4] = *tm_msgs__srv__SetPositions_Request__get_individual_type_description_source(NULL);
    sources[5] = *tm_msgs__srv__SetPositions_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tm_msgs__srv__SetPositions_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tm_msgs__srv__SetPositions_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tm_msgs__srv__SetPositions_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tm_msgs__srv__SetPositions_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tm_msgs__srv__SetPositions_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tm_msgs__srv__SetPositions_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *tm_msgs__srv__SetPositions_Request__get_individual_type_description_source(NULL);
    sources[4] = *tm_msgs__srv__SetPositions_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
