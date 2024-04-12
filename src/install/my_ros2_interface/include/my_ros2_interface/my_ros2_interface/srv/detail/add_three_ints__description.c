// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_ros2_interface:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#include "my_ros2_interface/srv/detail/add_three_ints__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_ros2_interface
const rosidl_type_hash_t *
my_ros2_interface__srv__AddThreeInts__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x96, 0x9e, 0x8e, 0xf6, 0xae, 0xbb, 0x4d, 0x50,
      0xeb, 0x26, 0x17, 0x6c, 0x1d, 0x58, 0xc2, 0x2d,
      0x27, 0x42, 0xe9, 0xa0, 0x31, 0x7f, 0x9c, 0x81,
      0x07, 0x1e, 0xf7, 0x64, 0xd6, 0xbd, 0x99, 0x4e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_my_ros2_interface
const rosidl_type_hash_t *
my_ros2_interface__srv__AddThreeInts_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x36, 0xad, 0x6c, 0xbd, 0xa5, 0xf0, 0x0e, 0x7c,
      0xae, 0xfb, 0xc9, 0x46, 0x71, 0x46, 0xac, 0xe5,
      0x89, 0x95, 0x92, 0x97, 0x03, 0x10, 0x3b, 0x52,
      0x5e, 0x1f, 0x4c, 0x2f, 0x8f, 0xc0, 0xc0, 0x4b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_my_ros2_interface
const rosidl_type_hash_t *
my_ros2_interface__srv__AddThreeInts_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7e, 0x9e, 0xec, 0x69, 0x85, 0x17, 0x8d, 0xfb,
      0xc5, 0xd8, 0x9f, 0xf9, 0x52, 0x5e, 0xec, 0xf3,
      0x3c, 0x74, 0xc0, 0x6c, 0x49, 0x8a, 0x28, 0xc3,
      0x78, 0xb0, 0x54, 0x8d, 0xdb, 0xb3, 0x90, 0x59,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_my_ros2_interface
const rosidl_type_hash_t *
my_ros2_interface__srv__AddThreeInts_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x08, 0xda, 0xbc, 0xc6, 0xae, 0x82, 0x71, 0x6c,
      0x53, 0xba, 0x15, 0x17, 0x7e, 0x69, 0x6b, 0xfe,
      0x02, 0x73, 0xbf, 0x15, 0x77, 0x66, 0xb4, 0xcb,
      0x62, 0xd3, 0xa4, 0xea, 0x25, 0x33, 0x98, 0x55,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char my_ros2_interface__srv__AddThreeInts__TYPE_NAME[] = "my_ros2_interface/srv/AddThreeInts";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char my_ros2_interface__srv__AddThreeInts_Event__TYPE_NAME[] = "my_ros2_interface/srv/AddThreeInts_Event";
