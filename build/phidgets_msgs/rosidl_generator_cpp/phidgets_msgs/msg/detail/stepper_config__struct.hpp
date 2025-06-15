// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from phidgets_msgs:msg/StepperConfig.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "phidgets_msgs/msg/stepper_config.hpp"


#ifndef PHIDGETS_MSGS__MSG__DETAIL__STEPPER_CONFIG__STRUCT_HPP_
#define PHIDGETS_MSGS__MSG__DETAIL__STEPPER_CONFIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__phidgets_msgs__msg__StepperConfig __attribute__((deprecated))
#else
# define DEPRECATED__phidgets_msgs__msg__StepperConfig __declspec(deprecated)
#endif

namespace phidgets_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StepperConfig_
{
  using Type = StepperConfig_<ContainerAllocator>;

  explicit StepperConfig_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_failsafe_time = 0l;
      this->max_failsafe_time = 0l;
      this->min_position = 0.0;
      this->max_position = 0.0;
      this->min_acceleration = 0.0;
      this->max_acceleration = 0.0;
      this->min_velocity_limit = 0.0;
      this->max_velocity_limit = 0.0;
      this->min_current_limit = 0.0;
      this->max_current_limit = 0.0;
      this->min_data_interval = 0l;
      this->max_data_interval = 0l;
    }
  }

  explicit StepperConfig_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_failsafe_time = 0l;
      this->max_failsafe_time = 0l;
      this->min_position = 0.0;
      this->max_position = 0.0;
      this->min_acceleration = 0.0;
      this->max_acceleration = 0.0;
      this->min_velocity_limit = 0.0;
      this->max_velocity_limit = 0.0;
      this->min_current_limit = 0.0;
      this->max_current_limit = 0.0;
      this->min_data_interval = 0l;
      this->max_data_interval = 0l;
    }
  }

  // field types and members
  using _min_failsafe_time_type =
    int32_t;
  _min_failsafe_time_type min_failsafe_time;
  using _max_failsafe_time_type =
    int32_t;
  _max_failsafe_time_type max_failsafe_time;
  using _min_position_type =
    double;
  _min_position_type min_position;
  using _max_position_type =
    double;
  _max_position_type max_position;
  using _min_acceleration_type =
    double;
  _min_acceleration_type min_acceleration;
  using _max_acceleration_type =
    double;
  _max_acceleration_type max_acceleration;
  using _min_velocity_limit_type =
    double;
  _min_velocity_limit_type min_velocity_limit;
  using _max_velocity_limit_type =
    double;
  _max_velocity_limit_type max_velocity_limit;
  using _min_current_limit_type =
    double;
  _min_current_limit_type min_current_limit;
  using _max_current_limit_type =
    double;
  _max_current_limit_type max_current_limit;
  using _min_data_interval_type =
    int32_t;
  _min_data_interval_type min_data_interval;
  using _max_data_interval_type =
    int32_t;
  _max_data_interval_type max_data_interval;

  // setters for named parameter idiom
  Type & set__min_failsafe_time(
    const int32_t & _arg)
  {
    this->min_failsafe_time = _arg;
    return *this;
  }
  Type & set__max_failsafe_time(
    const int32_t & _arg)
  {
    this->max_failsafe_time = _arg;
    return *this;
  }
  Type & set__min_position(
    const double & _arg)
  {
    this->min_position = _arg;
    return *this;
  }
  Type & set__max_position(
    const double & _arg)
  {
    this->max_position = _arg;
    return *this;
  }
  Type & set__min_acceleration(
    const double & _arg)
  {
    this->min_acceleration = _arg;
    return *this;
  }
  Type & set__max_acceleration(
    const double & _arg)
  {
    this->max_acceleration = _arg;
    return *this;
  }
  Type & set__min_velocity_limit(
    const double & _arg)
  {
    this->min_velocity_limit = _arg;
    return *this;
  }
  Type & set__max_velocity_limit(
    const double & _arg)
  {
    this->max_velocity_limit = _arg;
    return *this;
  }
  Type & set__min_current_limit(
    const double & _arg)
  {
    this->min_current_limit = _arg;
    return *this;
  }
  Type & set__max_current_limit(
    const double & _arg)
  {
    this->max_current_limit = _arg;
    return *this;
  }
  Type & set__min_data_interval(
    const int32_t & _arg)
  {
    this->min_data_interval = _arg;
    return *this;
  }
  Type & set__max_data_interval(
    const int32_t & _arg)
  {
    this->max_data_interval = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    phidgets_msgs::msg::StepperConfig_<ContainerAllocator> *;
  using ConstRawPtr =
    const phidgets_msgs::msg::StepperConfig_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<phidgets_msgs::msg::StepperConfig_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<phidgets_msgs::msg::StepperConfig_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      phidgets_msgs::msg::StepperConfig_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<phidgets_msgs::msg::StepperConfig_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      phidgets_msgs::msg::StepperConfig_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<phidgets_msgs::msg::StepperConfig_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<phidgets_msgs::msg::StepperConfig_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<phidgets_msgs::msg::StepperConfig_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__phidgets_msgs__msg__StepperConfig
    std::shared_ptr<phidgets_msgs::msg::StepperConfig_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__phidgets_msgs__msg__StepperConfig
    std::shared_ptr<phidgets_msgs::msg::StepperConfig_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StepperConfig_ & other) const
  {
    if (this->min_failsafe_time != other.min_failsafe_time) {
      return false;
    }
    if (this->max_failsafe_time != other.max_failsafe_time) {
      return false;
    }
    if (this->min_position != other.min_position) {
      return false;
    }
    if (this->max_position != other.max_position) {
      return false;
    }
    if (this->min_acceleration != other.min_acceleration) {
      return false;
    }
    if (this->max_acceleration != other.max_acceleration) {
      return false;
    }
    if (this->min_velocity_limit != other.min_velocity_limit) {
      return false;
    }
    if (this->max_velocity_limit != other.max_velocity_limit) {
      return false;
    }
    if (this->min_current_limit != other.min_current_limit) {
      return false;
    }
    if (this->max_current_limit != other.max_current_limit) {
      return false;
    }
    if (this->min_data_interval != other.min_data_interval) {
      return false;
    }
    if (this->max_data_interval != other.max_data_interval) {
      return false;
    }
    return true;
  }
  bool operator!=(const StepperConfig_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StepperConfig_

// alias to use template instance with default allocator
using StepperConfig =
  phidgets_msgs::msg::StepperConfig_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace phidgets_msgs

#endif  // PHIDGETS_MSGS__MSG__DETAIL__STEPPER_CONFIG__STRUCT_HPP_
