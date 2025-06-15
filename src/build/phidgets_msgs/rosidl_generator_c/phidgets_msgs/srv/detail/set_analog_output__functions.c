// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from phidgets_msgs:srv/SetAnalogOutput.idl
// generated code does not contain a copyright notice
#include "phidgets_msgs/srv/detail/set_analog_output__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
phidgets_msgs__srv__SetAnalogOutput_Request__init(phidgets_msgs__srv__SetAnalogOutput_Request * msg)
{
  if (!msg) {
    return false;
  }
  // index
  // voltage
  return true;
}

void
phidgets_msgs__srv__SetAnalogOutput_Request__fini(phidgets_msgs__srv__SetAnalogOutput_Request * msg)
{
  if (!msg) {
    return;
  }
  // index
  // voltage
}

bool
phidgets_msgs__srv__SetAnalogOutput_Request__are_equal(const phidgets_msgs__srv__SetAnalogOutput_Request * lhs, const phidgets_msgs__srv__SetAnalogOutput_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // index
  if (lhs->index != rhs->index) {
    return false;
  }
  // voltage
  if (lhs->voltage != rhs->voltage) {
    return false;
  }
  return true;
}

bool
phidgets_msgs__srv__SetAnalogOutput_Request__copy(
  const phidgets_msgs__srv__SetAnalogOutput_Request * input,
  phidgets_msgs__srv__SetAnalogOutput_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // index
  output->index = input->index;
  // voltage
  output->voltage = input->voltage;
  return true;
}

