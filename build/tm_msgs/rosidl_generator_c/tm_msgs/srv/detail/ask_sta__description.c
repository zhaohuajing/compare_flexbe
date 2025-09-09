// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from tm_msgs:srv/AskSta.idl
// generated code does not contain a copyright notice

#include "tm_msgs/srv/detail/ask_sta__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
const rosidl_type_hash_t *
tm_msgs__srv__AskSta__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xef, 0x74, 0xae, 0x6e, 0x21, 0x11, 0x62, 0x78,
      0x72, 0x88, 0x3b, 0x49, 0x4b, 0x8b, 0xcf, 0xcf,
      0x3b, 0x38, 0xc2, 0x59, 0xc0, 0xae, 0x59, 0x31,
      0xc9, 0xf3, 0xe0, 0x7a, 0x8e, 0x47, 0xf2, 0xe7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
const rosidl_type_hash_t *
tm_msgs__srv__AskSta_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb5, 0xe9, 0x8e, 0x71, 0xe9, 0x0f, 0xf1, 0x1f,
      0xd3, 0xf7, 0x75, 0xb1, 0xe6, 0x9c, 0x32, 0x10,
      0x7b, 0xd4, 0x7e, 0xbc, 0xd3, 0x53, 0xe7, 0x39,
      0x32, 0x7f, 0x3c, 0x7d, 0xe8, 0x36, 0xbd, 0xfe,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
const rosidl_type_hash_t *
tm_msgs__srv__AskSta_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe5, 0xb9, 0xa9, 0x46, 0xc3, 0xa6, 0x4d, 0x1b,
      0x23, 0x94, 0xc2, 0x8e, 0x64, 0x1f, 0x49, 0x97,
      0xd5, 0x4f, 0x3d, 0x36, 0xa6, 0xde, 0x5a, 0x6e,
      0x2c, 0xbf, 0xf2, 0x04, 0x62, 0xf4, 0xd6, 0x8b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
const rosidl_type_hash_t *
tm_msgs__srv__AskSta_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf0, 0x43, 0xea, 0xb6, 0x10, 0xa6, 0x9b, 0x7b,
      0x22, 0xf4, 0x56, 0x66, 0xd6, 0xbe, 0xf4, 0x60,
      0x84, 0xdd, 0x58, 0x3e, 0xd7, 0x17, 0x96, 0x65,
      0xbd, 0x5d, 0x87, 0x08, 0x67, 0x98, 0x4b, 0x23,
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

static char tm_msgs__srv__AskSta__TYPE_NAME[] = "tm_msgs/srv/AskSta";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char tm_msgs__srv__AskSta_Event__TYPE_NAME[] = "tm_msgs/srv/AskSta_Event";
static char tm_msgs__srv__AskSta_Request__TYPE_NAME[] = "tm_msgs/srv/AskSta_Request";
static char tm_msgs__srv__AskSta_Response__TYPE_NAME[] = "tm_msgs/srv/AskSta_Response";

