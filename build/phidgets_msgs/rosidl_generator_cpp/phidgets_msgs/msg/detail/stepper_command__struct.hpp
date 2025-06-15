// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from phidgets_msgs:msg/StepperCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "phidgets_msgs/msg/stepper_command.hpp"


#ifndef PHIDGETS_MSGS__MSG__DETAIL__STEPPER_COMMAND__STRUCT_HPP_
#define PHIDGETS_MSGS__MSG__DETAIL__STEPPER_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__phidgets_msgs__msg__StepperCommand __attribute__((deprecated))
#else
# define DEPRECATED__phidgets_msgs__msg__StepperCommand __declspec(deprecated)
#endif

namespace phidgets_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StepperCommand_
{
  using Type = StepperCommand_<ContainerAllocator>;

  explicit StepperCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->target = 0.0;
      this->velocity = 0.0;
    }
  }

  explicit StepperCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->target = 0.0;
      this->velocity = 0.0;
    }
  }

  // field types and members
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _target_type =
    double;
  _target_type target;
  using _velocity_type =
    double;
  _velocity_type velocity;

  // setters for named parameter idiom
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__target(
    const double & _arg)
  {
    this->target = _arg;
    return *this;
  }
  Type & set__velocity(
    const double & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CONTROL_MODE_DISENGAGED =
    255u;
  static constexpr uint8_t CONTROL_MODE_STEP =
    0u;
  static constexpr uint8_t CONTROL_MODE_RUN =
    1u;
  static constexpr uint8_t CONTROL_MODE_STOP =
    2u;

  // pointer types
  using RawPtr =
    phidgets_msgs::msg::StepperCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const phidgets_msgs::msg::StepperCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<phidgets_msgs::msg::StepperCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<phidgets_msgs::msg::StepperCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      phidgets_msgs::msg::StepperCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<phidgets_msgs::msg::StepperCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      phidgets_msgs::msg::StepperCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<phidgets_msgs::msg::StepperCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<phidgets_msgs::msg::StepperCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<phidgets_msgs::msg::StepperCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__phidgets_msgs__msg__StepperCommand
    std::shared_ptr<phidgets_msgs::msg::StepperCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__phidgets_msgs__msg__StepperCommand
    std::shared_ptr<phidgets_msgs::msg::StepperCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StepperCommand_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->target != other.target) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const StepperCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StepperCommand_

// alias to use template instance with default allocator
using StepperCommand =
  phidgets_msgs::msg::StepperCommand_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StepperCommand_<ContainerAllocator>::CONTROL_MODE_DISENGAGED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StepperCommand_<ContainerAllocator>::CONTROL_MODE_STEP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StepperCommand_<ContainerAllocator>::CONTROL_MODE_RUN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StepperCommand_<ContainerAllocator>::CONTROL_MODE_STOP;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace phidgets_msgs

#endif  // PHIDGETS_MSGS__MSG__DETAIL__STEPPER_COMMAND__STRUCT_HPP_
