// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_fndm_interface:msg/Student.idl
// generated code does not contain a copyright notice

#ifndef ROS2_FNDM_INTERFACE__MSG__DETAIL__STUDENT__STRUCT_HPP_
#define ROS2_FNDM_INTERFACE__MSG__DETAIL__STUDENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_fndm_interface__msg__Student __attribute__((deprecated))
#else
# define DEPRECATED__ros2_fndm_interface__msg__Student __declspec(deprecated)
#endif

namespace ros2_fndm_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Student_
{
  using Type = Student_<ContainerAllocator>;

  explicit Student_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->first_name = "";
      this->last_name = "";
      this->age = 0ll;
    }
  }

  explicit Student_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : first_name(_alloc),
    last_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->first_name = "";
      this->last_name = "";
      this->age = 0ll;
    }
  }

  // field types and members
  using _first_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _first_name_type first_name;
  using _last_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _last_name_type last_name;
  using _age_type =
    int64_t;
  _age_type age;

  // setters for named parameter idiom
  Type & set__first_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->first_name = _arg;
    return *this;
  }
  Type & set__last_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->last_name = _arg;
    return *this;
  }
  Type & set__age(
    const int64_t & _arg)
  {
    this->age = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_fndm_interface::msg::Student_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_fndm_interface::msg::Student_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_fndm_interface::msg::Student_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_fndm_interface::msg::Student_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_fndm_interface::msg::Student_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_fndm_interface::msg::Student_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_fndm_interface::msg::Student_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_fndm_interface::msg::Student_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_fndm_interface::msg::Student_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_fndm_interface::msg::Student_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_fndm_interface__msg__Student
    std::shared_ptr<ros2_fndm_interface::msg::Student_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_fndm_interface__msg__Student
    std::shared_ptr<ros2_fndm_interface::msg::Student_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Student_ & other) const
  {
    if (this->first_name != other.first_name) {
      return false;
    }
    if (this->last_name != other.last_name) {
      return false;
    }
    if (this->age != other.age) {
      return false;
    }
    return true;
  }
  bool operator!=(const Student_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Student_

// alias to use template instance with default allocator
using Student =
  ros2_fndm_interface::msg::Student_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_fndm_interface

#endif  // ROS2_FNDM_INTERFACE__MSG__DETAIL__STUDENT__STRUCT_HPP_
