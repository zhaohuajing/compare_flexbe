# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tm_msgs:msg/FeedbackState.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'joint_pos'
# Member 'joint_vel'
# Member 'joint_tor'
# Member 'tool0_pose'
# Member 'tool_pose'
# Member 'tcp_speed'
# Member 'tcp_force'
# Member 'joint_tor_average'
# Member 'joint_tor_min'
# Member 'joint_tor_max'
# Member 'cb_digital_output'
# Member 'cb_digital_input'
# Member 'cb_analog_output'
# Member 'cb_analog_input'
# Member 'ee_digital_output'
# Member 'ee_digital_input'
# Member 'ee_analog_output'
# Member 'ee_analog_input'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FeedbackState(type):
    """Metaclass of message 'FeedbackState'."""

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
                'tm_msgs.msg.FeedbackState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__feedback_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__feedback_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__feedback_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__feedback_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__feedback_state

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FeedbackState(metaclass=Metaclass_FeedbackState):
    """Message class 'FeedbackState'."""

    __slots__ = [
        '_header',
        '_is_svr_connected',
        '_is_sct_connected',
        '_tmsrv_cperr',
        '_tmscript_cperr',
        '_tmsrv_dataerr',
        '_tmscript_dataerr',
        '_max_not_connect_in_s',
        '_disconnection_times',
        '_joint_pos',
        '_joint_vel',
        '_joint_tor',
        '_tool0_pose',
        '_tool_pose',
        '_tcp_speed',
        '_tcp_force',
        '_joint_tor_average',
        '_joint_tor_min',
        '_joint_tor_max',
        '_robot_link',
        '_is_data_table_correct',
        '_robot_error',
        '_project_run',
        '_project_pause',
        '_safetyguard_a',
        '_e_stop',
        '_camera_light',
        '_error_code',
        '_project_speed',
        '_ma_mode',
        '_robot_light',
        '_cb_digital_output',
        '_cb_digital_input',
        '_cb_analog_output',
        '_cb_analog_input',
        '_ee_digital_output',
        '_ee_digital_input',
        '_ee_analog_output',
        '_ee_analog_input',
        '_error_content',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'is_svr_connected': 'boolean',
        'is_sct_connected': 'boolean',
        'tmsrv_cperr': 'int32',
        'tmscript_cperr': 'int32',
        'tmsrv_dataerr': 'int32',
        'tmscript_dataerr': 'int32',
        'max_not_connect_in_s': 'int32',
        'disconnection_times': 'int32',
        'joint_pos': 'sequence<double>',
        'joint_vel': 'sequence<double>',
        'joint_tor': 'sequence<double>',
        'tool0_pose': 'sequence<double>',
        'tool_pose': 'sequence<double>',
        'tcp_speed': 'sequence<double>',
        'tcp_force': 'sequence<double>',
        'joint_tor_average': 'sequence<double>',
        'joint_tor_min': 'sequence<double>',
        'joint_tor_max': 'sequence<double>',
        'robot_link': 'boolean',
        'is_data_table_correct': 'boolean',
        'robot_error': 'boolean',
        'project_run': 'boolean',
        'project_pause': 'boolean',
        'safetyguard_a': 'boolean',
        'e_stop': 'boolean',
        'camera_light': 'uint8',
        'error_code': 'int32',
        'project_speed': 'int32',
        'ma_mode': 'int32',
        'robot_light': 'int32',
        'cb_digital_output': 'sequence<uint8>',
        'cb_digital_input': 'sequence<uint8>',
        'cb_analog_output': 'sequence<float>',
        'cb_analog_input': 'sequence<float>',
        'ee_digital_output': 'sequence<uint8>',
        'ee_digital_input': 'sequence<uint8>',
        'ee_analog_output': 'sequence<float>',
        'ee_analog_input': 'sequence<float>',
        'error_content': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.is_svr_connected = kwargs.get('is_svr_connected', bool())
        self.is_sct_connected = kwargs.get('is_sct_connected', bool())
        self.tmsrv_cperr = kwargs.get('tmsrv_cperr', int())
        self.tmscript_cperr = kwargs.get('tmscript_cperr', int())
        self.tmsrv_dataerr = kwargs.get('tmsrv_dataerr', int())
        self.tmscript_dataerr = kwargs.get('tmscript_dataerr', int())
        self.max_not_connect_in_s = kwargs.get('max_not_connect_in_s', int())
        self.disconnection_times = kwargs.get('disconnection_times', int())
        self.joint_pos = array.array('d', kwargs.get('joint_pos', []))
        self.joint_vel = array.array('d', kwargs.get('joint_vel', []))
        self.joint_tor = array.array('d', kwargs.get('joint_tor', []))
        self.tool0_pose = array.array('d', kwargs.get('tool0_pose', []))
        self.tool_pose = array.array('d', kwargs.get('tool_pose', []))
        self.tcp_speed = array.array('d', kwargs.get('tcp_speed', []))
        self.tcp_force = array.array('d', kwargs.get('tcp_force', []))
        self.joint_tor_average = array.array('d', kwargs.get('joint_tor_average', []))
        self.joint_tor_min = array.array('d', kwargs.get('joint_tor_min', []))
        self.joint_tor_max = array.array('d', kwargs.get('joint_tor_max', []))
        self.robot_link = kwargs.get('robot_link', bool())
        self.is_data_table_correct = kwargs.get('is_data_table_correct', bool())
        self.robot_error = kwargs.get('robot_error', bool())
        self.project_run = kwargs.get('project_run', bool())
        self.project_pause = kwargs.get('project_pause', bool())
        self.safetyguard_a = kwargs.get('safetyguard_a', bool())
        self.e_stop = kwargs.get('e_stop', bool())
        self.camera_light = kwargs.get('camera_light', int())
        self.error_code = kwargs.get('error_code', int())
        self.project_speed = kwargs.get('project_speed', int())
        self.ma_mode = kwargs.get('ma_mode', int())
        self.robot_light = kwargs.get('robot_light', int())
        self.cb_digital_output = array.array('B', kwargs.get('cb_digital_output', []))
        self.cb_digital_input = array.array('B', kwargs.get('cb_digital_input', []))
        self.cb_analog_output = array.array('f', kwargs.get('cb_analog_output', []))
        self.cb_analog_input = array.array('f', kwargs.get('cb_analog_input', []))
        self.ee_digital_output = array.array('B', kwargs.get('ee_digital_output', []))
        self.ee_digital_input = array.array('B', kwargs.get('ee_digital_input', []))
        self.ee_analog_output = array.array('f', kwargs.get('ee_analog_output', []))
        self.ee_analog_input = array.array('f', kwargs.get('ee_analog_input', []))
        self.error_content = kwargs.get('error_content', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.is_svr_connected != other.is_svr_connected:
            return False
        if self.is_sct_connected != other.is_sct_connected:
            return False
        if self.tmsrv_cperr != other.tmsrv_cperr:
            return False
        if self.tmscript_cperr != other.tmscript_cperr:
            return False
        if self.tmsrv_dataerr != other.tmsrv_dataerr:
            return False
        if self.tmscript_dataerr != other.tmscript_dataerr:
            return False
        if self.max_not_connect_in_s != other.max_not_connect_in_s:
            return False
        if self.disconnection_times != other.disconnection_times:
            return False
        if self.joint_pos != other.joint_pos:
            return False
        if self.joint_vel != other.joint_vel:
            return False
        if self.joint_tor != other.joint_tor:
            return False
        if self.tool0_pose != other.tool0_pose:
            return False
        if self.tool_pose != other.tool_pose:
            return False
        if self.tcp_speed != other.tcp_speed:
            return False
        if self.tcp_force != other.tcp_force:
            return False
        if self.joint_tor_average != other.joint_tor_average:
            return False
        if self.joint_tor_min != other.joint_tor_min:
            return False
        if self.joint_tor_max != other.joint_tor_max:
            return False
        if self.robot_link != other.robot_link:
            return False
        if self.is_data_table_correct != other.is_data_table_correct:
            return False
        if self.robot_error != other.robot_error:
            return False
        if self.project_run != other.project_run:
            return False
        if self.project_pause != other.project_pause:
            return False
        if self.safetyguard_a != other.safetyguard_a:
            return False
        if self.e_stop != other.e_stop:
            return False
        if self.camera_light != other.camera_light:
            return False
        if self.error_code != other.error_code:
            return False
        if self.project_speed != other.project_speed:
            return False
        if self.ma_mode != other.ma_mode:
            return False
        if self.robot_light != other.robot_light:
            return False
        if self.cb_digital_output != other.cb_digital_output:
            return False
        if self.cb_digital_input != other.cb_digital_input:
            return False
        if self.cb_analog_output != other.cb_analog_output:
            return False
        if self.cb_analog_input != other.cb_analog_input:
            return False
        if self.ee_digital_output != other.ee_digital_output:
            return False
        if self.ee_digital_input != other.ee_digital_input:
            return False
        if self.ee_analog_output != other.ee_analog_output:
            return False
        if self.ee_analog_input != other.ee_analog_input:
            return False
        if self.error_content != other.error_content:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def is_svr_connected(self):
        """Message field 'is_svr_connected'."""
        return self._is_svr_connected

    @is_svr_connected.setter
    def is_svr_connected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_svr_connected' field must be of type 'bool'"
        self._is_svr_connected = value

    @builtins.property
    def is_sct_connected(self):
        """Message field 'is_sct_connected'."""
        return self._is_sct_connected

    @is_sct_connected.setter
    def is_sct_connected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_sct_connected' field must be of type 'bool'"
        self._is_sct_connected = value

    @builtins.property
    def tmsrv_cperr(self):
        """Message field 'tmsrv_cperr'."""
        return self._tmsrv_cperr

    @tmsrv_cperr.setter
    def tmsrv_cperr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tmsrv_cperr' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'tmsrv_cperr' field must be an integer in [-2147483648, 2147483647]"
        self._tmsrv_cperr = value

    @builtins.property
    def tmscript_cperr(self):
        """Message field 'tmscript_cperr'."""
        return self._tmscript_cperr

    @tmscript_cperr.setter
    def tmscript_cperr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tmscript_cperr' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'tmscript_cperr' field must be an integer in [-2147483648, 2147483647]"
        self._tmscript_cperr = value

    @builtins.property
    def tmsrv_dataerr(self):
        """Message field 'tmsrv_dataerr'."""
        return self._tmsrv_dataerr

    @tmsrv_dataerr.setter
    def tmsrv_dataerr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tmsrv_dataerr' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'tmsrv_dataerr' field must be an integer in [-2147483648, 2147483647]"
        self._tmsrv_dataerr = value

    @builtins.property
    def tmscript_dataerr(self):
        """Message field 'tmscript_dataerr'."""
        return self._tmscript_dataerr

    @tmscript_dataerr.setter
    def tmscript_dataerr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tmscript_dataerr' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'tmscript_dataerr' field must be an integer in [-2147483648, 2147483647]"
        self._tmscript_dataerr = value

    @builtins.property
    def max_not_connect_in_s(self):
        """Message field 'max_not_connect_in_s'."""
        return self._max_not_connect_in_s

    @max_not_connect_in_s.setter
    def max_not_connect_in_s(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_not_connect_in_s' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'max_not_connect_in_s' field must be an integer in [-2147483648, 2147483647]"
        self._max_not_connect_in_s = value

    @builtins.property
    def disconnection_times(self):
        """Message field 'disconnection_times'."""
        return self._disconnection_times

    @disconnection_times.setter
    def disconnection_times(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'disconnection_times' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'disconnection_times' field must be an integer in [-2147483648, 2147483647]"
        self._disconnection_times = value

    @builtins.property
    def joint_pos(self):
        """Message field 'joint_pos'."""
        return self._joint_pos

    @joint_pos.setter
    def joint_pos(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'joint_pos' array.array() must have the type code of 'd'"
            self._joint_pos = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joint_pos' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_pos = array.array('d', value)

    @builtins.property
    def joint_vel(self):
        """Message field 'joint_vel'."""
        return self._joint_vel

    @joint_vel.setter
    def joint_vel(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'joint_vel' array.array() must have the type code of 'd'"
            self._joint_vel = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joint_vel' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_vel = array.array('d', value)

    @builtins.property
    def joint_tor(self):
        """Message field 'joint_tor'."""
        return self._joint_tor

    @joint_tor.setter
    def joint_tor(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'joint_tor' array.array() must have the type code of 'd'"
            self._joint_tor = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joint_tor' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_tor = array.array('d', value)

    @builtins.property
    def tool0_pose(self):
        """Message field 'tool0_pose'."""
        return self._tool0_pose

    @tool0_pose.setter
    def tool0_pose(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'tool0_pose' array.array() must have the type code of 'd'"
            self._tool0_pose = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'tool0_pose' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._tool0_pose = array.array('d', value)

    @builtins.property
    def tool_pose(self):
        """Message field 'tool_pose'."""
        return self._tool_pose

    @tool_pose.setter
    def tool_pose(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'tool_pose' array.array() must have the type code of 'd'"
            self._tool_pose = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'tool_pose' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._tool_pose = array.array('d', value)

    @builtins.property
    def tcp_speed(self):
        """Message field 'tcp_speed'."""
        return self._tcp_speed

    @tcp_speed.setter
    def tcp_speed(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'tcp_speed' array.array() must have the type code of 'd'"
            self._tcp_speed = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'tcp_speed' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._tcp_speed = array.array('d', value)

    @builtins.property
    def tcp_force(self):
        """Message field 'tcp_force'."""
        return self._tcp_force

    @tcp_force.setter
    def tcp_force(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'tcp_force' array.array() must have the type code of 'd'"
            self._tcp_force = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'tcp_force' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._tcp_force = array.array('d', value)

    @builtins.property
    def joint_tor_average(self):
        """Message field 'joint_tor_average'."""
        return self._joint_tor_average

    @joint_tor_average.setter
    def joint_tor_average(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'joint_tor_average' array.array() must have the type code of 'd'"
            self._joint_tor_average = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joint_tor_average' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_tor_average = array.array('d', value)

    @builtins.property
    def joint_tor_min(self):
        """Message field 'joint_tor_min'."""
        return self._joint_tor_min

    @joint_tor_min.setter
    def joint_tor_min(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'joint_tor_min' array.array() must have the type code of 'd'"
            self._joint_tor_min = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joint_tor_min' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_tor_min = array.array('d', value)

    @builtins.property
    def joint_tor_max(self):
        """Message field 'joint_tor_max'."""
        return self._joint_tor_max

    @joint_tor_max.setter
    def joint_tor_max(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'joint_tor_max' array.array() must have the type code of 'd'"
            self._joint_tor_max = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joint_tor_max' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_tor_max = array.array('d', value)

    @builtins.property
    def robot_link(self):
        """Message field 'robot_link'."""
        return self._robot_link

    @robot_link.setter
    def robot_link(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'robot_link' field must be of type 'bool'"
        self._robot_link = value

    @builtins.property
    def is_data_table_correct(self):
        """Message field 'is_data_table_correct'."""
        return self._is_data_table_correct

    @is_data_table_correct.setter
    def is_data_table_correct(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_data_table_correct' field must be of type 'bool'"
        self._is_data_table_correct = value

    @builtins.property
    def robot_error(self):
        """Message field 'robot_error'."""
        return self._robot_error

    @robot_error.setter
    def robot_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'robot_error' field must be of type 'bool'"
        self._robot_error = value

    @builtins.property
    def project_run(self):
        """Message field 'project_run'."""
        return self._project_run

    @project_run.setter
    def project_run(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'project_run' field must be of type 'bool'"
        self._project_run = value

    @builtins.property
    def project_pause(self):
        """Message field 'project_pause'."""
        return self._project_pause

    @project_pause.setter
    def project_pause(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'project_pause' field must be of type 'bool'"
        self._project_pause = value

    @builtins.property
    def safetyguard_a(self):
        """Message field 'safetyguard_a'."""
        return self._safetyguard_a

    @safetyguard_a.setter
    def safetyguard_a(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'safetyguard_a' field must be of type 'bool'"
        self._safetyguard_a = value

    @builtins.property
    def e_stop(self):
        """Message field 'e_stop'."""
        return self._e_stop

    @e_stop.setter
    def e_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'e_stop' field must be of type 'bool'"
        self._e_stop = value

    @builtins.property
    def camera_light(self):
        """Message field 'camera_light'."""
        return self._camera_light

    @camera_light.setter
    def camera_light(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'camera_light' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'camera_light' field must be an unsigned integer in [0, 255]"
        self._camera_light = value

    @builtins.property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_code' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'error_code' field must be an integer in [-2147483648, 2147483647]"
        self._error_code = value

    @builtins.property
    def project_speed(self):
        """Message field 'project_speed'."""
        return self._project_speed

    @project_speed.setter
    def project_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'project_speed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'project_speed' field must be an integer in [-2147483648, 2147483647]"
        self._project_speed = value

    @builtins.property
    def ma_mode(self):
        """Message field 'ma_mode'."""
        return self._ma_mode

    @ma_mode.setter
    def ma_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ma_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ma_mode' field must be an integer in [-2147483648, 2147483647]"
        self._ma_mode = value

    @builtins.property
    def robot_light(self):
        """Message field 'robot_light'."""
        return self._robot_light

    @robot_light.setter
    def robot_light(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_light' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'robot_light' field must be an integer in [-2147483648, 2147483647]"
        self._robot_light = value

    @builtins.property
    def cb_digital_output(self):
        """Message field 'cb_digital_output'."""
        return self._cb_digital_output

    @cb_digital_output.setter
    def cb_digital_output(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'cb_digital_output' array.array() must have the type code of 'B'"
            self._cb_digital_output = value
            return
        if __debug__:
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'cb_digital_output' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._cb_digital_output = array.array('B', value)

    @builtins.property
    def cb_digital_input(self):
        """Message field 'cb_digital_input'."""
        return self._cb_digital_input

    @cb_digital_input.setter
    def cb_digital_input(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'cb_digital_input' array.array() must have the type code of 'B'"
            self._cb_digital_input = value
            return
        if __debug__:
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'cb_digital_input' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._cb_digital_input = array.array('B', value)

    @builtins.property
    def cb_analog_output(self):
        """Message field 'cb_analog_output'."""
        return self._cb_analog_output

    @cb_analog_output.setter
    def cb_analog_output(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'cb_analog_output' array.array() must have the type code of 'f'"
            self._cb_analog_output = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'cb_analog_output' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._cb_analog_output = array.array('f', value)

    @builtins.property
    def cb_analog_input(self):
        """Message field 'cb_analog_input'."""
        return self._cb_analog_input

    @cb_analog_input.setter
    def cb_analog_input(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'cb_analog_input' array.array() must have the type code of 'f'"
            self._cb_analog_input = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'cb_analog_input' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._cb_analog_input = array.array('f', value)

    @builtins.property
    def ee_digital_output(self):
        """Message field 'ee_digital_output'."""
        return self._ee_digital_output

    @ee_digital_output.setter
    def ee_digital_output(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'ee_digital_output' array.array() must have the type code of 'B'"
            self._ee_digital_output = value
            return
        if __debug__:
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'ee_digital_output' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._ee_digital_output = array.array('B', value)

    @builtins.property
    def ee_digital_input(self):
        """Message field 'ee_digital_input'."""
        return self._ee_digital_input

    @ee_digital_input.setter
    def ee_digital_input(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'ee_digital_input' array.array() must have the type code of 'B'"
            self._ee_digital_input = value
            return
        if __debug__:
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'ee_digital_input' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._ee_digital_input = array.array('B', value)

    @builtins.property
    def ee_analog_output(self):
        """Message field 'ee_analog_output'."""
        return self._ee_analog_output

    @ee_analog_output.setter
    def ee_analog_output(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'ee_analog_output' array.array() must have the type code of 'f'"
            self._ee_analog_output = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'ee_analog_output' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._ee_analog_output = array.array('f', value)

    @builtins.property
    def ee_analog_input(self):
        """Message field 'ee_analog_input'."""
        return self._ee_analog_input

    @ee_analog_input.setter
    def ee_analog_input(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'ee_analog_input' array.array() must have the type code of 'f'"
            self._ee_analog_input = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'ee_analog_input' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._ee_analog_input = array.array('f', value)

    @builtins.property
    def error_content(self):
        """Message field 'error_content'."""
        return self._error_content

    @error_content.setter
    def error_content(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_content' field must be of type 'str'"
        self._error_content = value
