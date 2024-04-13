// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_fndm_interface:srv/GradePointAverage.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "ros2_fndm_interface/srv/detail/grade_point_average__struct.h"
#include "ros2_fndm_interface/srv/detail/grade_point_average__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ros2_fndm_interface__srv__grade_point_average__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[71];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ros2_fndm_interface.srv._grade_point_average.GradePointAverage_Request", full_classname_dest, 70) == 0);
  }
  ros2_fndm_interface__srv__GradePointAverage_Request * ros_message = _ros_message;
  {  // grade_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "grade_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->grade_1 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // grade_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "grade_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->grade_2 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // grade_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "grade_3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->grade_3 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_fndm_interface__srv__grade_point_average__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GradePointAverage_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_fndm_interface.srv._grade_point_average");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GradePointAverage_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_fndm_interface__srv__GradePointAverage_Request * ros_message = (ros2_fndm_interface__srv__GradePointAverage_Request *)raw_ros_message;
  {  // grade_1
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->grade_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "grade_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // grade_2
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->grade_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "grade_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // grade_3
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->grade_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "grade_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "ros2_fndm_interface/srv/detail/grade_point_average__struct.h"
// already included above
// #include "ros2_fndm_interface/srv/detail/grade_point_average__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ros2_fndm_interface__srv__grade_point_average__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[72];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ros2_fndm_interface.srv._grade_point_average.GradePointAverage_Response", full_classname_dest, 71) == 0);
  }
  ros2_fndm_interface__srv__GradePointAverage_Response * ros_message = _ros_message;
  {  // gpa
    PyObject * field = PyObject_GetAttrString(_pymsg, "gpa");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gpa = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_fndm_interface__srv__grade_point_average__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GradePointAverage_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_fndm_interface.srv._grade_point_average");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GradePointAverage_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_fndm_interface__srv__GradePointAverage_Response * ros_message = (ros2_fndm_interface__srv__GradePointAverage_Response *)raw_ros_message;
  {  // gpa
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gpa);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gpa", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "ros2_fndm_interface/srv/detail/grade_point_average__struct.h"
// already included above
// #include "ros2_fndm_interface/srv/detail/grade_point_average__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes


// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool service_msgs__msg__service_event_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * service_msgs__msg__service_event_info__convert_to_py(void * raw_ros_message);
bool ros2_fndm_interface__srv__grade_point_average__request__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_fndm_interface__srv__grade_point_average__request__convert_to_py(void * raw_ros_message);
bool ros2_fndm_interface__srv__grade_point_average__response__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_fndm_interface__srv__grade_point_average__response__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_fndm_interface__srv__grade_point_average__event__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[69];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ros2_fndm_interface.srv._grade_point_average.GradePointAverage_Event", full_classname_dest, 68) == 0);
  }
  ros2_fndm_interface__srv__GradePointAverage_Event * ros_message = _ros_message;
  {  // info
    PyObject * field = PyObject_GetAttrString(_pymsg, "info");
    if (!field) {
      return false;
    }
    if (!service_msgs__msg__service_event_info__convert_from_py(field, &ros_message->info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // request
    PyObject * field = PyObject_GetAttrString(_pymsg, "request");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'request'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!ros2_fndm_interface__srv__GradePointAverage_Request__Sequence__init(&(ros_message->request), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_fndm_interface__srv__GradePointAverage_Request__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_fndm_interface__srv__GradePointAverage_Request * dest = ros_message->request.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_fndm_interface__srv__grade_point_average__request__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // response
    PyObject * field = PyObject_GetAttrString(_pymsg, "response");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'response'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!ros2_fndm_interface__srv__GradePointAverage_Response__Sequence__init(&(ros_message->response), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_fndm_interface__srv__GradePointAverage_Response__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_fndm_interface__srv__GradePointAverage_Response * dest = ros_message->response.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_fndm_interface__srv__grade_point_average__response__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_fndm_interface__srv__grade_point_average__event__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GradePointAverage_Event */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_fndm_interface.srv._grade_point_average");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GradePointAverage_Event");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_fndm_interface__srv__GradePointAverage_Event * ros_message = (ros2_fndm_interface__srv__GradePointAverage_Event *)raw_ros_message;
  {  // info
    PyObject * field = NULL;
    field = service_msgs__msg__service_event_info__convert_to_py(&ros_message->info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // request
    PyObject * field = NULL;
    size_t size = ros_message->request.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_fndm_interface__srv__GradePointAverage_Request * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->request.data[i]);
      PyObject * pyitem = ros2_fndm_interface__srv__grade_point_average__request__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "request", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // response
    PyObject * field = NULL;
    size_t size = ros_message->response.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_fndm_interface__srv__GradePointAverage_Response * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->response.data[i]);
      PyObject * pyitem = ros2_fndm_interface__srv__grade_point_average__response__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "response", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
