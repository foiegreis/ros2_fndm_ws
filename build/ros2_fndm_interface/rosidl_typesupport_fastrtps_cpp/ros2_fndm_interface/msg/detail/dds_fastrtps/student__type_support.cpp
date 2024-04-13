// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros2_fndm_interface:msg/Student.idl
// generated code does not contain a copyright notice
#include "ros2_fndm_interface/msg/detail/student__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros2_fndm_interface/msg/detail/student__functions.h"
#include "ros2_fndm_interface/msg/detail/student__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ros2_fndm_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_fndm_interface
cdr_serialize(
  const ros2_fndm_interface::msg::Student & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: first_name
  cdr << ros_message.first_name;
  // Member: last_name
  cdr << ros_message.last_name;
  // Member: age
  cdr << ros_message.age;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_fndm_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2_fndm_interface::msg::Student & ros_message)
{
  // Member: first_name
  cdr >> ros_message.first_name;

  // Member: last_name
  cdr >> ros_message.last_name;

  // Member: age
  cdr >> ros_message.age;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_fndm_interface
get_serialized_size(
  const ros2_fndm_interface::msg::Student & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: first_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.first_name.size() + 1);
  // Member: last_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.last_name.size() + 1);
  // Member: age
  {
    size_t item_size = sizeof(ros_message.age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_fndm_interface
max_serialized_size_Student(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: first_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: last_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: age
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros2_fndm_interface::msg::Student;
    is_plain =
      (
      offsetof(DataType, age) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Student__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros2_fndm_interface::msg::Student *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Student__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2_fndm_interface::msg::Student *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Student__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2_fndm_interface::msg::Student *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Student__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Student(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Student__callbacks = {
  "ros2_fndm_interface::msg",
  "Student",
  _Student__cdr_serialize,
  _Student__cdr_deserialize,
  _Student__get_serialized_size,
  _Student__max_serialized_size
};

static rosidl_message_type_support_t _Student__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Student__callbacks,
  get_message_typesupport_handle_function,
  &ros2_fndm_interface__msg__Student__get_type_hash,
  &ros2_fndm_interface__msg__Student__get_type_description,
  &ros2_fndm_interface__msg__Student__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ros2_fndm_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ros2_fndm_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_fndm_interface::msg::Student>()
{
  return &ros2_fndm_interface::msg::typesupport_fastrtps_cpp::_Student__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_fndm_interface, msg, Student)() {
  return &ros2_fndm_interface::msg::typesupport_fastrtps_cpp::_Student__handle;
}

#ifdef __cplusplus
}
#endif
