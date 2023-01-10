# generated from rosidl_generator_py/resource/_idl.py.em
# with input from kobuki_ros_interfaces:msg/ButtonEvent.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ButtonEvent(type):
    """Metaclass of message 'ButtonEvent'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BUTTON0': 0,
        'BUTTON1': 1,
        'BUTTON2': 2,
        'RELEASED': 0,
        'PRESSED': 1,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('kobuki_ros_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'kobuki_ros_interfaces.msg.ButtonEvent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__button_event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__button_event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__button_event
            cls._TYPE_SUPPORT = module.type_support_msg__msg__button_event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__button_event

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BUTTON0': cls.__constants['BUTTON0'],
            'BUTTON1': cls.__constants['BUTTON1'],
            'BUTTON2': cls.__constants['BUTTON2'],
            'RELEASED': cls.__constants['RELEASED'],
            'PRESSED': cls.__constants['PRESSED'],
        }

    @property
    def BUTTON0(self):
        """Message constant 'BUTTON0'."""
        return Metaclass_ButtonEvent.__constants['BUTTON0']

    @property
    def BUTTON1(self):
        """Message constant 'BUTTON1'."""
        return Metaclass_ButtonEvent.__constants['BUTTON1']

    @property
    def BUTTON2(self):
        """Message constant 'BUTTON2'."""
        return Metaclass_ButtonEvent.__constants['BUTTON2']

    @property
    def RELEASED(self):
        """Message constant 'RELEASED'."""
        return Metaclass_ButtonEvent.__constants['RELEASED']

    @property
    def PRESSED(self):
        """Message constant 'PRESSED'."""
        return Metaclass_ButtonEvent.__constants['PRESSED']


class ButtonEvent(metaclass=Metaclass_ButtonEvent):
    """
    Message class 'ButtonEvent'.

    Constants:
      BUTTON0
      BUTTON1
      BUTTON2
      RELEASED
      PRESSED
    """

    __slots__ = [
        '_button',
        '_state',
    ]

    _fields_and_field_types = {
        'button': 'uint8',
        'state': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.button = kwargs.get('button', int())
        self.state = kwargs.get('state', int())

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
        if self.button != other.button:
            return False
        if self.state != other.state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def button(self):
        """Message field 'button'."""
        return self._button

    @button.setter
    def button(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'button' field must be an unsigned integer in [0, 255]"
        self._button = value

    @property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state' field must be an unsigned integer in [0, 255]"
        self._state = value
