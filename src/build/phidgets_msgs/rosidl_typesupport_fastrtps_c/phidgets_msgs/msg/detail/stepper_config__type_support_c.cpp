// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from phidgets_msgs:msg/StepperConfig.idl
// generated code does not contain a copyright notice
#include "phidgets_msgs/msg/detail/stepper_config__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "phidgets_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "phidgets_msgs/msg/detail/stepper_config__struct.h"
#include "phidgets_msgs/msg/detail/stepper_config__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _StepperConfig__ros_msg_type = phidgets_msgs__msg__StepperConfig;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_phidgets_msgs
bool cdr_serialize_phidgets_msgs__msg__StepperConfig(
  const phidgets_msgs__msg__StepperConfig * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: min_failsafe_time
  {
    cdr << ros_message->min_failsafe_time;
  }

  // Field name: max_failsafe_time
  {
    cdr << ros_message->max_failsafe_time;
  }

  // Field name: min_position
  {
    cdr << ros_message->min_position;
  }

  // Field name: max_position
  {
    cdr << ros_message->max_position;
  }

  // Field name: min_acceleration
  {
    cdr << ros_message->min_acceleration;
  }

  // Field name: max_acceleration
  {
    cdr << ros_message->max_acceleration;
  }

  // Field name: min_velocity_limit
  {
    cdr << ros_message->min_velocity_limit;
  }

  // Field name: max_velocity_limit
  {
    cdr << ros_message->max_velocity_limit;
  }

  // Field name: min_current_limit
  {
    cdr << ros_message->min_current_limit;
  }

  // Field name: max_current_limit
  {
    cdr << ros_message->max_current_limit;
  }

  // Field name: min_data_interval
  {
    cdr << ros_message->min_data_interval;
  }

  // Field name: max_data_interval
  {
    cdr << ros_message->max_data_interval;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_phidgets_msgs
bool cdr_deserialize_phidgets_msgs__msg__StepperConfig(
  eprosima::fastcdr::Cdr & cdr,
  phidgets_msgs__msg__StepperConfig * ros_message)
{
  // Field name: min_failsafe_time
  {
    cdr >> ros_message->min_failsafe_time;
  }

  // Field name: max_failsafe_time
  {
    cdr >> ros_message->max_failsafe_time;
  }

  // Field name: min_position
  {
    cdr >> ros_message->min_position;
  }

  // Field name: max_position
  {
    cdr >> ros_message->max_position;
  }

  // Field name: min_acceleration
  {
    cdr >> ros_message->min_acceleration;
  }

  // Field name: max_acceleration
  {
    cdr >> ros_message->max_acceleration;
  }

  // Field name: min_velocity_limit
  {
    cdr >> ros_message->min_velocity_limit;
  }

  // Field name: max_velocity_limit
  {
    cdr >> ros_message->max_velocity_limit;
  }

  // Field name: min_current_limit
  {
    cdr >> ros_message->min_current_limit;
  }

  // Field name: max_current_limit
  {
    cdr >> ros_message->max_current_limit;
  }

  // Field name: min_data_interval
  {
    cdr >> ros_message->min_data_interval;
  }

  // Field name: max_data_interval
  {
    cdr >> ros_message->max_data_interval;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_phidgets_msgs
size_t get_serialized_size_phidgets_msgs__msg__StepperConfig(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StepperConfig__ros_msg_type * ros_message = static_cast<const _StepperConfig__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: min_failsafe_time
  {
    size_t item_size = sizeof(ros_message->min_failsafe_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_failsafe_time
  {
    size_t item_size = sizeof(ros_message->max_failsafe_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: min_position
  {
    size_t item_size = sizeof(ros_message->min_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_position
  {
    size_t item_size = sizeof(ros_message->max_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: min_acceleration
  {
    size_t item_size = sizeof(ros_message->min_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_acceleration
  {
    size_t item_size = sizeof(ros_message->max_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: min_velocity_limit
  {
    size_t item_size = sizeof(ros_message->min_velocity_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_velocity_limit
  {
    size_t item_size = sizeof(ros_message->max_velocity_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: min_current_limit
  {
    size_t item_size = sizeof(ros_message->min_current_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_current_limit
  {
    size_t item_size = sizeof(ros_message->max_current_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: min_data_interval
  {
    size_t item_size = sizeof(ros_message->min_data_interval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_data_interval
  {
    size_t item_size = sizeof(ros_message->max_data_interval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_phidgets_msgs
size_t max_serialized_size_phidgets_msgs__msg__StepperConfig(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: min_failsafe_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: max_failsafe_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: min_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: min_acceleration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_acceleration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: min_velocity_limit
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_velocity_limit
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: min_current_limit
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_current_limit
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: min_data_interval
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: max_data_interval
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = phidgets_msgs__msg__StepperConfig;
    is_plain =
      (
      offsetof(DataType, max_data_interval) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_phidgets_msgs
bool cdr_serialize_key_phidgets_msgs__msg__StepperConfig(
  const phidgets_msgs__msg__StepperConfig * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: min_failsafe_time
  {
    cdr << ros_message->min_failsafe_time;
  }

  // Field name: max_failsafe_time
  {
    cdr << ros_message->max_failsafe_time;
  }

  // Field name: min_position
  {
    cdr << ros_message->min_position;
  }

  // Field name: max_position
  {
    cdr << ros_message->max_position;
  }

  // Field name: min_acceleration
  {
    cdr << ros_message->min_acceleration;
  }

  // Field name: max_acceleration
  {
    cdr << ros_message->max_acceleration;
  }

  // Field name: min_velocity_limit
  {
    cdr << ros_message->min_velocity_limit;
  }

  // Field name: max_velocity_limit
  {
    cdr << ros_message->max_velocity_limit;
  }

  // Field name: min_current_limit
  {
    cdr << ros_message->min_current_limit;
  }

  // Field name: max_current_limit
  {
    cdr << ros_message->max_current_limit;
  }

  // Field name: min_data_interval
  {
    cdr << ros_message->min_data_interval;
  }

  // Field name: max_data_interval
  {
    cdr << ros_message->max_data_interval;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_phidgets_msgs
size_t get_serialized_size_key_phidgets_msgs__msg__StepperConfig(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StepperConfig__ros_msg_type * ros_message = static_cast<const _StepperConfig__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: min_failsafe_time
  {
    size_t item_size = sizeof(ros_message->min_failsafe_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_failsafe_time
  {
    size_t item_size = sizeof(ros_message->max_failsafe_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: min_position
  {
    size_t item_size = sizeof(ros_message->min_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_position
  {
    size_t item_size = sizeof(ros_message->max_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: min_acceleration
  {
    size_t item_size = sizeof(ros_message->min_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_acceleration
  {
    size_t item_size = sizeof(ros_message->max_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: min_velocity_limit
  {
    size_t item_size = sizeof(ros_message->min_velocity_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_velocity_limit
  {
    size_t item_size = sizeof(ros_message->max_velocity_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: min_current_limit
  {
    size_t item_size = sizeof(ros_message->min_current_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_current_limit
  {
    size_t item_size = sizeof(ros_message->max_current_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: min_data_interval
  {
    size_t item_size = sizeof(ros_message->min_data_interval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_data_interval
  {
    size_t item_size = sizeof(ros_message->max_data_interval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_phidgets_msgs
size_t max_serialized_size_key_phidgets_msgs__msg__StepperConfig(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: min_failsafe_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: max_failsafe_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: min_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: min_acceleration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_acceleration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: min_velocity_limit
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_velocity_limit
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: min_current_limit
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_current_limit
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: min_data_interval
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: max_data_interval
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = phidgets_msgs__msg__StepperConfig;
    is_plain =
      (
      offsetof(DataType, max_data_interval) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _StepperConfig__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const phidgets_msgs__msg__StepperConfig * ros_message = static_cast<const phidgets_msgs__msg__StepperConfig *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_phidgets_msgs__msg__StepperConfig(ros_message, cdr);
}

static bool _StepperConfig__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  phidgets_msgs__msg__StepperConfig * ros_message = static_cast<phidgets_msgs__msg__StepperConfig *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_phidgets_msgs__msg__StepperConfig(cdr, ros_message);
}

static uint32_t _StepperConfig__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_phidgets_msgs__msg__StepperConfig(
      untyped_ros_message, 0));
}

static size_t _StepperConfig__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_phidgets_msgs__msg__StepperConfig(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_StepperConfig = {
  "phidgets_msgs::msg",
  "StepperConfig",
  _StepperConfig__cdr_serialize,
  _StepperConfig__cdr_deserialize,
  _StepperConfig__get_serialized_size,
  _StepperConfig__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _StepperConfig__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StepperConfig,
  get_message_typesupport_handle_function,
  &phidgets_msgs__msg__StepperConfig__get_type_hash,
  &phidgets_msgs__msg__StepperConfig__get_type_description,
  &phidgets_msgs__msg__StepperConfig__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, phidgets_msgs, msg, StepperConfig)() {
  return &_StepperConfig__type_support;
}

#if defined(__cplusplus)
}
#endif
