// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros2_fndm_interface:msg/Student.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros2_fndm_interface/msg/detail/student__functions.h"
#include "ros2_fndm_interface/msg/detail/student__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ros2_fndm_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Student_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros2_fndm_interface::msg::Student(_init);
}

void Student_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros2_fndm_interface::msg::Student *>(message_memory);
  typed_message->~Student();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Student_message_member_array[3] = {
  {
    "first_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_fndm_interface::msg::Student, first_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "last_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_fndm_interface::msg::Student, last_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "age",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_fndm_interface::msg::Student, age),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Student_message_members = {
  "ros2_fndm_interface::msg",  // message namespace
  "Student",  // message name
  3,  // number of fields
  sizeof(ros2_fndm_interface::msg::Student),
  Student_message_member_array,  // message members
  Student_init_function,  // function to initialize message memory (memory has to be allocated)
  Student_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Student_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Student_message_members,
  get_message_typesupport_handle_function,
  &ros2_fndm_interface__msg__Student__get_type_hash,
  &ros2_fndm_interface__msg__Student__get_type_description,
  &ros2_fndm_interface__msg__Student__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ros2_fndm_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_fndm_interface::msg::Student>()
{
  return &::ros2_fndm_interface::msg::rosidl_typesupport_introspection_cpp::Student_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_fndm_interface, msg, Student)() {
  return &::ros2_fndm_interface::msg::rosidl_typesupport_introspection_cpp::Student_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
