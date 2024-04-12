// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_ros2_interface:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef MY_ROS2_INTERFACE__SRV__DETAIL__ADD_THREE_INTS__TRAITS_HPP_
#define MY_ROS2_INTERFACE__SRV__DETAIL__ADD_THREE_INTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_ros2_interface/srv/detail/add_three_ints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_ros2_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddThreeInts_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: c
  {
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddThreeInts_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddThreeInts_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_ros2_interface

namespace rosidl_generator_traits
{

[[deprecated("use my_ros2_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_ros2_interface::srv::AddThreeInts_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_ros2_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_ros2_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_ros2_interface::srv::AddThreeInts_Request & msg)
{
  return my_ros2_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_ros2_interface::srv::AddThreeInts_Request>()
{
  return "my_ros2_interface::srv::AddThreeInts_Request";
}

template<>
inline const char * name<my_ros2_interface::srv::AddThreeInts_Request>()
{
  return "my_ros2_interface/srv/AddThreeInts_Request";
}

template<>
struct has_fixed_size<my_ros2_interface::srv::AddThreeInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_ros2_interface::srv::AddThreeInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_ros2_interface::srv::AddThreeInts_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_ros2_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddThreeInts_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddThreeInts_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddThreeInts_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_ros2_interface

namespace rosidl_generator_traits
{

[[deprecated("use my_ros2_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_ros2_interface::srv::AddThreeInts_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_ros2_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_ros2_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_ros2_interface::srv::AddThreeInts_Response & msg)
{
  return my_ros2_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_ros2_interface::srv::AddThreeInts_Response>()
{
  return "my_ros2_interface::srv::AddThreeInts_Response";
}

template<>
inline const char * name<my_ros2_interface::srv::AddThreeInts_Response>()
{
  return "my_ros2_interface/srv/AddThreeInts_Response";
}

template<>
struct has_fixed_size<my_ros2_interface::srv::AddThreeInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_ros2_interface::srv::AddThreeInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_ros2_interface::srv::AddThreeInts_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace my_ros2_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddThreeInts_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddThreeInts_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddThreeInts_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_ros2_interface

namespace rosidl_generator_traits
{

[[deprecated("use my_ros2_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_ros2_interface::srv::AddThreeInts_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_ros2_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_ros2_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_ros2_interface::srv::AddThreeInts_Event & msg)
{
  return my_ros2_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_ros2_interface::srv::AddThreeInts_Event>()
{
  return "my_ros2_interface::srv::AddThreeInts_Event";
}

template<>
inline const char * name<my_ros2_interface::srv::AddThreeInts_Event>()
{
  return "my_ros2_interface/srv/AddThreeInts_Event";
}

template<>
struct has_fixed_size<my_ros2_interface::srv::AddThreeInts_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_ros2_interface::srv::AddThreeInts_Event>
  : std::integral_constant<bool, has_bounded_size<my_ros2_interface::srv::AddThreeInts_Request>::value && has_bounded_size<my_ros2_interface::srv::AddThreeInts_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<my_ros2_interface::srv::AddThreeInts_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_ros2_interface::srv::AddThreeInts>()
{
  return "my_ros2_interface::srv::AddThreeInts";
}

template<>
inline const char * name<my_ros2_interface::srv::AddThreeInts>()
{
  return "my_ros2_interface/srv/AddThreeInts";
}

template<>
struct has_fixed_size<my_ros2_interface::srv::AddThreeInts>
  : std::integral_constant<
    bool,
    has_fixed_size<my_ros2_interface::srv::AddThreeInts_Request>::value &&
    has_fixed_size<my_ros2_interface::srv::AddThreeInts_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_ros2_interface::srv::AddThreeInts>
  : std::integral_constant<
    bool,
    has_bounded_size<my_ros2_interface::srv::AddThreeInts_Request>::value &&
    has_bounded_size<my_ros2_interface::srv::AddThreeInts_Response>::value
  >
{
};

template<>
struct is_service<my_ros2_interface::srv::AddThreeInts>
  : std::true_type
{
};

template<>
struct is_service_request<my_ros2_interface::srv::AddThreeInts_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_ros2_interface::srv::AddThreeInts_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_ROS2_INTERFACE__SRV__DETAIL__ADD_THREE_INTS__TRAITS_HPP_
