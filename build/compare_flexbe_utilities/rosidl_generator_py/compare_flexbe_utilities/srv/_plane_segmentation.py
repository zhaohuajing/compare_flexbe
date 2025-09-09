# generated from rosidl_generator_py/resource/_idl.py.em
# with input from compare_flexbe_utilities:srv/PlaneSegmentation.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlaneSegmentation_Request(type):
    """Metaclass of message 'PlaneSegmentation_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('compare_flexbe_utilities')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'compare_flexbe_utilities.srv.PlaneSegmentation_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__plane_segmentation__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__plane_segmentation__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__plane_segmentation__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__plane_segmentation__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__plane_segmentation__request

            from sensor_msgs.msg import PointCloud2
            if PointCloud2.__class__._TYPE_SUPPORT is None:
                PointCloud2.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlaneSegmentation_Request(metaclass=Metaclass_PlaneSegmentation_Request):
    """Message class 'PlaneSegmentation_Request'."""

    __slots__ = [
        '_input',
        '_use_voxel',
        '_leaf_size',
        '_distance_threshold',
        '_max_iterations',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'input': 'sensor_msgs/PointCloud2',
        'use_voxel': 'boolean',
        'leaf_size': 'float',
        'distance_threshold': 'float',
        'max_iterations': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import PointCloud2
        self.input = kwargs.get('input', PointCloud2())
        self.use_voxel = kwargs.get('use_voxel', bool())
        self.leaf_size = kwargs.get('leaf_size', float())
        self.distance_threshold = kwargs.get('distance_threshold', float())
        self.max_iterations = kwargs.get('max_iterations', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.input != other.input:
            return False
        if self.use_voxel != other.use_voxel:
            return False
        if self.leaf_size != other.leaf_size:
            return False
        if self.distance_threshold != other.distance_threshold:
            return False
        if self.max_iterations != other.max_iterations:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def input(self):  # noqa: A003
        """Message field 'input'."""
        return self._input

    @input.setter  # noqa: A003
    def input(self, value):  # noqa: A003
        if self._check_fields:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'input' field must be a sub message of type 'PointCloud2'"
        self._input = value

    @builtins.property
    def use_voxel(self):
        """Message field 'use_voxel'."""
        return self._use_voxel

    @use_voxel.setter
    def use_voxel(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'use_voxel' field must be of type 'bool'"
        self._use_voxel = value

    @builtins.property
    def leaf_size(self):
        """Message field 'leaf_size'."""
        return self._leaf_size

    @leaf_size.setter
    def leaf_size(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'leaf_size' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leaf_size' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leaf_size = value

    @builtins.property
    def distance_threshold(self):
        """Message field 'distance_threshold'."""
        return self._distance_threshold

    @distance_threshold.setter
    def distance_threshold(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'distance_threshold' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_threshold' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_threshold = value

    @builtins.property
    def max_iterations(self):
        """Message field 'max_iterations'."""
        return self._max_iterations

    @max_iterations.setter
    def max_iterations(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'max_iterations' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'max_iterations' field must be an integer in [-2147483648, 2147483647]"
        self._max_iterations = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# Member 'plane_coefficients'
import numpy  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_PlaneSegmentation_Response(type):
    """Metaclass of message 'PlaneSegmentation_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('compare_flexbe_utilities')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'compare_flexbe_utilities.srv.PlaneSegmentation_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__plane_segmentation__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__plane_segmentation__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__plane_segmentation__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__plane_segmentation__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__plane_segmentation__response

            from pcl_msgs.msg import PointIndices
            if PointIndices.__class__._TYPE_SUPPORT is None:
                PointIndices.__class__.__import_type_support__()

            from sensor_msgs.msg import PointCloud2
            if PointCloud2.__class__._TYPE_SUPPORT is None:
                PointCloud2.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlaneSegmentation_Response(metaclass=Metaclass_PlaneSegmentation_Response):
    """Message class 'PlaneSegmentation_Response'."""

    __slots__ = [
        '_without_plane',
        '_plane_indices',
        '_plane_coefficients',
        '_inlier_count',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'without_plane': 'sensor_msgs/PointCloud2',
        'plane_indices': 'pcl_msgs/PointIndices',
        'plane_coefficients': 'float[4]',
        'inlier_count': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['pcl_msgs', 'msg'], 'PointIndices'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import PointCloud2
        self.without_plane = kwargs.get('without_plane', PointCloud2())
        from pcl_msgs.msg import PointIndices
        self.plane_indices = kwargs.get('plane_indices', PointIndices())
        if 'plane_coefficients' not in kwargs:
            self.plane_coefficients = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.plane_coefficients = numpy.array(kwargs.get('plane_coefficients'), dtype=numpy.float32)
            assert self.plane_coefficients.shape == (4, )
        self.inlier_count = kwargs.get('inlier_count', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.without_plane != other.without_plane:
            return False
        if self.plane_indices != other.plane_indices:
            return False
        if any(self.plane_coefficients != other.plane_coefficients):
            return False
        if self.inlier_count != other.inlier_count:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def without_plane(self):
        """Message field 'without_plane'."""
        return self._without_plane

    @without_plane.setter
    def without_plane(self, value):
        if self._check_fields:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'without_plane' field must be a sub message of type 'PointCloud2'"
        self._without_plane = value

    @builtins.property
    def plane_indices(self):
        """Message field 'plane_indices'."""
        return self._plane_indices

    @plane_indices.setter
    def plane_indices(self, value):
        if self._check_fields:
            from pcl_msgs.msg import PointIndices
            assert \
                isinstance(value, PointIndices), \
                "The 'plane_indices' field must be a sub message of type 'PointIndices'"
        self._plane_indices = value

    @builtins.property
    def plane_coefficients(self):
        """Message field 'plane_coefficients'."""
        return self._plane_coefficients

    @plane_coefficients.setter
    def plane_coefficients(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float32, \
                    "The 'plane_coefficients' numpy.ndarray() must have the dtype of 'numpy.float32'"
                assert value.size == 4, \
                    "The 'plane_coefficients' numpy.ndarray() must have a size of 4"
                self._plane_coefficients = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'plane_coefficients' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._plane_coefficients = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def inlier_count(self):
        """Message field 'inlier_count'."""
        return self._inlier_count

    @inlier_count.setter
    def inlier_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'inlier_count' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'inlier_count' field must be an integer in [-2147483648, 2147483647]"
        self._inlier_count = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PlaneSegmentation_Event(type):
    """Metaclass of message 'PlaneSegmentation_Event'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('compare_flexbe_utilities')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'compare_flexbe_utilities.srv.PlaneSegmentation_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__plane_segmentation__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__plane_segmentation__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__plane_segmentation__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__plane_segmentation__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__plane_segmentation__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlaneSegmentation_Event(metaclass=Metaclass_PlaneSegmentation_Event):
    """Message class 'PlaneSegmentation_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<compare_flexbe_utilities/PlaneSegmentation_Request, 1>',
        'response': 'sequence<compare_flexbe_utilities/PlaneSegmentation_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['compare_flexbe_utilities', 'srv'], 'PlaneSegmentation_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['compare_flexbe_utilities', 'srv'], 'PlaneSegmentation_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from compare_flexbe_utilities.srv import PlaneSegmentation_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, PlaneSegmentation_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'PlaneSegmentation_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from compare_flexbe_utilities.srv import PlaneSegmentation_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, PlaneSegmentation_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'PlaneSegmentation_Response'"
        self._response = value


class Metaclass_PlaneSegmentation(type):
    """Metaclass of service 'PlaneSegmentation'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('compare_flexbe_utilities')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'compare_flexbe_utilities.srv.PlaneSegmentation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__plane_segmentation

            from compare_flexbe_utilities.srv import _plane_segmentation
            if _plane_segmentation.Metaclass_PlaneSegmentation_Request._TYPE_SUPPORT is None:
                _plane_segmentation.Metaclass_PlaneSegmentation_Request.__import_type_support__()
            if _plane_segmentation.Metaclass_PlaneSegmentation_Response._TYPE_SUPPORT is None:
                _plane_segmentation.Metaclass_PlaneSegmentation_Response.__import_type_support__()
            if _plane_segmentation.Metaclass_PlaneSegmentation_Event._TYPE_SUPPORT is None:
                _plane_segmentation.Metaclass_PlaneSegmentation_Event.__import_type_support__()


class PlaneSegmentation(metaclass=Metaclass_PlaneSegmentation):
    from compare_flexbe_utilities.srv._plane_segmentation import PlaneSegmentation_Request as Request
    from compare_flexbe_utilities.srv._plane_segmentation import PlaneSegmentation_Response as Response
    from compare_flexbe_utilities.srv._plane_segmentation import PlaneSegmentation_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
