// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from tm_msgs:srv/SetIO.idl
// generated code does not contain a copyright notice

#include "tm_msgs/srv/detail/set_io__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
const rosidl_type_hash_t *
tm_msgs__srv__SetIO__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x12, 0x67, 0xcd, 0x5d, 0x40, 0xf4, 0xcf, 0x67,
      0xae, 0xc7, 0x4d, 0xb3, 0xec, 0x6f, 0x24, 0xf0,
      0x87, 0xe9, 0x94, 0x7a, 0xf0, 0x08, 0xe4, 0x86,
      0xfe, 0x03, 0xcc, 0xce, 0x5f, 0x91, 0xb5, 0x22,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
const rosidl_type_hash_t *
tm_msgs__srv__SetIO_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcb, 0x93, 0xe0, 0x23, 0x7c, 0x10, 0x1a, 0xca,
      0x77, 0xa8, 0x63, 0xf8, 0xad, 0x7d, 0x24, 0x42,
      0xdb, 0x94, 0xa2, 0xb2, 0xae, 0x85, 0x50, 0xbc,
      0x57, 0x97, 0x5b, 0xf0, 0xba, 0xaa, 0x69, 0x04,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
const rosidl_type_hash_t *
tm_msgs__srv__SetIO_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x30, 0x1e, 0xab, 0x14, 0x48, 0x3d, 0x2c, 0xce,
      0x15, 0x86, 0x84, 0xfc, 0xa3, 0x4d, 0x9d, 0x28,
      0x0b, 0x60, 0x7f, 0xf5, 0xe0, 0x64, 0xf9, 0xb6,
      0x83, 0xc5, 0x2d, 0x53, 0x66, 0xe8, 0xe7, 0x01,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
const rosidl_type_hash_t *
tm_msgs__srv__SetIO_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x96, 0x57, 0xb5, 0x40, 0x7f, 0xd4, 0x56, 0x27,
      0xec, 0x40, 0x45, 0x40, 0x6f, 0x4f, 0x62, 0xa7,
      0x50, 0x7b, 0x19, 0x51, 0xf9, 0x29, 0xc3, 0xff,
      0x5d, 0x56, 0xae, 0x1e, 0xc8, 0x03, 0xac, 0xc3,
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

static char tm_msgs__srv__SetIO__TYPE_NAME[] = "tm_msgs/srv/SetIO";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char tm_msgs__srv__SetIO_Event__TYPE_NAME[] = "tm_msgs/srv/SetIO_Event";
static char tm_msgs__srv__SetIO_Request__TYPE_NAME[] = "tm_msgs/srv/SetIO_Request";
static char tm_msgs__srv__SetIO_Response__TYPE_NAME[] = "tm_msgs/srv/SetIO_Response";

