// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from tm_msgs:srv/AskItem.idl
// generated code does not contain a copyright notice

#include "tm_msgs/srv/detail/ask_item__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
const rosidl_type_hash_t *
tm_msgs__srv__AskItem__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3a, 0xd7, 0x08, 0x21, 0x98, 0x54, 0x43, 0x1a,
      0x46, 0xc2, 0xac, 0xa0, 0xa4, 0x12, 0xd3, 0x4b,
      0x5e, 0xda, 0x71, 0x5a, 0xd9, 0xff, 0x0e, 0x79,
      0x2f, 0x73, 0xec, 0x00, 0x34, 0xb1, 0xc6, 0x7f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
const rosidl_type_hash_t *
tm_msgs__srv__AskItem_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x25, 0x98, 0x25, 0x35, 0x82, 0x99, 0x68, 0x3d,
      0x24, 0xe9, 0x3a, 0x74, 0xf9, 0xbf, 0x3f, 0xe0,
      0x8d, 0x95, 0xfd, 0x40, 0xa9, 0x12, 0x97, 0x68,
      0xc7, 0xe6, 0x3f, 0x14, 0x59, 0x77, 0x3e, 0xa0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
const rosidl_type_hash_t *
tm_msgs__srv__AskItem_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x74, 0xdd, 0x62, 0xf1, 0xd2, 0x55, 0x48, 0xcb,
      0x24, 0x6c, 0xe0, 0xe7, 0x12, 0xe8, 0x18, 0x09,
      0x8e, 0xb5, 0xe8, 0xd6, 0x81, 0x9b, 0xa6, 0x99,
      0xc2, 0x94, 0xb8, 0x65, 0x7f, 0xf7, 0x3b, 0x60,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
const rosidl_type_hash_t *
tm_msgs__srv__AskItem_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x48, 0x82, 0x1b, 0x71, 0x41, 0xcf, 0xa3, 0x86,
      0x68, 0x34, 0x9b, 0xd3, 0x59, 0x08, 0x1e, 0xa2,
      0xd4, 0xb7, 0xc4, 0x3d, 0xe9, 0x24, 0xf5, 0x83,
      0x96, 0xdf, 0x82, 0x71, 0x89, 0xf4, 0x83, 0xf4,
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

static char tm_msgs__srv__AskItem__TYPE_NAME[] = "tm_msgs/srv/AskItem";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char tm_msgs__srv__AskItem_Event__TYPE_NAME[] = "tm_msgs/srv/AskItem_Event";
static char tm_msgs__srv__AskItem_Request__TYPE_NAME[] = "tm_msgs/srv/AskItem_Request";
static char tm_msgs__srv__AskItem_Response__TYPE_NAME[] = "tm_msgs/srv/AskItem_Response";

