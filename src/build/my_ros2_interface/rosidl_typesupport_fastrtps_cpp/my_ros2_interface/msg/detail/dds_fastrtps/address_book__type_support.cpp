// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from my_ros2_interface:msg/AddressBook.idl
// generated code does not contain a copyright notice
#include "my_ros2_interface/msg/detail/address_book__rosidl_typesupport_fastrtps_cpp.hpp"
#include "my_ros2_interface/msg/detail/address_book__functions.h"
#include "my_ros2_interface/msg/detail/address_book__struct.hpp"

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

namespace my_ros2_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_ros2_interface
cdr_serialize(
  const my_ros2_interface::msg::AddressBook & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: first_name
  cdr << ros_message.first_name;
  // Member: last_name
  cdr << ros_message.last_name;
  // Member: phone_number
  cdr << ros_message.phone_number;
  // Member: phone_type
  cdr << ros_message.phone_type;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_ros2_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_ros2_interface::msg::AddressBook & ros_message)
{
  // Member: first_name
  cdr >> ros_message.first_name;

  // Member: last_name
  cdr >> ros_message.last_name;

  // Member: phone_number
  cdr >> ros_message.phone_number;

  // Member: phone_type
  cdr >> ros_message.phone_type;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_ros2_interface
get_serialized_size(
  const my_ros2_interface::msg::AddressBook & ros_message,
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
  // Member: phone_number
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.phone_number.size() + 1);
  // Member: phone_type
  {
    size_t item_size = sizeof(ros_message.phone_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_ros2_interface
max_serialized_size_AddressBook(
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

  // Member: phone_number
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

  // Member: phone_type
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
    using DataType = my_ros2_interface::msg::AddressBook;
    is_plain =
      (
      offsetof(DataType, phone_type) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _AddressBook__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const my_ros2_interface::msg::AddressBook *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AddressBook__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_ros2_interface::msg::AddressBook *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AddressBook__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_ros2_interface::msg::AddressBook *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AddressBook__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_AddressBook(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _AddressBook__callbacks = {
  "my_ros2_interface::msg",
  "AddressBook",
  _AddressBook__cdr_serialize,
  _AddressBook__cdr_deserialize,
  _AddressBook__get_serialized_size,
  _AddressBook__max_serialized_size
};

static rosidl_message_type_support_t _AddressBook__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AddressBook__callbacks,
  get_message_typesupport_handle_function,
  &my_ros2_interface__msg__AddressBook__get_type_hash,
  &my_ros2_interface__msg__AddressBook__get_type_description,
  &my_ros2_interface__msg__AddressBook__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace my_ros2_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_my_ros2_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<my_ros2_interface::msg::AddressBook>()
{
  return &my_ros2_interface::msg::typesupport_fastrtps_cpp::_AddressBook__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_ros2_interface, msg, AddressBook)() {
  return &my_ros2_interface::msg::typesupport_fastrtps_cpp::_AddressBook__handle;
}

#ifdef __cplusplus
}
#endif
