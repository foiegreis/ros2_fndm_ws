// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_ros2_interface:msg/AddressBook.idl
// generated code does not contain a copyright notice

#ifndef MY_ROS2_INTERFACE__MSG__DETAIL__ADDRESS_BOOK__TRAITS_HPP_
#define MY_ROS2_INTERFACE__MSG__DETAIL__ADDRESS_BOOK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_ros2_interface/msg/detail/address_book__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const AddressBook & msg,
  std::ostream & out)
{
  out << "{";
  // member: first_name
  {
    out << "first_name: ";
    rosidl_generator_traits::value_to_yaml(msg.first_name, out);
    out << ", ";
  }

  // member: last_name
  {
    out << "last_name: ";
    rosidl_generator_traits::value_to_yaml(msg.last_name, out);
    out << ", ";
  }

  // member: phone_number
  {
    out << "phone_number: ";
    rosidl_generator_traits::value_to_yaml(msg.phone_number, out);
    out << ", ";
  }

  // member: phone_type
  {
    out << "phone_type: ";
    rosidl_generator_traits::value_to_yaml(msg.phone_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddressBook & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: first_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "first_name: ";
    rosidl_generator_traits::value_to_yaml(msg.first_name, out);
    out << "\n";
  }

  // member: last_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_name: ";
    rosidl_generator_traits::value_to_yaml(msg.last_name, out);
    out << "\n";
  }

  // member: phone_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "phone_number: ";
    rosidl_generator_traits::value_to_yaml(msg.phone_number, out);
    out << "\n";
  }

  // member: phone_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "phone_type: ";
    rosidl_generator_traits::value_to_yaml(msg.phone_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddressBook & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_ros2_interface

namespace rosidl_generator_traits
{

[[deprecated("use my_ros2_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_ros2_interface::msg::AddressBook & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_ros2_interface::msg::AddressBook & msg)
{
  return my_ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_ros2_interface::msg::AddressBook>()
{
  return "my_ros2_interface::msg::AddressBook";
}

template<>
inline const char * name<my_ros2_interface::msg::AddressBook>()
{
  return "my_ros2_interface/msg/AddressBook";
}

template<>
struct has_fixed_size<my_ros2_interface::msg::AddressBook>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_ros2_interface::msg::AddressBook>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_ros2_interface::msg::AddressBook>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_ROS2_INTERFACE__MSG__DETAIL__ADDRESS_BOOK__TRAITS_HPP_
