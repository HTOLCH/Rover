// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from phidgets_msgs:msg/StepperCommand.idl
// generated code does not contain a copyright notice

#include "phidgets_msgs/msg/detail/stepper_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_phidgets_msgs
const rosidl_type_hash_t *
phidgets_msgs__msg__StepperCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc7, 0xd9, 0x18, 0x2d, 0x19, 0xdb, 0x3b, 0x06,
      0x2e, 0x19, 0xaf, 0xfb, 0xdd, 0x5f, 0xb3, 0xbe,
      0x23, 0x42, 0x1a, 0xfc, 0x1c, 0x3b, 0x6c, 0x2f,
      0xd6, 0x3e, 0xda, 0x4c, 0x19, 0x20, 0xb5, 0xf1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char phidgets_msgs__msg__StepperCommand__TYPE_NAME[] = "phidgets_msgs/msg/StepperCommand";

// Define type names, field names, and default values
static char phidgets_msgs__msg__StepperCommand__FIELD_NAME__mode[] = "mode";
static char phidgets_msgs__msg__StepperCommand__FIELD_NAME__target[] = "target";
static char phidgets_msgs__msg__StepperCommand__FIELD_NAME__velocity[] = "velocity";

static rosidl_runtime_c__type_description__Field phidgets_msgs__msg__StepperCommand__FIELDS[] = {
  {
    {phidgets_msgs__msg__StepperCommand__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {phidgets_msgs__msg__StepperCommand__FIELD_NAME__target, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {phidgets_msgs__msg__StepperCommand__FIELD_NAME__velocity, 8, 8},
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
phidgets_msgs__msg__StepperCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {phidgets_msgs__msg__StepperCommand__TYPE_NAME, 32, 32},
      {phidgets_msgs__msg__StepperCommand__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 CONTROL_MODE_DISENGAGED=255\n"
  "uint8 CONTROL_MODE_STEP=0\n"
  "uint8 CONTROL_MODE_RUN=1\n"
  "uint8 CONTROL_MODE_STOP=2\n"
  "\n"
  "uint8 mode\n"
  "float64 target\n"
  "float64 velocity";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
phidgets_msgs__msg__StepperCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {phidgets_msgs__msg__StepperCommand__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 155, 155},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
phidgets_msgs__msg__StepperCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *phidgets_msgs__msg__StepperCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
