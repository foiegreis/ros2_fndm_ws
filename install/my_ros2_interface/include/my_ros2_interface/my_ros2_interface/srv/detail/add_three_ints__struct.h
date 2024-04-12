// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_ros2_interface:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef MY_ROS2_INTERFACE__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_
#define MY_ROS2_INTERFACE__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddThreeInts in the package my_ros2_interface.
typedef struct my_ros2_interface__srv__AddThreeInts_Request
{
  int64_t a;
  int64_t b;
  int64_t c;
} my_ros2_interface__srv__AddThreeInts_Request;

// Struct for a sequence of my_ros2_interface__srv__AddThreeInts_Request.
typedef struct my_ros2_interface__srv__AddThreeInts_Request__Sequence
{
  my_ros2_interface__srv__AddThreeInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ros2_interface__srv__AddThreeInts_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/AddThreeInts in the package my_ros2_interface.
typedef struct my_ros2_interface__srv__AddThreeInts_Response
{
  int64_t sum;
} my_ros2_interface__srv__AddThreeInts_Response;

// Struct for a sequence of my_ros2_interface__srv__AddThreeInts_Response.
typedef struct my_ros2_interface__srv__AddThreeInts_Response__Sequence
{
  my_ros2_interface__srv__AddThreeInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ros2_interface__srv__AddThreeInts_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  my_ros2_interface__srv__AddThreeInts_Event__request__MAX_SIZE = 1
};
// response
enum
{
  my_ros2_interface__srv__AddThreeInts_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/AddThreeInts in the package my_ros2_interface.
typedef struct my_ros2_interface__srv__AddThreeInts_Event
{
  service_msgs__msg__ServiceEventInfo info;
  my_ros2_interface__srv__AddThreeInts_Request__Sequence request;
  my_ros2_interface__srv__AddThreeInts_Response__Sequence response;
} my_ros2_interface__srv__AddThreeInts_Event;

// Struct for a sequence of my_ros2_interface__srv__AddThreeInts_Event.
typedef struct my_ros2_interface__srv__AddThreeInts_Event__Sequence
{
  my_ros2_interface__srv__AddThreeInts_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ros2_interface__srv__AddThreeInts_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROS2_INTERFACE__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_
