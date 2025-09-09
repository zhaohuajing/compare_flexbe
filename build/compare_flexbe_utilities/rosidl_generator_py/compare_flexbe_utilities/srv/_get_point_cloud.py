# generated from rosidl_generator_py/resource/_idl.py.em
# with input from compare_flexbe_utilities:srv/GetPointCloud.idl
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


class Metaclass_GetPointCloud_Request(type):
    """Metaclass of message 'GetPointCloud_Request'."""

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
                'compare_flexbe_utilities.srv.GetPointCloud_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_point_cloud__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_point_cloud__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_point_cloud__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_point_cloud__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_point_cloud__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPointCloud_Request(metaclass=Metaclass_GetPointCloud_Request):
    """Message class 'GetPointCloud_Request'."""

    __slots__ = [
        '_camera_topic',
        '_target_frame',
        '_timeout_sec',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'camera_topic': 'string',
        'target_frame': 'string',
        'timeout_sec': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.camera_topic = kwargs.get('camera_topic', str())
        self.target_frame = kwargs.get('target_frame', str())
        self.timeout_sec = kwargs.get('timeout_sec', float())

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
        if self.camera_topic != other.camera_topic:
            return False
        if self.target_frame != other.target_frame:
            return False
        if self.timeout_sec != other.timeout_sec:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def camera_topic(self):
        """Message field 'camera_topic'."""
        return self._camera_topic

    @camera_topic.setter
    def camera_topic(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'camera_topic' field must be of type 'str'"
        self._camera_topic = value

    @builtins.property
    def target_frame(self):
        """Message field 'target_frame'."""
        return self._target_frame

    @target_frame.setter
    def target_frame(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'target_frame' field must be of type 'str'"
        self._target_frame = value

    @builtins.property
    def timeout_sec(self):
        """Message field 'timeout_sec'."""
        return self._timeout_sec

    @timeout_sec.setter
    def timeout_sec(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'timeout_sec' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'timeout_sec' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._timeout_sec = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetPointCloud_Response(type):
    """Metaclass of message 'GetPointCloud_Response'."""

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
                'compare_flexbe_utilities.srv.GetPointCloud_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_point_cloud__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_point_cloud__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_point_cloud__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_point_cloud__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_point_cloud__response

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


class GetPointCloud_Response(metaclass=Metaclass_GetPointCloud_Response):
    """Message class 'GetPointCloud_Response'."""

    __slots__ = [
        '_cloud_out',
        '_camera_pose',
        '_cloud_frame',
        '_success',
        '_message',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'cloud_out': 'sensor_msgs/PointCloud2',
        'camera_pose': 'geometry_msgs/PoseStamped',
        'cloud_frame': 'string',
        'success': 'boolean',
        'message': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.cloud_out = kwargs.get('cloud_out', PointCloud2())
        from geometry_msgs.msg import PoseStamped
        self.camera_pose = kwargs.get('camera_pose', PoseStamped())
        self.cloud_frame = kwargs.get('cloud_frame', str())
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if self.cloud_out != other.cloud_out:
            return False
        if self.camera_pose != other.camera_pose:
            return False
        if self.cloud_frame != other.cloud_frame:
            return False
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cloud_out(self):
        """Message field 'cloud_out'."""
        return self._cloud_out

    @cloud_out.setter
    def cloud_out(self, value):
        if self._check_fields:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'cloud_out' field must be a sub message of type 'PointCloud2'"
        self._cloud_out = value

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
    def cloud_frame(self):
        """Message field 'cloud_frame'."""
        return self._cloud_frame

    @cloud_frame.setter
    def cloud_frame(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'cloud_frame' field must be of type 'str'"
        self._cloud_frame = value

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetPointCloud_Event(type):
    """Metaclass of message 'GetPointCloud_Event'."""

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
                'compare_flexbe_utilities.srv.GetPointCloud_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_point_cloud__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_point_cloud__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_point_cloud__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_point_cloud__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_point_cloud__event

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


class GetPointCloud_Event(metaclass=Metaclass_GetPointCloud_Event):
    """Message class 'GetPointCloud_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<compare_flexbe_utilities/GetPointCloud_Request, 1>',
        'response': 'sequence<compare_flexbe_utilities/GetPointCloud_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['compare_flexbe_utilities', 'srv'], 'GetPointCloud_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['compare_flexbe_utilities', 'srv'], 'GetPointCloud_Response'), 1),  # noqa: E501
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
            from compare_flexbe_utilities.srv import GetPointCloud_Request
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
                 all(isinstance(v, GetPointCloud_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'GetPointCloud_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from compare_flexbe_utilities.srv import GetPointCloud_Response
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
                 all(isinstance(v, GetPointCloud_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'GetPointCloud_Response'"
        self._response = value


class Metaclass_GetPointCloud(type):
    """Metaclass of service 'GetPointCloud'."""

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
                'compare_flexbe_utilities.srv.GetPointCloud')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_point_cloud

            from compare_flexbe_utilities.srv import _get_point_cloud
            if _get_point_cloud.Metaclass_GetPointCloud_Request._TYPE_SUPPORT is None:
                _get_point_cloud.Metaclass_GetPointCloud_Request.__import_type_support__()
            if _get_point_cloud.Metaclass_GetPointCloud_Response._TYPE_SUPPORT is None:
                _get_point_cloud.Metaclass_GetPointCloud_Response.__import_type_support__()
            if _get_point_cloud.Metaclass_GetPointCloud_Event._TYPE_SUPPORT is None:
                _get_point_cloud.Metaclass_GetPointCloud_Event.__import_type_support__()


class GetPointCloud(metaclass=Metaclass_GetPointCloud):
    from compare_flexbe_utilities.srv._get_point_cloud import GetPointCloud_Request as Request
    from compare_flexbe_utilities.srv._get_point_cloud import GetPointCloud_Response as Response
    from compare_flexbe_utilities.srv._get_point_cloud import GetPointCloud_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
