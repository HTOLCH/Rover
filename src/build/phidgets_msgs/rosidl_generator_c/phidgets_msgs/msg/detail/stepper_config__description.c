// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from phidgets_msgs:msg/StepperConfig.idl
// generated code does not contain a copyright notice

#include "phidgets_msgs/msg/detail/stepper_config__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_phidgets_msgs
const rosidl_type_hash_t *
phidgets_msgs__msg__StepperConfig__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd1, 0x28, 0xc8, 0xd2, 0x6e, 0x1e, 0xb5, 0x96,
      0x8e, 0x2f, 0x70, 0x3f, 0x47, 0x4a, 0xee, 0xc9,
      0xc4, 0x66, 0xd7, 0x57, 0x1f, 0xcd, 0x7b, 0x82,
      0x7c, 0x34, 0xc8, 0x08, 0x26, 0x46, 0x9e, 0xd8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char phidgets_msgs__msg__StepperConfig__TYPE_NAME[] = "phidgets_msgs/msg/StepperConfig";

// Define type names, field names, and default values
static char phidgets_msgs__msg__StepperConfig__FIELD_NAME__min_failsafe_time[] = "min_failsafe_time";
static char phidgets_msgs__msg__StepperConfig__FIELD_NAME__max_failsafe_time[] = "max_failsafe_time";
static char phidgets_msgs__msg__StepperConfig__FIELD_NAME__min_position[] = "min_position";
static char phidgets_msgs__msg__StepperConfig__FIELD_NAME__max_position[] = "max_position";
static char phidgets_msgs__msg__StepperConfig__FIELD_NAME__min_acceleration[] = "min_acceleration";
static char phidgets_msgs__msg__StepperConfig__FIELD_NAME__max_acceleration[] = "max_acceleration";
static char phidgets_msgs__msg__StepperConfig__FIELD_NAME__min_velocity_limit[] = "min_velocity_limit";
static char phidgets_msgs__msg__StepperConfig__FIELD_NAME__max_velocity_limit[] = "max_velocity_limit";
static char phidgets_msgs__msg__StepperConfig__FIELD_NAME__min_current_limit[] = "min_current_limit";
static char phidgets_msgs__msg__StepperConfig__FIELD_NAME__max_current_limit[] = "max_current_limit";
static char phidgets_msgs__msg__StepperConfig__FIELD_NAME__min_data_interval[] = "min_data_interval";
static char phidgets_msgs__msg__StepperConfig__FIELD_NAME__max_data_interval[] = "max_data_interval";

static rosidl_runtime_c__type_description__Field phidgets_msgs__msg__StepperConfig__FIELDS[] = {
  {
    {phidgets_msgs__msg__StepperConfig__FIELD_NAME__min_failsafe_time, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {phidgets_msgs__msg__StepperConfig__FIELD_NAME__max_failsafe_time, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {phidgets_msgs__msg__StepperConfig__FIELD_NAME__min_position, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {phidgets_msgs__msg__StepperConfig__FIELD_NAME__max_position, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {phidgets_msgs__msg__StepperConfig__FIELD_NAME__min_acceleration, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {phidgets_msgs__msg__StepperConfig__FIELD_NAME__max_acceleration, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {phidgets_msgs__msg__StepperConfig__FIELD_NAME__min_velocity_limit, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {phidgets_msgs__msg__StepperConfig__FIELD_NAME__max_velocity_limit, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {phidgets_msgs__msg__StepperConfig__FIELD_NAME__min_current_limit, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {phidgets_msgs__msg__StepperConfig__FIELD_NAME__max_current_limit, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {phidgets_msgs__msg__StepperConfig__FIELD_NAME__min_data_interval, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {phidgets_msgs__msg__StepperConfig__FIELD_NAME__max_data_interval, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
phidgets_msgs__msg__StepperConfig__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {phidgets_msgs__msg__StepperConfig__TYPE_NAME, 31, 31},
      {phidgets_msgs__msg__StepperConfig__FIELDS, 12, 12},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 min_failsafe_time\n"
  "int32 max_failsafe_time\n"
  "\n"
  "float64 min_position\n"
  "float64 max_position\n"
  "\n"
  "float64 min_acceleration\n"
  "float64 max_acceleration\n"
  "\n"
  "float64 min_velocity_limit\n"
  "float64 max_velocity_limit\n"
  "\n"
  "float64 min_current_limit\n"
  "float64 max_current_limit\n"
  "\n"
  "int32 min_data_interval\n"
  "int32 max_data_interval";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
phidgets_msgs__msg__StepperConfig__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {phidgets_msgs__msg__StepperConfig__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 299, 299},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
phidgets_msgs__msg__StepperConfig__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *phidgets_msgs__msg__StepperConfig__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
