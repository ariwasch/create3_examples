// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from create3_examples_msgs:action/Coverage.idl
// generated code does not contain a copyright notice

#ifndef CREATE3_EXAMPLES_MSGS__ACTION__DETAIL__COVERAGE__TRAITS_HPP_
#define CREATE3_EXAMPLES_MSGS__ACTION__DETAIL__COVERAGE__TRAITS_HPP_

#include "create3_examples_msgs/action/detail/coverage__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'explore_duration'
// Member 'max_runtime'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const create3_examples_msgs::action::Coverage_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: explore_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "explore_duration:\n";
    to_yaml(msg.explore_duration, out, indentation + 2);
  }

  // member: max_runtime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_runtime:\n";
    to_yaml(msg.max_runtime, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const create3_examples_msgs::action::Coverage_Goal & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<create3_examples_msgs::action::Coverage_Goal>()
{
  return "create3_examples_msgs::action::Coverage_Goal";
}

template<>
inline const char * name<create3_examples_msgs::action::Coverage_Goal>()
{
  return "create3_examples_msgs/action/Coverage_Goal";
}

template<>
struct has_fixed_size<create3_examples_msgs::action::Coverage_Goal>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<create3_examples_msgs::action::Coverage_Goal>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<create3_examples_msgs::action::Coverage_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'duration'
// already included above
// #include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const create3_examples_msgs::action::Coverage_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: is_docked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_docked: ";
    value_to_yaml(msg.is_docked, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration:\n";
    to_yaml(msg.duration, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const create3_examples_msgs::action::Coverage_Result & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<create3_examples_msgs::action::Coverage_Result>()
{
  return "create3_examples_msgs::action::Coverage_Result";
}

template<>
inline const char * name<create3_examples_msgs::action::Coverage_Result>()
{
  return "create3_examples_msgs/action/Coverage_Result";
}

template<>
struct has_fixed_size<create3_examples_msgs::action::Coverage_Result>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<create3_examples_msgs::action::Coverage_Result>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<create3_examples_msgs::action::Coverage_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const create3_examples_msgs::action::Coverage_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_behavior
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_behavior: ";
    value_to_yaml(msg.current_behavior, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const create3_examples_msgs::action::Coverage_Feedback & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<create3_examples_msgs::action::Coverage_Feedback>()
{
  return "create3_examples_msgs::action::Coverage_Feedback";
}

template<>
inline const char * name<create3_examples_msgs::action::Coverage_Feedback>()
{
  return "create3_examples_msgs/action/Coverage_Feedback";
}

template<>
struct has_fixed_size<create3_examples_msgs::action::Coverage_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<create3_examples_msgs::action::Coverage_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<create3_examples_msgs::action::Coverage_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "create3_examples_msgs/action/detail/coverage__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const create3_examples_msgs::action::Coverage_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const create3_examples_msgs::action::Coverage_SendGoal_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<create3_examples_msgs::action::Coverage_SendGoal_Request>()
{
  return "create3_examples_msgs::action::Coverage_SendGoal_Request";
}

template<>
inline const char * name<create3_examples_msgs::action::Coverage_SendGoal_Request>()
{
  return "create3_examples_msgs/action/Coverage_SendGoal_Request";
}

template<>
struct has_fixed_size<create3_examples_msgs::action::Coverage_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<create3_examples_msgs::action::Coverage_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<create3_examples_msgs::action::Coverage_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<create3_examples_msgs::action::Coverage_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<create3_examples_msgs::action::Coverage_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const create3_examples_msgs::action::Coverage_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const create3_examples_msgs::action::Coverage_SendGoal_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<create3_examples_msgs::action::Coverage_SendGoal_Response>()
{
  return "create3_examples_msgs::action::Coverage_SendGoal_Response";
}

template<>
inline const char * name<create3_examples_msgs::action::Coverage_SendGoal_Response>()
{
  return "create3_examples_msgs/action/Coverage_SendGoal_Response";
}

template<>
struct has_fixed_size<create3_examples_msgs::action::Coverage_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<create3_examples_msgs::action::Coverage_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<create3_examples_msgs::action::Coverage_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<create3_examples_msgs::action::Coverage_SendGoal>()
{
  return "create3_examples_msgs::action::Coverage_SendGoal";
}

template<>
inline const char * name<create3_examples_msgs::action::Coverage_SendGoal>()
{
  return "create3_examples_msgs/action/Coverage_SendGoal";
}

template<>
struct has_fixed_size<create3_examples_msgs::action::Coverage_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<create3_examples_msgs::action::Coverage_SendGoal_Request>::value &&
    has_fixed_size<create3_examples_msgs::action::Coverage_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<create3_examples_msgs::action::Coverage_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<create3_examples_msgs::action::Coverage_SendGoal_Request>::value &&
    has_bounded_size<create3_examples_msgs::action::Coverage_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<create3_examples_msgs::action::Coverage_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<create3_examples_msgs::action::Coverage_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<create3_examples_msgs::action::Coverage_SendGoal_Response>
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

inline void to_yaml(
  const create3_examples_msgs::action::Coverage_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const create3_examples_msgs::action::Coverage_GetResult_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<create3_examples_msgs::action::Coverage_GetResult_Request>()
{
  return "create3_examples_msgs::action::Coverage_GetResult_Request";
}

template<>
inline const char * name<create3_examples_msgs::action::Coverage_GetResult_Request>()
{
  return "create3_examples_msgs/action/Coverage_GetResult_Request";
}

template<>
struct has_fixed_size<create3_examples_msgs::action::Coverage_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<create3_examples_msgs::action::Coverage_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<create3_examples_msgs::action::Coverage_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "create3_examples_msgs/action/detail/coverage__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const create3_examples_msgs::action::Coverage_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const create3_examples_msgs::action::Coverage_GetResult_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<create3_examples_msgs::action::Coverage_GetResult_Response>()
{
  return "create3_examples_msgs::action::Coverage_GetResult_Response";
}

template<>
inline const char * name<create3_examples_msgs::action::Coverage_GetResult_Response>()
{
  return "create3_examples_msgs/action/Coverage_GetResult_Response";
}

template<>
struct has_fixed_size<create3_examples_msgs::action::Coverage_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<create3_examples_msgs::action::Coverage_Result>::value> {};

template<>
struct has_bounded_size<create3_examples_msgs::action::Coverage_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<create3_examples_msgs::action::Coverage_Result>::value> {};

template<>
struct is_message<create3_examples_msgs::action::Coverage_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<create3_examples_msgs::action::Coverage_GetResult>()
{
  return "create3_examples_msgs::action::Coverage_GetResult";
}

template<>
inline const char * name<create3_examples_msgs::action::Coverage_GetResult>()
{
  return "create3_examples_msgs/action/Coverage_GetResult";
}

template<>
struct has_fixed_size<create3_examples_msgs::action::Coverage_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<create3_examples_msgs::action::Coverage_GetResult_Request>::value &&
    has_fixed_size<create3_examples_msgs::action::Coverage_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<create3_examples_msgs::action::Coverage_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<create3_examples_msgs::action::Coverage_GetResult_Request>::value &&
    has_bounded_size<create3_examples_msgs::action::Coverage_GetResult_Response>::value
  >
{
};

template<>
struct is_service<create3_examples_msgs::action::Coverage_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<create3_examples_msgs::action::Coverage_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<create3_examples_msgs::action::Coverage_GetResult_Response>
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
// #include "create3_examples_msgs/action/detail/coverage__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const create3_examples_msgs::action::Coverage_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const create3_examples_msgs::action::Coverage_FeedbackMessage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<create3_examples_msgs::action::Coverage_FeedbackMessage>()
{
  return "create3_examples_msgs::action::Coverage_FeedbackMessage";
}

template<>
inline const char * name<create3_examples_msgs::action::Coverage_FeedbackMessage>()
{
  return "create3_examples_msgs/action/Coverage_FeedbackMessage";
}

template<>
struct has_fixed_size<create3_examples_msgs::action::Coverage_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<create3_examples_msgs::action::Coverage_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<create3_examples_msgs::action::Coverage_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<create3_examples_msgs::action::Coverage_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<create3_examples_msgs::action::Coverage_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<create3_examples_msgs::action::Coverage>
  : std::true_type
{
};

template<>
struct is_action_goal<create3_examples_msgs::action::Coverage_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<create3_examples_msgs::action::Coverage_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<create3_examples_msgs::action::Coverage_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // CREATE3_EXAMPLES_MSGS__ACTION__DETAIL__COVERAGE__TRAITS_HPP_
