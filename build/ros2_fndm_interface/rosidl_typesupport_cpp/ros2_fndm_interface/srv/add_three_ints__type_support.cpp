// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ros2_fndm_interface:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ros2_fndm_interface/srv/detail/add_three_ints__functions.h"
#include "ros2_fndm_interface/srv/detail/add_three_ints__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ros2_fndm_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _AddThreeInts_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddThreeInts_Request_type_support_ids_t;

static const _AddThreeInts_Request_type_support_ids_t _AddThreeInts_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_fndm_interface, srv, AddThreeInts_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_fndm_interface, srv, AddThreeInts_Request)),
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
  "ros2_fndm_interface",
  &_AddThreeInts_Request_message_typesupport_ids.typesupport_identifier[0],
  &_AddThreeInts_Request_message_typesupport_symbol_names.symbol_name[0],
  &_AddThreeInts_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddThreeInts_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddThreeInts_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ros2_fndm_interface__srv__AddThreeInts_Request__get_type_hash,
  &ros2_fndm_interface__srv__AddThreeInts_Request__get_type_description,
  &ros2_fndm_interface__srv__AddThreeInts_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ros2_fndm_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_fndm_interface::srv::AddThreeInts_Request>()
{
  return &::ros2_fndm_interface::srv::rosidl_typesupport_cpp::AddThreeInts_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ros2_fndm_interface, srv, AddThreeInts_Request)() {
  return get_message_type_support_handle<ros2_fndm_interface::srv::AddThreeInts_Request>();
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
// #include "ros2_fndm_interface/srv/detail/add_three_ints__functions.h"
// already included above
// #include "ros2_fndm_interface/srv/detail/add_three_ints__struct.hpp"
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

namespace ros2_fndm_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _AddThreeInts_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddThreeInts_Response_type_support_ids_t;

static const _AddThreeInts_Response_type_support_ids_t _AddThreeInts_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_fndm_interface, srv, AddThreeInts_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_fndm_interface, srv, AddThreeInts_Response)),
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
  "ros2_fndm_interface",
  &_AddThreeInts_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AddThreeInts_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AddThreeInts_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddThreeInts_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddThreeInts_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ros2_fndm_interface__srv__AddThreeInts_Response__get_type_hash,
  &ros2_fndm_interface__srv__AddThreeInts_Response__get_type_description,
  &ros2_fndm_interface__srv__AddThreeInts_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ros2_fndm_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_fndm_interface::srv::AddThreeInts_Response>()
{
  return &::ros2_fndm_interface::srv::rosidl_typesupport_cpp::AddThreeInts_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ros2_fndm_interface, srv, AddThreeInts_Response)() {
  return get_message_type_support_handle<ros2_fndm_interface::srv::AddThreeInts_Response>();
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
// #include "ros2_fndm_interface/srv/detail/add_three_ints__functions.h"
// already included above
// #include "ros2_fndm_interface/srv/detail/add_three_ints__struct.hpp"
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

namespace ros2_fndm_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _AddThreeInts_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddThreeInts_Event_type_support_ids_t;

static const _AddThreeInts_Event_type_support_ids_t _AddThreeInts_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_fndm_interface, srv, AddThreeInts_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_fndm_interface, srv, AddThreeInts_Event)),
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
  "ros2_fndm_interface",
  &_AddThreeInts_Event_message_typesupport_ids.typesupport_identifier[0],
  &_AddThreeInts_Event_message_typesupport_symbol_names.symbol_name[0],
  &_AddThreeInts_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddThreeInts_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddThreeInts_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ros2_fndm_interface__srv__AddThreeInts_Event__get_type_hash,
  &ros2_fndm_interface__srv__AddThreeInts_Event__get_type_description,
  &ros2_fndm_interface__srv__AddThreeInts_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ros2_fndm_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_fndm_interface::srv::AddThreeInts_Event>()
{
  return &::ros2_fndm_interface::srv::rosidl_typesupport_cpp::AddThreeInts_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ros2_fndm_interface, srv, AddThreeInts_Event)() {
  return get_message_type_support_handle<ros2_fndm_interface::srv::AddThreeInts_Event>();
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
// #include "ros2_fndm_interface/srv/detail/add_three_ints__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_fndm_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _AddThreeInts_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddThreeInts_type_support_ids_t;

static const _AddThreeInts_type_support_ids_t _AddThreeInts_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_fndm_interface, srv, AddThreeInts)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_fndm_interface, srv, AddThreeInts)),
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
  "ros2_fndm_interface",
  &_AddThreeInts_service_typesupport_ids.typesupport_identifier[0],
  &_AddThreeInts_service_typesupport_symbol_names.symbol_name[0],
  &_AddThreeInts_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t AddThreeInts_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddThreeInts_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ros2_fndm_interface::srv::AddThreeInts_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ros2_fndm_interface::srv::AddThreeInts_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ros2_fndm_interface::srv::AddThreeInts_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ros2_fndm_interface::srv::AddThreeInts>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ros2_fndm_interface::srv::AddThreeInts>,
  &ros2_fndm_interface__srv__AddThreeInts__get_type_hash,
  &ros2_fndm_interface__srv__AddThreeInts__get_type_description,
  &ros2_fndm_interface__srv__AddThreeInts__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ros2_fndm_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ros2_fndm_interface::srv::AddThreeInts>()
{
  return &::ros2_fndm_interface::srv::rosidl_typesupport_cpp::AddThreeInts_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
