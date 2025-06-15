// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from phidgets_msgs:msg/StepperConfig.idl
// generated code does not contain a copyright notice
#include "phidgets_msgs/msg/detail/stepper_config__rosidl_typesupport_fastrtps_cpp.hpp"
#include "phidgets_msgs/msg/detail/stepper_config__functions.h"
#include "phidgets_msgs/msg/detail/stepper_config__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace phidgets_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_phidgets_msgs
cdr_serialize(
  const phidgets_msgs::msg::StepperConfig & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: min_failsafe_time
  cdr << ros_message.min_failsafe_time;

  // Member: max_failsafe_time
  cdr << ros_message.max_failsafe_time;

  // Member: min_position
  cdr << ros_message.min_position;

  // Member: max_position
  cdr << ros_message.max_position;

  // Member: min_acceleration
  cdr << ros_message.min_acceleration;

  // Member: max_acceleration
  cdr << ros_message.max_acceleration;

  // Member: min_velocity_limit
  cdr << ros_message.min_velocity_limit;

  // Member: max_velocity_limit
  cdr << ros_message.max_velocity_limit;

  // Member: min_current_limit
  cdr << ros_message.min_current_limit;

  // Member: max_current_limit
  cdr << ros_message.max_current_limit;

  // Member: min_data_interval
  cdr << ros_message.min_data_interval;

  // Member: max_data_interval
  cdr << ros_message.max_data_interval;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_phidgets_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  phidgets_msgs::msg::StepperConfig & ros_message)
{
  // Member: min_failsafe_time
  cdr >> ros_message.min_failsafe_time;

  // Member: max_failsafe_time
  cdr >> ros_message.max_failsafe_time;

  // Member: min_position
  cdr >> ros_message.min_position;

  // Member: max_position
  cdr >> ros_message.max_position;

  // Member: min_acceleration
  cdr >> ros_message.min_acceleration;

  // Member: max_acceleration
  cdr >> ros_message.max_acceleration;

  // Member: min_velocity_limit
  cdr >> ros_message.min_velocity_limit;

  // Member: max_velocity_limit
  cdr >> ros_message.max_velocity_limit;

  // Member: min_current_limit
  cdr >> ros_message.min_current_limit;

  // Member: max_current_limit
  cdr >> ros_message.max_current_limit;

  // Member: min_data_interval
  cdr >> ros_message.min_data_interval;

  // Member: max_data_interval
  cdr >> ros_message.max_data_interval;

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_phidgets_msgs
get_serialized_size(
  const phidgets_msgs::msg::StepperConfig & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: min_failsafe_time
  {
    size_t item_size = sizeof(ros_message.min_failsafe_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: max_failsafe_time
  {
    size_t item_size = sizeof(ros_message.max_failsafe_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: min_position
  {
    size_t item_size = sizeof(ros_message.min_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: max_position
  {
    size_t item_size = sizeof(ros_message.max_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: min_acceleration
  {
    size_t item_size = sizeof(ros_message.min_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: max_acceleration
  {
    size_t item_size = sizeof(ros_message.max_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: min_velocity_limit
  {
    size_t item_size = sizeof(ros_message.min_velocity_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: max_velocity_limit
  {
    size_t item_size = sizeof(ros_message.max_velocity_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: min_current_limit
  {
    size_t item_size = sizeof(ros_message.min_current_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: max_current_limit
  {
    size_t item_size = sizeof(ros_message.max_current_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: min_data_interval
  {
    size_t item_size = sizeof(ros_message.min_data_interval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: max_data_interval
  {
    size_t item_size = sizeof(ros_message.max_data_interval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_phidgets_msgs
max_serialized_size_StepperConfig(
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

  // Member: min_failsafe_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: max_failsafe_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: min_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: max_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: min_acceleration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: max_acceleration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: min_velocity_limit
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: max_velocity_limit
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: min_current_limit
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: max_current_limit
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: min_data_interval
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: max_data_interval
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
    using DataType = phidgets_msgs::msg::StepperConfig;
    is_plain =
      (
      offsetof(DataType, max_data_interval) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_phidgets_msgs
cdr_serialize_key(
  const phidgets_msgs::msg::StepperConfig & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: min_failsafe_time
  cdr << ros_message.min_failsafe_time;

  // Member: max_failsafe_time
  cdr << ros_message.max_failsafe_time;

  // Member: min_position
  cdr << ros_message.min_position;

  // Member: max_position
  cdr << ros_message.max_position;

  // Member: min_acceleration
  cdr << ros_message.min_acceleration;

  // Member: max_acceleration
  cdr << ros_message.max_acceleration;

  // Member: min_velocity_limit
  cdr << ros_message.min_velocity_limit;

  // Member: max_velocity_limit
  cdr << ros_message.max_velocity_limit;

  // Member: min_current_limit
  cdr << ros_message.min_current_limit;

  // Member: max_current_limit
  cdr << ros_message.max_current_limit;

  // Member: min_data_interval
  cdr << ros_message.min_data_interval;

  // Member: max_data_interval
  cdr << ros_message.max_data_interval;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_phidgets_msgs
get_serialized_size_key(
  const phidgets_msgs::msg::StepperConfig & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: min_failsafe_time
  {
    size_t item_size = sizeof(ros_message.min_failsafe_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: max_failsafe_time
  {
    size_t item_size = sizeof(ros_message.max_failsafe_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: min_position
  {
    size_t item_size = sizeof(ros_message.min_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: max_position
  {
    size_t item_size = sizeof(ros_message.max_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: min_acceleration
  {
    size_t item_size = sizeof(ros_message.min_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: max_acceleration
  {
    size_t item_size = sizeof(ros_message.max_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: min_velocity_limit
  {
    size_t item_size = sizeof(ros_message.min_velocity_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: max_velocity_limit
  {
    size_t item_size = sizeof(ros_message.max_velocity_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: min_current_limit
  {
    size_t item_size = sizeof(ros_message.min_current_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: max_current_limit
  {
    size_t item_size = sizeof(ros_message.max_current_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: min_data_interval
  {
    size_t item_size = sizeof(ros_message.min_data_interval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: max_data_interval
  {
    size_t item_size = sizeof(ros_message.max_data_interval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_phidgets_msgs
max_serialized_size_key_StepperConfig(
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

  // Member: min_failsafe_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_failsafe_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: min_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: min_acceleration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_acceleration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: min_velocity_limit
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_velocity_limit
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: min_current_limit
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_current_limit
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: min_data_interval
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_data_interval
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
    using DataType = phidgets_msgs::msg::StepperConfig;
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
  auto typed_message =
    static_cast<const phidgets_msgs::msg::StepperConfig *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StepperConfig__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<phidgets_msgs::msg::StepperConfig *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StepperConfig__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const phidgets_msgs::msg::StepperConfig *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StepperConfig__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_StepperConfig(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _StepperConfig__callbacks = {
  "phidgets_msgs::msg",
  "StepperConfig",
  _StepperConfig__cdr_serialize,
  _StepperConfig__cdr_deserialize,
  _StepperConfig__get_serialized_size,
  _StepperConfig__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _StepperConfig__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StepperConfig__callbacks,
  get_message_typesupport_handle_function,
  &phidgets_msgs__msg__StepperConfig__get_type_hash,
  &phidgets_msgs__msg__StepperConfig__get_type_description,
  &phidgets_msgs__msg__StepperConfig__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace phidgets_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_phidgets_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<phidgets_msgs::msg::StepperConfig>()
{
  return &phidgets_msgs::msg::typesupport_fastrtps_cpp::_StepperConfig__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, phidgets_msgs, msg, StepperConfig)() {
  return &phidgets_msgs::msg::typesupport_fastrtps_cpp::_StepperConfig__handle;
}

#ifdef __cplusplus
}
#endif
