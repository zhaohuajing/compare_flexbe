// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from compare_flexbe_utilities:srv/PlaneSegmentation.idl
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
#include "compare_flexbe_utilities/srv/detail/plane_segmentation__struct.h"
#include "compare_flexbe_utilities/srv/detail/plane_segmentation__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__point_cloud2__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__point_cloud2__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool compare_flexbe_utilities__srv__plane_segmentation__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[75];
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
    assert(strncmp("compare_flexbe_utilities.srv._plane_segmentation.PlaneSegmentation_Request", full_classname_dest, 74) == 0);
  }
  compare_flexbe_utilities__srv__PlaneSegmentation_Request * ros_message = _ros_message;
  {  // input
    PyObject * field = PyObject_GetAttrString(_pymsg, "input");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__point_cloud2__convert_from_py(field, &ros_message->input)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // use_voxel
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_voxel");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_voxel = (Py_True == field);
    Py_DECREF(field);
  }
  {  // leaf_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "leaf_size");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leaf_size = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distance_threshold
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_threshold");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_threshold = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_iterations
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_iterations");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_iterations = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * compare_flexbe_utilities__srv__plane_segmentation__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PlaneSegmentation_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("compare_flexbe_utilities.srv._plane_segmentation");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PlaneSegmentation_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  compare_flexbe_utilities__srv__PlaneSegmentation_Request * ros_message = (compare_flexbe_utilities__srv__PlaneSegmentation_Request *)raw_ros_message;
  {  // input
    PyObject * field = NULL;
    field = sensor_msgs__msg__point_cloud2__convert_to_py(&ros_message->input);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "input", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_voxel
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_voxel ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_voxel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leaf_size
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leaf_size);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leaf_size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_threshold
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_threshold);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_threshold", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_iterations
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->max_iterations);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_iterations", field);
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
// #include "compare_flexbe_utilities/srv/detail/plane_segmentation__struct.h"
// already included above
// #include "compare_flexbe_utilities/srv/detail/plane_segmentation__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__point_cloud2__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__point_cloud2__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool pcl_msgs__msg__point_indices__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * pcl_msgs__msg__point_indices__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool compare_flexbe_utilities__srv__plane_segmentation__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[76];
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
    assert(strncmp("compare_flexbe_utilities.srv._plane_segmentation.PlaneSegmentation_Response", full_classname_dest, 75) == 0);
  }
  compare_flexbe_utilities__srv__PlaneSegmentation_Response * ros_message = _ros_message;
  {  // without_plane
    PyObject * field = PyObject_GetAttrString(_pymsg, "without_plane");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__point_cloud2__convert_from_py(field, &ros_message->without_plane)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // plane_indices
    PyObject * field = PyObject_GetAttrString(_pymsg, "plane_indices");
    if (!field) {
      return false;
    }
    if (!pcl_msgs__msg__point_indices__convert_from_py(field, &ros_message->plane_indices)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // plane_coefficients
    PyObject * field = PyObject_GetAttrString(_pymsg, "plane_coefficients");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 4;
      float * dest = ros_message->plane_coefficients;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // inlier_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "inlier_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->inlier_count = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * compare_flexbe_utilities__srv__plane_segmentation__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PlaneSegmentation_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("compare_flexbe_utilities.srv._plane_segmentation");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PlaneSegmentation_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  compare_flexbe_utilities__srv__PlaneSegmentation_Response * ros_message = (compare_flexbe_utilities__srv__PlaneSegmentation_Response *)raw_ros_message;
  {  // without_plane
    PyObject * field = NULL;
    field = sensor_msgs__msg__point_cloud2__convert_to_py(&ros_message->without_plane);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "without_plane", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plane_indices
    PyObject * field = NULL;
    field = pcl_msgs__msg__point_indices__convert_to_py(&ros_message->plane_indices);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "plane_indices", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plane_coefficients
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "plane_coefficients");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->plane_coefficients[0]);
    memcpy(dst, src, 4 * sizeof(float));
    Py_DECREF(field);
  }
  {  // inlier_count
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->inlier_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inlier_count", field);
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
// #include "compare_flexbe_utilities/srv/detail/plane_segmentation__struct.h"
// already included above
// #include "compare_flexbe_utilities/srv/detail/plane_segmentation__functions.h"

// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes


// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool service_msgs__msg__service_event_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * service_msgs__msg__service_event_info__convert_to_py(void * raw_ros_message);
bool compare_flexbe_utilities__srv__plane_segmentation__request__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * compare_flexbe_utilities__srv__plane_segmentation__request__convert_to_py(void * raw_ros_message);
bool compare_flexbe_utilities__srv__plane_segmentation__response__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * compare_flexbe_utilities__srv__plane_segmentation__response__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool compare_flexbe_utilities__srv__plane_segmentation__event__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[73];
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
    assert(strncmp("compare_flexbe_utilities.srv._plane_segmentation.PlaneSegmentation_Event", full_classname_dest, 72) == 0);
  }
  compare_flexbe_utilities__srv__PlaneSegmentation_Event * ros_message = _ros_message;
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
    if (!compare_flexbe_utilities__srv__PlaneSegmentation_Request__Sequence__init(&(ros_message->request), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create compare_flexbe_utilities__srv__PlaneSegmentation_Request__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    compare_flexbe_utilities__srv__PlaneSegmentation_Request * dest = ros_message->request.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!compare_flexbe_utilities__srv__plane_segmentation__request__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
    if (!compare_flexbe_utilities__srv__PlaneSegmentation_Response__Sequence__init(&(ros_message->response), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create compare_flexbe_utilities__srv__PlaneSegmentation_Response__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    compare_flexbe_utilities__srv__PlaneSegmentation_Response * dest = ros_message->response.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!compare_flexbe_utilities__srv__plane_segmentation__response__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * compare_flexbe_utilities__srv__plane_segmentation__event__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PlaneSegmentation_Event */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("compare_flexbe_utilities.srv._plane_segmentation");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PlaneSegmentation_Event");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  compare_flexbe_utilities__srv__PlaneSegmentation_Event * ros_message = (compare_flexbe_utilities__srv__PlaneSegmentation_Event *)raw_ros_message;
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
    compare_flexbe_utilities__srv__PlaneSegmentation_Request * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->request.data[i]);
      PyObject * pyitem = compare_flexbe_utilities__srv__plane_segmentation__request__convert_to_py(item);
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
    compare_flexbe_utilities__srv__PlaneSegmentation_Response * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->response.data[i]);
      PyObject * pyitem = compare_flexbe_utilities__srv__plane_segmentation__response__convert_to_py(item);
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
