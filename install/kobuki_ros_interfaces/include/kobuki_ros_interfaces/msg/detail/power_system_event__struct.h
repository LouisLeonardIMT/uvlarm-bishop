// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kobuki_ros_interfaces:msg/PowerSystemEvent.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__POWER_SYSTEM_EVENT__STRUCT_H_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__POWER_SYSTEM_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNPLUGGED'.
enum
{
  kobuki_ros_interfaces__msg__PowerSystemEvent__UNPLUGGED = 0
};

/// Constant 'PLUGGED_TO_ADAPTER'.
enum
{
  kobuki_ros_interfaces__msg__PowerSystemEvent__PLUGGED_TO_ADAPTER = 1
};

/// Constant 'PLUGGED_TO_DOCKBASE'.
enum
{
  kobuki_ros_interfaces__msg__PowerSystemEvent__PLUGGED_TO_DOCKBASE = 2
};

/// Constant 'CHARGE_COMPLETED'.
enum
{
  kobuki_ros_interfaces__msg__PowerSystemEvent__CHARGE_COMPLETED = 3
};

/// Constant 'BATTERY_LOW'.
enum
{
  kobuki_ros_interfaces__msg__PowerSystemEvent__BATTERY_LOW = 4
};

/// Constant 'BATTERY_CRITICAL'.
enum
{
  kobuki_ros_interfaces__msg__PowerSystemEvent__BATTERY_CRITICAL = 5
};

// Struct defined in msg/PowerSystemEvent in the package kobuki_ros_interfaces.
typedef struct kobuki_ros_interfaces__msg__PowerSystemEvent
{
  uint8_t event;
} kobuki_ros_interfaces__msg__PowerSystemEvent;

// Struct for a sequence of kobuki_ros_interfaces__msg__PowerSystemEvent.
typedef struct kobuki_ros_interfaces__msg__PowerSystemEvent__Sequence
{
  kobuki_ros_interfaces__msg__PowerSystemEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kobuki_ros_interfaces__msg__PowerSystemEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__POWER_SYSTEM_EVENT__STRUCT_H_
