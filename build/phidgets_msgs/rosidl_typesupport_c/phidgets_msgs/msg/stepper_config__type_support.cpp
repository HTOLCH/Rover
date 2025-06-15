// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from phidgets_msgs:msg/StepperConfig.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "phidgets_msgs/msg/detail/stepper_config__struct.h"
#include "phidgets_msgs/msg/detail/stepper_config__type_support.h"
#include "phidgets_msgs/msg/detail/stepper_config__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace phidgets_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _StepperConfig_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StepperConfig_type_support_ids_t;

static const _StepperConfig_type_support_ids_t _StepperConfig_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _StepperConfig_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StepperConfig_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StepperConfig_type_support_symbol_names_t _StepperConfig_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, phidgets_msgs, msg, StepperConfig)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, phidgets_msgs, msg, StepperConfig)),
  }
};

typedef struct _StepperConfig_type_support_data_t
{
  void * data[2];
} _StepperConfig_type_support_data_t;

static _StepperConfig_type_support_data_t _StepperConfig_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StepperConfig_message_typesupport_map = {
  2,
  "phidgets_msgs",
  &_StepperConfig_message_typesupport_ids.typesupport_identifier[0],
  &_StepperConfig_message_typesupport_symbol_names.symbol_name[0],
  &_StepperConfig_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StepperConfig_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StepperConfig_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &phidgets_msgs__msg__StepperConfig__get_type_hash,
  &phidgets_msgs__msg__StepperConfig__get_type_description,
  &phidgets_msgs__msg__StepperConfig__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace phidgets_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, phidgets_msgs, msg, StepperConfig)() {
  return &::phidgets_msgs::msg::rosidl_typesupport_c::StepperConfig_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