// Define type names, field names, and default values
static char tm_msgs__srv__AskItem__FIELD_NAME__request_message[] = "request_message";
static char tm_msgs__srv__AskItem__FIELD_NAME__response_message[] = "response_message";
static char tm_msgs__srv__AskItem__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field tm_msgs__srv__AskItem__FIELDS[] = {
  {
    {tm_msgs__srv__AskItem__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {tm_msgs__srv__AskItem_Request__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__AskItem__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {tm_msgs__srv__AskItem_Response__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__AskItem__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {tm_msgs__srv__AskItem_Event__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription tm_msgs__srv__AskItem__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__AskItem_Event__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__AskItem_Request__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__AskItem_Response__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tm_msgs__srv__AskItem__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tm_msgs__srv__AskItem__TYPE_NAME, 19, 19},
      {tm_msgs__srv__AskItem__FIELDS, 3, 3},
    },
    {tm_msgs__srv__AskItem__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = tm_msgs__srv__AskItem_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = tm_msgs__srv__AskItem_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = tm_msgs__srv__AskItem_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char tm_msgs__srv__AskItem_Request__FIELD_NAME__id[] = "id";
static char tm_msgs__srv__AskItem_Request__FIELD_NAME__item[] = "item";
static char tm_msgs__srv__AskItem_Request__FIELD_NAME__wait_time[] = "wait_time";

static rosidl_runtime_c__type_description__Field tm_msgs__srv__AskItem_Request__FIELDS[] = {
  {
    {tm_msgs__srv__AskItem_Request__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__AskItem_Request__FIELD_NAME__item, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__AskItem_Request__FIELD_NAME__wait_time, 9, 9},
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
tm_msgs__srv__AskItem_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tm_msgs__srv__AskItem_Request__TYPE_NAME, 27, 27},
      {tm_msgs__srv__AskItem_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char tm_msgs__srv__AskItem_Response__FIELD_NAME__ok[] = "ok";
static char tm_msgs__srv__AskItem_Response__FIELD_NAME__id[] = "id";
static char tm_msgs__srv__AskItem_Response__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field tm_msgs__srv__AskItem_Response__FIELDS[] = {
  {
    {tm_msgs__srv__AskItem_Response__FIELD_NAME__ok, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__AskItem_Response__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__AskItem_Response__FIELD_NAME__value, 5, 5},
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
tm_msgs__srv__AskItem_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tm_msgs__srv__AskItem_Response__TYPE_NAME, 28, 28},
      {tm_msgs__srv__AskItem_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char tm_msgs__srv__AskItem_Event__FIELD_NAME__info[] = "info";
static char tm_msgs__srv__AskItem_Event__FIELD_NAME__request[] = "request";
static char tm_msgs__srv__AskItem_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field tm_msgs__srv__AskItem_Event__FIELDS[] = {
  {
    {tm_msgs__srv__AskItem_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__AskItem_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {tm_msgs__srv__AskItem_Request__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__AskItem_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {tm_msgs__srv__AskItem_Response__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription tm_msgs__srv__AskItem_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__AskItem_Request__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {tm_msgs__srv__AskItem_Response__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tm_msgs__srv__AskItem_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tm_msgs__srv__AskItem_Event__TYPE_NAME, 25, 25},
      {tm_msgs__srv__AskItem_Event__FIELDS, 3, 3},
    },
    {tm_msgs__srv__AskItem_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = tm_msgs__srv__AskItem_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = tm_msgs__srv__AskItem_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Ask: request 'Read'\n"
  "# id        : The discription you want to name. \n"
  "# item      : More details please refer to the TM_Robot_Expression.pdf(1.76 rev1.00) Chapter 9.6 TMSVR vs Chapter 9.2 svr_read\n"
  "# wait_time : set wait time.\n"
  "# More details please refer to the TM_Robot_Expression.pdf(version 1.76_6300) Chapter 9.6 TMSVR\n"
  "\n"
  "string id\n"
  "string item\n"
  "\n"
  "float64 wait_time\n"
  "\n"
  "---\n"
  "# ok        : read status \n"
  "bool ok\n"
  "\n"
  "# id        : The discribtion you want to name.\n"
  "# value     : The value of asked item.\n"
  "string id\n"
  "string value";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
tm_msgs__srv__AskItem__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tm_msgs__srv__AskItem__TYPE_NAME, 19, 19},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 516, 516},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
tm_msgs__srv__AskItem_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tm_msgs__srv__AskItem_Request__TYPE_NAME, 27, 27},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
tm_msgs__srv__AskItem_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tm_msgs__srv__AskItem_Response__TYPE_NAME, 28, 28},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
tm_msgs__srv__AskItem_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tm_msgs__srv__AskItem_Event__TYPE_NAME, 25, 25},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tm_msgs__srv__AskItem__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tm_msgs__srv__AskItem__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *tm_msgs__srv__AskItem_Event__get_individual_type_description_source(NULL);
    sources[4] = *tm_msgs__srv__AskItem_Request__get_individual_type_description_source(NULL);
    sources[5] = *tm_msgs__srv__AskItem_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tm_msgs__srv__AskItem_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tm_msgs__srv__AskItem_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tm_msgs__srv__AskItem_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tm_msgs__srv__AskItem_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tm_msgs__srv__AskItem_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tm_msgs__srv__AskItem_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *tm_msgs__srv__AskItem_Request__get_individual_type_description_source(NULL);
    sources[4] = *tm_msgs__srv__AskItem_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
