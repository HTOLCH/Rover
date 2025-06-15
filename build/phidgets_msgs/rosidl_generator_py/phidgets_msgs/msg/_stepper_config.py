# generated from rosidl_generator_py/resource/_idl.py.em
# with input from phidgets_msgs:msg/StepperConfig.idl
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


class Metaclass_StepperConfig(type):
    """Metaclass of message 'StepperConfig'."""

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
            module = import_type_support('phidgets_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'phidgets_msgs.msg.StepperConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__stepper_config
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__stepper_config
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__stepper_config
            cls._TYPE_SUPPORT = module.type_support_msg__msg__stepper_config
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__stepper_config

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StepperConfig(metaclass=Metaclass_StepperConfig):
    """Message class 'StepperConfig'."""

    __slots__ = [
        '_min_failsafe_time',
        '_max_failsafe_time',
        '_min_position',
        '_max_position',
        '_min_acceleration',
        '_max_acceleration',
        '_min_velocity_limit',
        '_max_velocity_limit',
        '_min_current_limit',
        '_max_current_limit',
        '_min_data_interval',
        '_max_data_interval',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'min_failsafe_time': 'int32',
        'max_failsafe_time': 'int32',
        'min_position': 'double',
        'max_position': 'double',
        'min_acceleration': 'double',
        'max_acceleration': 'double',
        'min_velocity_limit': 'double',
        'max_velocity_limit': 'double',
        'min_current_limit': 'double',
        'max_current_limit': 'double',
        'min_data_interval': 'int32',
        'max_data_interval': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.min_failsafe_time = kwargs.get('min_failsafe_time', int())
        self.max_failsafe_time = kwargs.get('max_failsafe_time', int())
        self.min_position = kwargs.get('min_position', float())
        self.max_position = kwargs.get('max_position', float())
        self.min_acceleration = kwargs.get('min_acceleration', float())
        self.max_acceleration = kwargs.get('max_acceleration', float())
        self.min_velocity_limit = kwargs.get('min_velocity_limit', float())
        self.max_velocity_limit = kwargs.get('max_velocity_limit', float())
        self.min_current_limit = kwargs.get('min_current_limit', float())
        self.max_current_limit = kwargs.get('max_current_limit', float())
        self.min_data_interval = kwargs.get('min_data_interval', int())
        self.max_data_interval = kwargs.get('max_data_interval', int())

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
        if self.min_failsafe_time != other.min_failsafe_time:
            return False
        if self.max_failsafe_time != other.max_failsafe_time:
            return False
        if self.min_position != other.min_position:
            return False
        if self.max_position != other.max_position:
            return False
        if self.min_acceleration != other.min_acceleration:
            return False
        if self.max_acceleration != other.max_acceleration:
            return False
        if self.min_velocity_limit != other.min_velocity_limit:
            return False
        if self.max_velocity_limit != other.max_velocity_limit:
            return False
        if self.min_current_limit != other.min_current_limit:
            return False
        if self.max_current_limit != other.max_current_limit:
            return False
        if self.min_data_interval != other.min_data_interval:
            return False
        if self.max_data_interval != other.max_data_interval:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def min_failsafe_time(self):
        """Message field 'min_failsafe_time'."""
        return self._min_failsafe_time

    @min_failsafe_time.setter
    def min_failsafe_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'min_failsafe_time' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'min_failsafe_time' field must be an integer in [-2147483648, 2147483647]"
        self._min_failsafe_time = value

    @builtins.property
    def max_failsafe_time(self):
        """Message field 'max_failsafe_time'."""
        return self._max_failsafe_time

    @max_failsafe_time.setter
    def max_failsafe_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'max_failsafe_time' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'max_failsafe_time' field must be an integer in [-2147483648, 2147483647]"
        self._max_failsafe_time = value

    @builtins.property
    def min_position(self):
        """Message field 'min_position'."""
        return self._min_position

    @min_position.setter
    def min_position(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'min_position' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min_position' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min_position = value

    @builtins.property
    def max_position(self):
        """Message field 'max_position'."""
        return self._max_position

    @max_position.setter
    def max_position(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_position' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_position' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_position = value

    @builtins.property
    def min_acceleration(self):
        """Message field 'min_acceleration'."""
        return self._min_acceleration

    @min_acceleration.setter
    def min_acceleration(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'min_acceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min_acceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min_acceleration = value

    @builtins.property
    def max_acceleration(self):
        """Message field 'max_acceleration'."""
        return self._max_acceleration

    @max_acceleration.setter
    def max_acceleration(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_acceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_acceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_acceleration = value

    @builtins.property
    def min_velocity_limit(self):
        """Message field 'min_velocity_limit'."""
        return self._min_velocity_limit

    @min_velocity_limit.setter
    def min_velocity_limit(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'min_velocity_limit' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min_velocity_limit' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min_velocity_limit = value

    @builtins.property
    def max_velocity_limit(self):
        """Message field 'max_velocity_limit'."""
        return self._max_velocity_limit

    @max_velocity_limit.setter
    def max_velocity_limit(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_velocity_limit' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_velocity_limit' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_velocity_limit = value

    @builtins.property
    def min_current_limit(self):
        """Message field 'min_current_limit'."""
        return self._min_current_limit

    @min_current_limit.setter
    def min_current_limit(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'min_current_limit' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min_current_limit' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min_current_limit = value

    @builtins.property
    def max_current_limit(self):
        """Message field 'max_current_limit'."""
        return self._max_current_limit

    @max_current_limit.setter
    def max_current_limit(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_current_limit' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_current_limit' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_current_limit = value

    @builtins.property
    def min_data_interval(self):
        """Message field 'min_data_interval'."""
        return self._min_data_interval

    @min_data_interval.setter
    def min_data_interval(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'min_data_interval' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'min_data_interval' field must be an integer in [-2147483648, 2147483647]"
        self._min_data_interval = value

    @builtins.property
    def max_data_interval(self):
        """Message field 'max_data_interval'."""
        return self._max_data_interval

    @max_data_interval.setter
    def max_data_interval(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'max_data_interval' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'max_data_interval' field must be an integer in [-2147483648, 2147483647]"
        self._max_data_interval = value
