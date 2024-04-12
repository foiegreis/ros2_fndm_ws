// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from my_ros2_interface:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "my_ros2_interface/srv/detail/add_three_ints__struct.h"
#include "my_ros2_interface/srv/detail/add_three_ints__type_support.h"
#include "my_ros2_interface/srv/detail/add_three_ints__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace my_ros2_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _AddThreeInts_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddThreeInts_Request_type_support_ids_t;

static const _AddThreeInts_Request_type_support_ids_t _AddThreeInts_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AddThreeInts_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddThreeInts_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddThreeInts_Request_type_support_symbol_names_t _AddThreeInts_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_ros2_interface, srv, AddThreeInts_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_interface, srv, AddThreeInts_Request)),
  }
};

typedef struct _AddThreeInts_Request_type_support_data_t
{
  void * data[2];
} _AddThreeInts_Request_type_support_data_t;

static _AddThreeInts_Request_type_support_data_t _AddThreeInts_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddThreeInts_Request_message_typesupport_map = {
  2,
  "my_ros2_interface",
  &_AddThreeInts_Request_message_typesupport_ids.typesupport_identifier[0],
  &_AddThreeInts_Request_message_typesupport_symbol_names.symbol_name[0],
  &_AddThreeInts_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddThreeInts_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddThreeInts_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_ros2_interface__srv__AddThreeInts_Request__get_type_hash,
  &my_ros2_interface__srv__AddThreeInts_Request__get_type_description,
  &my_ros2_interface__srv__AddThreeInts_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace my_ros2_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_ros2_interface, srv, AddThreeInts_Request)() {
  return &::my_ros2_interface::srv::rosidl_typesupport_c::AddThreeInts_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_ros2_interface/srv/detail/add_three_ints__struct.h"
// already included above
// #include "my_ros2_interface/srv/detail/add_three_ints__type_support.h"
// already included above
// #include "my_ros2_interface/srv/detail/add_three_ints__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_ros2_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _AddThreeInts_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddThreeInts_Response_type_support_ids_t;

static const _AddThreeInts_Response_type_support_ids_t _AddThreeInts_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AddThreeInts_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddThreeInts_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddThreeInts_Response_type_support_symbol_names_t _AddThreeInts_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_ros2_interface, srv, AddThreeInts_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_interface, srv, AddThreeInts_Response)),
  }
};

typedef struct _AddThreeInts_Response_type_support_data_t
{
  void * data[2];
} _AddThreeInts_Response_type_support_data_t;

static _AddThreeInts_Response_type_support_data_t _AddThreeInts_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddThreeInts_Response_message_typesupport_map = {
  2,
  "my_ros2_interface",
  &_AddThreeInts_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AddThreeInts_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AddThreeInts_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddThreeInts_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddThreeInts_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_ros2_interface__srv__AddThreeInts_Response__get_type_hash,
  &my_ros2_interface__srv__AddThreeInts_Response__get_type_description,
  &my_ros2_interface__srv__AddThreeInts_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace my_ros2_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_ros2_interface, srv, AddThreeInts_Response)() {
  return &::my_ros2_interface::srv::rosidl_typesupport_c::AddThreeInts_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_ros2_interface/srv/detail/add_three_ints__struct.h"
// already included above
// #include "my_ros2_interface/srv/detail/add_three_ints__type_support.h"
// already included above
// #include "my_ros2_interface/srv/detail/add_three_ints__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_ros2_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _AddThreeInts_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddThreeInts_Event_type_support_ids_t;

static const _AddThreeInts_Event_type_support_ids_t _AddThreeInts_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AddThreeInts_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddThreeInts_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddThreeInts_Event_type_support_symbol_names_t _AddThreeInts_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_ros2_interface, srv, AddThreeInts_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_interface, srv, AddThreeInts_Event)),
  }
};

typedef struct _AddThreeInts_Event_type_support_data_t
{
  void * data[2];
} _AddThreeInts_Event_type_support_data_t;

static _AddThreeInts_Event_type_support_data_t _AddThreeInts_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddThreeInts_Event_message_typesupport_map = {
  2,
  "my_ros2_interface",
  &_AddThreeInts_Event_message_typesupport_ids.typesupport_identifier[0],
  &_AddThreeInts_Event_message_typesupport_symbol_names.symbol_name[0],
  &_AddThreeInts_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddThreeInts_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddThreeInts_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_ros2_interface__srv__AddThreeInts_Event__get_type_hash,
  &my_ros2_interface__srv__AddThreeInts_Event__get_type_description,
  &my_ros2_interface__srv__AddThreeInts_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace my_ros2_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_ros2_interface, srv, AddThreeInts_Event)() {
  return &::my_ros2_interface::srv::rosidl_typesupport_c::AddThreeInts_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_ros2_interface/srv/detail/add_three_ints__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace my_ros2_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _AddThreeInts_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddThreeInts_type_support_ids_t;

static const _AddThreeInts_type_support_ids_t _AddThreeInts_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AddThreeInts_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddThreeInts_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddThreeInts_type_support_symbol_names_t _AddThreeInts_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_ros2_interface, srv, AddThreeInts)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_interface, srv, AddThreeInts)),
  }
};

typedef struct _AddThreeInts_type_support_data_t
{
  void * data[2];
} _AddThreeInts_type_support_data_t;

static _AddThreeInts_type_support_data_t _AddThreeInts_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddThreeInts_service_typesupport_map = {
  2,
  "my_ros2_interface",
  &_AddThreeInts_service_typesupport_ids.typesupport_identifier[0],
  &_AddThreeInts_service_typesupport_symbol_names.symbol_name[0],
  &_AddThreeInts_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t AddThreeInts_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddThreeInts_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &AddThreeInts_Request_message_type_support_handle,
  &AddThreeInts_Response_message_type_support_handle,
  &AddThreeInts_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    my_ros2_interface,
    srv,
    AddThreeInts
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    my_ros2_interface,
    srv,
    AddThreeInts
  ),
  &my_ros2_interface__srv__AddThreeInts__get_type_hash,
  &my_ros2_interface__srv__AddThreeInts__get_type_description,
  &my_ros2_interface__srv__AddThreeInts__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace my_ros2_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, my_ros2_interface, srv, AddThreeInts)() {
  return &::my_ros2_interface::srv::rosidl_typesupport_c::AddThreeInts_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
