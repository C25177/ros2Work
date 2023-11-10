// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/ControlMsg.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__CONTROL_MSG__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__CONTROL_MSG__BUILDER_HPP_

#include "interfaces/msg/detail/control_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_ControlMsg_num
{
public:
  Init_ControlMsg_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::msg::ControlMsg num(::interfaces::msg::ControlMsg::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::ControlMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::ControlMsg>()
{
  return interfaces::msg::builder::Init_ControlMsg_num();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__CONTROL_MSG__BUILDER_HPP_
