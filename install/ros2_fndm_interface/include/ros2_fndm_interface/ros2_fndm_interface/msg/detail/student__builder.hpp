// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_fndm_interface:msg/Student.idl
// generated code does not contain a copyright notice

#ifndef ROS2_FNDM_INTERFACE__MSG__DETAIL__STUDENT__BUILDER_HPP_
#define ROS2_FNDM_INTERFACE__MSG__DETAIL__STUDENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_fndm_interface/msg/detail/student__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_fndm_interface
{

namespace msg
{

namespace builder
{

class Init_Student_age
{
public:
  explicit Init_Student_age(::ros2_fndm_interface::msg::Student & msg)
  : msg_(msg)
  {}
  ::ros2_fndm_interface::msg::Student age(::ros2_fndm_interface::msg::Student::_age_type arg)
  {
    msg_.age = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_fndm_interface::msg::Student msg_;
};

class Init_Student_last_name
{
public:
  explicit Init_Student_last_name(::ros2_fndm_interface::msg::Student & msg)
  : msg_(msg)
  {}
  Init_Student_age last_name(::ros2_fndm_interface::msg::Student::_last_name_type arg)
  {
    msg_.last_name = std::move(arg);
    return Init_Student_age(msg_);
  }

private:
  ::ros2_fndm_interface::msg::Student msg_;
};

class Init_Student_first_name
{
public:
  Init_Student_first_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Student_last_name first_name(::ros2_fndm_interface::msg::Student::_first_name_type arg)
  {
    msg_.first_name = std::move(arg);
    return Init_Student_last_name(msg_);
  }

private:
  ::ros2_fndm_interface::msg::Student msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_fndm_interface::msg::Student>()
{
  return ros2_fndm_interface::msg::builder::Init_Student_first_name();
}

}  // namespace ros2_fndm_interface

#endif  // ROS2_FNDM_INTERFACE__MSG__DETAIL__STUDENT__BUILDER_HPP_