// Define type names, field names, and default values
static char tm_msgs__srv__AskSta__FIELD_NAME__request_message[] = "request_message";
static char tm_msgs__srv__AskSta__FIELD_NAME__response_message[] = "response_message";
static char tm_msgs__srv__AskSta__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field tm_msgs__srv__AskSta__FIELDS[] = {
  {
    {tm_msgs__srv__AskSta__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {tm_msgs__srv__AskSta_Request__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__AskSta__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {tm_msgs__srv__AskSta_Response__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__AskSta__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {tm_msgs__srv__AskSta_Event__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription tm_msgs__srv__AskSta__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__AskSta_Event__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__AskSta_Request__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__AskSta_Response__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tm_msgs__srv__AskSta__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tm_msgs__srv__AskSta__TYPE_NAME, 18, 18},
      {tm_msgs__srv__AskSta__FIELDS, 3, 3},
    },
    {tm_msgs__srv__AskSta__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = tm_msgs__srv__AskSta_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = tm_msgs__srv__AskSta_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = tm_msgs__srv__AskSta_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char tm_msgs__srv__AskSta_Request__FIELD_NAME__subcmd[] = "subcmd";
static char tm_msgs__srv__AskSta_Request__FIELD_NAME__subdata[] = "subdata";
static char tm_msgs__srv__AskSta_Request__FIELD_NAME__wait_time[] = "wait_time";

static rosidl_runtime_c__type_description__Field tm_msgs__srv__AskSta_Request__FIELDS[] = {
  {
    {tm_msgs__srv__AskSta_Request__FIELD_NAME__subcmd, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__AskSta_Request__FIELD_NAME__subdata, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__AskSta_Request__FIELD_NAME__wait_time, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tm_msgs__srv__AskSta_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tm_msgs__srv__AskSta_Request__TYPE_NAME, 26, 26},
      {tm_msgs__srv__AskSta_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char tm_msgs__srv__AskSta_Response__FIELD_NAME__ok[] = "ok";
static char tm_msgs__srv__AskSta_Response__FIELD_NAME__subcmd[] = "subcmd";
static char tm_msgs__srv__AskSta_Response__FIELD_NAME__subdata[] = "subdata";

static rosidl_runtime_c__type_description__Field tm_msgs__srv__AskSta_Response__FIELDS[] = {
  {
    {tm_msgs__srv__AskSta_Response__FIELD_NAME__ok, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__AskSta_Response__FIELD_NAME__subcmd, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__AskSta_Response__FIELD_NAME__subdata, 7, 7},
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
tm_msgs__srv__AskSta_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tm_msgs__srv__AskSta_Response__TYPE_NAME, 27, 27},
      {tm_msgs__srv__AskSta_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char tm_msgs__srv__AskSta_Event__FIELD_NAME__info[] = "info";
static char tm_msgs__srv__AskSta_Event__FIELD_NAME__request[] = "request";
static char tm_msgs__srv__AskSta_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field tm_msgs__srv__AskSta_Event__FIELDS[] = {
  {
    {tm_msgs__srv__AskSta_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__AskSta_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {tm_msgs__srv__AskSta_Request__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__AskSta_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {tm_msgs__srv__AskSta_Response__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription tm_msgs__srv__AskSta_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__AskSta_Request__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__AskSta_Response__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tm_msgs__srv__AskSta_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tm_msgs__srv__AskSta_Event__TYPE_NAME, 24, 24},
      {tm_msgs__srv__AskSta_Event__FIELDS, 3, 3},
    },
    {tm_msgs__srv__AskSta_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = tm_msgs__srv__AskSta_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = tm_msgs__srv__AskSta_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Ask: request 'Read' sta\n"
  "# More details please refer to the TM_Robot_Expression.pdf(1.76 rev1.00) Chapter 7.5 TMSTA\n"
  "# wait_time : set wait time.\n"
  "\n"
  "string subcmd\n"
  "string subdata\n"
  "\n"
  "float64 wait_time\n"
  "\n"
  "---\n"
  "# ok        : read status \n"
  "bool ok\n"
  "\n"
  "string subcmd\n"
  "string subdata";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
tm_msgs__srv__AskSta__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tm_msgs__srv__AskSta__TYPE_NAME, 18, 18},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 264, 264},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
tm_msgs__srv__AskSta_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tm_msgs__srv__AskSta_Request__TYPE_NAME, 26, 26},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
tm_msgs__srv__AskSta_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tm_msgs__srv__AskSta_Response__TYPE_NAME, 27, 27},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
tm_msgs__srv__AskSta_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tm_msgs__srv__AskSta_Event__TYPE_NAME, 24, 24},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tm_msgs__srv__AskSta__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tm_msgs__srv__AskSta__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *tm_msgs__srv__AskSta_Event__get_individual_type_description_source(NULL);
    sources[4] = *tm_msgs__srv__AskSta_Request__get_individual_type_description_source(NULL);
    sources[5] = *tm_msgs__srv__AskSta_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tm_msgs__srv__AskSta_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tm_msgs__srv__AskSta_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tm_msgs__srv__AskSta_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tm_msgs__srv__AskSta_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tm_msgs__srv__AskSta_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tm_msgs__srv__AskSta_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *tm_msgs__srv__AskSta_Request__get_individual_type_description_source(NULL);
    sources[4] = *tm_msgs__srv__AskSta_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
