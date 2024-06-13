# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_fndm_interface:msg/Student.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Student(type):
    """Metaclass of message 'Student'."""

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
            module = import_type_support('ros2_fndm_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros2_fndm_interface.msg.Student')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__student
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__student
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__student
            cls._TYPE_SUPPORT = module.type_support_msg__msg__student
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__student

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Student(metaclass=Metaclass_Student):
    """Message class 'Student'."""

    __slots__ = [
        '_first_name',
        '_last_name',
        '_age',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'first_name': 'string',
        'last_name': 'string',
        'age': 'int64',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
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
        self.first_name = kwargs.get('first_name', str())
        self.last_name = kwargs.get('last_name', str())
        self.age = kwargs.get('age', int())

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
        if self.first_name != other.first_name:
            return False
        if self.last_name != other.last_name:
            return False
        if self.age != other.age:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def first_name(self):
        """Message field 'first_name'."""
        return self._first_name

    @first_name.setter
    def first_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'first_name' field must be of type 'str'"
        self._first_name = value

    @builtins.property
    def last_name(self):
        """Message field 'last_name'."""
        return self._last_name

    @last_name.setter
    def last_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'last_name' field must be of type 'str'"
        self._last_name = value

    @builtins.property
    def age(self):
        """Message field 'age'."""
        return self._age

    @age.setter
    def age(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'age' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'age' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._age = value
