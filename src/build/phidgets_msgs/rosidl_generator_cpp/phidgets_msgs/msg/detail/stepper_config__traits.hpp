// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from phidgets_msgs:msg/StepperConfig.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "phidgets_msgs/msg/stepper_config.hpp"


#ifndef PHIDGETS_MSGS__MSG__DETAIL__STEPPER_CONFIG__TRAITS_HPP_
#define PHIDGETS_MSGS__MSG__DETAIL__STEPPER_CONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "phidgets_msgs/msg/detail/stepper_config__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace phidgets_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StepperConfig & msg,
  std::ostream & out)
{
  out << "{";
  // member: min_failsafe_time
  {
    out << "min_failsafe_time: ";
    rosidl_generator_traits::value_to_yaml(msg.min_failsafe_time, out);
    out << ", ";
  }

  // member: max_failsafe_time
  {
    out << "max_failsafe_time: ";
    rosidl_generator_traits::value_to_yaml(msg.max_failsafe_time, out);
    out << ", ";
  }

  // member: min_position
  {
    out << "min_position: ";
    rosidl_generator_traits::value_to_yaml(msg.min_position, out);
    out << ", ";
  }

  // member: max_position
  {
    out << "max_position: ";
    rosidl_generator_traits::value_to_yaml(msg.max_position, out);
    out << ", ";
  }

  // member: min_acceleration
  {
    out << "min_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.min_acceleration, out);
    out << ", ";
  }

  // member: max_acceleration
  {
    out << "max_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.max_acceleration, out);
    out << ", ";
  }

  // member: min_velocity_limit
  {
    out << "min_velocity_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.min_velocity_limit, out);
    out << ", ";
  }

  // member: max_velocity_limit
  {
    out << "max_velocity_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.max_velocity_limit, out);
    out << ", ";
  }

  // member: min_current_limit
  {
    out << "min_current_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.min_current_limit, out);
    out << ", ";
  }

  // member: max_current_limit
  {
    out << "max_current_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.max_current_limit, out);
    out << ", ";
  }

  // member: min_data_interval
  {
    out << "min_data_interval: ";
    rosidl_generator_traits::value_to_yaml(msg.min_data_interval, out);
    out << ", ";
  }

  // member: max_data_interval
  {
    out << "max_data_interval: ";
    rosidl_generator_traits::value_to_yaml(msg.max_data_interval, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StepperConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: min_failsafe_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_failsafe_time: ";
    rosidl_generator_traits::value_to_yaml(msg.min_failsafe_time, out);
    out << "\n";
  }

  // member: max_failsafe_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_failsafe_time: ";
    rosidl_generator_traits::value_to_yaml(msg.max_failsafe_time, out);
    out << "\n";
  }

  // member: min_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_position: ";
    rosidl_generator_traits::value_to_yaml(msg.min_position, out);
    out << "\n";
  }

  // member: max_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_position: ";
    rosidl_generator_traits::value_to_yaml(msg.max_position, out);
    out << "\n";
  }

  // member: min_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.min_acceleration, out);
    out << "\n";
  }

  // member: max_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.max_acceleration, out);
    out << "\n";
  }

  // member: min_velocity_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_velocity_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.min_velocity_limit, out);
    out << "\n";
  }

  // member: max_velocity_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_velocity_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.max_velocity_limit, out);
    out << "\n";
  }

  // member: min_current_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_current_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.min_current_limit, out);
    out << "\n";
  }

  // member: max_current_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_current_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.max_current_limit, out);
    out << "\n";
  }

  // member: min_data_interval
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_data_interval: ";
    rosidl_generator_traits::value_to_yaml(msg.min_data_interval, out);
    out << "\n";
  }

  // member: max_data_interval
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_data_interval: ";
    rosidl_generator_traits::value_to_yaml(msg.max_data_interval, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StepperConfig & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace phidgets_msgs

namespace rosidl_generator_traits
{

[[deprecated("use phidgets_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const phidgets_msgs::msg::StepperConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  phidgets_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use phidgets_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const phidgets_msgs::msg::StepperConfig & msg)
{
  return phidgets_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<phidgets_msgs::msg::StepperConfig>()
{
  return "phidgets_msgs::msg::StepperConfig";
}

template<>
inline const char * name<phidgets_msgs::msg::StepperConfig>()
{
  return "phidgets_msgs/msg/StepperConfig";
}

template<>
struct has_fixed_size<phidgets_msgs::msg::StepperConfig>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<phidgets_msgs::msg::StepperConfig>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<phidgets_msgs::msg::StepperConfig>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PHIDGETS_MSGS__MSG__DETAIL__STEPPER_CONFIG__TRAITS_HPP_
