// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros2_fndm_interface:msg/Student.idl
// generated code does not contain a copyright notice

#include "ros2_fndm_interface/msg/detail/student__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros2_fndm_interface
const rosidl_type_hash_t *
ros2_fndm_interface__msg__Student__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x55, 0xc7, 0x1d, 0x80, 0xfb, 0x65, 0x29, 0x4e,
      0xeb, 0x9d, 0xdf, 0x3e, 0x43, 0x7b, 0x14, 0x14,
      0xbe, 0xb3, 0x2f, 0x1e, 0x85, 0x95, 0xef, 0xea,
      0x14, 0xe5, 0x94, 0x76, 0x13, 0x05, 0x93, 0xee,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros2_fndm_interface__msg__Student__TYPE_NAME[] = "ros2_fndm_interface/msg/Student";

// Define type names, field names, and default values
static char ros2_fndm_interface__msg__Student__FIELD_NAME__first_name[] = "first_name";
static char ros2_fndm_interface__msg__Student__FIELD_NAME__last_name[] = "last_name";
static char ros2_fndm_interface__msg__Student__FIELD_NAME__age[] = "age";

static rosidl_runtime_c__type_description__Field ros2_fndm_interface__msg__Student__FIELDS[] = {
  {
    {ros2_fndm_interface__msg__Student__FIELD_NAME__first_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_fndm_interface__msg__Student__FIELD_NAME__last_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_fndm_interface__msg__Student__FIELD_NAME__age, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros2_fndm_interface__msg__Student__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros2_fndm_interface__msg__Student__TYPE_NAME, 31, 31},
      {ros2_fndm_interface__msg__Student__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string first_name\n"
  "string last_name\n"
  "int64 age";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros2_fndm_interface__msg__Student__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros2_fndm_interface__msg__Student__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 45, 45},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros2_fndm_interface__msg__Student__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros2_fndm_interface__msg__Student__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
