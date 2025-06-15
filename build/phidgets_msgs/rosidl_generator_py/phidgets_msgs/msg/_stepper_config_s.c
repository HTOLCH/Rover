// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from phidgets_msgs:msg/StepperConfig.idl
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
#include "phidgets_msgs/msg/detail/stepper_config__struct.h"
#include "phidgets_msgs/msg/detail/stepper_config__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool phidgets_msgs__msg__stepper_config__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("phidgets_msgs.msg._stepper_config.StepperConfig", full_classname_dest, 47) == 0);
  }
  phidgets_msgs__msg__StepperConfig * ros_message = _ros_message;
  {  // min_failsafe_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_failsafe_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->min_failsafe_time = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // max_failsafe_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_failsafe_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_failsafe_time = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // min_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_position = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_position = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_acceleration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_acceleration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_velocity_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_velocity_limit");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_velocity_limit = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_velocity_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_velocity_limit");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_velocity_limit = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_current_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_current_limit");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_current_limit = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_current_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_current_limit");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_current_limit = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_data_interval
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_data_interval");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->min_data_interval = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // max_data_interval
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_data_interval");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_data_interval = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * phidgets_msgs__msg__stepper_config__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of StepperConfig */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("phidgets_msgs.msg._stepper_config");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "StepperConfig");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  phidgets_msgs__msg__StepperConfig * ros_message = (phidgets_msgs__msg__StepperConfig *)raw_ros_message;
  {  // min_failsafe_time
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->min_failsafe_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_failsafe_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_failsafe_time
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->max_failsafe_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_failsafe_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_velocity_limit
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_velocity_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_velocity_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_velocity_limit
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_velocity_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_velocity_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_current_limit
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_current_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_current_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_current_limit
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_current_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_current_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_data_interval
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->min_data_interval);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_data_interval", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_data_interval
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->max_data_interval);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_data_interval", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
