// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from compare_flexbe_utilities:srv/VoxelGridFilter.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "compare_flexbe_utilities/srv/detail/voxel_grid_filter__functions.h"
#include "compare_flexbe_utilities/srv/detail/voxel_grid_filter__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace compare_flexbe_utilities
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _VoxelGridFilter_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _VoxelGridFilter_Request_type_support_ids_t;

static const _VoxelGridFilter_Request_type_support_ids_t _VoxelGridFilter_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _VoxelGridFilter_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _VoxelGridFilter_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _VoxelGridFilter_Request_type_support_symbol_names_t _VoxelGridFilter_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, compare_flexbe_utilities, srv, VoxelGridFilter_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, compare_flexbe_utilities, srv, VoxelGridFilter_Request)),
  }
};

typedef struct _VoxelGridFilter_Request_type_support_data_t
{
  void * data[2];
} _VoxelGridFilter_Request_type_support_data_t;

static _VoxelGridFilter_Request_type_support_data_t _VoxelGridFilter_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _VoxelGridFilter_Request_message_typesupport_map = {
  2,
  "compare_flexbe_utilities",
  &_VoxelGridFilter_Request_message_typesupport_ids.typesupport_identifier[0],
  &_VoxelGridFilter_Request_message_typesupport_symbol_names.symbol_name[0],
  &_VoxelGridFilter_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t VoxelGridFilter_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_VoxelGridFilter_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &compare_flexbe_utilities__srv__VoxelGridFilter_Request__get_type_hash,
  &compare_flexbe_utilities__srv__VoxelGridFilter_Request__get_type_description,
  &compare_flexbe_utilities__srv__VoxelGridFilter_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace compare_flexbe_utilities

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<compare_flexbe_utilities::srv::VoxelGridFilter_Request>()
{
  return &::compare_flexbe_utilities::srv::rosidl_typesupport_cpp::VoxelGridFilter_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, compare_flexbe_utilities, srv, VoxelGridFilter_Request)() {
  return get_message_type_support_handle<compare_flexbe_utilities::srv::VoxelGridFilter_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "compare_flexbe_utilities/srv/detail/voxel_grid_filter__functions.h"
// already included above
// #include "compare_flexbe_utilities/srv/detail/voxel_grid_filter__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace compare_flexbe_utilities
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _VoxelGridFilter_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _VoxelGridFilter_Response_type_support_ids_t;

static const _VoxelGridFilter_Response_type_support_ids_t _VoxelGridFilter_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _VoxelGridFilter_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _VoxelGridFilter_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _VoxelGridFilter_Response_type_support_symbol_names_t _VoxelGridFilter_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, compare_flexbe_utilities, srv, VoxelGridFilter_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, compare_flexbe_utilities, srv, VoxelGridFilter_Response)),
  }
};

typedef struct _VoxelGridFilter_Response_type_support_data_t
{
  void * data[2];
} _VoxelGridFilter_Response_type_support_data_t;

static _VoxelGridFilter_Response_type_support_data_t _VoxelGridFilter_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _VoxelGridFilter_Response_message_typesupport_map = {
  2,
  "compare_flexbe_utilities",
  &_VoxelGridFilter_Response_message_typesupport_ids.typesupport_identifier[0],
  &_VoxelGridFilter_Response_message_typesupport_symbol_names.symbol_name[0],
  &_VoxelGridFilter_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t VoxelGridFilter_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_VoxelGridFilter_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &compare_flexbe_utilities__srv__VoxelGridFilter_Response__get_type_hash,
  &compare_flexbe_utilities__srv__VoxelGridFilter_Response__get_type_description,
  &compare_flexbe_utilities__srv__VoxelGridFilter_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace compare_flexbe_utilities

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<compare_flexbe_utilities::srv::VoxelGridFilter_Response>()
{
  return &::compare_flexbe_utilities::srv::rosidl_typesupport_cpp::VoxelGridFilter_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, compare_flexbe_utilities, srv, VoxelGridFilter_Response)() {
  return get_message_type_support_handle<compare_flexbe_utilities::srv::VoxelGridFilter_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "compare_flexbe_utilities/srv/detail/voxel_grid_filter__functions.h"
// already included above
// #include "compare_flexbe_utilities/srv/detail/voxel_grid_filter__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace compare_flexbe_utilities
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _VoxelGridFilter_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _VoxelGridFilter_Event_type_support_ids_t;

static const _VoxelGridFilter_Event_type_support_ids_t _VoxelGridFilter_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _VoxelGridFilter_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _VoxelGridFilter_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _VoxelGridFilter_Event_type_support_symbol_names_t _VoxelGridFilter_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, compare_flexbe_utilities, srv, VoxelGridFilter_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, compare_flexbe_utilities, srv, VoxelGridFilter_Event)),
  }
};

