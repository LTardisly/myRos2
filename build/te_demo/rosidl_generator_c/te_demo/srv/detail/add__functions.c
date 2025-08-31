// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from te_demo:srv/Add.idl
// generated code does not contain a copyright notice
#include "te_demo/srv/detail/add__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
te_demo__srv__Add_Request__init(te_demo__srv__Add_Request * msg)
{
  if (!msg) {
    return false;
  }
  // length
  // width
  return true;
}

void
te_demo__srv__Add_Request__fini(te_demo__srv__Add_Request * msg)
{
  if (!msg) {
    return;
  }
  // length
  // width
}

bool
te_demo__srv__Add_Request__are_equal(const te_demo__srv__Add_Request * lhs, const te_demo__srv__Add_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  return true;
}

bool
te_demo__srv__Add_Request__copy(
  const te_demo__srv__Add_Request * input,
  te_demo__srv__Add_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // length
  output->length = input->length;
  // width
  output->width = input->width;
  return true;
}

te_demo__srv__Add_Request *
te_demo__srv__Add_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  te_demo__srv__Add_Request * msg = (te_demo__srv__Add_Request *)allocator.allocate(sizeof(te_demo__srv__Add_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(te_demo__srv__Add_Request));
  bool success = te_demo__srv__Add_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
te_demo__srv__Add_Request__destroy(te_demo__srv__Add_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    te_demo__srv__Add_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
te_demo__srv__Add_Request__Sequence__init(te_demo__srv__Add_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  te_demo__srv__Add_Request * data = NULL;

  if (size) {
    data = (te_demo__srv__Add_Request *)allocator.zero_allocate(size, sizeof(te_demo__srv__Add_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = te_demo__srv__Add_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        te_demo__srv__Add_Request__fini(&data[i - 1]);
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
te_demo__srv__Add_Request__Sequence__fini(te_demo__srv__Add_Request__Sequence * array)
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
      te_demo__srv__Add_Request__fini(&array->data[i]);
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

te_demo__srv__Add_Request__Sequence *
te_demo__srv__Add_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  te_demo__srv__Add_Request__Sequence * array = (te_demo__srv__Add_Request__Sequence *)allocator.allocate(sizeof(te_demo__srv__Add_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = te_demo__srv__Add_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
te_demo__srv__Add_Request__Sequence__destroy(te_demo__srv__Add_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    te_demo__srv__Add_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
te_demo__srv__Add_Request__Sequence__are_equal(const te_demo__srv__Add_Request__Sequence * lhs, const te_demo__srv__Add_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!te_demo__srv__Add_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
te_demo__srv__Add_Request__Sequence__copy(
  const te_demo__srv__Add_Request__Sequence * input,
  te_demo__srv__Add_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(te_demo__srv__Add_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    te_demo__srv__Add_Request * data =
      (te_demo__srv__Add_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!te_demo__srv__Add_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          te_demo__srv__Add_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!te_demo__srv__Add_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
te_demo__srv__Add_Response__init(te_demo__srv__Add_Response * msg)
{
  if (!msg) {
    return false;
  }
  // area
  return true;
}

void
te_demo__srv__Add_Response__fini(te_demo__srv__Add_Response * msg)
{
  if (!msg) {
    return;
  }
  // area
}

bool
te_demo__srv__Add_Response__are_equal(const te_demo__srv__Add_Response * lhs, const te_demo__srv__Add_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // area
  if (lhs->area != rhs->area) {
    return false;
  }
  return true;
}

bool
te_demo__srv__Add_Response__copy(
  const te_demo__srv__Add_Response * input,
  te_demo__srv__Add_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // area
  output->area = input->area;
  return true;
}

te_demo__srv__Add_Response *
te_demo__srv__Add_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  te_demo__srv__Add_Response * msg = (te_demo__srv__Add_Response *)allocator.allocate(sizeof(te_demo__srv__Add_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(te_demo__srv__Add_Response));
  bool success = te_demo__srv__Add_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
te_demo__srv__Add_Response__destroy(te_demo__srv__Add_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    te_demo__srv__Add_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
te_demo__srv__Add_Response__Sequence__init(te_demo__srv__Add_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  te_demo__srv__Add_Response * data = NULL;

  if (size) {
    data = (te_demo__srv__Add_Response *)allocator.zero_allocate(size, sizeof(te_demo__srv__Add_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = te_demo__srv__Add_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        te_demo__srv__Add_Response__fini(&data[i - 1]);
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
te_demo__srv__Add_Response__Sequence__fini(te_demo__srv__Add_Response__Sequence * array)
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
      te_demo__srv__Add_Response__fini(&array->data[i]);
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

te_demo__srv__Add_Response__Sequence *
te_demo__srv__Add_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  te_demo__srv__Add_Response__Sequence * array = (te_demo__srv__Add_Response__Sequence *)allocator.allocate(sizeof(te_demo__srv__Add_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = te_demo__srv__Add_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
te_demo__srv__Add_Response__Sequence__destroy(te_demo__srv__Add_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    te_demo__srv__Add_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
te_demo__srv__Add_Response__Sequence__are_equal(const te_demo__srv__Add_Response__Sequence * lhs, const te_demo__srv__Add_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!te_demo__srv__Add_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
te_demo__srv__Add_Response__Sequence__copy(
  const te_demo__srv__Add_Response__Sequence * input,
  te_demo__srv__Add_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(te_demo__srv__Add_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    te_demo__srv__Add_Response * data =
      (te_demo__srv__Add_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!te_demo__srv__Add_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          te_demo__srv__Add_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!te_demo__srv__Add_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
