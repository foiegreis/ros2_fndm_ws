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
      0xe2, 0xef, 0xc2, 0xf3, 0x8e, 0x9f, 0xf6, 0x4e,
      0xac, 0xc6, 0xbb, 0x04, 0xdc, 0xb8, 0xf6, 0x87,
      0xe4, 0x9d, 0x8e, 0xc9, 0xc0, 0xf2, 0x71, 0x7c,
      0xc8, 0xaa, 0xe0, 0xa3, 0xaf, 0xf7, 0x99, 0x03,
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
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
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
  "uint8 age";

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
