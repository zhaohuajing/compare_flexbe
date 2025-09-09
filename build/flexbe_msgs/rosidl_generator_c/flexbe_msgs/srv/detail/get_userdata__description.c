// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from flexbe_msgs:srv/GetUserdata.idl
// generated code does not contain a copyright notice

#include "flexbe_msgs/srv/detail/get_userdata__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
const rosidl_type_hash_t *
flexbe_msgs__srv__GetUserdata__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc5, 0xb8, 0x8f, 0x6a, 0xa4, 0x7e, 0x22, 0xf3,
      0x99, 0xbe, 0x83, 0x78, 0xfe, 0x85, 0xe2, 0x7a,
      0x33, 0xaf, 0xaf, 0x1d, 0x06, 0x6c, 0xdc, 0xd4,
      0x61, 0x4c, 0x91, 0x85, 0x32, 0x4e, 0x48, 0x5c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
const rosidl_type_hash_t *
flexbe_msgs__srv__GetUserdata_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x63, 0x6f, 0x9a, 0x2e, 0x2a, 0x95, 0x8d, 0x5d,
      0xb1, 0x13, 0x6b, 0x83, 0xa4, 0x3e, 0x2d, 0x07,
      0x75, 0x13, 0x56, 0x62, 0x34, 0x26, 0xc8, 0x4a,
      0x07, 0xc9, 0xcf, 0xb9, 0xaf, 0x63, 0x7e, 0x8b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
const rosidl_type_hash_t *
flexbe_msgs__srv__GetUserdata_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xec, 0x5b, 0xc8, 0x0a, 0xd7, 0xc7, 0xdc, 0xab,
      0x70, 0x5a, 0x05, 0x50, 0x13, 0xbc, 0xa6, 0x4e,
      0x63, 0x16, 0xee, 0xba, 0x23, 0x8a, 0xbf, 0x7c,
      0x18, 0x97, 0x26, 0x77, 0x61, 0x7b, 0xe6, 0xb7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
