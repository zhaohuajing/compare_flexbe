// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from compare_flexbe_utilities:srv/EuclideanClustering.idl
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
#include "compare_flexbe_utilities/srv/detail/euclidean_clustering__struct.h"
#include "compare_flexbe_utilities/srv/detail/euclidean_clustering__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__point_cloud2__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__point_cloud2__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose_stamped__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool compare_flexbe_utilities__srv__euclidean_clustering__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[79];
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
    assert(strncmp("compare_flexbe_utilities.srv._euclidean_clustering.EuclideanClustering_Request", full_classname_dest, 78) == 0);
  }
  compare_flexbe_utilities__srv__EuclideanClustering_Request * ros_message = _ros_message;
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
  {  // camera_pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "camera_pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose_stamped__convert_from_py(field, &ros_message->camera_pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // cluster_tolerance
    PyObject * field = PyObject_GetAttrString(_pymsg, "cluster_tolerance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cluster_tolerance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_cluster_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_cluster_size");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->min_cluster_size = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // max_cluster_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_cluster_size");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_cluster_size = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * compare_flexbe_utilities__srv__euclidean_clustering__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EuclideanClustering_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("compare_flexbe_utilities.srv._euclidean_clustering");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EuclideanClustering_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  compare_flexbe_utilities__srv__EuclideanClustering_Request * ros_message = (compare_flexbe_utilities__srv__EuclideanClustering_Request *)raw_ros_message;
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
  {  // camera_pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose_stamped__convert_to_py(&ros_message->camera_pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "camera_pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cluster_tolerance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cluster_tolerance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cluster_tolerance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_cluster_size
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->min_cluster_size);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_cluster_size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_cluster_size
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->max_cluster_size);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_cluster_size", field);
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
// #include "compare_flexbe_utilities/srv/detail/euclidean_clustering__struct.h"
// already included above
// #include "compare_flexbe_utilities/srv/detail/euclidean_clustering__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "pcl_msgs/msg/detail/point_indices__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool pcl_msgs__msg__point_indices__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * pcl_msgs__msg__point_indices__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool pcl_msgs__msg__point_indices__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * pcl_msgs__msg__point_indices__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool compare_flexbe_utilities__srv__euclidean_clustering__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[80];
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
    assert(strncmp("compare_flexbe_utilities.srv._euclidean_clustering.EuclideanClustering_Response", full_classname_dest, 79) == 0);
  }
  compare_flexbe_utilities__srv__EuclideanClustering_Response * ros_message = _ros_message;
  {  // target_cluster_indices
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_cluster_indices");
    if (!field) {
      return false;
    }
    if (!pcl_msgs__msg__point_indices__convert_from_py(field, &ros_message->target_cluster_indices)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // obstacle_cluster_indices
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_cluster_indices");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'obstacle_cluster_indices'");
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
    if (!pcl_msgs__msg__PointIndices__Sequence__init(&(ros_message->obstacle_cluster_indices), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create pcl_msgs__msg__PointIndices__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    pcl_msgs__msg__PointIndices * dest = ros_message->obstacle_cluster_indices.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!pcl_msgs__msg__point_indices__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * compare_flexbe_utilities__srv__euclidean_clustering__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EuclideanClustering_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("compare_flexbe_utilities.srv._euclidean_clustering");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EuclideanClustering_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  compare_flexbe_utilities__srv__EuclideanClustering_Response * ros_message = (compare_flexbe_utilities__srv__EuclideanClustering_Response *)raw_ros_message;
  {  // target_cluster_indices
    PyObject * field = NULL;
    field = pcl_msgs__msg__point_indices__convert_to_py(&ros_message->target_cluster_indices);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_cluster_indices", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle_cluster_indices
    PyObject * field = NULL;
    size_t size = ros_message->obstacle_cluster_indices.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    pcl_msgs__msg__PointIndices * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->obstacle_cluster_indices.data[i]);
      PyObject * pyitem = pcl_msgs__msg__point_indices__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_cluster_indices", field);
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
// #include "compare_flexbe_utilities/srv/detail/euclidean_clustering__struct.h"
// already included above
// #include "compare_flexbe_utilities/srv/detail/euclidean_clustering__functions.h"

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
bool compare_flexbe_utilities__srv__euclidean_clustering__request__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * compare_flexbe_utilities__srv__euclidean_clustering__request__convert_to_py(void * raw_ros_message);
bool compare_flexbe_utilities__srv__euclidean_clustering__response__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * compare_flexbe_utilities__srv__euclidean_clustering__response__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool compare_flexbe_utilities__srv__euclidean_clustering__event__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[77];
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
    assert(strncmp("compare_flexbe_utilities.srv._euclidean_clustering.EuclideanClustering_Event", full_classname_dest, 76) == 0);
  }
  compare_flexbe_utilities__srv__EuclideanClustering_Event * ros_message = _ros_message;
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
    if (!compare_flexbe_utilities__srv__EuclideanClustering_Request__Sequence__init(&(ros_message->request), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create compare_flexbe_utilities__srv__EuclideanClustering_Request__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    compare_flexbe_utilities__srv__EuclideanClustering_Request * dest = ros_message->request.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!compare_flexbe_utilities__srv__euclidean_clustering__request__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
    if (!compare_flexbe_utilities__srv__EuclideanClustering_Response__Sequence__init(&(ros_message->response), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create compare_flexbe_utilities__srv__EuclideanClustering_Response__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    compare_flexbe_utilities__srv__EuclideanClustering_Response * dest = ros_message->response.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!compare_flexbe_utilities__srv__euclidean_clustering__response__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * compare_flexbe_utilities__srv__euclidean_clustering__event__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EuclideanClustering_Event */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("compare_flexbe_utilities.srv._euclidean_clustering");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EuclideanClustering_Event");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  compare_flexbe_utilities__srv__EuclideanClustering_Event * ros_message = (compare_flexbe_utilities__srv__EuclideanClustering_Event *)raw_ros_message;
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
    compare_flexbe_utilities__srv__EuclideanClustering_Request * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->request.data[i]);
      PyObject * pyitem = compare_flexbe_utilities__srv__euclidean_clustering__request__convert_to_py(item);
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
    compare_flexbe_utilities__srv__EuclideanClustering_Response * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->response.data[i]);
      PyObject * pyitem = compare_flexbe_utilities__srv__euclidean_clustering__response__convert_to_py(item);
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
