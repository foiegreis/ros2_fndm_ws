// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_fndm_interface:msg/Student.idl
// generated code does not contain a copyright notice
#include "ros2_fndm_interface/msg/detail/student__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `first_name`
// Member `last_name`
#include "rosidl_runtime_c/string_functions.h"

bool
ros2_fndm_interface__msg__Student__init(ros2_fndm_interface__msg__Student * msg)
{
  if (!msg) {
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__init(&msg->first_name)) {
    ros2_fndm_interface__msg__Student__fini(msg);
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__init(&msg->last_name)) {
    ros2_fndm_interface__msg__Student__fini(msg);
    return false;
  }
  // age
  return true;
}

void
ros2_fndm_interface__msg__Student__fini(ros2_fndm_interface__msg__Student * msg)
{
  if (!msg) {
    return;
  }
  // first_name
  rosidl_runtime_c__String__fini(&msg->first_name);
  // last_name
  rosidl_runtime_c__String__fini(&msg->last_name);
  // age
}

bool
ros2_fndm_interface__msg__Student__are_equal(const ros2_fndm_interface__msg__Student * lhs, const ros2_fndm_interface__msg__Student * rhs)
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
  // age
  if (lhs->age != rhs->age) {
    return false;
  }
  return true;
}

bool
ros2_fndm_interface__msg__Student__copy(
  const ros2_fndm_interface__msg__Student * input,
  ros2_fndm_interface__msg__Student * output)
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
  // age
  output->age = input->age;
  return true;
}

ros2_fndm_interface__msg__Student *
ros2_fndm_interface__msg__Student__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_fndm_interface__msg__Student * msg = (ros2_fndm_interface__msg__Student *)allocator.allocate(sizeof(ros2_fndm_interface__msg__Student), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_fndm_interface__msg__Student));
  bool success = ros2_fndm_interface__msg__Student__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_fndm_interface__msg__Student__destroy(ros2_fndm_interface__msg__Student * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_fndm_interface__msg__Student__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_fndm_interface__msg__Student__Sequence__init(ros2_fndm_interface__msg__Student__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_fndm_interface__msg__Student * data = NULL;

  if (size) {
    data = (ros2_fndm_interface__msg__Student *)allocator.zero_allocate(size, sizeof(ros2_fndm_interface__msg__Student), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_fndm_interface__msg__Student__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_fndm_interface__msg__Student__fini(&data[i - 1]);
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
ros2_fndm_interface__msg__Student__Sequence__fini(ros2_fndm_interface__msg__Student__Sequence * array)
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
      ros2_fndm_interface__msg__Student__fini(&array->data[i]);
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

ros2_fndm_interface__msg__Student__Sequence *
ros2_fndm_interface__msg__Student__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_fndm_interface__msg__Student__Sequence * array = (ros2_fndm_interface__msg__Student__Sequence *)allocator.allocate(sizeof(ros2_fndm_interface__msg__Student__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_fndm_interface__msg__Student__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_fndm_interface__msg__Student__Sequence__destroy(ros2_fndm_interface__msg__Student__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_fndm_interface__msg__Student__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_fndm_interface__msg__Student__Sequence__are_equal(const ros2_fndm_interface__msg__Student__Sequence * lhs, const ros2_fndm_interface__msg__Student__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_fndm_interface__msg__Student__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_fndm_interface__msg__Student__Sequence__copy(
  const ros2_fndm_interface__msg__Student__Sequence * input,
  ros2_fndm_interface__msg__Student__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_fndm_interface__msg__Student);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_fndm_interface__msg__Student * data =
      (ros2_fndm_interface__msg__Student *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_fndm_interface__msg__Student__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_fndm_interface__msg__Student__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_fndm_interface__msg__Student__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
