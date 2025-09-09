// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from compare_flexbe_utilities:srv/FilterByIndices.idl
// generated code does not contain a copyright notice

#include "compare_flexbe_utilities/srv/detail/filter_by_indices__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_type_hash_t *
compare_flexbe_utilities__srv__FilterByIndices__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x09, 0xa4, 0x5a, 0x21, 0xc7, 0x24, 0x81, 0x46,
      0x2b, 0x74, 0x6f, 0xfb, 0xfb, 0x56, 0xe1, 0x32,
      0x7e, 0x9b, 0x42, 0x7c, 0x80, 0xe1, 0x40, 0xa5,
      0x8e, 0x44, 0xba, 0xac, 0x6e, 0x15, 0x35, 0x41,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_type_hash_t *
compare_flexbe_utilities__srv__FilterByIndices_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x23, 0x1e, 0xb9, 0x13, 0xcc, 0xf6, 0xcc, 0x21,
      0x36, 0x68, 0xb1, 0x4d, 0xe9, 0xe4, 0x48, 0xd5,
      0xbd, 0x77, 0x55, 0x4e, 0x3e, 0xa5, 0xe9, 0xf5,
      0xf2, 0xcf, 0xb8, 0xa1, 0x4b, 0x0e, 0xf4, 0xa2,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_type_hash_t *
compare_flexbe_utilities__srv__FilterByIndices_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa1, 0xb4, 0x00, 0x69, 0xdc, 0xf4, 0x41, 0x5b,
      0x1c, 0x78, 0xe6, 0x9e, 0xae, 0x72, 0x12, 0xda,
      0x53, 0x77, 0xb5, 0x8a, 0x61, 0x07, 0x66, 0xda,
      0xd5, 0xf6, 0x16, 0x5b, 0xbe, 0x1d, 0x9a, 0x89,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_type_hash_t *
compare_flexbe_utilities__srv__FilterByIndices_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1d, 0xf1, 0x71, 0x38, 0x46, 0x3b, 0x5d, 0x6d,
      0x7d, 0xc2, 0x7b, 0x18, 0xf8, 0x9e, 0x4f, 0xc4,
      0xa3, 0xff, 0xd4, 0x6b, 0xe9, 0x66, 0xf5, 0xdd,
      0x74, 0x5f, 0x26, 0x7f, 0x6f, 0xad, 0x07, 0xb0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "pcl_msgs/msg/detail/point_indices__functions.h"
