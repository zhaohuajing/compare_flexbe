# generated from rosidl_generator_py/resource/_idl.py.em
# with input from flexbe_msgs:msg/BehaviorSelection.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BehaviorSelection(type):
    """Metaclass of message 'BehaviorSelection'."""

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
                'flexbe_msgs.msg.BehaviorSelection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__behavior_selection
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__behavior_selection
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__behavior_selection
            cls._TYPE_SUPPORT = module.type_support_msg__msg__behavior_selection
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__behavior_selection

            from flexbe_msgs.msg import BehaviorModification
            if BehaviorModification.__class__._TYPE_SUPPORT is None:
                BehaviorModification.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BehaviorSelection(metaclass=Metaclass_BehaviorSelection):
    """Message class 'BehaviorSelection'."""

    __slots__ = [
        '_behavior_key',
        '_behavior_id',
        '_autonomy_level',
        '_arg_keys',
        '_arg_values',
        '_input_keys',
        '_input_values',
        '_modifications',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'behavior_key': 'int32',
        'behavior_id': 'int32',
        'autonomy_level': 'uint8',
        'arg_keys': 'sequence<string>',
        'arg_values': 'sequence<string>',
        'input_keys': 'sequence<string>',
        'input_values': 'sequence<string>',
        'modifications': 'sequence<flexbe_msgs/BehaviorModification>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['flexbe_msgs', 'msg'], 'BehaviorModification')),  # noqa: E501
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
        self.behavior_key = kwargs.get('behavior_key', int())
        self.behavior_id = kwargs.get('behavior_id', int())
        self.autonomy_level = kwargs.get('autonomy_level', int())
        self.arg_keys = kwargs.get('arg_keys', [])
        self.arg_values = kwargs.get('arg_values', [])
        self.input_keys = kwargs.get('input_keys', [])
        self.input_values = kwargs.get('input_values', [])
        self.modifications = kwargs.get('modifications', [])

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
        if self.behavior_key != other.behavior_key:
            return False
        if self.behavior_id != other.behavior_id:
            return False
        if self.autonomy_level != other.autonomy_level:
            return False
        if self.arg_keys != other.arg_keys:
            return False
        if self.arg_values != other.arg_values:
            return False
        if self.input_keys != other.input_keys:
            return False
        if self.input_values != other.input_values:
            return False
        if self.modifications != other.modifications:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def behavior_key(self):
        """Message field 'behavior_key'."""
        return self._behavior_key

    @behavior_key.setter
    def behavior_key(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'behavior_key' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'behavior_key' field must be an integer in [-2147483648, 2147483647]"
        self._behavior_key = value

    @builtins.property
    def behavior_id(self):
        """Message field 'behavior_id'."""
        return self._behavior_id

    @behavior_id.setter
    def behavior_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'behavior_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'behavior_id' field must be an integer in [-2147483648, 2147483647]"
        self._behavior_id = value

    @builtins.property
    def autonomy_level(self):
        """Message field 'autonomy_level'."""
        return self._autonomy_level

    @autonomy_level.setter
    def autonomy_level(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'autonomy_level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'autonomy_level' field must be an unsigned integer in [0, 255]"
        self._autonomy_level = value

    @builtins.property
    def arg_keys(self):
        """Message field 'arg_keys'."""
        return self._arg_keys

    @arg_keys.setter
    def arg_keys(self, value):
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
                "The 'arg_keys' field must be a set or sequence and each value of type 'str'"
        self._arg_keys = value

    @builtins.property
    def arg_values(self):
        """Message field 'arg_values'."""
        return self._arg_values

    @arg_values.setter
    def arg_values(self, value):
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
                "The 'arg_values' field must be a set or sequence and each value of type 'str'"
        self._arg_values = value

    @builtins.property
    def input_keys(self):
        """Message field 'input_keys'."""
        return self._input_keys

    @input_keys.setter
    def input_keys(self, value):
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
                "The 'input_keys' field must be a set or sequence and each value of type 'str'"
        self._input_keys = value

    @builtins.property
    def input_values(self):
        """Message field 'input_values'."""
        return self._input_values

    @input_values.setter
    def input_values(self, value):
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
                "The 'input_values' field must be a set or sequence and each value of type 'str'"
        self._input_values = value

    @builtins.property
    def modifications(self):
        """Message field 'modifications'."""
        return self._modifications

    @modifications.setter
    def modifications(self, value):
        if self._check_fields:
            from flexbe_msgs.msg import BehaviorModification
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
                 all(isinstance(v, BehaviorModification) for v in value) and
                 True), \
                "The 'modifications' field must be a set or sequence and each value of type 'BehaviorModification'"
        self._modifications = value
