// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/AddTwoInt.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__ADD_TWO_INT__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__ADD_TWO_INT__TRAITS_HPP_

#include "interfaces/srv/detail/add_two_int__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::AddTwoInt_Request>()
{
  return "interfaces::srv::AddTwoInt_Request";
}

template<>
inline const char * name<interfaces::srv::AddTwoInt_Request>()
{
  return "interfaces/srv/AddTwoInt_Request";
}

template<>
struct has_fixed_size<interfaces::srv::AddTwoInt_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::AddTwoInt_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::AddTwoInt_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::AddTwoInt_Response>()
{
  return "interfaces::srv::AddTwoInt_Response";
}

template<>
inline const char * name<interfaces::srv::AddTwoInt_Response>()
{
  return "interfaces/srv/AddTwoInt_Response";
}

template<>
struct has_fixed_size<interfaces::srv::AddTwoInt_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::AddTwoInt_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::AddTwoInt_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::AddTwoInt>()
{
  return "interfaces::srv::AddTwoInt";
}

template<>
inline const char * name<interfaces::srv::AddTwoInt>()
{
  return "interfaces/srv/AddTwoInt";
}

template<>
struct has_fixed_size<interfaces::srv::AddTwoInt>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::AddTwoInt_Request>::value &&
    has_fixed_size<interfaces::srv::AddTwoInt_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::AddTwoInt>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::AddTwoInt_Request>::value &&
    has_bounded_size<interfaces::srv::AddTwoInt_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::AddTwoInt>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::AddTwoInt_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::AddTwoInt_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__ADD_TWO_INT__TRAITS_HPP_
