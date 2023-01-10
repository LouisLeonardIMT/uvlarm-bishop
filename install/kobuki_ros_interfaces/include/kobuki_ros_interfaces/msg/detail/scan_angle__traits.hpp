// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kobuki_ros_interfaces:msg/ScanAngle.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__SCAN_ANGLE__TRAITS_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__SCAN_ANGLE__TRAITS_HPP_

#include "kobuki_ros_interfaces/msg/detail/scan_angle__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kobuki_ros_interfaces::msg::ScanAngle>()
{
  return "kobuki_ros_interfaces::msg::ScanAngle";
}

template<>
inline const char * name<kobuki_ros_interfaces::msg::ScanAngle>()
{
  return "kobuki_ros_interfaces/msg/ScanAngle";
}

template<>
struct has_fixed_size<kobuki_ros_interfaces::msg::ScanAngle>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<kobuki_ros_interfaces::msg::ScanAngle>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<kobuki_ros_interfaces::msg::ScanAngle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__SCAN_ANGLE__TRAITS_HPP_
