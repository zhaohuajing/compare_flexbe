// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from tm_msgs:srv/SetEvent.idl
// generated code does not contain a copyright notice

#include "tm_msgs/srv/detail/set_event__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
const rosidl_type_hash_t *
tm_msgs__srv__SetEvent__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0f, 0x59, 0xbd, 0xf9, 0x02, 0x87, 0x41, 0x1d,
      0xba, 0x6a, 0x13, 0x8a, 0x36, 0xab, 0xed, 0x10,
      0xf8, 0xe3, 0x46, 0x6a, 0x87, 0x2b, 0x83, 0xe7,
      0xc5, 0x7b, 0xe9, 0xf9, 0xce, 0x9c, 0xea, 0xdc,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
const rosidl_type_hash_t *
tm_msgs__srv__SetEvent_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x62, 0x1a, 0x50, 0x4d, 0x4c, 0x70, 0xb3, 0x88,
      0x3f, 0xcb, 0xa3, 0x6a, 0xb3, 0x2e, 0x0d, 0xa1,
      0x68, 0xe6, 0x14, 0xfa, 0x0d, 0xbf, 0x86, 0x4c,
      0xba, 0x74, 0x25, 0x1c, 0x0a, 0x86, 0xba, 0x47,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
const rosidl_type_hash_t *
tm_msgs__srv__SetEvent_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x63, 0xa4, 0x42, 0xe2, 0x93, 0xe4, 0xa3, 0x1a,
      0xe3, 0x0a, 0xe3, 0xf9, 0xbf, 0x96, 0xfa, 0x36,
      0xe2, 0xd6, 0x06, 0x70, 0xb4, 0x70, 0xae, 0x11,
      0xab, 0x7a, 0xa7, 0x7f, 0xee, 0xb7, 0x88, 0x65,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
const rosidl_type_hash_t *
tm_msgs__srv__SetEvent_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5d, 0x9f, 0x07, 0x5a, 0x27, 0xb3, 0x9a, 0xf6,
      0xcf, 0x09, 0x33, 0xc3, 0xb1, 0x96, 0xd6, 0x53,
      0xfd, 0x58, 0xb6, 0x92, 0x64, 0xc3, 0xd7, 0x3c,
      0xbf, 0xde, 0xd7, 0xcc, 0x83, 0x9d, 0x92, 0x31,
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

static char tm_msgs__srv__SetEvent__TYPE_NAME[] = "tm_msgs/srv/SetEvent";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char tm_msgs__srv__SetEvent_Event__TYPE_NAME[] = "tm_msgs/srv/SetEvent_Event";
static char tm_msgs__srv__SetEvent_Request__TYPE_NAME[] = "tm_msgs/srv/SetEvent_Request";
static char tm_msgs__srv__SetEvent_Response__TYPE_NAME[] = "tm_msgs/srv/SetEvent_Response";

