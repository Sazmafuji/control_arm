// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg_store:msg/Mpu.idl
// generated code does not contain a copyright notice
#include "msg_store/msg/detail/mpu__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
msg_store__msg__Mpu__init(msg_store__msg__Mpu * msg)
{
  if (!msg) {
    return false;
  }
  // dx
  // dy
  // dz
  // dtx
  // dty
  // dtz
  return true;
}

void
msg_store__msg__Mpu__fini(msg_store__msg__Mpu * msg)
{
  if (!msg) {
    return;
  }
  // dx
  // dy
  // dz
  // dtx
  // dty
  // dtz
}

bool
msg_store__msg__Mpu__are_equal(const msg_store__msg__Mpu * lhs, const msg_store__msg__Mpu * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dx
  if (lhs->dx != rhs->dx) {
    return false;
  }
  // dy
  if (lhs->dy != rhs->dy) {
    return false;
  }
  // dz
  if (lhs->dz != rhs->dz) {
    return false;
  }
  // dtx
  if (lhs->dtx != rhs->dtx) {
    return false;
  }
  // dty
  if (lhs->dty != rhs->dty) {
    return false;
  }
  // dtz
  if (lhs->dtz != rhs->dtz) {
    return false;
  }
  return true;
}

bool
msg_store__msg__Mpu__copy(
  const msg_store__msg__Mpu * input,
  msg_store__msg__Mpu * output)
{
  if (!input || !output) {
    return false;
  }
  // dx
  output->dx = input->dx;
  // dy
  output->dy = input->dy;
  // dz
  output->dz = input->dz;
  // dtx
  output->dtx = input->dtx;
  // dty
  output->dty = input->dty;
  // dtz
  output->dtz = input->dtz;
  return true;
}

msg_store__msg__Mpu *
msg_store__msg__Mpu__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_store__msg__Mpu * msg = (msg_store__msg__Mpu *)allocator.allocate(sizeof(msg_store__msg__Mpu), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_store__msg__Mpu));
  bool success = msg_store__msg__Mpu__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_store__msg__Mpu__destroy(msg_store__msg__Mpu * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_store__msg__Mpu__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_store__msg__Mpu__Sequence__init(msg_store__msg__Mpu__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_store__msg__Mpu * data = NULL;

  if (size) {
    data = (msg_store__msg__Mpu *)allocator.zero_allocate(size, sizeof(msg_store__msg__Mpu), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_store__msg__Mpu__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_store__msg__Mpu__fini(&data[i - 1]);
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
msg_store__msg__Mpu__Sequence__fini(msg_store__msg__Mpu__Sequence * array)
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
      msg_store__msg__Mpu__fini(&array->data[i]);
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

msg_store__msg__Mpu__Sequence *
msg_store__msg__Mpu__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_store__msg__Mpu__Sequence * array = (msg_store__msg__Mpu__Sequence *)allocator.allocate(sizeof(msg_store__msg__Mpu__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_store__msg__Mpu__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_store__msg__Mpu__Sequence__destroy(msg_store__msg__Mpu__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_store__msg__Mpu__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_store__msg__Mpu__Sequence__are_equal(const msg_store__msg__Mpu__Sequence * lhs, const msg_store__msg__Mpu__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_store__msg__Mpu__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_store__msg__Mpu__Sequence__copy(
  const msg_store__msg__Mpu__Sequence * input,
  msg_store__msg__Mpu__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_store__msg__Mpu);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg_store__msg__Mpu * data =
      (msg_store__msg__Mpu *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_store__msg__Mpu__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg_store__msg__Mpu__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_store__msg__Mpu__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
