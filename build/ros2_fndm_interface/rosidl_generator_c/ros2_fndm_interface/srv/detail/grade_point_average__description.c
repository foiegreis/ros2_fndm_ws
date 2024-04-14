// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros2_fndm_interface:srv/GradePointAverage.idl
// generated code does not contain a copyright notice

#include "ros2_fndm_interface/srv/detail/grade_point_average__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros2_fndm_interface
const rosidl_type_hash_t *
ros2_fndm_interface__srv__GradePointAverage__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb7, 0xd2, 0x28, 0xc3, 0x52, 0xcf, 0xe0, 0xa0,
      0x93, 0xbf, 0x44, 0xd9, 0x93, 0x24, 0x78, 0x72,
      0x7e, 0xdb, 0xd5, 0xc1, 0xa6, 0x12, 0x75, 0x12,
      0xe0, 0x92, 0xce, 0xf6, 0xcb, 0xd7, 0x96, 0x42,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ros2_fndm_interface
const rosidl_type_hash_t *
ros2_fndm_interface__srv__GradePointAverage_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc1, 0xf1, 0x36, 0x68, 0xf4, 0x03, 0x27, 0xdf,
      0xa7, 0x3b, 0xae, 0x5c, 0x73, 0xff, 0x70, 0x97,
      0xac, 0xd6, 0xd5, 0x3a, 0xaf, 0xbb, 0x3d, 0x73,
      0x51, 0x57, 0x8a, 0xfb, 0xf1, 0x69, 0x05, 0xf6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ros2_fndm_interface
const rosidl_type_hash_t *
ros2_fndm_interface__srv__GradePointAverage_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x70, 0x59, 0xb6, 0x5c, 0x1f, 0xa5, 0xeb, 0xf9,
      0x72, 0x6f, 0x42, 0xb0, 0x08, 0x67, 0xe8, 0xd8,
      0xd9, 0x98, 0x14, 0x7a, 0x60, 0x04, 0x2f, 0x59,
      0x0a, 0xf5, 0xb2, 0x66, 0x60, 0x4a, 0x22, 0x10,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ros2_fndm_interface
const rosidl_type_hash_t *
ros2_fndm_interface__srv__GradePointAverage_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdb, 0xfa, 0x9e, 0x5c, 0x37, 0xef, 0x78, 0xe0,
      0x62, 0x1a, 0x68, 0xf8, 0x6d, 0x9d, 0xd0, 0xfc,
      0xba, 0x43, 0xe5, 0x73, 0xb5, 0xd3, 0x54, 0xf4,
      0x20, 0xf9, 0x62, 0x17, 0x31, 0x2f, 0x8c, 0x11,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

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

