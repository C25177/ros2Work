// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:action/Process.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__ACTION__DETAIL__PROCESS__TRAITS_HPP_
#define INTERFACES__ACTION__DETAIL__PROCESS__TRAITS_HPP_

#include "interfaces/action/detail/process__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::Process_Goal>()
{
  return "interfaces::action::Process_Goal";
}

template<>
inline const char * name<interfaces::action::Process_Goal>()
{
  return "interfaces/action/Process_Goal";
}

template<>
struct has_fixed_size<interfaces::action::Process_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::action::Process_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::action::Process_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::Process_Result>()
{
  return "interfaces::action::Process_Result";
}

template<>
inline const char * name<interfaces::action::Process_Result>()
{
  return "interfaces/action/Process_Result";
}

template<>
struct has_fixed_size<interfaces::action::Process_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::action::Process_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::action::Process_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::Process_Feedback>()
{
  return "interfaces::action::Process_Feedback";
}

template<>
inline const char * name<interfaces::action::Process_Feedback>()
{
  return "interfaces/action/Process_Feedback";
}

template<>
struct has_fixed_size<interfaces::action::Process_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::action::Process_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::action::Process_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "interfaces/action/detail/process__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::Process_SendGoal_Request>()
{
  return "interfaces::action::Process_SendGoal_Request";
}

template<>
inline const char * name<interfaces::action::Process_SendGoal_Request>()
{
  return "interfaces/action/Process_SendGoal_Request";
}

template<>
struct has_fixed_size<interfaces::action::Process_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<interfaces::action::Process_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interfaces::action::Process_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<interfaces::action::Process_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interfaces::action::Process_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::Process_SendGoal_Response>()
{
  return "interfaces::action::Process_SendGoal_Response";
}

template<>
inline const char * name<interfaces::action::Process_SendGoal_Response>()
{
  return "interfaces/action/Process_SendGoal_Response";
}

template<>
struct has_fixed_size<interfaces::action::Process_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<interfaces::action::Process_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<interfaces::action::Process_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::Process_SendGoal>()
{
  return "interfaces::action::Process_SendGoal";
}

template<>
inline const char * name<interfaces::action::Process_SendGoal>()
{
  return "interfaces/action/Process_SendGoal";
}

template<>
struct has_fixed_size<interfaces::action::Process_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::action::Process_SendGoal_Request>::value &&
    has_fixed_size<interfaces::action::Process_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::action::Process_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::action::Process_SendGoal_Request>::value &&
    has_bounded_size<interfaces::action::Process_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<interfaces::action::Process_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::action::Process_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::action::Process_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::Process_GetResult_Request>()
{
  return "interfaces::action::Process_GetResult_Request";
}

template<>
inline const char * name<interfaces::action::Process_GetResult_Request>()
{
  return "interfaces/action/Process_GetResult_Request";
}

template<>
struct has_fixed_size<interfaces::action::Process_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interfaces::action::Process_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interfaces::action::Process_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "interfaces/action/detail/process__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::Process_GetResult_Response>()
{
  return "interfaces::action::Process_GetResult_Response";
}

template<>
inline const char * name<interfaces::action::Process_GetResult_Response>()
{
  return "interfaces/action/Process_GetResult_Response";
}

template<>
struct has_fixed_size<interfaces::action::Process_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<interfaces::action::Process_Result>::value> {};

template<>
struct has_bounded_size<interfaces::action::Process_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<interfaces::action::Process_Result>::value> {};

template<>
struct is_message<interfaces::action::Process_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::Process_GetResult>()
{
  return "interfaces::action::Process_GetResult";
}

template<>
inline const char * name<interfaces::action::Process_GetResult>()
{
  return "interfaces/action/Process_GetResult";
}

template<>
struct has_fixed_size<interfaces::action::Process_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::action::Process_GetResult_Request>::value &&
    has_fixed_size<interfaces::action::Process_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::action::Process_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::action::Process_GetResult_Request>::value &&
    has_bounded_size<interfaces::action::Process_GetResult_Response>::value
  >
{
};

template<>
struct is_service<interfaces::action::Process_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::action::Process_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::action::Process_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "interfaces/action/detail/process__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::Process_FeedbackMessage>()
{
  return "interfaces::action::Process_FeedbackMessage";
}

template<>
inline const char * name<interfaces::action::Process_FeedbackMessage>()
{
  return "interfaces/action/Process_FeedbackMessage";
}

template<>
struct has_fixed_size<interfaces::action::Process_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<interfaces::action::Process_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interfaces::action::Process_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<interfaces::action::Process_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interfaces::action::Process_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<interfaces::action::Process>
  : std::true_type
{
};

template<>
struct is_action_goal<interfaces::action::Process_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<interfaces::action::Process_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<interfaces::action::Process_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // INTERFACES__ACTION__DETAIL__PROCESS__TRAITS_HPP_
