// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kobuki_ros_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__SENSOR_STATE__TRAITS_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__SENSOR_STATE__TRAITS_HPP_

#include "kobuki_ros_interfaces/msg/detail/sensor_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kobuki_ros_interfaces::msg::SensorState>()
{
  return "kobuki_ros_interfaces::msg::SensorState";
}

template<>
inline const char * name<kobuki_ros_interfaces::msg::SensorState>()
{
  return "kobuki_ros_interfaces/msg/SensorState";
}

template<>
struct has_fixed_size<kobuki_ros_interfaces::msg::SensorState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kobuki_ros_interfaces::msg::SensorState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kobuki_ros_interfaces::msg::SensorState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__SENSOR_STATE__TRAITS_HPP_
