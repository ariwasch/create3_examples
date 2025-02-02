// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from create3_examples_msgs:action/Coverage.idl
// generated code does not contain a copyright notice
#include "create3_examples_msgs/action/detail/coverage__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `explore_duration`
// Member `max_runtime`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
create3_examples_msgs__action__Coverage_Goal__init(create3_examples_msgs__action__Coverage_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // explore_duration
  if (!builtin_interfaces__msg__Duration__init(&msg->explore_duration)) {
    create3_examples_msgs__action__Coverage_Goal__fini(msg);
    return false;
  }
  // max_runtime
  if (!builtin_interfaces__msg__Duration__init(&msg->max_runtime)) {
    create3_examples_msgs__action__Coverage_Goal__fini(msg);
    return false;
  }
  return true;
}

void
create3_examples_msgs__action__Coverage_Goal__fini(create3_examples_msgs__action__Coverage_Goal * msg)
{
  if (!msg) {
    return;
  }
  // explore_duration
  builtin_interfaces__msg__Duration__fini(&msg->explore_duration);
  // max_runtime
  builtin_interfaces__msg__Duration__fini(&msg->max_runtime);
}

bool
create3_examples_msgs__action__Coverage_Goal__are_equal(const create3_examples_msgs__action__Coverage_Goal * lhs, const create3_examples_msgs__action__Coverage_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // explore_duration
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->explore_duration), &(rhs->explore_duration)))
  {
    return false;
  }
  // max_runtime
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->max_runtime), &(rhs->max_runtime)))
  {
    return false;
  }
  return true;
}

bool
create3_examples_msgs__action__Coverage_Goal__copy(
  const create3_examples_msgs__action__Coverage_Goal * input,
  create3_examples_msgs__action__Coverage_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // explore_duration
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->explore_duration), &(output->explore_duration)))
  {
    return false;
  }
  // max_runtime
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->max_runtime), &(output->max_runtime)))
  {
    return false;
  }
  return true;
}

