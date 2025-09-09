# generated from rosidl_generator_py/resource/_idl.py.em
# with input from compare_flexbe_utilities:srv/FilterByIndices.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FilterByIndices_Request(type):
    """Metaclass of message 'FilterByIndices_Request'."""

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
                'compare_flexbe_utilities.srv.FilterByIndices_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__filter_by_indices__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__filter_by_indices__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__filter_by_indices__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__filter_by_indices__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__filter_by_indices__request

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


class FilterByIndices_Request(metaclass=Metaclass_FilterByIndices_Request):
    """Message class 'FilterByIndices_Request'."""

    __slots__ = [
        '_input_cloud',
        '_target_indices',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'input_cloud': 'sensor_msgs/PointCloud2',
        'target_indices': 'pcl_msgs/PointIndices',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['pcl_msgs', 'msg'], 'PointIndices'),  # noqa: E501
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
        self.input_cloud = kwargs.get('input_cloud', PointCloud2())
        from pcl_msgs.msg import PointIndices
        self.target_indices = kwargs.get('target_indices', PointIndices())

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
        if self.input_cloud != other.input_cloud:
            return False
        if self.target_indices != other.target_indices:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def input_cloud(self):
        """Message field 'input_cloud'."""
        return self._input_cloud

    @input_cloud.setter
    def input_cloud(self, value):
        if self._check_fields:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'input_cloud' field must be a sub message of type 'PointCloud2'"
        self._input_cloud = value

    @builtins.property
    def target_indices(self):
        """Message field 'target_indices'."""
        return self._target_indices

    @target_indices.setter
    def target_indices(self, value):
        if self._check_fields:
            from pcl_msgs.msg import PointIndices
            assert \
                isinstance(value, PointIndices), \
                "The 'target_indices' field must be a sub message of type 'PointIndices'"
        self._target_indices = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_FilterByIndices_Response(type):
    """Metaclass of message 'FilterByIndices_Response'."""

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
                'compare_flexbe_utilities.srv.FilterByIndices_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__filter_by_indices__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__filter_by_indices__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__filter_by_indices__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__filter_by_indices__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__filter_by_indices__response

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


class FilterByIndices_Response(metaclass=Metaclass_FilterByIndices_Response):
    """Message class 'FilterByIndices_Response'."""

    __slots__ = [
        '_filtered_cloud',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'filtered_cloud': 'sensor_msgs/PointCloud2',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
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
        self.filtered_cloud = kwargs.get('filtered_cloud', PointCloud2())

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
        if self.filtered_cloud != other.filtered_cloud:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def filtered_cloud(self):
        """Message field 'filtered_cloud'."""
        return self._filtered_cloud

    @filtered_cloud.setter
    def filtered_cloud(self, value):
        if self._check_fields:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'filtered_cloud' field must be a sub message of type 'PointCloud2'"
        self._filtered_cloud = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_FilterByIndices_Event(type):
    """Metaclass of message 'FilterByIndices_Event'."""

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
                'compare_flexbe_utilities.srv.FilterByIndices_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__filter_by_indices__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__filter_by_indices__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__filter_by_indices__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__filter_by_indices__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__filter_by_indices__event

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


class FilterByIndices_Event(metaclass=Metaclass_FilterByIndices_Event):
    """Message class 'FilterByIndices_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<compare_flexbe_utilities/FilterByIndices_Request, 1>',
        'response': 'sequence<compare_flexbe_utilities/FilterByIndices_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['compare_flexbe_utilities', 'srv'], 'FilterByIndices_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['compare_flexbe_utilities', 'srv'], 'FilterByIndices_Response'), 1),  # noqa: E501
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
            from compare_flexbe_utilities.srv import FilterByIndices_Request
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
                 all(isinstance(v, FilterByIndices_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'FilterByIndices_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from compare_flexbe_utilities.srv import FilterByIndices_Response
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
                 all(isinstance(v, FilterByIndices_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'FilterByIndices_Response'"
        self._response = value


class Metaclass_FilterByIndices(type):
    """Metaclass of service 'FilterByIndices'."""

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
                'compare_flexbe_utilities.srv.FilterByIndices')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__filter_by_indices

            from compare_flexbe_utilities.srv import _filter_by_indices
            if _filter_by_indices.Metaclass_FilterByIndices_Request._TYPE_SUPPORT is None:
                _filter_by_indices.Metaclass_FilterByIndices_Request.__import_type_support__()
            if _filter_by_indices.Metaclass_FilterByIndices_Response._TYPE_SUPPORT is None:
                _filter_by_indices.Metaclass_FilterByIndices_Response.__import_type_support__()
            if _filter_by_indices.Metaclass_FilterByIndices_Event._TYPE_SUPPORT is None:
                _filter_by_indices.Metaclass_FilterByIndices_Event.__import_type_support__()


class FilterByIndices(metaclass=Metaclass_FilterByIndices):
    from compare_flexbe_utilities.srv._filter_by_indices import FilterByIndices_Request as Request
    from compare_flexbe_utilities.srv._filter_by_indices import FilterByIndices_Response as Response
    from compare_flexbe_utilities.srv._filter_by_indices import FilterByIndices_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
