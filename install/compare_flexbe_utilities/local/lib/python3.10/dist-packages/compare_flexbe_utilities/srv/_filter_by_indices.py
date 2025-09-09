# generated from rosidl_generator_py/resource/_idl.py.em
# with input from compare_flexbe_utilities:srv/FilterByIndices.idl
# generated code does not contain a copyright notice


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
    ]

    _fields_and_field_types = {
        'input_cloud': 'sensor_msgs/PointCloud2',
        'target_indices': 'pcl_msgs/PointIndices',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['pcl_msgs', 'msg'], 'PointIndices'),  # noqa: E501
    )

    def __init__(self, **kwargs):
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
        if __debug__:
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
        if __debug__:
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
    ]

    _fields_and_field_types = {
        'filtered_cloud': 'sensor_msgs/PointCloud2',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
    )

    def __init__(self, **kwargs):
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
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'filtered_cloud' field must be a sub message of type 'PointCloud2'"
        self._filtered_cloud = value


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


class FilterByIndices(metaclass=Metaclass_FilterByIndices):
    from compare_flexbe_utilities.srv._filter_by_indices import FilterByIndices_Request as Request
    from compare_flexbe_utilities.srv._filter_by_indices import FilterByIndices_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
