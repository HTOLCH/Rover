// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from phidgets_msgs:msg/StepperConfig.idl
// generated code does not contain a copyright notice
#ifndef PHIDGETS_MSGS__MSG__DETAIL__STEPPER_CONFIG__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define PHIDGETS_MSGS__MSG__DETAIL__STEPPER_CONFIG__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "phidgets_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "phidgets_msgs/msg/detail/stepper_config__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_phidgets_msgs
bool cdr_serialize_phidgets_msgs__msg__StepperConfig(
  const phidgets_msgs__msg__StepperConfig * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_phidgets_msgs
bool cdr_deserialize_phidgets_msgs__msg__StepperConfig(
  eprosima::fastcdr::Cdr &,
  phidgets_msgs__msg__StepperConfig * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_phidgets_msgs
size_t get_serialized_size_phidgets_msgs__msg__StepperConfig(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_phidgets_msgs
size_t max_serialized_size_phidgets_msgs__msg__StepperConfig(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_phidgets_msgs
bool cdr_serialize_key_phidgets_msgs__msg__StepperConfig(
  const phidgets_msgs__msg__StepperConfig * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_phidgets_msgs
size_t get_serialized_size_key_phidgets_msgs__msg__StepperConfig(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_phidgets_msgs
size_t max_serialized_size_key_phidgets_msgs__msg__StepperConfig(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_phidgets_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, phidgets_msgs, msg, StepperConfig)();

#ifdef __cplusplus
}
#endif

#endif  // PHIDGETS_MSGS__MSG__DETAIL__STEPPER_CONFIG__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