create3_examples_msgs__action__Coverage_Goal *
create3_examples_msgs__action__Coverage_Goal__create()
{
  create3_examples_msgs__action__Coverage_Goal * msg = (create3_examples_msgs__action__Coverage_Goal *)malloc(sizeof(create3_examples_msgs__action__Coverage_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(create3_examples_msgs__action__Coverage_Goal));
  bool success = create3_examples_msgs__action__Coverage_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
create3_examples_msgs__action__Coverage_Goal__destroy(create3_examples_msgs__action__Coverage_Goal * msg)
{
  if (msg) {
    create3_examples_msgs__action__Coverage_Goal__fini(msg);
  }
  free(msg);
}


bool
create3_examples_msgs__action__Coverage_Goal__Sequence__init(create3_examples_msgs__action__Coverage_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  create3_examples_msgs__action__Coverage_Goal * data = NULL;
  if (size) {
    data = (create3_examples_msgs__action__Coverage_Goal *)calloc(size, sizeof(create3_examples_msgs__action__Coverage_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = create3_examples_msgs__action__Coverage_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        create3_examples_msgs__action__Coverage_Goal__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
create3_examples_msgs__action__Coverage_Goal__Sequence__fini(create3_examples_msgs__action__Coverage_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      create3_examples_msgs__action__Coverage_Goal__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

create3_examples_msgs__action__Coverage_Goal__Sequence *
create3_examples_msgs__action__Coverage_Goal__Sequence__create(size_t size)
{
  create3_examples_msgs__action__Coverage_Goal__Sequence * array = (create3_examples_msgs__action__Coverage_Goal__Sequence *)malloc(sizeof(create3_examples_msgs__action__Coverage_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = create3_examples_msgs__action__Coverage_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
create3_examples_msgs__action__Coverage_Goal__Sequence__destroy(create3_examples_msgs__action__Coverage_Goal__Sequence * array)
{
  if (array) {
    create3_examples_msgs__action__Coverage_Goal__Sequence__fini(array);
  }
  free(array);
}

bool
create3_examples_msgs__action__Coverage_Goal__Sequence__are_equal(const create3_examples_msgs__action__Coverage_Goal__Sequence * lhs, const create3_examples_msgs__action__Coverage_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!create3_examples_msgs__action__Coverage_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
create3_examples_msgs__action__Coverage_Goal__Sequence__copy(
  const create3_examples_msgs__action__Coverage_Goal__Sequence * input,
  create3_examples_msgs__action__Coverage_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(create3_examples_msgs__action__Coverage_Goal);
    create3_examples_msgs__action__Coverage_Goal * data =
      (create3_examples_msgs__action__Coverage_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!create3_examples_msgs__action__Coverage_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          create3_examples_msgs__action__Coverage_Goal__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!create3_examples_msgs__action__Coverage_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `duration`
// already included above
// #include "builtin_interfaces/msg/detail/duration__functions.h"

bool
create3_examples_msgs__action__Coverage_Result__init(create3_examples_msgs__action__Coverage_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // is_docked
  // duration
  if (!builtin_interfaces__msg__Duration__init(&msg->duration)) {
    create3_examples_msgs__action__Coverage_Result__fini(msg);
    return false;
  }
  return true;
}

void
create3_examples_msgs__action__Coverage_Result__fini(create3_examples_msgs__action__Coverage_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // is_docked
  // duration
  builtin_interfaces__msg__Duration__fini(&msg->duration);
}

bool
create3_examples_msgs__action__Coverage_Result__are_equal(const create3_examples_msgs__action__Coverage_Result * lhs, const create3_examples_msgs__action__Coverage_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // is_docked
  if (lhs->is_docked != rhs->is_docked) {
    return false;
  }
  // duration
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->duration), &(rhs->duration)))
  {
    return false;
  }
  return true;
}

bool
create3_examples_msgs__action__Coverage_Result__copy(
  const create3_examples_msgs__action__Coverage_Result * input,
  create3_examples_msgs__action__Coverage_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // is_docked
  output->is_docked = input->is_docked;
  // duration
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->duration), &(output->duration)))
  {
    return false;
  }
  return true;
}

create3_examples_msgs__action__Coverage_Result *
create3_examples_msgs__action__Coverage_Result__create()
{
  create3_examples_msgs__action__Coverage_Result * msg = (create3_examples_msgs__action__Coverage_Result *)malloc(sizeof(create3_examples_msgs__action__Coverage_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(create3_examples_msgs__action__Coverage_Result));
  bool success = create3_examples_msgs__action__Coverage_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
create3_examples_msgs__action__Coverage_Result__destroy(create3_examples_msgs__action__Coverage_Result * msg)
{
  if (msg) {
    create3_examples_msgs__action__Coverage_Result__fini(msg);
  }
  free(msg);
}


bool
create3_examples_msgs__action__Coverage_Result__Sequence__init(create3_examples_msgs__action__Coverage_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  create3_examples_msgs__action__Coverage_Result * data = NULL;
  if (size) {
    data = (create3_examples_msgs__action__Coverage_Result *)calloc(size, sizeof(create3_examples_msgs__action__Coverage_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = create3_examples_msgs__action__Coverage_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        create3_examples_msgs__action__Coverage_Result__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
create3_examples_msgs__action__Coverage_Result__Sequence__fini(create3_examples_msgs__action__Coverage_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      create3_examples_msgs__action__Coverage_Result__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

create3_examples_msgs__action__Coverage_Result__Sequence *
create3_examples_msgs__action__Coverage_Result__Sequence__create(size_t size)
{
  create3_examples_msgs__action__Coverage_Result__Sequence * array = (create3_examples_msgs__action__Coverage_Result__Sequence *)malloc(sizeof(create3_examples_msgs__action__Coverage_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = create3_examples_msgs__action__Coverage_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
create3_examples_msgs__action__Coverage_Result__Sequence__destroy(create3_examples_msgs__action__Coverage_Result__Sequence * array)
{
  if (array) {
    create3_examples_msgs__action__Coverage_Result__Sequence__fini(array);
  }
  free(array);
}

bool
create3_examples_msgs__action__Coverage_Result__Sequence__are_equal(const create3_examples_msgs__action__Coverage_Result__Sequence * lhs, const create3_examples_msgs__action__Coverage_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!create3_examples_msgs__action__Coverage_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
create3_examples_msgs__action__Coverage_Result__Sequence__copy(
  const create3_examples_msgs__action__Coverage_Result__Sequence * input,
  create3_examples_msgs__action__Coverage_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(create3_examples_msgs__action__Coverage_Result);
    create3_examples_msgs__action__Coverage_Result * data =
      (create3_examples_msgs__action__Coverage_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!create3_examples_msgs__action__Coverage_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          create3_examples_msgs__action__Coverage_Result__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!create3_examples_msgs__action__Coverage_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
create3_examples_msgs__action__Coverage_Feedback__init(create3_examples_msgs__action__Coverage_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_behavior
  return true;
}

void
create3_examples_msgs__action__Coverage_Feedback__fini(create3_examples_msgs__action__Coverage_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_behavior
}

bool
create3_examples_msgs__action__Coverage_Feedback__are_equal(const create3_examples_msgs__action__Coverage_Feedback * lhs, const create3_examples_msgs__action__Coverage_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_behavior
  if (lhs->current_behavior != rhs->current_behavior) {
    return false;
  }
  return true;
}

bool
create3_examples_msgs__action__Coverage_Feedback__copy(
  const create3_examples_msgs__action__Coverage_Feedback * input,
  create3_examples_msgs__action__Coverage_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_behavior
  output->current_behavior = input->current_behavior;
  return true;
}

create3_examples_msgs__action__Coverage_Feedback *
create3_examples_msgs__action__Coverage_Feedback__create()
{
  create3_examples_msgs__action__Coverage_Feedback * msg = (create3_examples_msgs__action__Coverage_Feedback *)malloc(sizeof(create3_examples_msgs__action__Coverage_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(create3_examples_msgs__action__Coverage_Feedback));
  bool success = create3_examples_msgs__action__Coverage_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
create3_examples_msgs__action__Coverage_Feedback__destroy(create3_examples_msgs__action__Coverage_Feedback * msg)
{
  if (msg) {
    create3_examples_msgs__action__Coverage_Feedback__fini(msg);
  }
  free(msg);
}


bool
create3_examples_msgs__action__Coverage_Feedback__Sequence__init(create3_examples_msgs__action__Coverage_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  create3_examples_msgs__action__Coverage_Feedback * data = NULL;
  if (size) {
    data = (create3_examples_msgs__action__Coverage_Feedback *)calloc(size, sizeof(create3_examples_msgs__action__Coverage_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = create3_examples_msgs__action__Coverage_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        create3_examples_msgs__action__Coverage_Feedback__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
create3_examples_msgs__action__Coverage_Feedback__Sequence__fini(create3_examples_msgs__action__Coverage_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      create3_examples_msgs__action__Coverage_Feedback__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

create3_examples_msgs__action__Coverage_Feedback__Sequence *
create3_examples_msgs__action__Coverage_Feedback__Sequence__create(size_t size)
{
  create3_examples_msgs__action__Coverage_Feedback__Sequence * array = (create3_examples_msgs__action__Coverage_Feedback__Sequence *)malloc(sizeof(create3_examples_msgs__action__Coverage_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = create3_examples_msgs__action__Coverage_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
create3_examples_msgs__action__Coverage_Feedback__Sequence__destroy(create3_examples_msgs__action__Coverage_Feedback__Sequence * array)
{
  if (array) {
    create3_examples_msgs__action__Coverage_Feedback__Sequence__fini(array);
  }
  free(array);
}

bool
create3_examples_msgs__action__Coverage_Feedback__Sequence__are_equal(const create3_examples_msgs__action__Coverage_Feedback__Sequence * lhs, const create3_examples_msgs__action__Coverage_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!create3_examples_msgs__action__Coverage_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
create3_examples_msgs__action__Coverage_Feedback__Sequence__copy(
  const create3_examples_msgs__action__Coverage_Feedback__Sequence * input,
  create3_examples_msgs__action__Coverage_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(create3_examples_msgs__action__Coverage_Feedback);
    create3_examples_msgs__action__Coverage_Feedback * data =
      (create3_examples_msgs__action__Coverage_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!create3_examples_msgs__action__Coverage_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          create3_examples_msgs__action__Coverage_Feedback__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!create3_examples_msgs__action__Coverage_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "create3_examples_msgs/action/detail/coverage__functions.h"

bool
create3_examples_msgs__action__Coverage_SendGoal_Request__init(create3_examples_msgs__action__Coverage_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    create3_examples_msgs__action__Coverage_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!create3_examples_msgs__action__Coverage_Goal__init(&msg->goal)) {
    create3_examples_msgs__action__Coverage_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
create3_examples_msgs__action__Coverage_SendGoal_Request__fini(create3_examples_msgs__action__Coverage_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  create3_examples_msgs__action__Coverage_Goal__fini(&msg->goal);
}

bool
create3_examples_msgs__action__Coverage_SendGoal_Request__are_equal(const create3_examples_msgs__action__Coverage_SendGoal_Request * lhs, const create3_examples_msgs__action__Coverage_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!create3_examples_msgs__action__Coverage_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
create3_examples_msgs__action__Coverage_SendGoal_Request__copy(
  const create3_examples_msgs__action__Coverage_SendGoal_Request * input,
  create3_examples_msgs__action__Coverage_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!create3_examples_msgs__action__Coverage_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

create3_examples_msgs__action__Coverage_SendGoal_Request *
create3_examples_msgs__action__Coverage_SendGoal_Request__create()
{
  create3_examples_msgs__action__Coverage_SendGoal_Request * msg = (create3_examples_msgs__action__Coverage_SendGoal_Request *)malloc(sizeof(create3_examples_msgs__action__Coverage_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(create3_examples_msgs__action__Coverage_SendGoal_Request));
  bool success = create3_examples_msgs__action__Coverage_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
create3_examples_msgs__action__Coverage_SendGoal_Request__destroy(create3_examples_msgs__action__Coverage_SendGoal_Request * msg)
{
  if (msg) {
    create3_examples_msgs__action__Coverage_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence__init(create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  create3_examples_msgs__action__Coverage_SendGoal_Request * data = NULL;
  if (size) {
    data = (create3_examples_msgs__action__Coverage_SendGoal_Request *)calloc(size, sizeof(create3_examples_msgs__action__Coverage_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = create3_examples_msgs__action__Coverage_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        create3_examples_msgs__action__Coverage_SendGoal_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence__fini(create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      create3_examples_msgs__action__Coverage_SendGoal_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence *
create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence__create(size_t size)
{
  create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence * array = (create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence *)malloc(sizeof(create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence__destroy(create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence * array)
{
  if (array) {
    create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}

bool
create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence__are_equal(const create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence * lhs, const create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!create3_examples_msgs__action__Coverage_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence__copy(
  const create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence * input,
  create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(create3_examples_msgs__action__Coverage_SendGoal_Request);
    create3_examples_msgs__action__Coverage_SendGoal_Request * data =
      (create3_examples_msgs__action__Coverage_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!create3_examples_msgs__action__Coverage_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          create3_examples_msgs__action__Coverage_SendGoal_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!create3_examples_msgs__action__Coverage_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
create3_examples_msgs__action__Coverage_SendGoal_Response__init(create3_examples_msgs__action__Coverage_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    create3_examples_msgs__action__Coverage_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
create3_examples_msgs__action__Coverage_SendGoal_Response__fini(create3_examples_msgs__action__Coverage_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
create3_examples_msgs__action__Coverage_SendGoal_Response__are_equal(const create3_examples_msgs__action__Coverage_SendGoal_Response * lhs, const create3_examples_msgs__action__Coverage_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
create3_examples_msgs__action__Coverage_SendGoal_Response__copy(
  const create3_examples_msgs__action__Coverage_SendGoal_Response * input,
  create3_examples_msgs__action__Coverage_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

create3_examples_msgs__action__Coverage_SendGoal_Response *
create3_examples_msgs__action__Coverage_SendGoal_Response__create()
{
  create3_examples_msgs__action__Coverage_SendGoal_Response * msg = (create3_examples_msgs__action__Coverage_SendGoal_Response *)malloc(sizeof(create3_examples_msgs__action__Coverage_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(create3_examples_msgs__action__Coverage_SendGoal_Response));
  bool success = create3_examples_msgs__action__Coverage_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
create3_examples_msgs__action__Coverage_SendGoal_Response__destroy(create3_examples_msgs__action__Coverage_SendGoal_Response * msg)
{
  if (msg) {
    create3_examples_msgs__action__Coverage_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence__init(create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  create3_examples_msgs__action__Coverage_SendGoal_Response * data = NULL;
  if (size) {
    data = (create3_examples_msgs__action__Coverage_SendGoal_Response *)calloc(size, sizeof(create3_examples_msgs__action__Coverage_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = create3_examples_msgs__action__Coverage_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        create3_examples_msgs__action__Coverage_SendGoal_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence__fini(create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      create3_examples_msgs__action__Coverage_SendGoal_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence *
create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence__create(size_t size)
{
  create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence * array = (create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence *)malloc(sizeof(create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence__destroy(create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence * array)
{
  if (array) {
    create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}

bool
create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence__are_equal(const create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence * lhs, const create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!create3_examples_msgs__action__Coverage_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence__copy(
  const create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence * input,
  create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(create3_examples_msgs__action__Coverage_SendGoal_Response);
    create3_examples_msgs__action__Coverage_SendGoal_Response * data =
      (create3_examples_msgs__action__Coverage_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!create3_examples_msgs__action__Coverage_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          create3_examples_msgs__action__Coverage_SendGoal_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!create3_examples_msgs__action__Coverage_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
create3_examples_msgs__action__Coverage_GetResult_Request__init(create3_examples_msgs__action__Coverage_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    create3_examples_msgs__action__Coverage_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
create3_examples_msgs__action__Coverage_GetResult_Request__fini(create3_examples_msgs__action__Coverage_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
create3_examples_msgs__action__Coverage_GetResult_Request__are_equal(const create3_examples_msgs__action__Coverage_GetResult_Request * lhs, const create3_examples_msgs__action__Coverage_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
create3_examples_msgs__action__Coverage_GetResult_Request__copy(
  const create3_examples_msgs__action__Coverage_GetResult_Request * input,
  create3_examples_msgs__action__Coverage_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

create3_examples_msgs__action__Coverage_GetResult_Request *
create3_examples_msgs__action__Coverage_GetResult_Request__create()
{
  create3_examples_msgs__action__Coverage_GetResult_Request * msg = (create3_examples_msgs__action__Coverage_GetResult_Request *)malloc(sizeof(create3_examples_msgs__action__Coverage_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(create3_examples_msgs__action__Coverage_GetResult_Request));
  bool success = create3_examples_msgs__action__Coverage_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
create3_examples_msgs__action__Coverage_GetResult_Request__destroy(create3_examples_msgs__action__Coverage_GetResult_Request * msg)
{
  if (msg) {
    create3_examples_msgs__action__Coverage_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
create3_examples_msgs__action__Coverage_GetResult_Request__Sequence__init(create3_examples_msgs__action__Coverage_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  create3_examples_msgs__action__Coverage_GetResult_Request * data = NULL;
  if (size) {
    data = (create3_examples_msgs__action__Coverage_GetResult_Request *)calloc(size, sizeof(create3_examples_msgs__action__Coverage_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = create3_examples_msgs__action__Coverage_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        create3_examples_msgs__action__Coverage_GetResult_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
create3_examples_msgs__action__Coverage_GetResult_Request__Sequence__fini(create3_examples_msgs__action__Coverage_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      create3_examples_msgs__action__Coverage_GetResult_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

create3_examples_msgs__action__Coverage_GetResult_Request__Sequence *
create3_examples_msgs__action__Coverage_GetResult_Request__Sequence__create(size_t size)
{
  create3_examples_msgs__action__Coverage_GetResult_Request__Sequence * array = (create3_examples_msgs__action__Coverage_GetResult_Request__Sequence *)malloc(sizeof(create3_examples_msgs__action__Coverage_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = create3_examples_msgs__action__Coverage_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
create3_examples_msgs__action__Coverage_GetResult_Request__Sequence__destroy(create3_examples_msgs__action__Coverage_GetResult_Request__Sequence * array)
{
  if (array) {
    create3_examples_msgs__action__Coverage_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}

bool
create3_examples_msgs__action__Coverage_GetResult_Request__Sequence__are_equal(const create3_examples_msgs__action__Coverage_GetResult_Request__Sequence * lhs, const create3_examples_msgs__action__Coverage_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!create3_examples_msgs__action__Coverage_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
create3_examples_msgs__action__Coverage_GetResult_Request__Sequence__copy(
  const create3_examples_msgs__action__Coverage_GetResult_Request__Sequence * input,
  create3_examples_msgs__action__Coverage_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(create3_examples_msgs__action__Coverage_GetResult_Request);
    create3_examples_msgs__action__Coverage_GetResult_Request * data =
      (create3_examples_msgs__action__Coverage_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!create3_examples_msgs__action__Coverage_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          create3_examples_msgs__action__Coverage_GetResult_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!create3_examples_msgs__action__Coverage_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "create3_examples_msgs/action/detail/coverage__functions.h"

bool
create3_examples_msgs__action__Coverage_GetResult_Response__init(create3_examples_msgs__action__Coverage_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!create3_examples_msgs__action__Coverage_Result__init(&msg->result)) {
    create3_examples_msgs__action__Coverage_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
create3_examples_msgs__action__Coverage_GetResult_Response__fini(create3_examples_msgs__action__Coverage_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  create3_examples_msgs__action__Coverage_Result__fini(&msg->result);
}

bool
create3_examples_msgs__action__Coverage_GetResult_Response__are_equal(const create3_examples_msgs__action__Coverage_GetResult_Response * lhs, const create3_examples_msgs__action__Coverage_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!create3_examples_msgs__action__Coverage_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
create3_examples_msgs__action__Coverage_GetResult_Response__copy(
  const create3_examples_msgs__action__Coverage_GetResult_Response * input,
  create3_examples_msgs__action__Coverage_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!create3_examples_msgs__action__Coverage_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

create3_examples_msgs__action__Coverage_GetResult_Response *
create3_examples_msgs__action__Coverage_GetResult_Response__create()
{
  create3_examples_msgs__action__Coverage_GetResult_Response * msg = (create3_examples_msgs__action__Coverage_GetResult_Response *)malloc(sizeof(create3_examples_msgs__action__Coverage_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(create3_examples_msgs__action__Coverage_GetResult_Response));
  bool success = create3_examples_msgs__action__Coverage_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
create3_examples_msgs__action__Coverage_GetResult_Response__destroy(create3_examples_msgs__action__Coverage_GetResult_Response * msg)
{
  if (msg) {
    create3_examples_msgs__action__Coverage_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
create3_examples_msgs__action__Coverage_GetResult_Response__Sequence__init(create3_examples_msgs__action__Coverage_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  create3_examples_msgs__action__Coverage_GetResult_Response * data = NULL;
  if (size) {
    data = (create3_examples_msgs__action__Coverage_GetResult_Response *)calloc(size, sizeof(create3_examples_msgs__action__Coverage_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = create3_examples_msgs__action__Coverage_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        create3_examples_msgs__action__Coverage_GetResult_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
create3_examples_msgs__action__Coverage_GetResult_Response__Sequence__fini(create3_examples_msgs__action__Coverage_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      create3_examples_msgs__action__Coverage_GetResult_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

create3_examples_msgs__action__Coverage_GetResult_Response__Sequence *
create3_examples_msgs__action__Coverage_GetResult_Response__Sequence__create(size_t size)
{
  create3_examples_msgs__action__Coverage_GetResult_Response__Sequence * array = (create3_examples_msgs__action__Coverage_GetResult_Response__Sequence *)malloc(sizeof(create3_examples_msgs__action__Coverage_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = create3_examples_msgs__action__Coverage_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
create3_examples_msgs__action__Coverage_GetResult_Response__Sequence__destroy(create3_examples_msgs__action__Coverage_GetResult_Response__Sequence * array)
{
  if (array) {
    create3_examples_msgs__action__Coverage_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}

bool
create3_examples_msgs__action__Coverage_GetResult_Response__Sequence__are_equal(const create3_examples_msgs__action__Coverage_GetResult_Response__Sequence * lhs, const create3_examples_msgs__action__Coverage_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!create3_examples_msgs__action__Coverage_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
create3_examples_msgs__action__Coverage_GetResult_Response__Sequence__copy(
  const create3_examples_msgs__action__Coverage_GetResult_Response__Sequence * input,
  create3_examples_msgs__action__Coverage_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(create3_examples_msgs__action__Coverage_GetResult_Response);
    create3_examples_msgs__action__Coverage_GetResult_Response * data =
      (create3_examples_msgs__action__Coverage_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!create3_examples_msgs__action__Coverage_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          create3_examples_msgs__action__Coverage_GetResult_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!create3_examples_msgs__action__Coverage_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "create3_examples_msgs/action/detail/coverage__functions.h"

bool
create3_examples_msgs__action__Coverage_FeedbackMessage__init(create3_examples_msgs__action__Coverage_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    create3_examples_msgs__action__Coverage_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!create3_examples_msgs__action__Coverage_Feedback__init(&msg->feedback)) {
    create3_examples_msgs__action__Coverage_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
create3_examples_msgs__action__Coverage_FeedbackMessage__fini(create3_examples_msgs__action__Coverage_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  create3_examples_msgs__action__Coverage_Feedback__fini(&msg->feedback);
}

bool
create3_examples_msgs__action__Coverage_FeedbackMessage__are_equal(const create3_examples_msgs__action__Coverage_FeedbackMessage * lhs, const create3_examples_msgs__action__Coverage_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!create3_examples_msgs__action__Coverage_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
create3_examples_msgs__action__Coverage_FeedbackMessage__copy(
  const create3_examples_msgs__action__Coverage_FeedbackMessage * input,
  create3_examples_msgs__action__Coverage_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!create3_examples_msgs__action__Coverage_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

create3_examples_msgs__action__Coverage_FeedbackMessage *
create3_examples_msgs__action__Coverage_FeedbackMessage__create()
{
  create3_examples_msgs__action__Coverage_FeedbackMessage * msg = (create3_examples_msgs__action__Coverage_FeedbackMessage *)malloc(sizeof(create3_examples_msgs__action__Coverage_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(create3_examples_msgs__action__Coverage_FeedbackMessage));
  bool success = create3_examples_msgs__action__Coverage_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
create3_examples_msgs__action__Coverage_FeedbackMessage__destroy(create3_examples_msgs__action__Coverage_FeedbackMessage * msg)
{
  if (msg) {
    create3_examples_msgs__action__Coverage_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence__init(create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  create3_examples_msgs__action__Coverage_FeedbackMessage * data = NULL;
  if (size) {
    data = (create3_examples_msgs__action__Coverage_FeedbackMessage *)calloc(size, sizeof(create3_examples_msgs__action__Coverage_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = create3_examples_msgs__action__Coverage_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        create3_examples_msgs__action__Coverage_FeedbackMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence__fini(create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      create3_examples_msgs__action__Coverage_FeedbackMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence *
create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence__create(size_t size)
{
  create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence * array = (create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence *)malloc(sizeof(create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence__destroy(create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence * array)
{
  if (array) {
    create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}

bool
create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence__are_equal(const create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence * lhs, const create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!create3_examples_msgs__action__Coverage_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence__copy(
  const create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence * input,
  create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(create3_examples_msgs__action__Coverage_FeedbackMessage);
    create3_examples_msgs__action__Coverage_FeedbackMessage * data =
      (create3_examples_msgs__action__Coverage_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!create3_examples_msgs__action__Coverage_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          create3_examples_msgs__action__Coverage_FeedbackMessage__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!create3_examples_msgs__action__Coverage_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
