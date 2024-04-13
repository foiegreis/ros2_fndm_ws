// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_fndm_interface:srv/GradePointAverage.idl
// generated code does not contain a copyright notice

#ifndef ROS2_FNDM_INTERFACE__SRV__DETAIL__GRADE_POINT_AVERAGE__TRAITS_HPP_
#define ROS2_FNDM_INTERFACE__SRV__DETAIL__GRADE_POINT_AVERAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_fndm_interface/srv/detail/grade_point_average__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_fndm_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const GradePointAverage_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: grade_1
  {
    out << "grade_1: ";
    rosidl_generator_traits::value_to_yaml(msg.grade_1, out);
    out << ", ";
  }

  // member: grade_2
  {
    out << "grade_2: ";
    rosidl_generator_traits::value_to_yaml(msg.grade_2, out);
    out << ", ";
  }

  // member: grade_3
  {
    out << "grade_3: ";
    rosidl_generator_traits::value_to_yaml(msg.grade_3, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GradePointAverage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: grade_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grade_1: ";
    rosidl_generator_traits::value_to_yaml(msg.grade_1, out);
    out << "\n";
  }

  // member: grade_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grade_2: ";
    rosidl_generator_traits::value_to_yaml(msg.grade_2, out);
    out << "\n";
  }

  // member: grade_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grade_3: ";
    rosidl_generator_traits::value_to_yaml(msg.grade_3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GradePointAverage_Request & msg, bool use_flow_style = false)
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

}  // namespace ros2_fndm_interface

namespace rosidl_generator_traits
{

[[deprecated("use ros2_fndm_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_fndm_interface::srv::GradePointAverage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_fndm_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_fndm_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros2_fndm_interface::srv::GradePointAverage_Request & msg)
{
  return ros2_fndm_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_fndm_interface::srv::GradePointAverage_Request>()
{
  return "ros2_fndm_interface::srv::GradePointAverage_Request";
}

template<>
inline const char * name<ros2_fndm_interface::srv::GradePointAverage_Request>()
{
  return "ros2_fndm_interface/srv/GradePointAverage_Request";
}

template<>
struct has_fixed_size<ros2_fndm_interface::srv::GradePointAverage_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_fndm_interface::srv::GradePointAverage_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_fndm_interface::srv::GradePointAverage_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros2_fndm_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const GradePointAverage_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: gpa
  {
    out << "gpa: ";
    rosidl_generator_traits::value_to_yaml(msg.gpa, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GradePointAverage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gpa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gpa: ";
    rosidl_generator_traits::value_to_yaml(msg.gpa, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GradePointAverage_Response & msg, bool use_flow_style = false)
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

}  // namespace ros2_fndm_interface

namespace rosidl_generator_traits
{

[[deprecated("use ros2_fndm_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_fndm_interface::srv::GradePointAverage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_fndm_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_fndm_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros2_fndm_interface::srv::GradePointAverage_Response & msg)
{
  return ros2_fndm_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_fndm_interface::srv::GradePointAverage_Response>()
{
  return "ros2_fndm_interface::srv::GradePointAverage_Response";
}

template<>
inline const char * name<ros2_fndm_interface::srv::GradePointAverage_Response>()
{
  return "ros2_fndm_interface/srv/GradePointAverage_Response";
}

template<>
struct has_fixed_size<ros2_fndm_interface::srv::GradePointAverage_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_fndm_interface::srv::GradePointAverage_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_fndm_interface::srv::GradePointAverage_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace ros2_fndm_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const GradePointAverage_Event & msg,
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
  const GradePointAverage_Event & msg,
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

inline std::string to_yaml(const GradePointAverage_Event & msg, bool use_flow_style = false)
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

}  // namespace ros2_fndm_interface

namespace rosidl_generator_traits
{

[[deprecated("use ros2_fndm_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_fndm_interface::srv::GradePointAverage_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_fndm_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_fndm_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros2_fndm_interface::srv::GradePointAverage_Event & msg)
{
  return ros2_fndm_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_fndm_interface::srv::GradePointAverage_Event>()
{
  return "ros2_fndm_interface::srv::GradePointAverage_Event";
}

template<>
inline const char * name<ros2_fndm_interface::srv::GradePointAverage_Event>()
{
  return "ros2_fndm_interface/srv/GradePointAverage_Event";
}

template<>
struct has_fixed_size<ros2_fndm_interface::srv::GradePointAverage_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_fndm_interface::srv::GradePointAverage_Event>
  : std::integral_constant<bool, has_bounded_size<ros2_fndm_interface::srv::GradePointAverage_Request>::value && has_bounded_size<ros2_fndm_interface::srv::GradePointAverage_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<ros2_fndm_interface::srv::GradePointAverage_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_fndm_interface::srv::GradePointAverage>()
{
  return "ros2_fndm_interface::srv::GradePointAverage";
}

template<>
inline const char * name<ros2_fndm_interface::srv::GradePointAverage>()
{
  return "ros2_fndm_interface/srv/GradePointAverage";
}

template<>
struct has_fixed_size<ros2_fndm_interface::srv::GradePointAverage>
  : std::integral_constant<
    bool,
    has_fixed_size<ros2_fndm_interface::srv::GradePointAverage_Request>::value &&
    has_fixed_size<ros2_fndm_interface::srv::GradePointAverage_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros2_fndm_interface::srv::GradePointAverage>
  : std::integral_constant<
    bool,
    has_bounded_size<ros2_fndm_interface::srv::GradePointAverage_Request>::value &&
    has_bounded_size<ros2_fndm_interface::srv::GradePointAverage_Response>::value
  >
{
};

template<>
struct is_service<ros2_fndm_interface::srv::GradePointAverage>
  : std::true_type
{
};

template<>
struct is_service_request<ros2_fndm_interface::srv::GradePointAverage_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros2_fndm_interface::srv::GradePointAverage_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS2_FNDM_INTERFACE__SRV__DETAIL__GRADE_POINT_AVERAGE__TRAITS_HPP_
