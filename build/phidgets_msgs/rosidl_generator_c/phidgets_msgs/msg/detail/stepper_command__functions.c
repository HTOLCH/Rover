// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from phidgets_msgs:msg/StepperCommand.idl
// generated code does not contain a copyright notice
#include "phidgets_msgs/msg/detail/stepper_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
phidgets_msgs__msg__StepperCommand__init(phidgets_msgs__msg__StepperCommand * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  // target
  // velocity
  return true;
}

void
phidgets_msgs__msg__StepperCommand__fini(phidgets_msgs__msg__StepperCommand * msg)
{
  if (!msg) {
    return;
  }
  // mode
  // target
  // velocity
}

bool
phidgets_msgs__msg__StepperCommand__are_equal(const phidgets_msgs__msg__StepperCommand * lhs, const phidgets_msgs__msg__StepperCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // target
  if (lhs->target != rhs->target) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  return true;
}

bool
phidgets_msgs__msg__StepperCommand__copy(
  const phidgets_msgs__msg__StepperCommand * input,
  phidgets_msgs__msg__StepperCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  // target
  output->target = input->target;
  // velocity
  output->velocity = input->velocity;
  return true;
}

phidgets_msgs__msg__StepperCommand *
phidgets_msgs__msg__StepperCommand__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  phidgets_msgs__msg__StepperCommand * msg = (phidgets_msgs__msg__StepperCommand *)allocator.allocate(sizeof(phidgets_msgs__msg__StepperCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(phidgets_msgs__msg__StepperCommand));
  bool success = phidgets_msgs__msg__StepperCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
phidgets_msgs__msg__StepperCommand__destroy(phidgets_msgs__msg__StepperCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    phidgets_msgs__msg__StepperCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
phidgets_msgs__msg__StepperCommand__Sequence__init(phidgets_msgs__msg__StepperCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  phidgets_msgs__msg__StepperCommand * data = NULL;

  if (size) {
    data = (phidgets_msgs__msg__StepperCommand *)allocator.zero_allocate(size, sizeof(phidgets_msgs__msg__StepperCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = phidgets_msgs__msg__StepperCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        phidgets_msgs__msg__StepperCommand__fini(&data[i - 1]);
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
phidgets_msgs__msg__StepperCommand__Sequence__fini(phidgets_msgs__msg__StepperCommand__Sequence * array)
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
      phidgets_msgs__msg__StepperCommand__fini(&array->data[i]);
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

phidgets_msgs__msg__StepperCommand__Sequence *
phidgets_msgs__msg__StepperCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  phidgets_msgs__msg__StepperCommand__Sequence * array = (phidgets_msgs__msg__StepperCommand__Sequence *)allocator.allocate(sizeof(phidgets_msgs__msg__StepperCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = phidgets_msgs__msg__StepperCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
phidgets_msgs__msg__StepperCommand__Sequence__destroy(phidgets_msgs__msg__StepperCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    phidgets_msgs__msg__StepperCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
phidgets_msgs__msg__StepperCommand__Sequence__are_equal(const phidgets_msgs__msg__StepperCommand__Sequence * lhs, const phidgets_msgs__msg__StepperCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!phidgets_msgs__msg__StepperCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
phidgets_msgs__msg__StepperCommand__Sequence__copy(
  const phidgets_msgs__msg__StepperCommand__Sequence * input,
  phidgets_msgs__msg__StepperCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(phidgets_msgs__msg__StepperCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    phidgets_msgs__msg__StepperCommand * data =
      (phidgets_msgs__msg__StepperCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!phidgets_msgs__msg__StepperCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          phidgets_msgs__msg__StepperCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!phidgets_msgs__msg__StepperCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
