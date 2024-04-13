// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_fndm_interface:msg/AddressBook.idl
// generated code does not contain a copyright notice

#ifndef ROS2_FNDM_INTERFACE__MSG__DETAIL__ADDRESS_BOOK__BUILDER_HPP_
#define ROS2_FNDM_INTERFACE__MSG__DETAIL__ADDRESS_BOOK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_fndm_interface/msg/detail/address_book__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_fndm_interface
{

namespace msg
{

namespace builder
{

class Init_AddressBook_phone_type
{
public:
  explicit Init_AddressBook_phone_type(::ros2_fndm_interface::msg::AddressBook & msg)
  : msg_(msg)
  {}
  ::ros2_fndm_interface::msg::AddressBook phone_type(::ros2_fndm_interface::msg::AddressBook::_phone_type_type arg)
  {
    msg_.phone_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_fndm_interface::msg::AddressBook msg_;
};

class Init_AddressBook_phone_number
{
public:
  explicit Init_AddressBook_phone_number(::ros2_fndm_interface::msg::AddressBook & msg)
  : msg_(msg)
  {}
  Init_AddressBook_phone_type phone_number(::ros2_fndm_interface::msg::AddressBook::_phone_number_type arg)
  {
    msg_.phone_number = std::move(arg);
    return Init_AddressBook_phone_type(msg_);
  }

private:
  ::ros2_fndm_interface::msg::AddressBook msg_;
};

class Init_AddressBook_last_name
{
public:
  explicit Init_AddressBook_last_name(::ros2_fndm_interface::msg::AddressBook & msg)
  : msg_(msg)
  {}
  Init_AddressBook_phone_number last_name(::ros2_fndm_interface::msg::AddressBook::_last_name_type arg)
  {
    msg_.last_name = std::move(arg);
    return Init_AddressBook_phone_number(msg_);
  }

private:
  ::ros2_fndm_interface::msg::AddressBook msg_;
};

class Init_AddressBook_first_name
{
public:
  Init_AddressBook_first_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddressBook_last_name first_name(::ros2_fndm_interface::msg::AddressBook::_first_name_type arg)
  {
    msg_.first_name = std::move(arg);
    return Init_AddressBook_last_name(msg_);
  }

private:
  ::ros2_fndm_interface::msg::AddressBook msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_fndm_interface::msg::AddressBook>()
{
  return ros2_fndm_interface::msg::builder::Init_AddressBook_first_name();
}

}  // namespace ros2_fndm_interface

#endif  // ROS2_FNDM_INTERFACE__MSG__DETAIL__ADDRESS_BOOK__BUILDER_HPP_