// Define type names, field names, and default values
static char tm_msgs__srv__SetEvent__FIELD_NAME__request_message[] = "request_message";
static char tm_msgs__srv__SetEvent__FIELD_NAME__response_message[] = "response_message";
static char tm_msgs__srv__SetEvent__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field tm_msgs__srv__SetEvent__FIELDS[] = {
  {
    {tm_msgs__srv__SetEvent__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {tm_msgs__srv__SetEvent_Request__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetEvent__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {tm_msgs__srv__SetEvent_Response__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetEvent__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {tm_msgs__srv__SetEvent_Event__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription tm_msgs__srv__SetEvent__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetEvent_Event__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetEvent_Request__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetEvent_Response__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tm_msgs__srv__SetEvent__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tm_msgs__srv__SetEvent__TYPE_NAME, 20, 20},
      {tm_msgs__srv__SetEvent__FIELDS, 3, 3},
    },
    {tm_msgs__srv__SetEvent__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = tm_msgs__srv__SetEvent_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = tm_msgs__srv__SetEvent_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = tm_msgs__srv__SetEvent_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char tm_msgs__srv__SetEvent_Request__FIELD_NAME__func[] = "func";
static char tm_msgs__srv__SetEvent_Request__FIELD_NAME__arg0[] = "arg0";
static char tm_msgs__srv__SetEvent_Request__FIELD_NAME__arg1[] = "arg1";

static rosidl_runtime_c__type_description__Field tm_msgs__srv__SetEvent_Request__FIELDS[] = {
  {
    {tm_msgs__srv__SetEvent_Request__FIELD_NAME__func, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetEvent_Request__FIELD_NAME__arg0, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetEvent_Request__FIELD_NAME__arg1, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tm_msgs__srv__SetEvent_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tm_msgs__srv__SetEvent_Request__TYPE_NAME, 28, 28},
      {tm_msgs__srv__SetEvent_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char tm_msgs__srv__SetEvent_Response__FIELD_NAME__ok[] = "ok";

static rosidl_runtime_c__type_description__Field tm_msgs__srv__SetEvent_Response__FIELDS[] = {
  {
    {tm_msgs__srv__SetEvent_Response__FIELD_NAME__ok, 2, 2},
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
tm_msgs__srv__SetEvent_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tm_msgs__srv__SetEvent_Response__TYPE_NAME, 29, 29},
      {tm_msgs__srv__SetEvent_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char tm_msgs__srv__SetEvent_Event__FIELD_NAME__info[] = "info";
static char tm_msgs__srv__SetEvent_Event__FIELD_NAME__request[] = "request";
static char tm_msgs__srv__SetEvent_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field tm_msgs__srv__SetEvent_Event__FIELDS[] = {
  {
    {tm_msgs__srv__SetEvent_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetEvent_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {tm_msgs__srv__SetEvent_Request__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetEvent_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {tm_msgs__srv__SetEvent_Response__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription tm_msgs__srv__SetEvent_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetEvent_Request__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetEvent_Response__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tm_msgs__srv__SetEvent_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tm_msgs__srv__SetEvent_Event__TYPE_NAME, 26, 26},
      {tm_msgs__srv__SetEvent_Event__FIELDS, 3, 3},
    },
    {tm_msgs__srv__SetEvent_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = tm_msgs__srv__SetEvent_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = tm_msgs__srv__SetEvent_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# More details please refer to the tm_ros2_sct.cpp/set_event function.\n"
  "int8 TAG = 1\n"
  "int8 WAIT_TAG = 2\n"
  "int8 STOP = 11\n"
  "int8 PAUSE = 12\n"
  "int8 RESUME = 13\n"
  "\n"
  "int8 EXIT = -1\n"
  "\n"
  "int8 func\n"
  "int8 arg0 # if fun is TAG or WAIT_TAG, arg0 is the tag number.\n"
  "int8 arg1 # if fun is TAG or WAIT_TAG, arg1 is timeout in ms.\n"
  "---\n"
  "#ok == complete status\n"
  "bool ok\n"
  "# int8 rv";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
tm_msgs__srv__SetEvent__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tm_msgs__srv__SetEvent__TYPE_NAME, 20, 20},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 347, 347},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
tm_msgs__srv__SetEvent_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tm_msgs__srv__SetEvent_Request__TYPE_NAME, 28, 28},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
tm_msgs__srv__SetEvent_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tm_msgs__srv__SetEvent_Response__TYPE_NAME, 29, 29},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
tm_msgs__srv__SetEvent_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tm_msgs__srv__SetEvent_Event__TYPE_NAME, 26, 26},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tm_msgs__srv__SetEvent__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tm_msgs__srv__SetEvent__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *tm_msgs__srv__SetEvent_Event__get_individual_type_description_source(NULL);
    sources[4] = *tm_msgs__srv__SetEvent_Request__get_individual_type_description_source(NULL);
    sources[5] = *tm_msgs__srv__SetEvent_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tm_msgs__srv__SetEvent_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tm_msgs__srv__SetEvent_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tm_msgs__srv__SetEvent_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tm_msgs__srv__SetEvent_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tm_msgs__srv__SetEvent_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tm_msgs__srv__SetEvent_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *tm_msgs__srv__SetEvent_Request__get_individual_type_description_source(NULL);
    sources[4] = *tm_msgs__srv__SetEvent_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
