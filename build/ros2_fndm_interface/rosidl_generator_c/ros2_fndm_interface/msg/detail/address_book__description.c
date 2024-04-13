// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros2_fndm_interface:msg/AddressBook.idl
// generated code does not contain a copyright notice

#include "ros2_fndm_interface/msg/detail/address_book__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros2_fndm_interface
const rosidl_type_hash_t *
ros2_fndm_interface__msg__AddressBook__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x79, 0xd0, 0x15, 0x86, 0xbb, 0x04, 0x61, 0x73,
      0xb5, 0x24, 0xa6, 0x3c, 0xe3, 0x5c, 0x86, 0x9a,
      0xc3, 0xe5, 0x98, 0xfc, 0x14, 0xfd, 0xd3, 0x39,
      0x85, 0x19, 0x02, 0x88, 0x76, 0xb5, 0xec, 0x5d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros2_fndm_interface__msg__AddressBook__TYPE_NAME[] = "ros2_fndm_interface/msg/AddressBook";

// Define type names, field names, and default values
static char ros2_fndm_interface__msg__AddressBook__FIELD_NAME__first_name[] = "first_name";
static char ros2_fndm_interface__msg__AddressBook__FIELD_NAME__last_name[] = "last_name";
static char ros2_fndm_interface__msg__AddressBook__FIELD_NAME__phone_number[] = "phone_number";
static char ros2_fndm_interface__msg__AddressBook__FIELD_NAME__phone_type[] = "phone_type";

static rosidl_runtime_c__type_description__Field ros2_fndm_interface__msg__AddressBook__FIELDS[] = {
  {
    {ros2_fndm_interface__msg__AddressBook__FIELD_NAME__first_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_fndm_interface__msg__AddressBook__FIELD_NAME__last_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_fndm_interface__msg__AddressBook__FIELD_NAME__phone_number, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_fndm_interface__msg__AddressBook__FIELD_NAME__phone_type, 10, 10},
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
ros2_fndm_interface__msg__AddressBook__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros2_fndm_interface__msg__AddressBook__TYPE_NAME, 35, 35},
      {ros2_fndm_interface__msg__AddressBook__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 PHONE_TYPE_HOME=0\n"
  "uint8 PHONE_TYPE_WORK=1\n"
  "uint8 PHONE_TYPE_MOBILE=2\n"
  "\n"
  "string first_name\n"
  "string last_name\n"
  "string phone_number\n"
  "uint8 phone_type";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros2_fndm_interface__msg__AddressBook__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros2_fndm_interface__msg__AddressBook__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 146, 146},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros2_fndm_interface__msg__AddressBook__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros2_fndm_interface__msg__AddressBook__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
