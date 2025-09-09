# generated from rosidl_generator_py/resource/_idl.py.em
# with input from compare_flexbe_utilities:srv/VoxelGridFilter.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VoxelGridFilter_Request(type):
    """Metaclass of message 'VoxelGridFilter_Request'."""

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
                'compare_flexbe_utilities.srv.VoxelGridFilter_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__voxel_grid_filter__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__voxel_grid_filter__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__voxel_grid_filter__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__voxel_grid_filter__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__voxel_grid_filter__request

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


class VoxelGridFilter_Request(metaclass=Metaclass_VoxelGridFilter_Request):
    """Message class 'VoxelGridFilter_Request'."""

    __slots__ = [
        '_input',
    ]

    _fields_and_field_types = {
        'input': 'sensor_msgs/PointCloud2',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import PointCloud2
        self.input = kwargs.get('input', PointCloud2())

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
        if self.input != other.input:
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
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'input' field must be a sub message of type 'PointCloud2'"
        self._input = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_VoxelGridFilter_Response(type):
    """Metaclass of message 'VoxelGridFilter_Response'."""

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
                'compare_flexbe_utilities.srv.VoxelGridFilter_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__voxel_grid_filter__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__voxel_grid_filter__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__voxel_grid_filter__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__voxel_grid_filter__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__voxel_grid_filter__response

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


class VoxelGridFilter_Response(metaclass=Metaclass_VoxelGridFilter_Response):
    """Message class 'VoxelGridFilter_Response'."""

    __slots__ = [
        '_filtered',
    ]

    _fields_and_field_types = {
        'filtered': 'sensor_msgs/PointCloud2',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import PointCloud2
        self.filtered = kwargs.get('filtered', PointCloud2())

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
        if self.filtered != other.filtered:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def filtered(self):
        """Message field 'filtered'."""
        return self._filtered

    @filtered.setter
    def filtered(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'filtered' field must be a sub message of type 'PointCloud2'"
        self._filtered = value


class Metaclass_VoxelGridFilter(type):
    """Metaclass of service 'VoxelGridFilter'."""

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
                'compare_flexbe_utilities.srv.VoxelGridFilter')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__voxel_grid_filter

            from compare_flexbe_utilities.srv import _voxel_grid_filter
            if _voxel_grid_filter.Metaclass_VoxelGridFilter_Request._TYPE_SUPPORT is None:
                _voxel_grid_filter.Metaclass_VoxelGridFilter_Request.__import_type_support__()
            if _voxel_grid_filter.Metaclass_VoxelGridFilter_Response._TYPE_SUPPORT is None:
                _voxel_grid_filter.Metaclass_VoxelGridFilter_Response.__import_type_support__()


class VoxelGridFilter(metaclass=Metaclass_VoxelGridFilter):
    from compare_flexbe_utilities.srv._voxel_grid_filter import VoxelGridFilter_Request as Request
    from compare_flexbe_utilities.srv._voxel_grid_filter import VoxelGridFilter_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