static char ros2_fndm_interface__srv__GradePointAverage__TYPE_NAME[] = "ros2_fndm_interface/srv/GradePointAverage";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char ros2_fndm_interface__srv__GradePointAverage_Event__TYPE_NAME[] = "ros2_fndm_interface/srv/GradePointAverage_Event";
static char ros2_fndm_interface__srv__GradePointAverage_Request__TYPE_NAME[] = "ros2_fndm_interface/srv/GradePointAverage_Request";
static char ros2_fndm_interface__srv__GradePointAverage_Response__TYPE_NAME[] = "ros2_fndm_interface/srv/GradePointAverage_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char ros2_fndm_interface__srv__GradePointAverage__FIELD_NAME__request_message[] = "request_message";
static char ros2_fndm_interface__srv__GradePointAverage__FIELD_NAME__response_message[] = "response_message";
static char ros2_fndm_interface__srv__GradePointAverage__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ros2_fndm_interface__srv__GradePointAverage__FIELDS[] = {
  {
    {ros2_fndm_interface__srv__GradePointAverage__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros2_fndm_interface__srv__GradePointAverage_Request__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_fndm_interface__srv__GradePointAverage__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros2_fndm_interface__srv__GradePointAverage_Response__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_fndm_interface__srv__GradePointAverage__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros2_fndm_interface__srv__GradePointAverage_Event__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ros2_fndm_interface__srv__GradePointAverage__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ros2_fndm_interface__srv__GradePointAverage_Event__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {ros2_fndm_interface__srv__GradePointAverage_Request__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {ros2_fndm_interface__srv__GradePointAverage_Response__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros2_fndm_interface__srv__GradePointAverage__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros2_fndm_interface__srv__GradePointAverage__TYPE_NAME, 41, 41},
      {ros2_fndm_interface__srv__GradePointAverage__FIELDS, 3, 3},
    },
    {ros2_fndm_interface__srv__GradePointAverage__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = ros2_fndm_interface__srv__GradePointAverage_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ros2_fndm_interface__srv__GradePointAverage_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ros2_fndm_interface__srv__GradePointAverage_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ros2_fndm_interface__srv__GradePointAverage_Request__FIELD_NAME__grade_1[] = "grade_1";
static char ros2_fndm_interface__srv__GradePointAverage_Request__FIELD_NAME__grade_2[] = "grade_2";
static char ros2_fndm_interface__srv__GradePointAverage_Request__FIELD_NAME__grade_3[] = "grade_3";

static rosidl_runtime_c__type_description__Field ros2_fndm_interface__srv__GradePointAverage_Request__FIELDS[] = {
  {
    {ros2_fndm_interface__srv__GradePointAverage_Request__FIELD_NAME__grade_1, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_fndm_interface__srv__GradePointAverage_Request__FIELD_NAME__grade_2, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_fndm_interface__srv__GradePointAverage_Request__FIELD_NAME__grade_3, 7, 7},
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
ros2_fndm_interface__srv__GradePointAverage_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros2_fndm_interface__srv__GradePointAverage_Request__TYPE_NAME, 49, 49},
      {ros2_fndm_interface__srv__GradePointAverage_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ros2_fndm_interface__srv__GradePointAverage_Response__FIELD_NAME__gpa[] = "gpa";

static rosidl_runtime_c__type_description__Field ros2_fndm_interface__srv__GradePointAverage_Response__FIELDS[] = {
  {
    {ros2_fndm_interface__srv__GradePointAverage_Response__FIELD_NAME__gpa, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros2_fndm_interface__srv__GradePointAverage_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros2_fndm_interface__srv__GradePointAverage_Response__TYPE_NAME, 50, 50},
      {ros2_fndm_interface__srv__GradePointAverage_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ros2_fndm_interface__srv__GradePointAverage_Event__FIELD_NAME__info[] = "info";
static char ros2_fndm_interface__srv__GradePointAverage_Event__FIELD_NAME__request[] = "request";
static char ros2_fndm_interface__srv__GradePointAverage_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ros2_fndm_interface__srv__GradePointAverage_Event__FIELDS[] = {
  {
    {ros2_fndm_interface__srv__GradePointAverage_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_fndm_interface__srv__GradePointAverage_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ros2_fndm_interface__srv__GradePointAverage_Request__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_fndm_interface__srv__GradePointAverage_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ros2_fndm_interface__srv__GradePointAverage_Response__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ros2_fndm_interface__srv__GradePointAverage_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ros2_fndm_interface__srv__GradePointAverage_Request__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {ros2_fndm_interface__srv__GradePointAverage_Response__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros2_fndm_interface__srv__GradePointAverage_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros2_fndm_interface__srv__GradePointAverage_Event__TYPE_NAME, 47, 47},
      {ros2_fndm_interface__srv__GradePointAverage_Event__FIELDS, 3, 3},
    },
    {ros2_fndm_interface__srv__GradePointAverage_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = ros2_fndm_interface__srv__GradePointAverage_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ros2_fndm_interface__srv__GradePointAverage_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 grade_1\n"
  "int64 grade_2\n"
  "int64 grade_3\n"
  "---\n"
  "float64 gpa";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros2_fndm_interface__srv__GradePointAverage__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros2_fndm_interface__srv__GradePointAverage__TYPE_NAME, 41, 41},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 58, 58},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ros2_fndm_interface__srv__GradePointAverage_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros2_fndm_interface__srv__GradePointAverage_Request__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ros2_fndm_interface__srv__GradePointAverage_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros2_fndm_interface__srv__GradePointAverage_Response__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ros2_fndm_interface__srv__GradePointAverage_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros2_fndm_interface__srv__GradePointAverage_Event__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros2_fndm_interface__srv__GradePointAverage__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros2_fndm_interface__srv__GradePointAverage__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *ros2_fndm_interface__srv__GradePointAverage_Event__get_individual_type_description_source(NULL);
    sources[3] = *ros2_fndm_interface__srv__GradePointAverage_Request__get_individual_type_description_source(NULL);
    sources[4] = *ros2_fndm_interface__srv__GradePointAverage_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros2_fndm_interface__srv__GradePointAverage_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros2_fndm_interface__srv__GradePointAverage_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros2_fndm_interface__srv__GradePointAverage_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros2_fndm_interface__srv__GradePointAverage_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros2_fndm_interface__srv__GradePointAverage_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros2_fndm_interface__srv__GradePointAverage_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *ros2_fndm_interface__srv__GradePointAverage_Request__get_individual_type_description_source(NULL);
    sources[3] = *ros2_fndm_interface__srv__GradePointAverage_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
