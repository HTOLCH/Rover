// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from phidgets_msgs:msg/StepperCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "phidgets_msgs/msg/stepper_command.hpp"


#ifndef PHIDGETS_MSGS__MSG__DETAIL__STEPPER_COMMAND__TRAITS_HPP_
#define PHIDGETS_MSGS__MSG__DETAIL__STEPPER_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "phidgets_msgs/msg/detail/stepper_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace phidgets_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StepperCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: target
  {
    out << "target: ";
    rosidl_generator_traits::value_to_yaml(msg.target, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StepperCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target: ";
    rosidl_generator_traits::value_to_yaml(msg.target, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StepperCommand & msg, bool use_flow_style = false)
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
  const phidgets_msgs::msg::StepperCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  phidgets_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use phidgets_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const phidgets_msgs::msg::StepperCommand & msg)
{
  return phidgets_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<phidgets_msgs::msg::StepperCommand>()
{
  return "phidgets_msgs::msg::StepperCommand";
}

template<>
inline const char * name<phidgets_msgs::msg::StepperCommand>()
{
  return "phidgets_msgs/msg/StepperCommand";
}

template<>
struct has_fixed_size<phidgets_msgs::msg::StepperCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<phidgets_msgs::msg::StepperCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<phidgets_msgs::msg::StepperCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PHIDGETS_MSGS__MSG__DETAIL__STEPPER_COMMAND__TRAITS_HPP_
