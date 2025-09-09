# generated from rosidl_generator_py/resource/_idl.py.em
# with input from compare_flexbe_utilities:srv/EuclideanClustering.idl
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


class Metaclass_EuclideanClustering_Request(type):
    """Metaclass of message 'EuclideanClustering_Request'."""

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
                'compare_flexbe_utilities.srv.EuclideanClustering_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__euclidean_clustering__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__euclidean_clustering__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__euclidean_clustering__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__euclidean_clustering__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__euclidean_clustering__request

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

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


class EuclideanClustering_Request(metaclass=Metaclass_EuclideanClustering_Request):
    """Message class 'EuclideanClustering_Request'."""

    __slots__ = [
        '_input',
        '_camera_pose',
        '_cluster_tolerance',
        '_min_cluster_size',
        '_max_cluster_size',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'input': 'sensor_msgs/PointCloud2',
        'camera_pose': 'geometry_msgs/PoseStamped',
        'cluster_tolerance': 'float',
        'min_cluster_size': 'int32',
        'max_cluster_size': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
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
        from geometry_msgs.msg import PoseStamped
        self.camera_pose = kwargs.get('camera_pose', PoseStamped())
        self.cluster_tolerance = kwargs.get('cluster_tolerance', float())
        self.min_cluster_size = kwargs.get('min_cluster_size', int())
        self.max_cluster_size = kwargs.get('max_cluster_size', int())

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
        if self.camera_pose != other.camera_pose:
            return False
        if self.cluster_tolerance != other.cluster_tolerance:
            return False
        if self.min_cluster_size != other.min_cluster_size:
            return False
        if self.max_cluster_size != other.max_cluster_size:
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
    def camera_pose(self):
        """Message field 'camera_pose'."""
        return self._camera_pose

    @camera_pose.setter
    def camera_pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'camera_pose' field must be a sub message of type 'PoseStamped'"
        self._camera_pose = value

    @builtins.property
    def cluster_tolerance(self):
        """Message field 'cluster_tolerance'."""
        return self._cluster_tolerance

    @cluster_tolerance.setter
    def cluster_tolerance(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'cluster_tolerance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cluster_tolerance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cluster_tolerance = value

    @builtins.property
    def min_cluster_size(self):
        """Message field 'min_cluster_size'."""
        return self._min_cluster_size

    @min_cluster_size.setter
    def min_cluster_size(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'min_cluster_size' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'min_cluster_size' field must be an integer in [-2147483648, 2147483647]"
        self._min_cluster_size = value

    @builtins.property
    def max_cluster_size(self):
        """Message field 'max_cluster_size'."""
        return self._max_cluster_size

    @max_cluster_size.setter
    def max_cluster_size(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'max_cluster_size' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'max_cluster_size' field must be an integer in [-2147483648, 2147483647]"
        self._max_cluster_size = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_EuclideanClustering_Response(type):
    """Metaclass of message 'EuclideanClustering_Response'."""

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
                'compare_flexbe_utilities.srv.EuclideanClustering_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__euclidean_clustering__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__euclidean_clustering__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__euclidean_clustering__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__euclidean_clustering__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__euclidean_clustering__response

            from pcl_msgs.msg import PointIndices
            if PointIndices.__class__._TYPE_SUPPORT is None:
                PointIndices.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EuclideanClustering_Response(metaclass=Metaclass_EuclideanClustering_Response):
    """Message class 'EuclideanClustering_Response'."""

    __slots__ = [
        '_target_cluster_indices',
        '_obstacle_cluster_indices',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'target_cluster_indices': 'pcl_msgs/PointIndices',
        'obstacle_cluster_indices': 'sequence<pcl_msgs/PointIndices>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['pcl_msgs', 'msg'], 'PointIndices'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['pcl_msgs', 'msg'], 'PointIndices')),  # noqa: E501
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
        from pcl_msgs.msg import PointIndices
        self.target_cluster_indices = kwargs.get('target_cluster_indices', PointIndices())
        self.obstacle_cluster_indices = kwargs.get('obstacle_cluster_indices', [])

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
        if self.target_cluster_indices != other.target_cluster_indices:
            return False
        if self.obstacle_cluster_indices != other.obstacle_cluster_indices:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_cluster_indices(self):
        """Message field 'target_cluster_indices'."""
        return self._target_cluster_indices

    @target_cluster_indices.setter
    def target_cluster_indices(self, value):
        if self._check_fields:
            from pcl_msgs.msg import PointIndices
            assert \
                isinstance(value, PointIndices), \
                "The 'target_cluster_indices' field must be a sub message of type 'PointIndices'"
        self._target_cluster_indices = value

    @builtins.property
    def obstacle_cluster_indices(self):
        """Message field 'obstacle_cluster_indices'."""
        return self._obstacle_cluster_indices

    @obstacle_cluster_indices.setter
    def obstacle_cluster_indices(self, value):
        if self._check_fields:
            from pcl_msgs.msg import PointIndices
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
                 all(isinstance(v, PointIndices) for v in value) and
                 True), \
                "The 'obstacle_cluster_indices' field must be a set or sequence and each value of type 'PointIndices'"
        self._obstacle_cluster_indices = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_EuclideanClustering_Event(type):
    """Metaclass of message 'EuclideanClustering_Event'."""

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
                'compare_flexbe_utilities.srv.EuclideanClustering_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__euclidean_clustering__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__euclidean_clustering__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__euclidean_clustering__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__euclidean_clustering__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__euclidean_clustering__event

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


class EuclideanClustering_Event(metaclass=Metaclass_EuclideanClustering_Event):
    """Message class 'EuclideanClustering_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<compare_flexbe_utilities/EuclideanClustering_Request, 1>',
        'response': 'sequence<compare_flexbe_utilities/EuclideanClustering_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['compare_flexbe_utilities', 'srv'], 'EuclideanClustering_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['compare_flexbe_utilities', 'srv'], 'EuclideanClustering_Response'), 1),  # noqa: E501
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
            from compare_flexbe_utilities.srv import EuclideanClustering_Request
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
                 all(isinstance(v, EuclideanClustering_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'EuclideanClustering_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from compare_flexbe_utilities.srv import EuclideanClustering_Response
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
                 all(isinstance(v, EuclideanClustering_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'EuclideanClustering_Response'"
        self._response = value


class Metaclass_EuclideanClustering(type):
    """Metaclass of service 'EuclideanClustering'."""

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
                'compare_flexbe_utilities.srv.EuclideanClustering')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__euclidean_clustering

            from compare_flexbe_utilities.srv import _euclidean_clustering
            if _euclidean_clustering.Metaclass_EuclideanClustering_Request._TYPE_SUPPORT is None:
                _euclidean_clustering.Metaclass_EuclideanClustering_Request.__import_type_support__()
            if _euclidean_clustering.Metaclass_EuclideanClustering_Response._TYPE_SUPPORT is None:
                _euclidean_clustering.Metaclass_EuclideanClustering_Response.__import_type_support__()
            if _euclidean_clustering.Metaclass_EuclideanClustering_Event._TYPE_SUPPORT is None:
                _euclidean_clustering.Metaclass_EuclideanClustering_Event.__import_type_support__()


class EuclideanClustering(metaclass=Metaclass_EuclideanClustering):
    from compare_flexbe_utilities.srv._euclidean_clustering import EuclideanClustering_Request as Request
    from compare_flexbe_utilities.srv._euclidean_clustering import EuclideanClustering_Response as Response
    from compare_flexbe_utilities.srv._euclidean_clustering import EuclideanClustering_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
