// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from compare_flexbe_utilities:srv/EuclideanClustering.idl
// generated code does not contain a copyright notice

#include "compare_flexbe_utilities/srv/detail/euclidean_clustering__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_type_hash_t *
compare_flexbe_utilities__srv__EuclideanClustering__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x32, 0x03, 0x7c, 0x32, 0x02, 0x22, 0x03, 0xcb,
      0xa2, 0xd2, 0x87, 0xd2, 0x6b, 0xde, 0xc4, 0x17,
      0xee, 0x28, 0x9b, 0x88, 0xf6, 0xf1, 0x83, 0x3b,
      0x75, 0x8d, 0x27, 0xd8, 0x53, 0x29, 0x73, 0x62,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_type_hash_t *
compare_flexbe_utilities__srv__EuclideanClustering_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdd, 0x92, 0x88, 0xbb, 0xe3, 0xbb, 0xe3, 0xb4,
      0x53, 0x3d, 0x87, 0xb2, 0x5a, 0x14, 0xcb, 0xfe,
      0x87, 0x6c, 0x4d, 0xda, 0x86, 0x10, 0x7c, 0x81,
      0xb0, 0x5c, 0xf3, 0xf5, 0x7a, 0xeb, 0x41, 0xba,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_type_hash_t *
compare_flexbe_utilities__srv__EuclideanClustering_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc2, 0x76, 0xaf, 0x4b, 0x65, 0xca, 0xcf, 0x62,
      0xff, 0x65, 0x46, 0xbf, 0x95, 0xa0, 0xb3, 0xdf,
      0x99, 0x8e, 0x96, 0xe8, 0x0b, 0xd9, 0x03, 0xea,
      0xac, 0x92, 0x73, 0xa9, 0xb7, 0x80, 0xfe, 0xab,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_compare_flexbe_utilities
const rosidl_type_hash_t *
compare_flexbe_utilities__srv__EuclideanClustering_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x98, 0x4b, 0xc1, 0x47, 0x4d, 0x33, 0xa0, 0xff,
      0x11, 0x17, 0x3b, 0x0b, 0xd5, 0xa4, 0x60, 0xf3,
      0xef, 0x4a, 0xe9, 0x0e, 0x80, 0x0e, 0xba, 0xb1,
      0x96, 0xc1, 0xb8, 0x6e, 0xe4, 0x05, 0x71, 0xf4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "pcl_msgs/msg/detail/point_indices__functions.h"
