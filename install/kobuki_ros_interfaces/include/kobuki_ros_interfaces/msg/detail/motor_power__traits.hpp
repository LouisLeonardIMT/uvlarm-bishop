// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kobuki_ros_interfaces:msg/MotorPower.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__MOTOR_POWER__TRAITS_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__MOTOR_POWER__TRAITS_HPP_

#include "kobuki_ros_interfaces/msg/detail/motor_power__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kobuki_ros_interfaces::msg::MotorPower>()
{
  return "kobuki_ros_interfaces::msg::MotorPower";
}

template<>
inline const char * name<kobuki_ros_interfaces::msg::MotorPower>()
{
  return "kobuki_ros_interfaces/msg/MotorPower";
}

template<>
struct has_fixed_size<kobuki_ros_interfaces::msg::MotorPower>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kobuki_ros_interfaces::msg::MotorPower>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kobuki_ros_interfaces::msg::MotorPower>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__MOTOR_POWER__TRAITS_HPP_