const rosidl_type_hash_t *
flexbe_msgs__srv__GetUserdata_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe9, 0x76, 0xd6, 0xab, 0x67, 0xd4, 0x14, 0xec,
      0x6e, 0x2b, 0x55, 0xbe, 0xfa, 0xc2, 0x2a, 0xe6,
      0x69, 0x79, 0x9b, 0x41, 0x38, 0x1b, 0x25, 0x4b,
      0x92, 0x65, 0x52, 0x1d, 0x6c, 0xd9, 0x2d, 0x1d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "flexbe_msgs/msg/detail/userdata_info__functions.h"
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
static const rosidl_type_hash_t flexbe_msgs__msg__UserdataInfo__EXPECTED_HASH = {1, {
    0xaa, 0x8b, 0xc3, 0x85, 0xa6, 0x0f, 0xca, 0xc6,
    0xb5, 0xf3, 0xf2, 0x2a, 0x14, 0x1b, 0x96, 0x14,
    0xdd, 0xd8, 0xc8, 0x72, 0xd5, 0x9d, 0x8b, 0x69,
    0xc8, 0x54, 0x6a, 0x86, 0x4c, 0x86, 0x19, 0x81,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char flexbe_msgs__srv__GetUserdata__TYPE_NAME[] = "flexbe_msgs/srv/GetUserdata";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char flexbe_msgs__msg__UserdataInfo__TYPE_NAME[] = "flexbe_msgs/msg/UserdataInfo";
static char flexbe_msgs__srv__GetUserdata_Event__TYPE_NAME[] = "flexbe_msgs/srv/GetUserdata_Event";
static char flexbe_msgs__srv__GetUserdata_Request__TYPE_NAME[] = "flexbe_msgs/srv/GetUserdata_Request";
static char flexbe_msgs__srv__GetUserdata_Response__TYPE_NAME[] = "flexbe_msgs/srv/GetUserdata_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char flexbe_msgs__srv__GetUserdata__FIELD_NAME__request_message[] = "request_message";
static char flexbe_msgs__srv__GetUserdata__FIELD_NAME__response_message[] = "response_message";
static char flexbe_msgs__srv__GetUserdata__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field flexbe_msgs__srv__GetUserdata__FIELDS[] = {
  {
    {flexbe_msgs__srv__GetUserdata__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {flexbe_msgs__srv__GetUserdata_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__srv__GetUserdata__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {flexbe_msgs__srv__GetUserdata_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__srv__GetUserdata__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {flexbe_msgs__srv__GetUserdata_Event__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription flexbe_msgs__srv__GetUserdata__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__UserdataInfo__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__srv__GetUserdata_Event__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__srv__GetUserdata_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__srv__GetUserdata_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
flexbe_msgs__srv__GetUserdata__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {flexbe_msgs__srv__GetUserdata__TYPE_NAME, 27, 27},
      {flexbe_msgs__srv__GetUserdata__FIELDS, 3, 3},
    },
    {flexbe_msgs__srv__GetUserdata__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&flexbe_msgs__msg__UserdataInfo__EXPECTED_HASH, flexbe_msgs__msg__UserdataInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = flexbe_msgs__msg__UserdataInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = flexbe_msgs__srv__GetUserdata_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = flexbe_msgs__srv__GetUserdata_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = flexbe_msgs__srv__GetUserdata_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char flexbe_msgs__srv__GetUserdata_Request__FIELD_NAME__userdata_key[] = "userdata_key";

static rosidl_runtime_c__type_description__Field flexbe_msgs__srv__GetUserdata_Request__FIELDS[] = {
  {
    {flexbe_msgs__srv__GetUserdata_Request__FIELD_NAME__userdata_key, 12, 12},
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
flexbe_msgs__srv__GetUserdata_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {flexbe_msgs__srv__GetUserdata_Request__TYPE_NAME, 35, 35},
      {flexbe_msgs__srv__GetUserdata_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char flexbe_msgs__srv__GetUserdata_Response__FIELD_NAME__success[] = "success";
static char flexbe_msgs__srv__GetUserdata_Response__FIELD_NAME__message[] = "message";
static char flexbe_msgs__srv__GetUserdata_Response__FIELD_NAME__userdata[] = "userdata";

static rosidl_runtime_c__type_description__Field flexbe_msgs__srv__GetUserdata_Response__FIELDS[] = {
  {
    {flexbe_msgs__srv__GetUserdata_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__srv__GetUserdata_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__srv__GetUserdata_Response__FIELD_NAME__userdata, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {flexbe_msgs__msg__UserdataInfo__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription flexbe_msgs__srv__GetUserdata_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {flexbe_msgs__msg__UserdataInfo__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
flexbe_msgs__srv__GetUserdata_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {flexbe_msgs__srv__GetUserdata_Response__TYPE_NAME, 36, 36},
      {flexbe_msgs__srv__GetUserdata_Response__FIELDS, 3, 3},
    },
    {flexbe_msgs__srv__GetUserdata_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&flexbe_msgs__msg__UserdataInfo__EXPECTED_HASH, flexbe_msgs__msg__UserdataInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = flexbe_msgs__msg__UserdataInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char flexbe_msgs__srv__GetUserdata_Event__FIELD_NAME__info[] = "info";
static char flexbe_msgs__srv__GetUserdata_Event__FIELD_NAME__request[] = "request";
static char flexbe_msgs__srv__GetUserdata_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field flexbe_msgs__srv__GetUserdata_Event__FIELDS[] = {
  {
    {flexbe_msgs__srv__GetUserdata_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__srv__GetUserdata_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {flexbe_msgs__srv__GetUserdata_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__srv__GetUserdata_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {flexbe_msgs__srv__GetUserdata_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription flexbe_msgs__srv__GetUserdata_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__msg__UserdataInfo__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__srv__GetUserdata_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {flexbe_msgs__srv__GetUserdata_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
flexbe_msgs__srv__GetUserdata_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {flexbe_msgs__srv__GetUserdata_Event__TYPE_NAME, 33, 33},
      {flexbe_msgs__srv__GetUserdata_Event__FIELDS, 3, 3},
    },
    {flexbe_msgs__srv__GetUserdata_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&flexbe_msgs__msg__UserdataInfo__EXPECTED_HASH, flexbe_msgs__msg__UserdataInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = flexbe_msgs__msg__UserdataInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = flexbe_msgs__srv__GetUserdata_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = flexbe_msgs__srv__GetUserdata_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# specify key to filter userdata, leave empty to get all userdata\n"
  "string userdata_key\n"
  "---\n"
  "bool success\n"
  "string message\n"
  "flexbe_msgs/UserdataInfo[] userdata";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
flexbe_msgs__srv__GetUserdata__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {flexbe_msgs__srv__GetUserdata__TYPE_NAME, 27, 27},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 153, 153},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
flexbe_msgs__srv__GetUserdata_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {flexbe_msgs__srv__GetUserdata_Request__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
flexbe_msgs__srv__GetUserdata_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {flexbe_msgs__srv__GetUserdata_Response__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
flexbe_msgs__srv__GetUserdata_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {flexbe_msgs__srv__GetUserdata_Event__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
flexbe_msgs__srv__GetUserdata__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *flexbe_msgs__srv__GetUserdata__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *flexbe_msgs__msg__UserdataInfo__get_individual_type_description_source(NULL);
    sources[3] = *flexbe_msgs__srv__GetUserdata_Event__get_individual_type_description_source(NULL);
    sources[4] = *flexbe_msgs__srv__GetUserdata_Request__get_individual_type_description_source(NULL);
    sources[5] = *flexbe_msgs__srv__GetUserdata_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
flexbe_msgs__srv__GetUserdata_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *flexbe_msgs__srv__GetUserdata_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
flexbe_msgs__srv__GetUserdata_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *flexbe_msgs__srv__GetUserdata_Response__get_individual_type_description_source(NULL),
    sources[1] = *flexbe_msgs__msg__UserdataInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
flexbe_msgs__srv__GetUserdata_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *flexbe_msgs__srv__GetUserdata_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *flexbe_msgs__msg__UserdataInfo__get_individual_type_description_source(NULL);
    sources[3] = *flexbe_msgs__srv__GetUserdata_Request__get_individual_type_description_source(NULL);
    sources[4] = *flexbe_msgs__srv__GetUserdata_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
