# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_fndm_interface:srv/GradePointAverage.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GradePointAverage_Request(type):
    """Metaclass of message 'GradePointAverage_Request'."""

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
                'ros2_fndm_interface.srv.GradePointAverage_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__grade_point_average__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__grade_point_average__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__grade_point_average__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__grade_point_average__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__grade_point_average__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GradePointAverage_Request(metaclass=Metaclass_GradePointAverage_Request):
    """Message class 'GradePointAverage_Request'."""

    __slots__ = [
        '_grade_1',
        '_grade_2',
        '_grade_3',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'grade_1': 'int64',
        'grade_2': 'int64',
        'grade_3': 'int64',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
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
        self.grade_1 = kwargs.get('grade_1', int())
        self.grade_2 = kwargs.get('grade_2', int())
        self.grade_3 = kwargs.get('grade_3', int())

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
        if self.grade_1 != other.grade_1:
            return False
        if self.grade_2 != other.grade_2:
            return False
        if self.grade_3 != other.grade_3:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def grade_1(self):
        """Message field 'grade_1'."""
        return self._grade_1

    @grade_1.setter
    def grade_1(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'grade_1' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'grade_1' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._grade_1 = value

    @builtins.property
    def grade_2(self):
        """Message field 'grade_2'."""
        return self._grade_2

    @grade_2.setter
    def grade_2(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'grade_2' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'grade_2' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._grade_2 = value

    @builtins.property
    def grade_3(self):
        """Message field 'grade_3'."""
        return self._grade_3

    @grade_3.setter
    def grade_3(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'grade_3' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'grade_3' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._grade_3 = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GradePointAverage_Response(type):
    """Metaclass of message 'GradePointAverage_Response'."""

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
                'ros2_fndm_interface.srv.GradePointAverage_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__grade_point_average__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__grade_point_average__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__grade_point_average__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__grade_point_average__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__grade_point_average__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GradePointAverage_Response(metaclass=Metaclass_GradePointAverage_Response):
    """Message class 'GradePointAverage_Response'."""

    __slots__ = [
        '_gpa',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'gpa': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.gpa = kwargs.get('gpa', float())

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
        if self.gpa != other.gpa:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def gpa(self):
        """Message field 'gpa'."""
        return self._gpa

    @gpa.setter
    def gpa(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'gpa' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gpa' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gpa = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GradePointAverage_Event(type):
    """Metaclass of message 'GradePointAverage_Event'."""

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
                'ros2_fndm_interface.srv.GradePointAverage_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__grade_point_average__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__grade_point_average__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__grade_point_average__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__grade_point_average__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__grade_point_average__event

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


class GradePointAverage_Event(metaclass=Metaclass_GradePointAverage_Event):
    """Message class 'GradePointAverage_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<ros2_fndm_interface/GradePointAverage_Request, 1>',
        'response': 'sequence<ros2_fndm_interface/GradePointAverage_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['ros2_fndm_interface', 'srv'], 'GradePointAverage_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['ros2_fndm_interface', 'srv'], 'GradePointAverage_Response'), 1),  # noqa: E501
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
            from ros2_fndm_interface.srv import GradePointAverage_Request
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
                 all(isinstance(v, GradePointAverage_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'GradePointAverage_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from ros2_fndm_interface.srv import GradePointAverage_Response
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
                 all(isinstance(v, GradePointAverage_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'GradePointAverage_Response'"
        self._response = value


class Metaclass_GradePointAverage(type):
    """Metaclass of service 'GradePointAverage'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ros2_fndm_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros2_fndm_interface.srv.GradePointAverage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__grade_point_average

            from ros2_fndm_interface.srv import _grade_point_average
            if _grade_point_average.Metaclass_GradePointAverage_Request._TYPE_SUPPORT is None:
                _grade_point_average.Metaclass_GradePointAverage_Request.__import_type_support__()
            if _grade_point_average.Metaclass_GradePointAverage_Response._TYPE_SUPPORT is None:
                _grade_point_average.Metaclass_GradePointAverage_Response.__import_type_support__()
            if _grade_point_average.Metaclass_GradePointAverage_Event._TYPE_SUPPORT is None:
                _grade_point_average.Metaclass_GradePointAverage_Event.__import_type_support__()


class GradePointAverage(metaclass=Metaclass_GradePointAverage):
    from ros2_fndm_interface.srv._grade_point_average import GradePointAverage_Request as Request
    from ros2_fndm_interface.srv._grade_point_average import GradePointAverage_Response as Response
    from ros2_fndm_interface.srv._grade_point_average import GradePointAverage_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