// Define type names, field names, and default values
static char tm_msgs__srv__SetIO__FIELD_NAME__request_message[] = "request_message";
static char tm_msgs__srv__SetIO__FIELD_NAME__response_message[] = "response_message";
static char tm_msgs__srv__SetIO__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field tm_msgs__srv__SetIO__FIELDS[] = {
  {
    {tm_msgs__srv__SetIO__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {tm_msgs__srv__SetIO_Request__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetIO__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {tm_msgs__srv__SetIO_Response__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetIO__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {tm_msgs__srv__SetIO_Event__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription tm_msgs__srv__SetIO__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetIO_Event__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetIO_Request__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetIO_Response__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tm_msgs__srv__SetIO__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tm_msgs__srv__SetIO__TYPE_NAME, 17, 17},
      {tm_msgs__srv__SetIO__FIELDS, 3, 3},
    },
    {tm_msgs__srv__SetIO__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = tm_msgs__srv__SetIO_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = tm_msgs__srv__SetIO_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = tm_msgs__srv__SetIO_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char tm_msgs__srv__SetIO_Request__FIELD_NAME__module[] = "module";
static char tm_msgs__srv__SetIO_Request__FIELD_NAME__type[] = "type";
static char tm_msgs__srv__SetIO_Request__FIELD_NAME__pin[] = "pin";
static char tm_msgs__srv__SetIO_Request__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field tm_msgs__srv__SetIO_Request__FIELDS[] = {
  {
    {tm_msgs__srv__SetIO_Request__FIELD_NAME__module, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetIO_Request__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetIO_Request__FIELD_NAME__pin, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetIO_Request__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tm_msgs__srv__SetIO_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tm_msgs__srv__SetIO_Request__TYPE_NAME, 25, 25},
      {tm_msgs__srv__SetIO_Request__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char tm_msgs__srv__SetIO_Response__FIELD_NAME__ok[] = "ok";

static rosidl_runtime_c__type_description__Field tm_msgs__srv__SetIO_Response__FIELDS[] = {
  {
    {tm_msgs__srv__SetIO_Response__FIELD_NAME__ok, 2, 2},
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
tm_msgs__srv__SetIO_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tm_msgs__srv__SetIO_Response__TYPE_NAME, 26, 26},
      {tm_msgs__srv__SetIO_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char tm_msgs__srv__SetIO_Event__FIELD_NAME__info[] = "info";
static char tm_msgs__srv__SetIO_Event__FIELD_NAME__request[] = "request";
static char tm_msgs__srv__SetIO_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field tm_msgs__srv__SetIO_Event__FIELDS[] = {
  {
    {tm_msgs__srv__SetIO_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetIO_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {tm_msgs__srv__SetIO_Request__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetIO_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {tm_msgs__srv__SetIO_Response__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription tm_msgs__srv__SetIO_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetIO_Request__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__SetIO_Response__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tm_msgs__srv__SetIO_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tm_msgs__srv__SetIO_Event__TYPE_NAME, 23, 23},
      {tm_msgs__srv__SetIO_Event__FIELDS, 3, 3},
    },
    {tm_msgs__srv__SetIO_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = tm_msgs__srv__SetIO_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = tm_msgs__srv__SetIO_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# More details please refer to the TM_Robot_Expression.pdf(1.76 rev1.00) Chapter 6.5 IO\n"
  "int8 MODULE_CONTROLBOX = 0\n"
  "int8 MODULE_ENDEFFECTOR = 1\n"
  "\n"
  "int8 TYPE_DIGITAL_IN = 0\n"
  "int8 TYPE_DIGITAL_OUT = 1\n"
  "int8 TYPE_INSTANT_DO = 2\n"
  "int8 TYPE_ANALOG_IN = 3\n"
  "int8 TYPE_ANALOG_OUT = 4\n"
  "int8 TYPE_INSTANT_AO = 5\n"
  "\n"
  "int8 STATE_OFF = 0\n"
  "int8 STATE_ON = 1\n"
  "\n"
  "# request fields\n"
  "int8 module\n"
  "int8 type\n"
  "int8 pin\n"
  "float32 state #STATE_OFF or STATE_ON value, or other value (if type expressed in a specific control module)\n"
  "---\n"
  "#ok= set function status\n"
  "bool ok";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
tm_msgs__srv__SetIO__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tm_msgs__srv__SetIO__TYPE_NAME, 17, 17},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 526, 526},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
tm_msgs__srv__SetIO_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tm_msgs__srv__SetIO_Request__TYPE_NAME, 25, 25},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
tm_msgs__srv__SetIO_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tm_msgs__srv__SetIO_Response__TYPE_NAME, 26, 26},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
tm_msgs__srv__SetIO_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tm_msgs__srv__SetIO_Event__TYPE_NAME, 23, 23},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tm_msgs__srv__SetIO__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tm_msgs__srv__SetIO__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *tm_msgs__srv__SetIO_Event__get_individual_type_description_source(NULL);
    sources[4] = *tm_msgs__srv__SetIO_Request__get_individual_type_description_source(NULL);
    sources[5] = *tm_msgs__srv__SetIO_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tm_msgs__srv__SetIO_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tm_msgs__srv__SetIO_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tm_msgs__srv__SetIO_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tm_msgs__srv__SetIO_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tm_msgs__srv__SetIO_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tm_msgs__srv__SetIO_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *tm_msgs__srv__SetIO_Request__get_individual_type_description_source(NULL);
    sources[4] = *tm_msgs__srv__SetIO_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
