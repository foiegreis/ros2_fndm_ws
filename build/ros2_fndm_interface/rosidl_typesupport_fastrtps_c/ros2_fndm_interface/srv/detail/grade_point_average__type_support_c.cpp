// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2_fndm_interface:srv/GradePointAverage.idl
// generated code does not contain a copyright notice
#include "ros2_fndm_interface/srv/detail/grade_point_average__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2_fndm_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_fndm_interface/srv/detail/grade_point_average__struct.h"
#include "ros2_fndm_interface/srv/detail/grade_point_average__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GradePointAverage_Request__ros_msg_type = ros2_fndm_interface__srv__GradePointAverage_Request;

static bool _GradePointAverage_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GradePointAverage_Request__ros_msg_type * ros_message = static_cast<const _GradePointAverage_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: grade_1
  {
    cdr << ros_message->grade_1;
  }

  // Field name: grade_2
  {
    cdr << ros_message->grade_2;
  }

  // Field name: grade_3
  {
    cdr << ros_message->grade_3;
  }

  return true;
}

static bool _GradePointAverage_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GradePointAverage_Request__ros_msg_type * ros_message = static_cast<_GradePointAverage_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: grade_1
  {
    cdr >> ros_message->grade_1;
  }

  // Field name: grade_2
  {
    cdr >> ros_message->grade_2;
  }

  // Field name: grade_3
  {
    cdr >> ros_message->grade_3;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_fndm_interface
size_t get_serialized_size_ros2_fndm_interface__srv__GradePointAverage_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GradePointAverage_Request__ros_msg_type * ros_message = static_cast<const _GradePointAverage_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name grade_1
  {
    size_t item_size = sizeof(ros_message->grade_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name grade_2
  {
    size_t item_size = sizeof(ros_message->grade_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name grade_3
  {
    size_t item_size = sizeof(ros_message->grade_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GradePointAverage_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_fndm_interface__srv__GradePointAverage_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_fndm_interface
size_t max_serialized_size_ros2_fndm_interface__srv__GradePointAverage_Request(
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

  // member: grade_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: grade_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: grade_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros2_fndm_interface__srv__GradePointAverage_Request;
    is_plain =
      (
      offsetof(DataType, grade_3) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GradePointAverage_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros2_fndm_interface__srv__GradePointAverage_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GradePointAverage_Request = {
  "ros2_fndm_interface::srv",
  "GradePointAverage_Request",
  _GradePointAverage_Request__cdr_serialize,
  _GradePointAverage_Request__cdr_deserialize,
  _GradePointAverage_Request__get_serialized_size,
  _GradePointAverage_Request__max_serialized_size
};

static rosidl_message_type_support_t _GradePointAverage_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GradePointAverage_Request,
  get_message_typesupport_handle_function,
  &ros2_fndm_interface__srv__GradePointAverage_Request__get_type_hash,
  &ros2_fndm_interface__srv__GradePointAverage_Request__get_type_description,
  &ros2_fndm_interface__srv__GradePointAverage_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_fndm_interface, srv, GradePointAverage_Request)() {
  return &_GradePointAverage_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "ros2_fndm_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "ros2_fndm_interface/srv/detail/grade_point_average__struct.h"
// already included above
// #include "ros2_fndm_interface/srv/detail/grade_point_average__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GradePointAverage_Response__ros_msg_type = ros2_fndm_interface__srv__GradePointAverage_Response;

static bool _GradePointAverage_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GradePointAverage_Response__ros_msg_type * ros_message = static_cast<const _GradePointAverage_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: gpa
  {
    cdr << ros_message->gpa;
  }

  return true;
}

static bool _GradePointAverage_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GradePointAverage_Response__ros_msg_type * ros_message = static_cast<_GradePointAverage_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: gpa
  {
    cdr >> ros_message->gpa;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_fndm_interface
size_t get_serialized_size_ros2_fndm_interface__srv__GradePointAverage_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GradePointAverage_Response__ros_msg_type * ros_message = static_cast<const _GradePointAverage_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name gpa
  {
    size_t item_size = sizeof(ros_message->gpa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GradePointAverage_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_fndm_interface__srv__GradePointAverage_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_fndm_interface
size_t max_serialized_size_ros2_fndm_interface__srv__GradePointAverage_Response(
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

  // member: gpa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros2_fndm_interface__srv__GradePointAverage_Response;
    is_plain =
      (
      offsetof(DataType, gpa) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GradePointAverage_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros2_fndm_interface__srv__GradePointAverage_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GradePointAverage_Response = {
  "ros2_fndm_interface::srv",
  "GradePointAverage_Response",
  _GradePointAverage_Response__cdr_serialize,
  _GradePointAverage_Response__cdr_deserialize,
  _GradePointAverage_Response__get_serialized_size,
  _GradePointAverage_Response__max_serialized_size
};

static rosidl_message_type_support_t _GradePointAverage_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GradePointAverage_Response,
  get_message_typesupport_handle_function,
  &ros2_fndm_interface__srv__GradePointAverage_Response__get_type_hash,
  &ros2_fndm_interface__srv__GradePointAverage_Response__get_type_description,
  &ros2_fndm_interface__srv__GradePointAverage_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_fndm_interface, srv, GradePointAverage_Response)() {
  return &_GradePointAverage_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "ros2_fndm_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "ros2_fndm_interface/srv/detail/grade_point_average__struct.h"
// already included above
// #include "ros2_fndm_interface/srv/detail/grade_point_average__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions
size_t get_serialized_size_ros2_fndm_interface__srv__GradePointAverage_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros2_fndm_interface__srv__GradePointAverage_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_fndm_interface, srv, GradePointAverage_Request)();
size_t get_serialized_size_ros2_fndm_interface__srv__GradePointAverage_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros2_fndm_interface__srv__GradePointAverage_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_fndm_interface, srv, GradePointAverage_Response)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros2_fndm_interface
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros2_fndm_interface
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros2_fndm_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();


using _GradePointAverage_Event__ros_msg_type = ros2_fndm_interface__srv__GradePointAverage_Event;

static bool _GradePointAverage_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GradePointAverage_Event__ros_msg_type * ros_message = static_cast<const _GradePointAverage_Event__ros_msg_type *>(untyped_ros_message);
  // Field name: info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->info, cdr))
    {
      return false;
    }
  }

  // Field name: request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_fndm_interface, srv, GradePointAverage_Request
      )()->data);
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_fndm_interface, srv, GradePointAverage_Response
      )()->data);
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _GradePointAverage_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GradePointAverage_Event__ros_msg_type * ros_message = static_cast<_GradePointAverage_Event__ros_msg_type *>(untyped_ros_message);
  // Field name: info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->info))
    {
      return false;
    }
  }

  // Field name: request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_fndm_interface, srv, GradePointAverage_Request
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->request.data) {
      ros2_fndm_interface__srv__GradePointAverage_Request__Sequence__fini(&ros_message->request);
    }
    if (!ros2_fndm_interface__srv__GradePointAverage_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_fndm_interface, srv, GradePointAverage_Response
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      ros2_fndm_interface__srv__GradePointAverage_Response__Sequence__fini(&ros_message->response);
    }
    if (!ros2_fndm_interface__srv__GradePointAverage_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_fndm_interface
size_t get_serialized_size_ros2_fndm_interface__srv__GradePointAverage_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GradePointAverage_Event__ros_msg_type * ros_message = static_cast<const _GradePointAverage_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name info

  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);
  // field.name request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ros2_fndm_interface__srv__GradePointAverage_Request(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ros2_fndm_interface__srv__GradePointAverage_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GradePointAverage_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_fndm_interface__srv__GradePointAverage_Event(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_fndm_interface
size_t max_serialized_size_ros2_fndm_interface__srv__GradePointAverage_Event(
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

  // member: info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2_fndm_interface__srv__GradePointAverage_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2_fndm_interface__srv__GradePointAverage_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros2_fndm_interface__srv__GradePointAverage_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GradePointAverage_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros2_fndm_interface__srv__GradePointAverage_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GradePointAverage_Event = {
  "ros2_fndm_interface::srv",
  "GradePointAverage_Event",
  _GradePointAverage_Event__cdr_serialize,
  _GradePointAverage_Event__cdr_deserialize,
  _GradePointAverage_Event__get_serialized_size,
  _GradePointAverage_Event__max_serialized_size
};

static rosidl_message_type_support_t _GradePointAverage_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GradePointAverage_Event,
  get_message_typesupport_handle_function,
  &ros2_fndm_interface__srv__GradePointAverage_Event__get_type_hash,
  &ros2_fndm_interface__srv__GradePointAverage_Event__get_type_description,
  &ros2_fndm_interface__srv__GradePointAverage_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_fndm_interface, srv, GradePointAverage_Event)() {
  return &_GradePointAverage_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "ros2_fndm_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_fndm_interface/srv/grade_point_average.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GradePointAverage__callbacks = {
  "ros2_fndm_interface::srv",
  "GradePointAverage",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_fndm_interface, srv, GradePointAverage_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_fndm_interface, srv, GradePointAverage_Response)(),
};

static rosidl_service_type_support_t GradePointAverage__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GradePointAverage__callbacks,
  get_service_typesupport_handle_function,
  &_GradePointAverage_Request__type_support,
  &_GradePointAverage_Response__type_support,
  &_GradePointAverage_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ros2_fndm_interface,
    srv,
    GradePointAverage
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ros2_fndm_interface,
    srv,
    GradePointAverage
  ),
  &ros2_fndm_interface__srv__GradePointAverage__get_type_hash,
  &ros2_fndm_interface__srv__GradePointAverage__get_type_description,
  &ros2_fndm_interface__srv__GradePointAverage__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_fndm_interface, srv, GradePointAverage)() {
  return &GradePointAverage__handle;
}

#if defined(__cplusplus)
}
#endif
