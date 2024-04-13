// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_fndm_interface:msg/Student.idl
// generated code does not contain a copyright notice

#ifndef ROS2_FNDM_INTERFACE__MSG__DETAIL__STUDENT__STRUCT_H_
#define ROS2_FNDM_INTERFACE__MSG__DETAIL__STUDENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'first_name'
// Member 'last_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Student in the package ros2_fndm_interface.
typedef struct ros2_fndm_interface__msg__Student
{
  rosidl_runtime_c__String first_name;
  rosidl_runtime_c__String last_name;
  uint8_t age;
} ros2_fndm_interface__msg__Student;

// Struct for a sequence of ros2_fndm_interface__msg__Student.
typedef struct ros2_fndm_interface__msg__Student__Sequence
{
  ros2_fndm_interface__msg__Student * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_fndm_interface__msg__Student__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_FNDM_INTERFACE__MSG__DETAIL__STUDENT__STRUCT_H_
