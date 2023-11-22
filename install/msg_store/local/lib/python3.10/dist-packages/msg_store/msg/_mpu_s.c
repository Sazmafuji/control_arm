// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from msg_store:msg/Mpu.idl
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
#include "msg_store/msg/detail/mpu__struct.h"
#include "msg_store/msg/detail/mpu__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool msg_store__msg__mpu__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[23];
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
    assert(strncmp("msg_store.msg._mpu.Mpu", full_classname_dest, 22) == 0);
  }
  msg_store__msg__Mpu * ros_message = _ros_message;
  {  // dx
    PyObject * field = PyObject_GetAttrString(_pymsg, "dx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dy
    PyObject * field = PyObject_GetAttrString(_pymsg, "dy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dy = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dz
    PyObject * field = PyObject_GetAttrString(_pymsg, "dz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dz = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dtx
    PyObject * field = PyObject_GetAttrString(_pymsg, "dtx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dtx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dty
    PyObject * field = PyObject_GetAttrString(_pymsg, "dty");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dty = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dtz
    PyObject * field = PyObject_GetAttrString(_pymsg, "dtz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dtz = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * msg_store__msg__mpu__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Mpu */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("msg_store.msg._mpu");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Mpu");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  msg_store__msg__Mpu * ros_message = (msg_store__msg__Mpu *)raw_ros_message;
  {  // dx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dtx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dtx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dtx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dty
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dty);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dty", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dtz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dtz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dtz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
