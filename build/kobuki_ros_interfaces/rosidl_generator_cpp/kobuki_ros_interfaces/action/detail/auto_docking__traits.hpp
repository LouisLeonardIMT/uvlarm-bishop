// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kobuki_ros_interfaces:action/AutoDocking.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__ACTION__DETAIL__AUTO_DOCKING__TRAITS_HPP_
#define KOBUKI_ROS_INTERFACES__ACTION__DETAIL__AUTO_DOCKING__TRAITS_HPP_

#include "kobuki_ros_interfaces/action/detail/auto_docking__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kobuki_ros_interfaces::action::AutoDocking_Goal>()
{
  return "kobuki_ros_interfaces::action::AutoDocking_Goal";
}

template<>
inline const char * name<kobuki_ros_interfaces::action::AutoDocking_Goal>()
{
  return "kobuki_ros_interfaces/action/AutoDocking_Goal";
}

template<>
struct has_fixed_size<kobuki_ros_interfaces::action::AutoDocking_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kobuki_ros_interfaces::action::AutoDocking_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kobuki_ros_interfaces::action::AutoDocking_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kobuki_ros_interfaces::action::AutoDocking_Result>()
{
  return "kobuki_ros_interfaces::action::AutoDocking_Result";
}

template<>
inline const char * name<kobuki_ros_interfaces::action::AutoDocking_Result>()
{
  return "kobuki_ros_interfaces/action/AutoDocking_Result";
}

template<>
struct has_fixed_size<kobuki_ros_interfaces::action::AutoDocking_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kobuki_ros_interfaces::action::AutoDocking_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kobuki_ros_interfaces::action::AutoDocking_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kobuki_ros_interfaces::action::AutoDocking_Feedback>()
{
  return "kobuki_ros_interfaces::action::AutoDocking_Feedback";
}

template<>
inline const char * name<kobuki_ros_interfaces::action::AutoDocking_Feedback>()
{
  return "kobuki_ros_interfaces/action/AutoDocking_Feedback";
}

template<>
struct has_fixed_size<kobuki_ros_interfaces::action::AutoDocking_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kobuki_ros_interfaces::action::AutoDocking_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kobuki_ros_interfaces::action::AutoDocking_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "kobuki_ros_interfaces/action/detail/auto_docking__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kobuki_ros_interfaces::action::AutoDocking_SendGoal_Request>()
{
  return "kobuki_ros_interfaces::action::AutoDocking_SendGoal_Request";
}

template<>
inline const char * name<kobuki_ros_interfaces::action::AutoDocking_SendGoal_Request>()
{
  return "kobuki_ros_interfaces/action/AutoDocking_SendGoal_Request";
}

template<>
struct has_fixed_size<kobuki_ros_interfaces::action::AutoDocking_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<kobuki_ros_interfaces::action::AutoDocking_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<kobuki_ros_interfaces::action::AutoDocking_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<kobuki_ros_interfaces::action::AutoDocking_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<kobuki_ros_interfaces::action::AutoDocking_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kobuki_ros_interfaces::action::AutoDocking_SendGoal_Response>()
{
  return "kobuki_ros_interfaces::action::AutoDocking_SendGoal_Response";
}

template<>
inline const char * name<kobuki_ros_interfaces::action::AutoDocking_SendGoal_Response>()
{
  return "kobuki_ros_interfaces/action/AutoDocking_SendGoal_Response";
}

template<>
struct has_fixed_size<kobuki_ros_interfaces::action::AutoDocking_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<kobuki_ros_interfaces::action::AutoDocking_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<kobuki_ros_interfaces::action::AutoDocking_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kobuki_ros_interfaces::action::AutoDocking_SendGoal>()
{
  return "kobuki_ros_interfaces::action::AutoDocking_SendGoal";
}

template<>
inline const char * name<kobuki_ros_interfaces::action::AutoDocking_SendGoal>()
{
  return "kobuki_ros_interfaces/action/AutoDocking_SendGoal";
}

