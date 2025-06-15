// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from phidgets_msgs:msg/StepperCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "phidgets_msgs/msg/stepper_command.h"


#ifndef PHIDGETS_MSGS__MSG__DETAIL__STEPPER_COMMAND__STRUCT_H_
#define PHIDGETS_MSGS__MSG__DETAIL__STEPPER_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'CONTROL_MODE_DISENGAGED'.
enum
{
  phidgets_msgs__msg__StepperCommand__CONTROL_MODE_DISENGAGED = 255
};

/// Constant 'CONTROL_MODE_STEP'.
enum
{
  phidgets_msgs__msg__StepperCommand__CONTROL_MODE_STEP = 0
};

/// Constant 'CONTROL_MODE_RUN'.
enum
{
  phidgets_msgs__msg__StepperCommand__CONTROL_MODE_RUN = 1
};

/// Constant 'CONTROL_MODE_STOP'.
enum
{
  phidgets_msgs__msg__StepperCommand__CONTROL_MODE_STOP = 2
};

/// Struct defined in msg/StepperCommand in the package phidgets_msgs.
typedef struct phidgets_msgs__msg__StepperCommand
{
  uint8_t mode;
  double target;
  double velocity;
} phidgets_msgs__msg__StepperCommand;

// Struct for a sequence of phidgets_msgs__msg__StepperCommand.
typedef struct phidgets_msgs__msg__StepperCommand__Sequence
{
  phidgets_msgs__msg__StepperCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} phidgets_msgs__msg__StepperCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PHIDGETS_MSGS__MSG__DETAIL__STEPPER_COMMAND__STRUCT_H_
