// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from phidgets_msgs:msg/StepperConfig.idl
// generated code does not contain a copyright notice
#include "phidgets_msgs/msg/detail/stepper_config__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
phidgets_msgs__msg__StepperConfig__init(phidgets_msgs__msg__StepperConfig * msg)
{
  if (!msg) {
    return false;
  }
  // min_failsafe_time
  // max_failsafe_time
  // min_position
  // max_position
  // min_acceleration
  // max_acceleration
  // min_velocity_limit
  // max_velocity_limit
  // min_current_limit
  // max_current_limit
  // min_data_interval
  // max_data_interval
  return true;
}

void
phidgets_msgs__msg__StepperConfig__fini(phidgets_msgs__msg__StepperConfig * msg)
{
  if (!msg) {
    return;
  }
  // min_failsafe_time
  // max_failsafe_time
  // min_position
  // max_position
  // min_acceleration
  // max_acceleration
  // min_velocity_limit
  // max_velocity_limit
  // min_current_limit
  // max_current_limit
  // min_data_interval
  // max_data_interval
}

bool
phidgets_msgs__msg__StepperConfig__are_equal(const phidgets_msgs__msg__StepperConfig * lhs, const phidgets_msgs__msg__StepperConfig * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // min_failsafe_time
  if (lhs->min_failsafe_time != rhs->min_failsafe_time) {
    return false;
  }
  // max_failsafe_time
  if (lhs->max_failsafe_time != rhs->max_failsafe_time) {
    return false;
  }
  // min_position
  if (lhs->min_position != rhs->min_position) {
    return false;
  }
  // max_position
  if (lhs->max_position != rhs->max_position) {
    return false;
  }
  // min_acceleration
  if (lhs->min_acceleration != rhs->min_acceleration) {
    return false;
  }
  // max_acceleration
  if (lhs->max_acceleration != rhs->max_acceleration) {
    return false;
  }
  // min_velocity_limit
  if (lhs->min_velocity_limit != rhs->min_velocity_limit) {
    return false;
  }
  // max_velocity_limit
  if (lhs->max_velocity_limit != rhs->max_velocity_limit) {
    return false;
  }
  // min_current_limit
  if (lhs->min_current_limit != rhs->min_current_limit) {
    return false;
  }
  // max_current_limit
  if (lhs->max_current_limit != rhs->max_current_limit) {
    return false;
  }
  // min_data_interval
  if (lhs->min_data_interval != rhs->min_data_interval) {
    return false;
  }
  // max_data_interval
  if (lhs->max_data_interval != rhs->max_data_interval) {
    return false;
  }
  return true;
}

bool
phidgets_msgs__msg__StepperConfig__copy(
  const phidgets_msgs__msg__StepperConfig * input,
  phidgets_msgs__msg__StepperConfig * output)
{
  if (!input || !output) {
    return false;
  }
  // min_failsafe_time
  output->min_failsafe_time = input->min_failsafe_time;
  // max_failsafe_time
  output->max_failsafe_time = input->max_failsafe_time;
  // min_position
  output->min_position = input->min_position;
  // max_position
  output->max_position = input->max_position;
  // min_acceleration
  output->min_acceleration = input->min_acceleration;
  // max_acceleration
  output->max_acceleration = input->max_acceleration;
  // min_velocity_limit
  output->min_velocity_limit = input->min_velocity_limit;
  // max_velocity_limit
  output->max_velocity_limit = input->max_velocity_limit;
  // min_current_limit
  output->min_current_limit = input->min_current_limit;
  // max_current_limit
  output->max_current_limit = input->max_current_limit;
  // min_data_interval
  output->min_data_interval = input->min_data_interval;
  // max_data_interval
  output->max_data_interval = input->max_data_interval;
  return true;
}

phidgets_msgs__msg__StepperConfig *
phidgets_msgs__msg__StepperConfig__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  phidgets_msgs__msg__StepperConfig * msg = (phidgets_msgs__msg__StepperConfig *)allocator.allocate(sizeof(phidgets_msgs__msg__StepperConfig), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(phidgets_msgs__msg__StepperConfig));
  bool success = phidgets_msgs__msg__StepperConfig__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
phidgets_msgs__msg__StepperConfig__destroy(phidgets_msgs__msg__StepperConfig * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    phidgets_msgs__msg__StepperConfig__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
phidgets_msgs__msg__StepperConfig__Sequence__init(phidgets_msgs__msg__StepperConfig__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  phidgets_msgs__msg__StepperConfig * data = NULL;

  if (size) {
    data = (phidgets_msgs__msg__StepperConfig *)allocator.zero_allocate(size, sizeof(phidgets_msgs__msg__StepperConfig), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = phidgets_msgs__msg__StepperConfig__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        phidgets_msgs__msg__StepperConfig__fini(&data[i - 1]);
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
phidgets_msgs__msg__StepperConfig__Sequence__fini(phidgets_msgs__msg__StepperConfig__Sequence * array)
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
      phidgets_msgs__msg__StepperConfig__fini(&array->data[i]);
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

phidgets_msgs__msg__StepperConfig__Sequence *
phidgets_msgs__msg__StepperConfig__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  phidgets_msgs__msg__StepperConfig__Sequence * array = (phidgets_msgs__msg__StepperConfig__Sequence *)allocator.allocate(sizeof(phidgets_msgs__msg__StepperConfig__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = phidgets_msgs__msg__StepperConfig__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
phidgets_msgs__msg__StepperConfig__Sequence__destroy(phidgets_msgs__msg__StepperConfig__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    phidgets_msgs__msg__StepperConfig__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
phidgets_msgs__msg__StepperConfig__Sequence__are_equal(const phidgets_msgs__msg__StepperConfig__Sequence * lhs, const phidgets_msgs__msg__StepperConfig__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!phidgets_msgs__msg__StepperConfig__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
phidgets_msgs__msg__StepperConfig__Sequence__copy(
  const phidgets_msgs__msg__StepperConfig__Sequence * input,
  phidgets_msgs__msg__StepperConfig__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(phidgets_msgs__msg__StepperConfig);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    phidgets_msgs__msg__StepperConfig * data =
      (phidgets_msgs__msg__StepperConfig *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!phidgets_msgs__msg__StepperConfig__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          phidgets_msgs__msg__StepperConfig__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!phidgets_msgs__msg__StepperConfig__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