static char my_ros2_interface__srv__AddThreeInts_Request__TYPE_NAME[] = "my_ros2_interface/srv/AddThreeInts_Request";
static char my_ros2_interface__srv__AddThreeInts_Response__TYPE_NAME[] = "my_ros2_interface/srv/AddThreeInts_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char my_ros2_interface__srv__AddThreeInts__FIELD_NAME__request_message[] = "request_message";
static char my_ros2_interface__srv__AddThreeInts__FIELD_NAME__response_message[] = "response_message";
static char my_ros2_interface__srv__AddThreeInts__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field my_ros2_interface__srv__AddThreeInts__FIELDS[] = {
  {
    {my_ros2_interface__srv__AddThreeInts__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {my_ros2_interface__srv__AddThreeInts_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {my_ros2_interface__srv__AddThreeInts__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {my_ros2_interface__srv__AddThreeInts_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {my_ros2_interface__srv__AddThreeInts__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {my_ros2_interface__srv__AddThreeInts_Event__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription my_ros2_interface__srv__AddThreeInts__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {my_ros2_interface__srv__AddThreeInts_Event__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {my_ros2_interface__srv__AddThreeInts_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {my_ros2_interface__srv__AddThreeInts_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_ros2_interface__srv__AddThreeInts__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_ros2_interface__srv__AddThreeInts__TYPE_NAME, 34, 34},
      {my_ros2_interface__srv__AddThreeInts__FIELDS, 3, 3},
    },
    {my_ros2_interface__srv__AddThreeInts__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = my_ros2_interface__srv__AddThreeInts_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = my_ros2_interface__srv__AddThreeInts_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = my_ros2_interface__srv__AddThreeInts_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char my_ros2_interface__srv__AddThreeInts_Request__FIELD_NAME__a[] = "a";
static char my_ros2_interface__srv__AddThreeInts_Request__FIELD_NAME__b[] = "b";
static char my_ros2_interface__srv__AddThreeInts_Request__FIELD_NAME__c[] = "c";

static rosidl_runtime_c__type_description__Field my_ros2_interface__srv__AddThreeInts_Request__FIELDS[] = {
  {
    {my_ros2_interface__srv__AddThreeInts_Request__FIELD_NAME__a, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_ros2_interface__srv__AddThreeInts_Request__FIELD_NAME__b, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_ros2_interface__srv__AddThreeInts_Request__FIELD_NAME__c, 1, 1},
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
my_ros2_interface__srv__AddThreeInts_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_ros2_interface__srv__AddThreeInts_Request__TYPE_NAME, 42, 42},
      {my_ros2_interface__srv__AddThreeInts_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char my_ros2_interface__srv__AddThreeInts_Response__FIELD_NAME__sum[] = "sum";

static rosidl_runtime_c__type_description__Field my_ros2_interface__srv__AddThreeInts_Response__FIELDS[] = {
  {
    {my_ros2_interface__srv__AddThreeInts_Response__FIELD_NAME__sum, 3, 3},
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
my_ros2_interface__srv__AddThreeInts_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_ros2_interface__srv__AddThreeInts_Response__TYPE_NAME, 43, 43},
      {my_ros2_interface__srv__AddThreeInts_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char my_ros2_interface__srv__AddThreeInts_Event__FIELD_NAME__info[] = "info";
static char my_ros2_interface__srv__AddThreeInts_Event__FIELD_NAME__request[] = "request";
static char my_ros2_interface__srv__AddThreeInts_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field my_ros2_interface__srv__AddThreeInts_Event__FIELDS[] = {
  {
    {my_ros2_interface__srv__AddThreeInts_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {my_ros2_interface__srv__AddThreeInts_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {my_ros2_interface__srv__AddThreeInts_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {my_ros2_interface__srv__AddThreeInts_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {my_ros2_interface__srv__AddThreeInts_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription my_ros2_interface__srv__AddThreeInts_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {my_ros2_interface__srv__AddThreeInts_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {my_ros2_interface__srv__AddThreeInts_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_ros2_interface__srv__AddThreeInts_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_ros2_interface__srv__AddThreeInts_Event__TYPE_NAME, 40, 40},
      {my_ros2_interface__srv__AddThreeInts_Event__FIELDS, 3, 3},
    },
    {my_ros2_interface__srv__AddThreeInts_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = my_ros2_interface__srv__AddThreeInts_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = my_ros2_interface__srv__AddThreeInts_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 a\n"
  "int64 b\n"
  "int64 c\n"
  "---\n"
  "int64 sum";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_ros2_interface__srv__AddThreeInts__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_ros2_interface__srv__AddThreeInts__TYPE_NAME, 34, 34},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 37, 37},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
my_ros2_interface__srv__AddThreeInts_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_ros2_interface__srv__AddThreeInts_Request__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
my_ros2_interface__srv__AddThreeInts_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_ros2_interface__srv__AddThreeInts_Response__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
my_ros2_interface__srv__AddThreeInts_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_ros2_interface__srv__AddThreeInts_Event__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_ros2_interface__srv__AddThreeInts__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_ros2_interface__srv__AddThreeInts__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *my_ros2_interface__srv__AddThreeInts_Event__get_individual_type_description_source(NULL);
    sources[3] = *my_ros2_interface__srv__AddThreeInts_Request__get_individual_type_description_source(NULL);
    sources[4] = *my_ros2_interface__srv__AddThreeInts_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_ros2_interface__srv__AddThreeInts_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_ros2_interface__srv__AddThreeInts_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_ros2_interface__srv__AddThreeInts_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_ros2_interface__srv__AddThreeInts_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_ros2_interface__srv__AddThreeInts_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_ros2_interface__srv__AddThreeInts_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *my_ros2_interface__srv__AddThreeInts_Request__get_individual_type_description_source(NULL);
    sources[3] = *my_ros2_interface__srv__AddThreeInts_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
