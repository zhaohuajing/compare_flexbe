# generated from rosidl_generator_py/resource/_idl.py.em
# with input from flexbe_msgs:msg/Container.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'autonomy'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Container(type):
    """Metaclass of message 'Container'."""

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
            module = import_type_support('flexbe_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'flexbe_msgs.msg.Container')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__container
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__container
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__container
            cls._TYPE_SUPPORT = module.type_support_msg__msg__container
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__container

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Container(metaclass=Metaclass_Container):
    """Message class 'Container'."""

    __slots__ = [
        '_state_id',
        '_path',
        '_children',
        '_outcomes',
        '_transitions',
        '_type',
        '_autonomy',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'state_id': 'int32',
        'path': 'string',
        'children': 'sequence<string>',
        'outcomes': 'sequence<string>',
        'transitions': 'sequence<string>',
        'type': 'int8',
        'autonomy': 'sequence<int8>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int8')),  # noqa: E501
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
        self.state_id = kwargs.get('state_id', int())
        self.path = kwargs.get('path', str())
        self.children = kwargs.get('children', [])
        self.outcomes = kwargs.get('outcomes', [])
        self.transitions = kwargs.get('transitions', [])
        self.type = kwargs.get('type', int())
        self.autonomy = array.array('b', kwargs.get('autonomy', []))

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
        if self.state_id != other.state_id:
            return False
        if self.path != other.path:
            return False
        if self.children != other.children:
            return False
        if self.outcomes != other.outcomes:
            return False
        if self.transitions != other.transitions:
            return False
        if self.type != other.type:
            return False
        if self.autonomy != other.autonomy:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def state_id(self):
        """Message field 'state_id'."""
        return self._state_id

    @state_id.setter
    def state_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'state_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'state_id' field must be an integer in [-2147483648, 2147483647]"
        self._state_id = value

    @builtins.property
    def path(self):
        """Message field 'path'."""
        return self._path

    @path.setter
    def path(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'path' field must be of type 'str'"
        self._path = value

    @builtins.property
    def children(self):
        """Message field 'children'."""
        return self._children

    @children.setter
    def children(self, value):
        if self._check_fields:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'children' field must be a set or sequence and each value of type 'str'"
        self._children = value

    @builtins.property
    def outcomes(self):
        """Message field 'outcomes'."""
        return self._outcomes

    @outcomes.setter
    def outcomes(self, value):
        if self._check_fields:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'outcomes' field must be a set or sequence and each value of type 'str'"
        self._outcomes = value

    @builtins.property
    def transitions(self):
        """Message field 'transitions'."""
        return self._transitions

    @transitions.setter
    def transitions(self, value):
        if self._check_fields:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'transitions' field must be a set or sequence and each value of type 'str'"
        self._transitions = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'type' field must be an integer in [-128, 127]"
        self._type = value

    @builtins.property
    def autonomy(self):
        """Message field 'autonomy'."""
        return self._autonomy

    @autonomy.setter
    def autonomy(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'b', \
                    "The 'autonomy' array.array() must have the type code of 'b'"
                self._autonomy = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -128 and val < 128 for val in value)), \
                "The 'autonomy' field must be a set or sequence and each value of type 'int' and each integer in [-128, 127]"
        self._autonomy = array.array('b', value)
