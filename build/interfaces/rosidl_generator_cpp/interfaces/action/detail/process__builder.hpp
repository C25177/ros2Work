// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:action/Process.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__ACTION__DETAIL__PROCESS__BUILDER_HPP_
#define INTERFACES__ACTION__DETAIL__PROCESS__BUILDER_HPP_

#include "interfaces/action/detail/process__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Process_Goal_num
{
public:
  Init_Process_Goal_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::action::Process_Goal num(::interfaces::action::Process_Goal::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Process_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Process_Goal>()
{
  return interfaces::action::builder::Init_Process_Goal_num();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Process_Result_sum
{
public:
  Init_Process_Result_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::action::Process_Result sum(::interfaces::action::Process_Result::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Process_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Process_Result>()
{
  return interfaces::action::builder::Init_Process_Result_sum();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Process_Feedback_progress
{
public:
  Init_Process_Feedback_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::action::Process_Feedback progress(::interfaces::action::Process_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Process_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Process_Feedback>()
{
  return interfaces::action::builder::Init_Process_Feedback_progress();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Process_SendGoal_Request_goal
{
public:
  explicit Init_Process_SendGoal_Request_goal(::interfaces::action::Process_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::action::Process_SendGoal_Request goal(::interfaces::action::Process_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Process_SendGoal_Request msg_;
};

class Init_Process_SendGoal_Request_goal_id
{
public:
  Init_Process_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Process_SendGoal_Request_goal goal_id(::interfaces::action::Process_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Process_SendGoal_Request_goal(msg_);
  }

private:
  ::interfaces::action::Process_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Process_SendGoal_Request>()
{
  return interfaces::action::builder::Init_Process_SendGoal_Request_goal_id();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Process_SendGoal_Response_stamp
{
public:
  explicit Init_Process_SendGoal_Response_stamp(::interfaces::action::Process_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::action::Process_SendGoal_Response stamp(::interfaces::action::Process_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Process_SendGoal_Response msg_;
};

class Init_Process_SendGoal_Response_accepted
{
public:
  Init_Process_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Process_SendGoal_Response_stamp accepted(::interfaces::action::Process_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Process_SendGoal_Response_stamp(msg_);
  }

private:
  ::interfaces::action::Process_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Process_SendGoal_Response>()
{
  return interfaces::action::builder::Init_Process_SendGoal_Response_accepted();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Process_GetResult_Request_goal_id
{
public:
  Init_Process_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::action::Process_GetResult_Request goal_id(::interfaces::action::Process_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Process_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Process_GetResult_Request>()
{
  return interfaces::action::builder::Init_Process_GetResult_Request_goal_id();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Process_GetResult_Response_result
{
public:
  explicit Init_Process_GetResult_Response_result(::interfaces::action::Process_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::action::Process_GetResult_Response result(::interfaces::action::Process_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Process_GetResult_Response msg_;
};

class Init_Process_GetResult_Response_status
{
public:
  Init_Process_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Process_GetResult_Response_result status(::interfaces::action::Process_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Process_GetResult_Response_result(msg_);
  }

private:
  ::interfaces::action::Process_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Process_GetResult_Response>()
{
  return interfaces::action::builder::Init_Process_GetResult_Response_status();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Process_FeedbackMessage_feedback
{
public:
  explicit Init_Process_FeedbackMessage_feedback(::interfaces::action::Process_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::interfaces::action::Process_FeedbackMessage feedback(::interfaces::action::Process_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Process_FeedbackMessage msg_;
};

class Init_Process_FeedbackMessage_goal_id
{
public:
  Init_Process_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Process_FeedbackMessage_feedback goal_id(::interfaces::action::Process_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Process_FeedbackMessage_feedback(msg_);
  }

private:
  ::interfaces::action::Process_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Process_FeedbackMessage>()
{
  return interfaces::action::builder::Init_Process_FeedbackMessage_goal_id();
}

}  // namespace interfaces

#endif  // INTERFACES__ACTION__DETAIL__PROCESS__BUILDER_HPP_
