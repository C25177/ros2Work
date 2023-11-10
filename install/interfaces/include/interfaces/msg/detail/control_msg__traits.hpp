// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/ControlMsg.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__CONTROL_MSG__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__CONTROL_MSG__TRAITS_HPP_

#include "interfaces/msg/detail/control_msg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::msg::ControlMsg>()
{
  return "interfaces::msg::ControlMsg";
}

template<>
inline const char * name<interfaces::msg::ControlMsg>()
{
  return "interfaces/msg/ControlMsg";
}

template<>
struct has_fixed_size<interfaces::msg::ControlMsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::msg::ControlMsg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::msg::ControlMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__CONTROL_MSG__TRAITS_HPP_
