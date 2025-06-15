// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from phidgets_msgs:msg/StepperState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "phidgets_msgs/msg/stepper_state.h"


#ifndef PHIDGETS_MSGS__MSG__DETAIL__STEPPER_STATE__STRUCT_H_
#define PHIDGETS_MSGS__MSG__DETAIL__STEPPER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/StepperState in the package phidgets_msgs.
typedef struct phidgets_msgs__msg__StepperState
{
  std_msgs__msg__Header header;
  bool is_moving;
  bool is_engaged;
  double target_position;
} phidgets_msgs__msg__StepperState;

// Struct for a sequence of phidgets_msgs__msg__StepperState.
typedef struct phidgets_msgs__msg__StepperState__Sequence
{
  phidgets_msgs__msg__StepperState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} phidgets_msgs__msg__StepperState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PHIDGETS_MSGS__MSG__DETAIL__STEPPER_STATE__STRUCT_H_