phidgets_msgs__srv__SetAnalogOutput_Request *
phidgets_msgs__srv__SetAnalogOutput_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  phidgets_msgs__srv__SetAnalogOutput_Request * msg = (phidgets_msgs__srv__SetAnalogOutput_Request *)allocator.allocate(sizeof(phidgets_msgs__srv__SetAnalogOutput_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(phidgets_msgs__srv__SetAnalogOutput_Request));
  bool success = phidgets_msgs__srv__SetAnalogOutput_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
phidgets_msgs__srv__SetAnalogOutput_Request__destroy(phidgets_msgs__srv__SetAnalogOutput_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    phidgets_msgs__srv__SetAnalogOutput_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
phidgets_msgs__srv__SetAnalogOutput_Request__Sequence__init(phidgets_msgs__srv__SetAnalogOutput_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  phidgets_msgs__srv__SetAnalogOutput_Request * data = NULL;

  if (size) {
    data = (phidgets_msgs__srv__SetAnalogOutput_Request *)allocator.zero_allocate(size, sizeof(phidgets_msgs__srv__SetAnalogOutput_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = phidgets_msgs__srv__SetAnalogOutput_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        phidgets_msgs__srv__SetAnalogOutput_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
phidgets_msgs__srv__SetAnalogOutput_Request__Sequence__fini(phidgets_msgs__srv__SetAnalogOutput_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      phidgets_msgs__srv__SetAnalogOutput_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

phidgets_msgs__srv__SetAnalogOutput_Request__Sequence *
phidgets_msgs__srv__SetAnalogOutput_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  phidgets_msgs__srv__SetAnalogOutput_Request__Sequence * array = (phidgets_msgs__srv__SetAnalogOutput_Request__Sequence *)allocator.allocate(sizeof(phidgets_msgs__srv__SetAnalogOutput_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = phidgets_msgs__srv__SetAnalogOutput_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
phidgets_msgs__srv__SetAnalogOutput_Request__Sequence__destroy(phidgets_msgs__srv__SetAnalogOutput_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    phidgets_msgs__srv__SetAnalogOutput_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
phidgets_msgs__srv__SetAnalogOutput_Request__Sequence__are_equal(const phidgets_msgs__srv__SetAnalogOutput_Request__Sequence * lhs, const phidgets_msgs__srv__SetAnalogOutput_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!phidgets_msgs__srv__SetAnalogOutput_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
phidgets_msgs__srv__SetAnalogOutput_Request__Sequence__copy(
  const phidgets_msgs__srv__SetAnalogOutput_Request__Sequence * input,
  phidgets_msgs__srv__SetAnalogOutput_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(phidgets_msgs__srv__SetAnalogOutput_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    phidgets_msgs__srv__SetAnalogOutput_Request * data =
      (phidgets_msgs__srv__SetAnalogOutput_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!phidgets_msgs__srv__SetAnalogOutput_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          phidgets_msgs__srv__SetAnalogOutput_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!phidgets_msgs__srv__SetAnalogOutput_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
phidgets_msgs__srv__SetAnalogOutput_Response__init(phidgets_msgs__srv__SetAnalogOutput_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
phidgets_msgs__srv__SetAnalogOutput_Response__fini(phidgets_msgs__srv__SetAnalogOutput_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
phidgets_msgs__srv__SetAnalogOutput_Response__are_equal(const phidgets_msgs__srv__SetAnalogOutput_Response * lhs, const phidgets_msgs__srv__SetAnalogOutput_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
phidgets_msgs__srv__SetAnalogOutput_Response__copy(
  const phidgets_msgs__srv__SetAnalogOutput_Response * input,
  phidgets_msgs__srv__SetAnalogOutput_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

phidgets_msgs__srv__SetAnalogOutput_Response *
phidgets_msgs__srv__SetAnalogOutput_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  phidgets_msgs__srv__SetAnalogOutput_Response * msg = (phidgets_msgs__srv__SetAnalogOutput_Response *)allocator.allocate(sizeof(phidgets_msgs__srv__SetAnalogOutput_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(phidgets_msgs__srv__SetAnalogOutput_Response));
  bool success = phidgets_msgs__srv__SetAnalogOutput_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
phidgets_msgs__srv__SetAnalogOutput_Response__destroy(phidgets_msgs__srv__SetAnalogOutput_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    phidgets_msgs__srv__SetAnalogOutput_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
phidgets_msgs__srv__SetAnalogOutput_Response__Sequence__init(phidgets_msgs__srv__SetAnalogOutput_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  phidgets_msgs__srv__SetAnalogOutput_Response * data = NULL;

  if (size) {
    data = (phidgets_msgs__srv__SetAnalogOutput_Response *)allocator.zero_allocate(size, sizeof(phidgets_msgs__srv__SetAnalogOutput_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = phidgets_msgs__srv__SetAnalogOutput_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        phidgets_msgs__srv__SetAnalogOutput_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
phidgets_msgs__srv__SetAnalogOutput_Response__Sequence__fini(phidgets_msgs__srv__SetAnalogOutput_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      phidgets_msgs__srv__SetAnalogOutput_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

phidgets_msgs__srv__SetAnalogOutput_Response__Sequence *
phidgets_msgs__srv__SetAnalogOutput_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  phidgets_msgs__srv__SetAnalogOutput_Response__Sequence * array = (phidgets_msgs__srv__SetAnalogOutput_Response__Sequence *)allocator.allocate(sizeof(phidgets_msgs__srv__SetAnalogOutput_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = phidgets_msgs__srv__SetAnalogOutput_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
phidgets_msgs__srv__SetAnalogOutput_Response__Sequence__destroy(phidgets_msgs__srv__SetAnalogOutput_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    phidgets_msgs__srv__SetAnalogOutput_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
phidgets_msgs__srv__SetAnalogOutput_Response__Sequence__are_equal(const phidgets_msgs__srv__SetAnalogOutput_Response__Sequence * lhs, const phidgets_msgs__srv__SetAnalogOutput_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!phidgets_msgs__srv__SetAnalogOutput_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
phidgets_msgs__srv__SetAnalogOutput_Response__Sequence__copy(
  const phidgets_msgs__srv__SetAnalogOutput_Response__Sequence * input,
  phidgets_msgs__srv__SetAnalogOutput_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(phidgets_msgs__srv__SetAnalogOutput_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    phidgets_msgs__srv__SetAnalogOutput_Response * data =
      (phidgets_msgs__srv__SetAnalogOutput_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!phidgets_msgs__srv__SetAnalogOutput_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          phidgets_msgs__srv__SetAnalogOutput_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!phidgets_msgs__srv__SetAnalogOutput_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "phidgets_msgs/srv/detail/set_analog_output__functions.h"

bool
phidgets_msgs__srv__SetAnalogOutput_Event__init(phidgets_msgs__srv__SetAnalogOutput_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    phidgets_msgs__srv__SetAnalogOutput_Event__fini(msg);
    return false;
  }
  // request
  if (!phidgets_msgs__srv__SetAnalogOutput_Request__Sequence__init(&msg->request, 0)) {
    phidgets_msgs__srv__SetAnalogOutput_Event__fini(msg);
    return false;
  }
  // response
  if (!phidgets_msgs__srv__SetAnalogOutput_Response__Sequence__init(&msg->response, 0)) {
    phidgets_msgs__srv__SetAnalogOutput_Event__fini(msg);
    return false;
  }
  return true;
}

void
phidgets_msgs__srv__SetAnalogOutput_Event__fini(phidgets_msgs__srv__SetAnalogOutput_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  phidgets_msgs__srv__SetAnalogOutput_Request__Sequence__fini(&msg->request);
  // response
  phidgets_msgs__srv__SetAnalogOutput_Response__Sequence__fini(&msg->response);
}

bool
phidgets_msgs__srv__SetAnalogOutput_Event__are_equal(const phidgets_msgs__srv__SetAnalogOutput_Event * lhs, const phidgets_msgs__srv__SetAnalogOutput_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!phidgets_msgs__srv__SetAnalogOutput_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!phidgets_msgs__srv__SetAnalogOutput_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
phidgets_msgs__srv__SetAnalogOutput_Event__copy(
  const phidgets_msgs__srv__SetAnalogOutput_Event * input,
  phidgets_msgs__srv__SetAnalogOutput_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!phidgets_msgs__srv__SetAnalogOutput_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!phidgets_msgs__srv__SetAnalogOutput_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

phidgets_msgs__srv__SetAnalogOutput_Event *
phidgets_msgs__srv__SetAnalogOutput_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  phidgets_msgs__srv__SetAnalogOutput_Event * msg = (phidgets_msgs__srv__SetAnalogOutput_Event *)allocator.allocate(sizeof(phidgets_msgs__srv__SetAnalogOutput_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(phidgets_msgs__srv__SetAnalogOutput_Event));
  bool success = phidgets_msgs__srv__SetAnalogOutput_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
phidgets_msgs__srv__SetAnalogOutput_Event__destroy(phidgets_msgs__srv__SetAnalogOutput_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    phidgets_msgs__srv__SetAnalogOutput_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
phidgets_msgs__srv__SetAnalogOutput_Event__Sequence__init(phidgets_msgs__srv__SetAnalogOutput_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  phidgets_msgs__srv__SetAnalogOutput_Event * data = NULL;

  if (size) {
    data = (phidgets_msgs__srv__SetAnalogOutput_Event *)allocator.zero_allocate(size, sizeof(phidgets_msgs__srv__SetAnalogOutput_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = phidgets_msgs__srv__SetAnalogOutput_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        phidgets_msgs__srv__SetAnalogOutput_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
phidgets_msgs__srv__SetAnalogOutput_Event__Sequence__fini(phidgets_msgs__srv__SetAnalogOutput_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      phidgets_msgs__srv__SetAnalogOutput_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

phidgets_msgs__srv__SetAnalogOutput_Event__Sequence *
phidgets_msgs__srv__SetAnalogOutput_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  phidgets_msgs__srv__SetAnalogOutput_Event__Sequence * array = (phidgets_msgs__srv__SetAnalogOutput_Event__Sequence *)allocator.allocate(sizeof(phidgets_msgs__srv__SetAnalogOutput_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = phidgets_msgs__srv__SetAnalogOutput_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
phidgets_msgs__srv__SetAnalogOutput_Event__Sequence__destroy(phidgets_msgs__srv__SetAnalogOutput_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    phidgets_msgs__srv__SetAnalogOutput_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
phidgets_msgs__srv__SetAnalogOutput_Event__Sequence__are_equal(const phidgets_msgs__srv__SetAnalogOutput_Event__Sequence * lhs, const phidgets_msgs__srv__SetAnalogOutput_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!phidgets_msgs__srv__SetAnalogOutput_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
phidgets_msgs__srv__SetAnalogOutput_Event__Sequence__copy(
  const phidgets_msgs__srv__SetAnalogOutput_Event__Sequence * input,
  phidgets_msgs__srv__SetAnalogOutput_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(phidgets_msgs__srv__SetAnalogOutput_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    phidgets_msgs__srv__SetAnalogOutput_Event * data =
      (phidgets_msgs__srv__SetAnalogOutput_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!phidgets_msgs__srv__SetAnalogOutput_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          phidgets_msgs__srv__SetAnalogOutput_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!phidgets_msgs__srv__SetAnalogOutput_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
