// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from phidgets_msgs:msg/StepperCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "phidgets_msgs/msg/stepper_command.hpp"


#ifndef PHIDGETS_MSGS__MSG__DETAIL__STEPPER_COMMAND__BUILDER_HPP_
#define PHIDGETS_MSGS__MSG__DETAIL__STEPPER_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "phidgets_msgs/msg/detail/stepper_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace phidgets_msgs
{

namespace msg
{

namespace builder
{

class Init_StepperCommand_velocity
{
public:
  explicit Init_StepperCommand_velocity(::phidgets_msgs::msg::StepperCommand & msg)
  : msg_(msg)
  {}
  ::phidgets_msgs::msg::StepperCommand velocity(::phidgets_msgs::msg::StepperCommand::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::phidgets_msgs::msg::StepperCommand msg_;
};

class Init_StepperCommand_target
{
public:
  explicit Init_StepperCommand_target(::phidgets_msgs::msg::StepperCommand & msg)
  : msg_(msg)
  {}
  Init_StepperCommand_velocity target(::phidgets_msgs::msg::StepperCommand::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_StepperCommand_velocity(msg_);
  }

private:
  ::phidgets_msgs::msg::StepperCommand msg_;
};

class Init_StepperCommand_mode
{
public:
  Init_StepperCommand_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StepperCommand_target mode(::phidgets_msgs::msg::StepperCommand::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_StepperCommand_target(msg_);
  }

private:
  ::phidgets_msgs::msg::StepperCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::phidgets_msgs::msg::StepperCommand>()
{
  return phidgets_msgs::msg::builder::Init_StepperCommand_mode();
}

}  // namespace phidgets_msgs

#endif  // PHIDGETS_MSGS__MSG__DETAIL__STEPPER_COMMAND__BUILDER_HPP_
