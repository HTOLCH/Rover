// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from phidgets_msgs:srv/Trigger.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "phidgets_msgs/srv/trigger.h"


#ifndef PHIDGETS_MSGS__SRV__DETAIL__TRIGGER__STRUCT_H_
#define PHIDGETS_MSGS__SRV__DETAIL__TRIGGER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Trigger in the package phidgets_msgs.
typedef struct phidgets_msgs__srv__Trigger_Request
{
  uint16_t channel;
} phidgets_msgs__srv__Trigger_Request;

// Struct for a sequence of phidgets_msgs__srv__Trigger_Request.
typedef struct phidgets_msgs__srv__Trigger_Request__Sequence
{
  phidgets_msgs__srv__Trigger_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} phidgets_msgs__srv__Trigger_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Trigger in the package phidgets_msgs.
typedef struct phidgets_msgs__srv__Trigger_Response
{
  /// indicate successful run of triggered service
  bool success;
  /// informational, e.g. for error messages
  rosidl_runtime_c__String message;
} phidgets_msgs__srv__Trigger_Response;

// Struct for a sequence of phidgets_msgs__srv__Trigger_Response.
typedef struct phidgets_msgs__srv__Trigger_Response__Sequence
{
  phidgets_msgs__srv__Trigger_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} phidgets_msgs__srv__Trigger_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  phidgets_msgs__srv__Trigger_Event__request__MAX_SIZE = 1
};
// response
enum
{
  phidgets_msgs__srv__Trigger_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Trigger in the package phidgets_msgs.
typedef struct phidgets_msgs__srv__Trigger_Event
{
  service_msgs__msg__ServiceEventInfo info;
  phidgets_msgs__srv__Trigger_Request__Sequence request;
  phidgets_msgs__srv__Trigger_Response__Sequence response;
} phidgets_msgs__srv__Trigger_Event;

// Struct for a sequence of phidgets_msgs__srv__Trigger_Event.
typedef struct phidgets_msgs__srv__Trigger_Event__Sequence
{
  phidgets_msgs__srv__Trigger_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} phidgets_msgs__srv__Trigger_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PHIDGETS_MSGS__SRV__DETAIL__TRIGGER__STRUCT_H_
