// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_fndm_interface:msg/AddressBook.idl
// generated code does not contain a copyright notice
#include "ros2_fndm_interface/msg/detail/address_book__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `first_name`
// Member `last_name`
// Member `phone_number`
#include "rosidl_runtime_c/string_functions.h"

bool
ros2_fndm_interface__msg__AddressBook__init(ros2_fndm_interface__msg__AddressBook * msg)
{
  if (!msg) {
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__init(&msg->first_name)) {
    ros2_fndm_interface__msg__AddressBook__fini(msg);
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__init(&msg->last_name)) {
    ros2_fndm_interface__msg__AddressBook__fini(msg);
    return false;
  }
  // phone_number
  if (!rosidl_runtime_c__String__init(&msg->phone_number)) {
    ros2_fndm_interface__msg__AddressBook__fini(msg);
    return false;
  }
  // phone_type
  return true;
}

void
ros2_fndm_interface__msg__AddressBook__fini(ros2_fndm_interface__msg__AddressBook * msg)
{
  if (!msg) {
    return;
  }
  // first_name
  rosidl_runtime_c__String__fini(&msg->first_name);
  // last_name
  rosidl_runtime_c__String__fini(&msg->last_name);
  // phone_number
  rosidl_runtime_c__String__fini(&msg->phone_number);
  // phone_type
}

bool
ros2_fndm_interface__msg__AddressBook__are_equal(const ros2_fndm_interface__msg__AddressBook * lhs, const ros2_fndm_interface__msg__AddressBook * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->first_name), &(rhs->first_name)))
  {
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->last_name), &(rhs->last_name)))
  {
    return false;
  }
  // phone_number
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->phone_number), &(rhs->phone_number)))
  {
    return false;
  }
  // phone_type
  if (lhs->phone_type != rhs->phone_type) {
    return false;
  }
  return true;
}

bool
ros2_fndm_interface__msg__AddressBook__copy(
  const ros2_fndm_interface__msg__AddressBook * input,
  ros2_fndm_interface__msg__AddressBook * output)
{
  if (!input || !output) {
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__copy(
      &(input->first_name), &(output->first_name)))
  {
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__copy(
      &(input->last_name), &(output->last_name)))
  {
    return false;
  }
  // phone_number
  if (!rosidl_runtime_c__String__copy(
      &(input->phone_number), &(output->phone_number)))
  {
    return false;
  }
  // phone_type
  output->phone_type = input->phone_type;
  return true;
}

ros2_fndm_interface__msg__AddressBook *
ros2_fndm_interface__msg__AddressBook__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_fndm_interface__msg__AddressBook * msg = (ros2_fndm_interface__msg__AddressBook *)allocator.allocate(sizeof(ros2_fndm_interface__msg__AddressBook), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_fndm_interface__msg__AddressBook));
  bool success = ros2_fndm_interface__msg__AddressBook__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_fndm_interface__msg__AddressBook__destroy(ros2_fndm_interface__msg__AddressBook * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_fndm_interface__msg__AddressBook__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_fndm_interface__msg__AddressBook__Sequence__init(ros2_fndm_interface__msg__AddressBook__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_fndm_interface__msg__AddressBook * data = NULL;

  if (size) {
    data = (ros2_fndm_interface__msg__AddressBook *)allocator.zero_allocate(size, sizeof(ros2_fndm_interface__msg__AddressBook), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_fndm_interface__msg__AddressBook__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_fndm_interface__msg__AddressBook__fini(&data[i - 1]);
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
ros2_fndm_interface__msg__AddressBook__Sequence__fini(ros2_fndm_interface__msg__AddressBook__Sequence * array)
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
      ros2_fndm_interface__msg__AddressBook__fini(&array->data[i]);
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

ros2_fndm_interface__msg__AddressBook__Sequence *
ros2_fndm_interface__msg__AddressBook__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_fndm_interface__msg__AddressBook__Sequence * array = (ros2_fndm_interface__msg__AddressBook__Sequence *)allocator.allocate(sizeof(ros2_fndm_interface__msg__AddressBook__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_fndm_interface__msg__AddressBook__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_fndm_interface__msg__AddressBook__Sequence__destroy(ros2_fndm_interface__msg__AddressBook__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_fndm_interface__msg__AddressBook__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_fndm_interface__msg__AddressBook__Sequence__are_equal(const ros2_fndm_interface__msg__AddressBook__Sequence * lhs, const ros2_fndm_interface__msg__AddressBook__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_fndm_interface__msg__AddressBook__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_fndm_interface__msg__AddressBook__Sequence__copy(
  const ros2_fndm_interface__msg__AddressBook__Sequence * input,
  ros2_fndm_interface__msg__AddressBook__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_fndm_interface__msg__AddressBook);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_fndm_interface__msg__AddressBook * data =
      (ros2_fndm_interface__msg__AddressBook *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_fndm_interface__msg__AddressBook__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_fndm_interface__msg__AddressBook__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_fndm_interface__msg__AddressBook__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
