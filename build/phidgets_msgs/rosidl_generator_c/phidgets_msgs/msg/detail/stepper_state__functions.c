// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from phidgets_msgs:msg/StepperState.idl
// generated code does not contain a copyright notice
#include "phidgets_msgs/msg/detail/stepper_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
phidgets_msgs__msg__StepperState__init(phidgets_msgs__msg__StepperState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    phidgets_msgs__msg__StepperState__fini(msg);
    return false;
  }
  // is_moving
  // is_engaged
  // target_position
  return true;
}

void
phidgets_msgs__msg__StepperState__fini(phidgets_msgs__msg__StepperState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // is_moving
  // is_engaged
  // target_position
}

bool
phidgets_msgs__msg__StepperState__are_equal(const phidgets_msgs__msg__StepperState * lhs, const phidgets_msgs__msg__StepperState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // is_moving
  if (lhs->is_moving != rhs->is_moving) {
    return false;
  }
  // is_engaged
  if (lhs->is_engaged != rhs->is_engaged) {
    return false;
  }
  // target_position
  if (lhs->target_position != rhs->target_position) {
    return false;
  }
  return true;
}

bool
phidgets_msgs__msg__StepperState__copy(
  const phidgets_msgs__msg__StepperState * input,
  phidgets_msgs__msg__StepperState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // is_moving
  output->is_moving = input->is_moving;
  // is_engaged
  output->is_engaged = input->is_engaged;
  // target_position
  output->target_position = input->target_position;
  return true;
}

phidgets_msgs__msg__StepperState *
phidgets_msgs__msg__StepperState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  phidgets_msgs__msg__StepperState * msg = (phidgets_msgs__msg__StepperState *)allocator.allocate(sizeof(phidgets_msgs__msg__StepperState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(phidgets_msgs__msg__StepperState));
  bool success = phidgets_msgs__msg__StepperState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
phidgets_msgs__msg__StepperState__destroy(phidgets_msgs__msg__StepperState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    phidgets_msgs__msg__StepperState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
phidgets_msgs__msg__StepperState__Sequence__init(phidgets_msgs__msg__StepperState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  phidgets_msgs__msg__StepperState * data = NULL;

  if (size) {
    data = (phidgets_msgs__msg__StepperState *)allocator.zero_allocate(size, sizeof(phidgets_msgs__msg__StepperState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = phidgets_msgs__msg__StepperState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        phidgets_msgs__msg__StepperState__fini(&data[i - 1]);
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
phidgets_msgs__msg__StepperState__Sequence__fini(phidgets_msgs__msg__StepperState__Sequence * array)
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
      phidgets_msgs__msg__StepperState__fini(&array->data[i]);
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

phidgets_msgs__msg__StepperState__Sequence *
phidgets_msgs__msg__StepperState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  phidgets_msgs__msg__StepperState__Sequence * array = (phidgets_msgs__msg__StepperState__Sequence *)allocator.allocate(sizeof(phidgets_msgs__msg__StepperState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = phidgets_msgs__msg__StepperState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
phidgets_msgs__msg__StepperState__Sequence__destroy(phidgets_msgs__msg__StepperState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    phidgets_msgs__msg__StepperState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
phidgets_msgs__msg__StepperState__Sequence__are_equal(const phidgets_msgs__msg__StepperState__Sequence * lhs, const phidgets_msgs__msg__StepperState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!phidgets_msgs__msg__StepperState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
phidgets_msgs__msg__StepperState__Sequence__copy(
  const phidgets_msgs__msg__StepperState__Sequence * input,
  phidgets_msgs__msg__StepperState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(phidgets_msgs__msg__StepperState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    phidgets_msgs__msg__StepperState * data =
      (phidgets_msgs__msg__StepperState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!phidgets_msgs__msg__StepperState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          phidgets_msgs__msg__StepperState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!phidgets_msgs__msg__StepperState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
