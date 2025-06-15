// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from phidgets_msgs:msg/StepperState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "phidgets_msgs/msg/stepper_state.hpp"


#ifndef PHIDGETS_MSGS__MSG__DETAIL__STEPPER_STATE__TRAITS_HPP_
#define PHIDGETS_MSGS__MSG__DETAIL__STEPPER_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "phidgets_msgs/msg/detail/stepper_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace phidgets_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StepperState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: is_moving
  {
    out << "is_moving: ";
    rosidl_generator_traits::value_to_yaml(msg.is_moving, out);
    out << ", ";
  }

  // member: is_engaged
  {
    out << "is_engaged: ";
    rosidl_generator_traits::value_to_yaml(msg.is_engaged, out);
    out << ", ";
  }

  // member: target_position
  {
    out << "target_position: ";
    rosidl_generator_traits::value_to_yaml(msg.target_position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StepperState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: is_moving
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_moving: ";
    rosidl_generator_traits::value_to_yaml(msg.is_moving, out);
    out << "\n";
  }

  // member: is_engaged
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_engaged: ";
    rosidl_generator_traits::value_to_yaml(msg.is_engaged, out);
    out << "\n";
  }

  // member: target_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_position: ";
    rosidl_generator_traits::value_to_yaml(msg.target_position, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StepperState & msg, bool use_flow_style = false)
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
  const phidgets_msgs::msg::StepperState & msg,
  std::ostream & out, size_t indentation = 0)
{
  phidgets_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use phidgets_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const phidgets_msgs::msg::StepperState & msg)
{
  return phidgets_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<phidgets_msgs::msg::StepperState>()
{
  return "phidgets_msgs::msg::StepperState";
}

template<>
inline const char * name<phidgets_msgs::msg::StepperState>()
{
  return "phidgets_msgs/msg/StepperState";
}

template<>
struct has_fixed_size<phidgets_msgs::msg::StepperState>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<phidgets_msgs::msg::StepperState>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<phidgets_msgs::msg::StepperState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PHIDGETS_MSGS__MSG__DETAIL__STEPPER_STATE__TRAITS_HPP_