typedef struct _VoxelGridFilter_Event_type_support_data_t
{
  void * data[2];
} _VoxelGridFilter_Event_type_support_data_t;

static _VoxelGridFilter_Event_type_support_data_t _VoxelGridFilter_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _VoxelGridFilter_Event_message_typesupport_map = {
  2,
  "compare_flexbe_utilities",
  &_VoxelGridFilter_Event_message_typesupport_ids.typesupport_identifier[0],
  &_VoxelGridFilter_Event_message_typesupport_symbol_names.symbol_name[0],
  &_VoxelGridFilter_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t VoxelGridFilter_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_VoxelGridFilter_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &compare_flexbe_utilities__srv__VoxelGridFilter_Event__get_type_hash,
  &compare_flexbe_utilities__srv__VoxelGridFilter_Event__get_type_description,
  &compare_flexbe_utilities__srv__VoxelGridFilter_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace compare_flexbe_utilities

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<compare_flexbe_utilities::srv::VoxelGridFilter_Event>()
{
  return &::compare_flexbe_utilities::srv::rosidl_typesupport_cpp::VoxelGridFilter_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, compare_flexbe_utilities, srv, VoxelGridFilter_Event)() {
  return get_message_type_support_handle<compare_flexbe_utilities::srv::VoxelGridFilter_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "compare_flexbe_utilities/srv/detail/voxel_grid_filter__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace compare_flexbe_utilities
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _VoxelGridFilter_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _VoxelGridFilter_type_support_ids_t;

static const _VoxelGridFilter_type_support_ids_t _VoxelGridFilter_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _VoxelGridFilter_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _VoxelGridFilter_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _VoxelGridFilter_type_support_symbol_names_t _VoxelGridFilter_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, compare_flexbe_utilities, srv, VoxelGridFilter)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, compare_flexbe_utilities, srv, VoxelGridFilter)),
  }
};

typedef struct _VoxelGridFilter_type_support_data_t
{
  void * data[2];
} _VoxelGridFilter_type_support_data_t;

static _VoxelGridFilter_type_support_data_t _VoxelGridFilter_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _VoxelGridFilter_service_typesupport_map = {
  2,
  "compare_flexbe_utilities",
  &_VoxelGridFilter_service_typesupport_ids.typesupport_identifier[0],
  &_VoxelGridFilter_service_typesupport_symbol_names.symbol_name[0],
  &_VoxelGridFilter_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t VoxelGridFilter_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_VoxelGridFilter_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<compare_flexbe_utilities::srv::VoxelGridFilter_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<compare_flexbe_utilities::srv::VoxelGridFilter_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<compare_flexbe_utilities::srv::VoxelGridFilter_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<compare_flexbe_utilities::srv::VoxelGridFilter>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<compare_flexbe_utilities::srv::VoxelGridFilter>,
  &compare_flexbe_utilities__srv__VoxelGridFilter__get_type_hash,
  &compare_flexbe_utilities__srv__VoxelGridFilter__get_type_description,
  &compare_flexbe_utilities__srv__VoxelGridFilter__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace compare_flexbe_utilities

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<compare_flexbe_utilities::srv::VoxelGridFilter>()
{
  return &::compare_flexbe_utilities::srv::rosidl_typesupport_cpp::VoxelGridFilter_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, compare_flexbe_utilities, srv, VoxelGridFilter)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<compare_flexbe_utilities::srv::VoxelGridFilter>();
}

#ifdef __cplusplus
}
#endif
