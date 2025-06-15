// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from phidgets_msgs:msg/StepperConfig.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "phidgets_msgs/msg/stepper_config.hpp"


#ifndef PHIDGETS_MSGS__MSG__DETAIL__STEPPER_CONFIG__BUILDER_HPP_
#define PHIDGETS_MSGS__MSG__DETAIL__STEPPER_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "phidgets_msgs/msg/detail/stepper_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace phidgets_msgs
{

namespace msg
{

namespace builder
{

class Init_StepperConfig_max_data_interval
{
public:
  explicit Init_StepperConfig_max_data_interval(::phidgets_msgs::msg::StepperConfig & msg)
  : msg_(msg)
  {}
  ::phidgets_msgs::msg::StepperConfig max_data_interval(::phidgets_msgs::msg::StepperConfig::_max_data_interval_type arg)
  {
    msg_.max_data_interval = std::move(arg);
    return std::move(msg_);
  }

private:
  ::phidgets_msgs::msg::StepperConfig msg_;
};

class Init_StepperConfig_min_data_interval
{
public:
  explicit Init_StepperConfig_min_data_interval(::phidgets_msgs::msg::StepperConfig & msg)
  : msg_(msg)
  {}
  Init_StepperConfig_max_data_interval min_data_interval(::phidgets_msgs::msg::StepperConfig::_min_data_interval_type arg)
  {
    msg_.min_data_interval = std::move(arg);
    return Init_StepperConfig_max_data_interval(msg_);
  }

private:
  ::phidgets_msgs::msg::StepperConfig msg_;
};

class Init_StepperConfig_max_current_limit
{
public:
  explicit Init_StepperConfig_max_current_limit(::phidgets_msgs::msg::StepperConfig & msg)
  : msg_(msg)
  {}
  Init_StepperConfig_min_data_interval max_current_limit(::phidgets_msgs::msg::StepperConfig::_max_current_limit_type arg)
  {
    msg_.max_current_limit = std::move(arg);
    return Init_StepperConfig_min_data_interval(msg_);
  }

private:
  ::phidgets_msgs::msg::StepperConfig msg_;
};

class Init_StepperConfig_min_current_limit
{
public:
  explicit Init_StepperConfig_min_current_limit(::phidgets_msgs::msg::StepperConfig & msg)
  : msg_(msg)
  {}
  Init_StepperConfig_max_current_limit min_current_limit(::phidgets_msgs::msg::StepperConfig::_min_current_limit_type arg)
  {
    msg_.min_current_limit = std::move(arg);
    return Init_StepperConfig_max_current_limit(msg_);
  }

private:
  ::phidgets_msgs::msg::StepperConfig msg_;
};

class Init_StepperConfig_max_velocity_limit
{
public:
  explicit Init_StepperConfig_max_velocity_limit(::phidgets_msgs::msg::StepperConfig & msg)
  : msg_(msg)
  {}
  Init_StepperConfig_min_current_limit max_velocity_limit(::phidgets_msgs::msg::StepperConfig::_max_velocity_limit_type arg)
  {
    msg_.max_velocity_limit = std::move(arg);
    return Init_StepperConfig_min_current_limit(msg_);
  }

private:
  ::phidgets_msgs::msg::StepperConfig msg_;
};

class Init_StepperConfig_min_velocity_limit
{
public:
  explicit Init_StepperConfig_min_velocity_limit(::phidgets_msgs::msg::StepperConfig & msg)
  : msg_(msg)
  {}
  Init_StepperConfig_max_velocity_limit min_velocity_limit(::phidgets_msgs::msg::StepperConfig::_min_velocity_limit_type arg)
  {
    msg_.min_velocity_limit = std::move(arg);
    return Init_StepperConfig_max_velocity_limit(msg_);
  }

private:
  ::phidgets_msgs::msg::StepperConfig msg_;
};

class Init_StepperConfig_max_acceleration
{
public:
  explicit Init_StepperConfig_max_acceleration(::phidgets_msgs::msg::StepperConfig & msg)
  : msg_(msg)
  {}
  Init_StepperConfig_min_velocity_limit max_acceleration(::phidgets_msgs::msg::StepperConfig::_max_acceleration_type arg)
  {
    msg_.max_acceleration = std::move(arg);
    return Init_StepperConfig_min_velocity_limit(msg_);
  }

private:
  ::phidgets_msgs::msg::StepperConfig msg_;
};

class Init_StepperConfig_min_acceleration
{
public:
  explicit Init_StepperConfig_min_acceleration(::phidgets_msgs::msg::StepperConfig & msg)
  : msg_(msg)
  {}
  Init_StepperConfig_max_acceleration min_acceleration(::phidgets_msgs::msg::StepperConfig::_min_acceleration_type arg)
  {
    msg_.min_acceleration = std::move(arg);
    return Init_StepperConfig_max_acceleration(msg_);
  }

private:
  ::phidgets_msgs::msg::StepperConfig msg_;
};

class Init_StepperConfig_max_position
{
public:
  explicit Init_StepperConfig_max_position(::phidgets_msgs::msg::StepperConfig & msg)
  : msg_(msg)
  {}
  Init_StepperConfig_min_acceleration max_position(::phidgets_msgs::msg::StepperConfig::_max_position_type arg)
  {
    msg_.max_position = std::move(arg);
    return Init_StepperConfig_min_acceleration(msg_);
  }

private:
  ::phidgets_msgs::msg::StepperConfig msg_;
};

class Init_StepperConfig_min_position
{
public:
  explicit Init_StepperConfig_min_position(::phidgets_msgs::msg::StepperConfig & msg)
  : msg_(msg)
  {}
  Init_StepperConfig_max_position min_position(::phidgets_msgs::msg::StepperConfig::_min_position_type arg)
  {
    msg_.min_position = std::move(arg);
    return Init_StepperConfig_max_position(msg_);
  }

private:
  ::phidgets_msgs::msg::StepperConfig msg_;
};

class Init_StepperConfig_max_failsafe_time
{
public:
  explicit Init_StepperConfig_max_failsafe_time(::phidgets_msgs::msg::StepperConfig & msg)
  : msg_(msg)
  {}
  Init_StepperConfig_min_position max_failsafe_time(::phidgets_msgs::msg::StepperConfig::_max_failsafe_time_type arg)
  {
    msg_.max_failsafe_time = std::move(arg);
    return Init_StepperConfig_min_position(msg_);
  }

private:
  ::phidgets_msgs::msg::StepperConfig msg_;
};

class Init_StepperConfig_min_failsafe_time
{
public:
  Init_StepperConfig_min_failsafe_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StepperConfig_max_failsafe_time min_failsafe_time(::phidgets_msgs::msg::StepperConfig::_min_failsafe_time_type arg)
  {
    msg_.min_failsafe_time = std::move(arg);
    return Init_StepperConfig_max_failsafe_time(msg_);
  }

private:
  ::phidgets_msgs::msg::StepperConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::phidgets_msgs::msg::StepperConfig>()
{
  return phidgets_msgs::msg::builder::Init_StepperConfig_min_failsafe_time();
}

}  // namespace phidgets_msgs

#endif  // PHIDGETS_MSGS__MSG__DETAIL__STEPPER_CONFIG__BUILDER_HPP_
