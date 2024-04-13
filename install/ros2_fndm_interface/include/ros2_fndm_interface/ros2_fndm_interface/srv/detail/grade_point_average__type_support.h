// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from ros2_fndm_interface:srv/GradePointAverage.idl
// generated code does not contain a copyright notice

#ifndef ROS2_FNDM_INTERFACE__SRV__DETAIL__GRADE_POINT_AVERAGE__TYPE_SUPPORT_H_
#define ROS2_FNDM_INTERFACE__SRV__DETAIL__GRADE_POINT_AVERAGE__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "ros2_fndm_interface/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_ros2_fndm_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  ros2_fndm_interface,
  srv,
  GradePointAverage_Request
)();

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_ros2_fndm_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  ros2_fndm_interface,
  srv,
  GradePointAverage_Response
)();

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_ros2_fndm_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  ros2_fndm_interface,
  srv,
  GradePointAverage_Event
)();

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_ros2_fndm_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  ros2_fndm_interface,
  srv,
  GradePointAverage
)();

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_ros2_fndm_interface
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  ros2_fndm_interface,
  srv,
  GradePointAverage
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_ros2_fndm_interface
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  ros2_fndm_interface,
  srv,
  GradePointAverage
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // ROS2_FNDM_INTERFACE__SRV__DETAIL__GRADE_POINT_AVERAGE__TYPE_SUPPORT_H_
