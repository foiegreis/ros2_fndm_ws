// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_ros2_interface:msg/AddressBook.idl
// generated code does not contain a copyright notice

#ifndef MY_ROS2_INTERFACE__MSG__DETAIL__ADDRESS_BOOK__BUILDER_HPP_
#define MY_ROS2_INTERFACE__MSG__DETAIL__ADDRESS_BOOK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_ros2_interface/msg/detail/address_book__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_ros2_interface
{

namespace msg
{

namespace builder
{

class Init_AddressBook_phone_type
{
public:
  explicit Init_AddressBook_phone_type(::my_ros2_interface::msg::AddressBook & msg)
  : msg_(msg)
  {}
  ::my_ros2_interface::msg::AddressBook phone_type(::my_ros2_interface::msg::AddressBook::_phone_type_type arg)
  {
    msg_.phone_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ros2_interface::msg::AddressBook msg_;
};

class Init_AddressBook_phone_number
{
public:
  explicit Init_AddressBook_phone_number(::my_ros2_interface::msg::AddressBook & msg)
  : msg_(msg)
  {}
  Init_AddressBook_phone_type phone_number(::my_ros2_interface::msg::AddressBook::_phone_number_type arg)
  {
    msg_.phone_number = std::move(arg);
    return Init_AddressBook_phone_type(msg_);
  }

private:
  ::my_ros2_interface::msg::AddressBook msg_;
};

class Init_AddressBook_last_name
{
public:
  explicit Init_AddressBook_last_name(::my_ros2_interface::msg::AddressBook & msg)
  : msg_(msg)
  {}
  Init_AddressBook_phone_number last_name(::my_ros2_interface::msg::AddressBook::_last_name_type arg)
  {
    msg_.last_name = std::move(arg);
    return Init_AddressBook_phone_number(msg_);
  }

private:
  ::my_ros2_interface::msg::AddressBook msg_;
};

class Init_AddressBook_first_name
{
public:
  Init_AddressBook_first_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddressBook_last_name first_name(::my_ros2_interface::msg::AddressBook::_first_name_type arg)
  {
    msg_.first_name = std::move(arg);
    return Init_AddressBook_last_name(msg_);
  }

private:
  ::my_ros2_interface::msg::AddressBook msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ros2_interface::msg::AddressBook>()
{
  return my_ros2_interface::msg::builder::Init_AddressBook_first_name();
}

}  // namespace my_ros2_interface

#endif  // MY_ROS2_INTERFACE__MSG__DETAIL__ADDRESS_BOOK__BUILDER_HPP_