#include "sensor_msgs/msg/detail/point_field__functions.h"
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
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
static const rosidl_type_hash_t pcl_msgs__msg__PointIndices__EXPECTED_HASH = {1, {
    0x3e, 0x79, 0x07, 0x44, 0x9d, 0xa3, 0xcd, 0x36,
    0x85, 0x78, 0x47, 0x60, 0x4f, 0x69, 0xda, 0xed,
    0xb3, 0x36, 0x2c, 0x7b, 0x03, 0x1c, 0xbd, 0x74,
    0x4c, 0xee, 0x33, 0xa6, 0x35, 0xe4, 0x82, 0x0b,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__PointCloud2__EXPECTED_HASH = {1, {
    0x91, 0x98, 0xca, 0xbf, 0x7d, 0xa3, 0x79, 0x6a,
    0xe6, 0xfe, 0x19, 0xc4, 0xcb, 0x3b, 0xdd, 0x35,
    0x25, 0x49, 0x29, 0x88, 0xc7, 0x05, 0x22, 0x62,
    0x8a, 0xf5, 0xda, 0xa1, 0x24, 0xba, 0xe2, 0xb5,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__PointField__EXPECTED_HASH = {1, {
    0x5c, 0x6a, 0x47, 0x50, 0x72, 0x8c, 0x2b, 0xcf,
    0xbb, 0xf7, 0x03, 0x72, 0x25, 0xb2, 0x0b, 0x02,
    0xd4, 0x42, 0x96, 0x34, 0x73, 0x21, 0x46, 0xb7,
    0x42, 0xde, 0xe1, 0x72, 0x66, 0x37, 0xef, 0x01,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char compare_flexbe_utilities__srv__FilterByIndices__TYPE_NAME[] = "compare_flexbe_utilities/srv/FilterByIndices";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char compare_flexbe_utilities__srv__FilterByIndices_Event__TYPE_NAME[] = "compare_flexbe_utilities/srv/FilterByIndices_Event";
static char compare_flexbe_utilities__srv__FilterByIndices_Request__TYPE_NAME[] = "compare_flexbe_utilities/srv/FilterByIndices_Request";
static char compare_flexbe_utilities__srv__FilterByIndices_Response__TYPE_NAME[] = "compare_flexbe_utilities/srv/FilterByIndices_Response";
static char pcl_msgs__msg__PointIndices__TYPE_NAME[] = "pcl_msgs/msg/PointIndices";
static char sensor_msgs__msg__PointCloud2__TYPE_NAME[] = "sensor_msgs/msg/PointCloud2";
static char sensor_msgs__msg__PointField__TYPE_NAME[] = "sensor_msgs/msg/PointField";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char compare_flexbe_utilities__srv__FilterByIndices__FIELD_NAME__request_message[] = "request_message";
static char compare_flexbe_utilities__srv__FilterByIndices__FIELD_NAME__response_message[] = "response_message";
static char compare_flexbe_utilities__srv__FilterByIndices__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field compare_flexbe_utilities__srv__FilterByIndices__FIELDS[] = {
  {
    {compare_flexbe_utilities__srv__FilterByIndices__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {compare_flexbe_utilities__srv__FilterByIndices_Request__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {compare_flexbe_utilities__srv__FilterByIndices__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {compare_flexbe_utilities__srv__FilterByIndices_Response__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
  {
    {compare_flexbe_utilities__srv__FilterByIndices__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {compare_flexbe_utilities__srv__FilterByIndices_Event__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription compare_flexbe_utilities__srv__FilterByIndices__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {compare_flexbe_utilities__srv__FilterByIndices_Event__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {compare_flexbe_utilities__srv__FilterByIndices_Request__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {compare_flexbe_utilities__srv__FilterByIndices_Response__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {pcl_msgs__msg__PointIndices__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__PointCloud2__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__PointField__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
compare_flexbe_utilities__srv__FilterByIndices__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {compare_flexbe_utilities__srv__FilterByIndices__TYPE_NAME, 44, 44},
      {compare_flexbe_utilities__srv__FilterByIndices__FIELDS, 3, 3},
    },
    {compare_flexbe_utilities__srv__FilterByIndices__REFERENCED_TYPE_DESCRIPTIONS, 9, 9},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = compare_flexbe_utilities__srv__FilterByIndices_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = compare_flexbe_utilities__srv__FilterByIndices_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = compare_flexbe_utilities__srv__FilterByIndices_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pcl_msgs__msg__PointIndices__EXPECTED_HASH, pcl_msgs__msg__PointIndices__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = pcl_msgs__msg__PointIndices__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__PointCloud2__EXPECTED_HASH, sensor_msgs__msg__PointCloud2__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = sensor_msgs__msg__PointCloud2__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__PointField__EXPECTED_HASH, sensor_msgs__msg__PointField__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = sensor_msgs__msg__PointField__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char compare_flexbe_utilities__srv__FilterByIndices_Request__FIELD_NAME__input_cloud[] = "input_cloud";
static char compare_flexbe_utilities__srv__FilterByIndices_Request__FIELD_NAME__target_indices[] = "target_indices";

static rosidl_runtime_c__type_description__Field compare_flexbe_utilities__srv__FilterByIndices_Request__FIELDS[] = {
  {
    {compare_flexbe_utilities__srv__FilterByIndices_Request__FIELD_NAME__input_cloud, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__PointCloud2__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {compare_flexbe_utilities__srv__FilterByIndices_Request__FIELD_NAME__target_indices, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {pcl_msgs__msg__PointIndices__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription compare_flexbe_utilities__srv__FilterByIndices_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {pcl_msgs__msg__PointIndices__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__PointCloud2__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__PointField__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
compare_flexbe_utilities__srv__FilterByIndices_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {compare_flexbe_utilities__srv__FilterByIndices_Request__TYPE_NAME, 52, 52},
      {compare_flexbe_utilities__srv__FilterByIndices_Request__FIELDS, 2, 2},
    },
    {compare_flexbe_utilities__srv__FilterByIndices_Request__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pcl_msgs__msg__PointIndices__EXPECTED_HASH, pcl_msgs__msg__PointIndices__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = pcl_msgs__msg__PointIndices__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__PointCloud2__EXPECTED_HASH, sensor_msgs__msg__PointCloud2__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = sensor_msgs__msg__PointCloud2__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__PointField__EXPECTED_HASH, sensor_msgs__msg__PointField__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = sensor_msgs__msg__PointField__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char compare_flexbe_utilities__srv__FilterByIndices_Response__FIELD_NAME__filtered_cloud[] = "filtered_cloud";

static rosidl_runtime_c__type_description__Field compare_flexbe_utilities__srv__FilterByIndices_Response__FIELDS[] = {
  {
    {compare_flexbe_utilities__srv__FilterByIndices_Response__FIELD_NAME__filtered_cloud, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__PointCloud2__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription compare_flexbe_utilities__srv__FilterByIndices_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__PointCloud2__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__PointField__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
compare_flexbe_utilities__srv__FilterByIndices_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {compare_flexbe_utilities__srv__FilterByIndices_Response__TYPE_NAME, 53, 53},
      {compare_flexbe_utilities__srv__FilterByIndices_Response__FIELDS, 1, 1},
    },
    {compare_flexbe_utilities__srv__FilterByIndices_Response__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__PointCloud2__EXPECTED_HASH, sensor_msgs__msg__PointCloud2__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = sensor_msgs__msg__PointCloud2__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__PointField__EXPECTED_HASH, sensor_msgs__msg__PointField__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = sensor_msgs__msg__PointField__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char compare_flexbe_utilities__srv__FilterByIndices_Event__FIELD_NAME__info[] = "info";
static char compare_flexbe_utilities__srv__FilterByIndices_Event__FIELD_NAME__request[] = "request";
static char compare_flexbe_utilities__srv__FilterByIndices_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field compare_flexbe_utilities__srv__FilterByIndices_Event__FIELDS[] = {
  {
    {compare_flexbe_utilities__srv__FilterByIndices_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {compare_flexbe_utilities__srv__FilterByIndices_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {compare_flexbe_utilities__srv__FilterByIndices_Request__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {compare_flexbe_utilities__srv__FilterByIndices_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {compare_flexbe_utilities__srv__FilterByIndices_Response__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription compare_flexbe_utilities__srv__FilterByIndices_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {compare_flexbe_utilities__srv__FilterByIndices_Request__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {compare_flexbe_utilities__srv__FilterByIndices_Response__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {pcl_msgs__msg__PointIndices__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__PointCloud2__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__PointField__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
compare_flexbe_utilities__srv__FilterByIndices_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {compare_flexbe_utilities__srv__FilterByIndices_Event__TYPE_NAME, 50, 50},
      {compare_flexbe_utilities__srv__FilterByIndices_Event__FIELDS, 3, 3},
    },
    {compare_flexbe_utilities__srv__FilterByIndices_Event__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = compare_flexbe_utilities__srv__FilterByIndices_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = compare_flexbe_utilities__srv__FilterByIndices_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pcl_msgs__msg__PointIndices__EXPECTED_HASH, pcl_msgs__msg__PointIndices__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = pcl_msgs__msg__PointIndices__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__PointCloud2__EXPECTED_HASH, sensor_msgs__msg__PointCloud2__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = sensor_msgs__msg__PointCloud2__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__PointField__EXPECTED_HASH, sensor_msgs__msg__PointField__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = sensor_msgs__msg__PointField__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Request\n"
  "sensor_msgs/PointCloud2 input_cloud\n"
  "pcl_msgs/PointIndices target_indices\n"
  "---\n"
  "# Response\n"
  "sensor_msgs/PointCloud2 filtered_cloud";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
compare_flexbe_utilities__srv__FilterByIndices__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {compare_flexbe_utilities__srv__FilterByIndices__TYPE_NAME, 44, 44},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 136, 136},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
compare_flexbe_utilities__srv__FilterByIndices_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {compare_flexbe_utilities__srv__FilterByIndices_Request__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
compare_flexbe_utilities__srv__FilterByIndices_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {compare_flexbe_utilities__srv__FilterByIndices_Response__TYPE_NAME, 53, 53},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
compare_flexbe_utilities__srv__FilterByIndices_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {compare_flexbe_utilities__srv__FilterByIndices_Event__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
compare_flexbe_utilities__srv__FilterByIndices__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[10];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 10, 10};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *compare_flexbe_utilities__srv__FilterByIndices__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *compare_flexbe_utilities__srv__FilterByIndices_Event__get_individual_type_description_source(NULL);
    sources[3] = *compare_flexbe_utilities__srv__FilterByIndices_Request__get_individual_type_description_source(NULL);
    sources[4] = *compare_flexbe_utilities__srv__FilterByIndices_Response__get_individual_type_description_source(NULL);
    sources[5] = *pcl_msgs__msg__PointIndices__get_individual_type_description_source(NULL);
    sources[6] = *sensor_msgs__msg__PointCloud2__get_individual_type_description_source(NULL);
    sources[7] = *sensor_msgs__msg__PointField__get_individual_type_description_source(NULL);
    sources[8] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[9] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
compare_flexbe_utilities__srv__FilterByIndices_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *compare_flexbe_utilities__srv__FilterByIndices_Request__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *pcl_msgs__msg__PointIndices__get_individual_type_description_source(NULL);
    sources[3] = *sensor_msgs__msg__PointCloud2__get_individual_type_description_source(NULL);
    sources[4] = *sensor_msgs__msg__PointField__get_individual_type_description_source(NULL);
    sources[5] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
compare_flexbe_utilities__srv__FilterByIndices_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *compare_flexbe_utilities__srv__FilterByIndices_Response__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *sensor_msgs__msg__PointCloud2__get_individual_type_description_source(NULL);
    sources[3] = *sensor_msgs__msg__PointField__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
compare_flexbe_utilities__srv__FilterByIndices_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *compare_flexbe_utilities__srv__FilterByIndices_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *compare_flexbe_utilities__srv__FilterByIndices_Request__get_individual_type_description_source(NULL);
    sources[3] = *compare_flexbe_utilities__srv__FilterByIndices_Response__get_individual_type_description_source(NULL);
    sources[4] = *pcl_msgs__msg__PointIndices__get_individual_type_description_source(NULL);
    sources[5] = *sensor_msgs__msg__PointCloud2__get_individual_type_description_source(NULL);
    sources[6] = *sensor_msgs__msg__PointField__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[8] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
