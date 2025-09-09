# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tm_msgs:srv/SetEvent.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetEvent_Request(type):
    """Metaclass of message 'SetEvent_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TAG': 1,
        'WAIT_TAG': 2,
        'STOP': 11,
        'PAUSE': 12,
        'RESUME': 13,
        'EXIT': -1,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tm_msgs.srv.SetEvent_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_event__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_event__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_event__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_event__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_event__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TAG': cls.__constants['TAG'],
            'WAIT_TAG': cls.__constants['WAIT_TAG'],
            'STOP': cls.__constants['STOP'],
            'PAUSE': cls.__constants['PAUSE'],
            'RESUME': cls.__constants['RESUME'],
            'EXIT': cls.__constants['EXIT'],
        }

    @property
    def TAG(self):
        """Message constant 'TAG'."""
        return Metaclass_SetEvent_Request.__constants['TAG']

    @property
    def WAIT_TAG(self):
        """Message constant 'WAIT_TAG'."""
        return Metaclass_SetEvent_Request.__constants['WAIT_TAG']

    @property
    def STOP(self):
        """Message constant 'STOP'."""
        return Metaclass_SetEvent_Request.__constants['STOP']

    @property
    def PAUSE(self):
        """Message constant 'PAUSE'."""
        return Metaclass_SetEvent_Request.__constants['PAUSE']

    @property
    def RESUME(self):
        """Message constant 'RESUME'."""
        return Metaclass_SetEvent_Request.__constants['RESUME']

    @property
    def EXIT(self):
        """Message constant 'EXIT'."""
        return Metaclass_SetEvent_Request.__constants['EXIT']


class SetEvent_Request(metaclass=Metaclass_SetEvent_Request):
    """
    Message class 'SetEvent_Request'.

    Constants:
      TAG
      WAIT_TAG
      STOP
      PAUSE
      RESUME
      EXIT
    """

    __slots__ = [
        '_func',
        '_arg0',
        '_arg1',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'func': 'int8',
        'arg0': 'int8',
        'arg1': 'int8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
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
        self.func = kwargs.get('func', int())
        self.arg0 = kwargs.get('arg0', int())
        self.arg1 = kwargs.get('arg1', int())

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
        if self.func != other.func:
            return False
        if self.arg0 != other.arg0:
            return False
        if self.arg1 != other.arg1:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def func(self):
        """Message field 'func'."""
        return self._func

    @func.setter
    def func(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'func' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'func' field must be an integer in [-128, 127]"
        self._func = value

    @builtins.property
    def arg0(self):
        """Message field 'arg0'."""
        return self._arg0

    @arg0.setter
    def arg0(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'arg0' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'arg0' field must be an integer in [-128, 127]"
        self._arg0 = value

    @builtins.property
    def arg1(self):
        """Message field 'arg1'."""
        return self._arg1

    @arg1.setter
    def arg1(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'arg1' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'arg1' field must be an integer in [-128, 127]"
        self._arg1 = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetEvent_Response(type):
    """Metaclass of message 'SetEvent_Response'."""

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
            module = import_type_support('tm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tm_msgs.srv.SetEvent_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_event__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_event__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_event__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_event__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_event__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetEvent_Response(metaclass=Metaclass_SetEvent_Response):
    """Message class 'SetEvent_Response'."""

    __slots__ = [
        '_ok',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'ok': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.ok = kwargs.get('ok', bool())

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
        if self.ok != other.ok:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ok(self):
        """Message field 'ok'."""
        return self._ok

    @ok.setter
    def ok(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'ok' field must be of type 'bool'"
        self._ok = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetEvent_Event(type):
    """Metaclass of message 'SetEvent_Event'."""

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
            module = import_type_support('tm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tm_msgs.srv.SetEvent_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_event__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_event__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_event__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_event__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_event__event

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


class SetEvent_Event(metaclass=Metaclass_SetEvent_Event):
    """Message class 'SetEvent_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<tm_msgs/SetEvent_Request, 1>',
        'response': 'sequence<tm_msgs/SetEvent_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['tm_msgs', 'srv'], 'SetEvent_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['tm_msgs', 'srv'], 'SetEvent_Response'), 1),  # noqa: E501
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
            from tm_msgs.srv import SetEvent_Request
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
                 all(isinstance(v, SetEvent_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'SetEvent_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from tm_msgs.srv import SetEvent_Response
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
                 all(isinstance(v, SetEvent_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'SetEvent_Response'"
        self._response = value


class Metaclass_SetEvent(type):
    """Metaclass of service 'SetEvent'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tm_msgs.srv.SetEvent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_event

            from tm_msgs.srv import _set_event
            if _set_event.Metaclass_SetEvent_Request._TYPE_SUPPORT is None:
                _set_event.Metaclass_SetEvent_Request.__import_type_support__()
            if _set_event.Metaclass_SetEvent_Response._TYPE_SUPPORT is None:
                _set_event.Metaclass_SetEvent_Response.__import_type_support__()
            if _set_event.Metaclass_SetEvent_Event._TYPE_SUPPORT is None:
                _set_event.Metaclass_SetEvent_Event.__import_type_support__()


class SetEvent(metaclass=Metaclass_SetEvent):
    from tm_msgs.srv._set_event import SetEvent_Request as Request
    from tm_msgs.srv._set_event import SetEvent_Response as Response
    from tm_msgs.srv._set_event import SetEvent_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
