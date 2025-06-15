// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from phidgets_msgs:msg/StepperConfig.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "phidgets_msgs/msg/stepper_config.h"


#ifndef PHIDGETS_MSGS__MSG__DETAIL__STEPPER_CONFIG__STRUCT_H_
#define PHIDGETS_MSGS__MSG__DETAIL__STEPPER_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/StepperConfig in the package phidgets_msgs.
typedef struct phidgets_msgs__msg__StepperConfig
{
  int32_t min_failsafe_time;
  int32_t max_failsafe_time;
  double min_position;
  double max_position;
  double min_acceleration;
  double max_acceleration;
  double min_velocity_limit;
  double max_velocity_limit;
  double min_current_limit;
  double max_current_limit;
  int32_t min_data_interval;
  int32_t max_data_interval;
} phidgets_msgs__msg__StepperConfig;

// Struct for a sequence of phidgets_msgs__msg__StepperConfig.
typedef struct phidgets_msgs__msg__StepperConfig__Sequence
{
  phidgets_msgs__msg__StepperConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} phidgets_msgs__msg__StepperConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PHIDGETS_MSGS__MSG__DETAIL__STEPPER_CONFIG__STRUCT_H_
