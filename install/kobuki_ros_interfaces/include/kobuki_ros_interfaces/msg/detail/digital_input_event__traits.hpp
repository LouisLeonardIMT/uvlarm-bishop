// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kobuki_ros_interfaces:msg/DigitalInputEvent.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__DIGITAL_INPUT_EVENT__TRAITS_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__DIGITAL_INPUT_EVENT__TRAITS_HPP_

#include "kobuki_ros_interfaces/msg/detail/digital_input_event__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kobuki_ros_interfaces::msg::DigitalInputEvent>()
{
  return "kobuki_ros_interfaces::msg::DigitalInputEvent";
}

template<>
inline const char * name<kobuki_ros_interfaces::msg::DigitalInputEvent>()
{
  return "kobuki_ros_interfaces/msg/DigitalInputEvent";
}

template<>
struct has_fixed_size<kobuki_ros_interfaces::msg::DigitalInputEvent>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kobuki_ros_interfaces::msg::DigitalInputEvent>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kobuki_ros_interfaces::msg::DigitalInputEvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__DIGITAL_INPUT_EVENT__TRAITS_HPP_
