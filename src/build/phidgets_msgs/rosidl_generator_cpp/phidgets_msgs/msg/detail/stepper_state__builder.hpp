// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from phidgets_msgs:msg/StepperState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "phidgets_msgs/msg/stepper_state.hpp"


#ifndef PHIDGETS_MSGS__MSG__DETAIL__STEPPER_STATE__BUILDER_HPP_
#define PHIDGETS_MSGS__MSG__DETAIL__STEPPER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "phidgets_msgs/msg/detail/stepper_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace phidgets_msgs
{

namespace msg
{

namespace builder
{

class Init_StepperState_target_position
{
public:
  explicit Init_StepperState_target_position(::phidgets_msgs::msg::StepperState & msg)
  : msg_(msg)
  {}
  ::phidgets_msgs::msg::StepperState target_position(::phidgets_msgs::msg::StepperState::_target_position_type arg)
  {
    msg_.target_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::phidgets_msgs::msg::StepperState msg_;
};

class Init_StepperState_is_engaged
{
public:
  explicit Init_StepperState_is_engaged(::phidgets_msgs::msg::StepperState & msg)
  : msg_(msg)
  {}
  Init_StepperState_target_position is_engaged(::phidgets_msgs::msg::StepperState::_is_engaged_type arg)
  {
    msg_.is_engaged = std::move(arg);
    return Init_StepperState_target_position(msg_);
  }

private:
  ::phidgets_msgs::msg::StepperState msg_;
};

class Init_StepperState_is_moving
{
public:
  explicit Init_StepperState_is_moving(::phidgets_msgs::msg::StepperState & msg)
  : msg_(msg)
  {}
  Init_StepperState_is_engaged is_moving(::phidgets_msgs::msg::StepperState::_is_moving_type arg)
  {
    msg_.is_moving = std::move(arg);
    return Init_StepperState_is_engaged(msg_);
  }

private:
  ::phidgets_msgs::msg::StepperState msg_;
};

class Init_StepperState_header
{
public:
  Init_StepperState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StepperState_is_moving header(::phidgets_msgs::msg::StepperState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StepperState_is_moving(msg_);
  }

private:
  ::phidgets_msgs::msg::StepperState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::phidgets_msgs::msg::StepperState>()
{
  return phidgets_msgs::msg::builder::Init_StepperState_header();
}

}  // namespace phidgets_msgs

#endif  // PHIDGETS_MSGS__MSG__DETAIL__STEPPER_STATE__BUILDER_HPP_