#include "sensor_msgs/msg/detail/point_field__functions.h"
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__PoseStamped__EXPECTED_HASH = {1, {
    0x10, 0xf3, 0x78, 0x6d, 0x7d, 0x40, 0xfd, 0x2b,
    0x54, 0x36, 0x78, 0x35, 0x61, 0x4b, 0xff, 0x85,
    0xd4, 0xad, 0x3b, 0x5d, 0xab, 0x62, 0xbf, 0x8b,
    0xca, 0x0c, 0xc2, 0x32, 0xd7, 0x3b, 0x4c, 0xd8,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
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

static char compare_flexbe_utilities__srv__EuclideanClustering__TYPE_NAME[] = "compare_flexbe_utilities/srv/EuclideanClustering";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char compare_flexbe_utilities__srv__EuclideanClustering_Event__TYPE_NAME[] = "compare_flexbe_utilities/srv/EuclideanClustering_Event";
static char compare_flexbe_utilities__srv__EuclideanClustering_Request__TYPE_NAME[] = "compare_flexbe_utilities/srv/EuclideanClustering_Request";
static char compare_flexbe_utilities__srv__EuclideanClustering_Response__TYPE_NAME[] = "compare_flexbe_utilities/srv/EuclideanClustering_Response";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__PoseStamped__TYPE_NAME[] = "geometry_msgs/msg/PoseStamped";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char pcl_msgs__msg__PointIndices__TYPE_NAME[] = "pcl_msgs/msg/PointIndices";
static char sensor_msgs__msg__PointCloud2__TYPE_NAME[] = "sensor_msgs/msg/PointCloud2";
static char sensor_msgs__msg__PointField__TYPE_NAME[] = "sensor_msgs/msg/PointField";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char compare_flexbe_utilities__srv__EuclideanClustering__FIELD_NAME__request_message[] = "request_message";
static char compare_flexbe_utilities__srv__EuclideanClustering__FIELD_NAME__response_message[] = "response_message";
static char compare_flexbe_utilities__srv__EuclideanClustering__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field compare_flexbe_utilities__srv__EuclideanClustering__FIELDS[] = {
  {
    {compare_flexbe_utilities__srv__EuclideanClustering__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {compare_flexbe_utilities__srv__EuclideanClustering_Request__TYPE_NAME, 56, 56},
    },
    {NULL, 0, 0},
  },
  {
    {compare_flexbe_utilities__srv__EuclideanClustering__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {compare_flexbe_utilities__srv__EuclideanClustering_Response__TYPE_NAME, 57, 57},
    },
    {NULL, 0, 0},
  },
  {
    {compare_flexbe_utilities__srv__EuclideanClustering__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {compare_flexbe_utilities__srv__EuclideanClustering_Event__TYPE_NAME, 54, 54},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription compare_flexbe_utilities__srv__EuclideanClustering__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {compare_flexbe_utilities__srv__EuclideanClustering_Event__TYPE_NAME, 54, 54},
    {NULL, 0, 0},
  },
  {
    {compare_flexbe_utilities__srv__EuclideanClustering_Request__TYPE_NAME, 56, 56},
    {NULL, 0, 0},
  },
  {
    {compare_flexbe_utilities__srv__EuclideanClustering_Response__TYPE_NAME, 57, 57},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PoseStamped__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
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
compare_flexbe_utilities__srv__EuclideanClustering__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {compare_flexbe_utilities__srv__EuclideanClustering__TYPE_NAME, 48, 48},
      {compare_flexbe_utilities__srv__EuclideanClustering__FIELDS, 3, 3},
    },
    {compare_flexbe_utilities__srv__EuclideanClustering__REFERENCED_TYPE_DESCRIPTIONS, 13, 13},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = compare_flexbe_utilities__srv__EuclideanClustering_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = compare_flexbe_utilities__srv__EuclideanClustering_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = compare_flexbe_utilities__srv__EuclideanClustering_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PoseStamped__EXPECTED_HASH, geometry_msgs__msg__PoseStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__PoseStamped__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pcl_msgs__msg__PointIndices__EXPECTED_HASH, pcl_msgs__msg__PointIndices__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = pcl_msgs__msg__PointIndices__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__PointCloud2__EXPECTED_HASH, sensor_msgs__msg__PointCloud2__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = sensor_msgs__msg__PointCloud2__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__PointField__EXPECTED_HASH, sensor_msgs__msg__PointField__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = sensor_msgs__msg__PointField__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[12].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char compare_flexbe_utilities__srv__EuclideanClustering_Request__FIELD_NAME__input[] = "input";
static char compare_flexbe_utilities__srv__EuclideanClustering_Request__FIELD_NAME__camera_pose[] = "camera_pose";
static char compare_flexbe_utilities__srv__EuclideanClustering_Request__FIELD_NAME__cluster_tolerance[] = "cluster_tolerance";
static char compare_flexbe_utilities__srv__EuclideanClustering_Request__FIELD_NAME__min_cluster_size[] = "min_cluster_size";
static char compare_flexbe_utilities__srv__EuclideanClustering_Request__FIELD_NAME__max_cluster_size[] = "max_cluster_size";

static rosidl_runtime_c__type_description__Field compare_flexbe_utilities__srv__EuclideanClustering_Request__FIELDS[] = {
  {
    {compare_flexbe_utilities__srv__EuclideanClustering_Request__FIELD_NAME__input, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__PointCloud2__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {compare_flexbe_utilities__srv__EuclideanClustering_Request__FIELD_NAME__camera_pose, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__PoseStamped__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {compare_flexbe_utilities__srv__EuclideanClustering_Request__FIELD_NAME__cluster_tolerance, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {compare_flexbe_utilities__srv__EuclideanClustering_Request__FIELD_NAME__min_cluster_size, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {compare_flexbe_utilities__srv__EuclideanClustering_Request__FIELD_NAME__max_cluster_size, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription compare_flexbe_utilities__srv__EuclideanClustering_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PoseStamped__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
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
compare_flexbe_utilities__srv__EuclideanClustering_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {compare_flexbe_utilities__srv__EuclideanClustering_Request__TYPE_NAME, 56, 56},
      {compare_flexbe_utilities__srv__EuclideanClustering_Request__FIELDS, 5, 5},
    },
    {compare_flexbe_utilities__srv__EuclideanClustering_Request__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PoseStamped__EXPECTED_HASH, geometry_msgs__msg__PoseStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__PoseStamped__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__PointCloud2__EXPECTED_HASH, sensor_msgs__msg__PointCloud2__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = sensor_msgs__msg__PointCloud2__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__PointField__EXPECTED_HASH, sensor_msgs__msg__PointField__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = sensor_msgs__msg__PointField__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char compare_flexbe_utilities__srv__EuclideanClustering_Response__FIELD_NAME__target_cluster_indices[] = "target_cluster_indices";
static char compare_flexbe_utilities__srv__EuclideanClustering_Response__FIELD_NAME__obstacle_cluster_indices[] = "obstacle_cluster_indices";

static rosidl_runtime_c__type_description__Field compare_flexbe_utilities__srv__EuclideanClustering_Response__FIELDS[] = {
  {
    {compare_flexbe_utilities__srv__EuclideanClustering_Response__FIELD_NAME__target_cluster_indices, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {pcl_msgs__msg__PointIndices__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {compare_flexbe_utilities__srv__EuclideanClustering_Response__FIELD_NAME__obstacle_cluster_indices, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {pcl_msgs__msg__PointIndices__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription compare_flexbe_utilities__srv__EuclideanClustering_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {pcl_msgs__msg__PointIndices__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
compare_flexbe_utilities__srv__EuclideanClustering_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {compare_flexbe_utilities__srv__EuclideanClustering_Response__TYPE_NAME, 57, 57},
      {compare_flexbe_utilities__srv__EuclideanClustering_Response__FIELDS, 2, 2},
    },
    {compare_flexbe_utilities__srv__EuclideanClustering_Response__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pcl_msgs__msg__PointIndices__EXPECTED_HASH, pcl_msgs__msg__PointIndices__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = pcl_msgs__msg__PointIndices__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char compare_flexbe_utilities__srv__EuclideanClustering_Event__FIELD_NAME__info[] = "info";
static char compare_flexbe_utilities__srv__EuclideanClustering_Event__FIELD_NAME__request[] = "request";
static char compare_flexbe_utilities__srv__EuclideanClustering_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field compare_flexbe_utilities__srv__EuclideanClustering_Event__FIELDS[] = {
  {
    {compare_flexbe_utilities__srv__EuclideanClustering_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {compare_flexbe_utilities__srv__EuclideanClustering_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {compare_flexbe_utilities__srv__EuclideanClustering_Request__TYPE_NAME, 56, 56},
    },
    {NULL, 0, 0},
  },
  {
    {compare_flexbe_utilities__srv__EuclideanClustering_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {compare_flexbe_utilities__srv__EuclideanClustering_Response__TYPE_NAME, 57, 57},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription compare_flexbe_utilities__srv__EuclideanClustering_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {compare_flexbe_utilities__srv__EuclideanClustering_Request__TYPE_NAME, 56, 56},
    {NULL, 0, 0},
  },
  {
    {compare_flexbe_utilities__srv__EuclideanClustering_Response__TYPE_NAME, 57, 57},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PoseStamped__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
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
compare_flexbe_utilities__srv__EuclideanClustering_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {compare_flexbe_utilities__srv__EuclideanClustering_Event__TYPE_NAME, 54, 54},
      {compare_flexbe_utilities__srv__EuclideanClustering_Event__FIELDS, 3, 3},
    },
    {compare_flexbe_utilities__srv__EuclideanClustering_Event__REFERENCED_TYPE_DESCRIPTIONS, 12, 12},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = compare_flexbe_utilities__srv__EuclideanClustering_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = compare_flexbe_utilities__srv__EuclideanClustering_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PoseStamped__EXPECTED_HASH, geometry_msgs__msg__PoseStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__PoseStamped__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pcl_msgs__msg__PointIndices__EXPECTED_HASH, pcl_msgs__msg__PointIndices__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = pcl_msgs__msg__PointIndices__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__PointCloud2__EXPECTED_HASH, sensor_msgs__msg__PointCloud2__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = sensor_msgs__msg__PointCloud2__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__PointField__EXPECTED_HASH, sensor_msgs__msg__PointField__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = sensor_msgs__msg__PointField__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "sensor_msgs/PointCloud2 input\n"
  "geometry_msgs/PoseStamped camera_pose\n"
  "float32 cluster_tolerance   # meters (e.g., 0.015\\xe2\\x80\\x930.03 typical)\n"
  "int32   min_cluster_size    # e.g., 100\n"
  "int32   max_cluster_size    # e.g., 25000\n"
  "---\n"
  "pcl_msgs/PointIndices target_cluster_indices\n"
  "pcl_msgs/PointIndices[] obstacle_cluster_indices";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
compare_flexbe_utilities__srv__EuclideanClustering__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {compare_flexbe_utilities__srv__EuclideanClustering__TYPE_NAME, 48, 48},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 311, 311},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
compare_flexbe_utilities__srv__EuclideanClustering_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {compare_flexbe_utilities__srv__EuclideanClustering_Request__TYPE_NAME, 56, 56},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
compare_flexbe_utilities__srv__EuclideanClustering_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {compare_flexbe_utilities__srv__EuclideanClustering_Response__TYPE_NAME, 57, 57},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
compare_flexbe_utilities__srv__EuclideanClustering_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {compare_flexbe_utilities__srv__EuclideanClustering_Event__TYPE_NAME, 54, 54},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
compare_flexbe_utilities__srv__EuclideanClustering__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[14];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 14, 14};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *compare_flexbe_utilities__srv__EuclideanClustering__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *compare_flexbe_utilities__srv__EuclideanClustering_Event__get_individual_type_description_source(NULL);
    sources[3] = *compare_flexbe_utilities__srv__EuclideanClustering_Request__get_individual_type_description_source(NULL);
    sources[4] = *compare_flexbe_utilities__srv__EuclideanClustering_Response__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__PoseStamped__get_individual_type_description_source(NULL);
    sources[8] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[9] = *pcl_msgs__msg__PointIndices__get_individual_type_description_source(NULL);
    sources[10] = *sensor_msgs__msg__PointCloud2__get_individual_type_description_source(NULL);
    sources[11] = *sensor_msgs__msg__PointField__get_individual_type_description_source(NULL);
    sources[12] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[13] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
compare_flexbe_utilities__srv__EuclideanClustering_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *compare_flexbe_utilities__srv__EuclideanClustering_Request__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__PoseStamped__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[6] = *sensor_msgs__msg__PointCloud2__get_individual_type_description_source(NULL);
    sources[7] = *sensor_msgs__msg__PointField__get_individual_type_description_source(NULL);
    sources[8] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
compare_flexbe_utilities__srv__EuclideanClustering_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *compare_flexbe_utilities__srv__EuclideanClustering_Response__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *pcl_msgs__msg__PointIndices__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
compare_flexbe_utilities__srv__EuclideanClustering_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[13];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 13, 13};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *compare_flexbe_utilities__srv__EuclideanClustering_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *compare_flexbe_utilities__srv__EuclideanClustering_Request__get_individual_type_description_source(NULL);
    sources[3] = *compare_flexbe_utilities__srv__EuclideanClustering_Response__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__PoseStamped__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[8] = *pcl_msgs__msg__PointIndices__get_individual_type_description_source(NULL);
    sources[9] = *sensor_msgs__msg__PointCloud2__get_individual_type_description_source(NULL);
    sources[10] = *sensor_msgs__msg__PointField__get_individual_type_description_source(NULL);
    sources[11] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[12] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