template<>
struct has_fixed_size<kobuki_ros_interfaces::action::AutoDocking_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<kobuki_ros_interfaces::action::AutoDocking_SendGoal_Request>::value &&
    has_fixed_size<kobuki_ros_interfaces::action::AutoDocking_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<kobuki_ros_interfaces::action::AutoDocking_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<kobuki_ros_interfaces::action::AutoDocking_SendGoal_Request>::value &&
    has_bounded_size<kobuki_ros_interfaces::action::AutoDocking_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<kobuki_ros_interfaces::action::AutoDocking_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<kobuki_ros_interfaces::action::AutoDocking_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<kobuki_ros_interfaces::action::AutoDocking_SendGoal_Response>
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
inline const char * data_type<kobuki_ros_interfaces::action::AutoDocking_GetResult_Request>()
{
  return "kobuki_ros_interfaces::action::AutoDocking_GetResult_Request";
}

template<>
inline const char * name<kobuki_ros_interfaces::action::AutoDocking_GetResult_Request>()
{
  return "kobuki_ros_interfaces/action/AutoDocking_GetResult_Request";
}

template<>
struct has_fixed_size<kobuki_ros_interfaces::action::AutoDocking_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<kobuki_ros_interfaces::action::AutoDocking_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<kobuki_ros_interfaces::action::AutoDocking_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "kobuki_ros_interfaces/action/detail/auto_docking__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kobuki_ros_interfaces::action::AutoDocking_GetResult_Response>()
{
  return "kobuki_ros_interfaces::action::AutoDocking_GetResult_Response";
}

template<>
inline const char * name<kobuki_ros_interfaces::action::AutoDocking_GetResult_Response>()
{
  return "kobuki_ros_interfaces/action/AutoDocking_GetResult_Response";
}

template<>
struct has_fixed_size<kobuki_ros_interfaces::action::AutoDocking_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<kobuki_ros_interfaces::action::AutoDocking_Result>::value> {};

template<>
struct has_bounded_size<kobuki_ros_interfaces::action::AutoDocking_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<kobuki_ros_interfaces::action::AutoDocking_Result>::value> {};

template<>
struct is_message<kobuki_ros_interfaces::action::AutoDocking_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kobuki_ros_interfaces::action::AutoDocking_GetResult>()
{
  return "kobuki_ros_interfaces::action::AutoDocking_GetResult";
}

template<>
inline const char * name<kobuki_ros_interfaces::action::AutoDocking_GetResult>()
{
  return "kobuki_ros_interfaces/action/AutoDocking_GetResult";
}

template<>
struct has_fixed_size<kobuki_ros_interfaces::action::AutoDocking_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<kobuki_ros_interfaces::action::AutoDocking_GetResult_Request>::value &&
    has_fixed_size<kobuki_ros_interfaces::action::AutoDocking_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<kobuki_ros_interfaces::action::AutoDocking_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<kobuki_ros_interfaces::action::AutoDocking_GetResult_Request>::value &&
    has_bounded_size<kobuki_ros_interfaces::action::AutoDocking_GetResult_Response>::value
  >
{
};

template<>
struct is_service<kobuki_ros_interfaces::action::AutoDocking_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<kobuki_ros_interfaces::action::AutoDocking_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<kobuki_ros_interfaces::action::AutoDocking_GetResult_Response>
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
// #include "kobuki_ros_interfaces/action/detail/auto_docking__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kobuki_ros_interfaces::action::AutoDocking_FeedbackMessage>()
{
  return "kobuki_ros_interfaces::action::AutoDocking_FeedbackMessage";
}

template<>
inline const char * name<kobuki_ros_interfaces::action::AutoDocking_FeedbackMessage>()
{
  return "kobuki_ros_interfaces/action/AutoDocking_FeedbackMessage";
}

template<>
struct has_fixed_size<kobuki_ros_interfaces::action::AutoDocking_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<kobuki_ros_interfaces::action::AutoDocking_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<kobuki_ros_interfaces::action::AutoDocking_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<kobuki_ros_interfaces::action::AutoDocking_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<kobuki_ros_interfaces::action::AutoDocking_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<kobuki_ros_interfaces::action::AutoDocking>
  : std::true_type
{
};

template<>
struct is_action_goal<kobuki_ros_interfaces::action::AutoDocking_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<kobuki_ros_interfaces::action::AutoDocking_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<kobuki_ros_interfaces::action::AutoDocking_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // KOBUKI_ROS_INTERFACES__ACTION__DETAIL__AUTO_DOCKING__TRAITS_HPP_
