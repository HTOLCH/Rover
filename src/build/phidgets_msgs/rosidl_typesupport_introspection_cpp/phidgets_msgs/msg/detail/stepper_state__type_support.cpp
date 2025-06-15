// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from phidgets_msgs:msg/StepperState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "phidgets_msgs/msg/detail/stepper_state__functions.h"
#include "phidgets_msgs/msg/detail/stepper_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace phidgets_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void StepperState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) phidgets_msgs::msg::StepperState(_init);
}

void StepperState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<phidgets_msgs::msg::StepperState *>(message_memory);
  typed_message->~StepperState();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StepperState_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(phidgets_msgs::msg::StepperState, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_moving",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(phidgets_msgs::msg::StepperState, is_moving),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_engaged",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(phidgets_msgs::msg::StepperState, is_engaged),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(phidgets_msgs::msg::StepperState, target_position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StepperState_message_members = {
  "phidgets_msgs::msg",  // message namespace
  "StepperState",  // message name
  4,  // number of fields
  sizeof(phidgets_msgs::msg::StepperState),
  false,  // has_any_key_member_
  StepperState_message_member_array,  // message members
  StepperState_init_function,  // function to initialize message memory (memory has to be allocated)
  StepperState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StepperState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StepperState_message_members,
  get_message_typesupport_handle_function,
  &phidgets_msgs__msg__StepperState__get_type_hash,
  &phidgets_msgs__msg__StepperState__get_type_description,
  &phidgets_msgs__msg__StepperState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace phidgets_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<phidgets_msgs::msg::StepperState>()
{
  return &::phidgets_msgs::msg::rosidl_typesupport_introspection_cpp::StepperState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, phidgets_msgs, msg, StepperState)() {
  return &::phidgets_msgs::msg::rosidl_typesupport_introspection_cpp::StepperState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
