// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from create3_examples_msgs:action/Coverage.idl
// generated code does not contain a copyright notice

#ifndef CREATE3_EXAMPLES_MSGS__ACTION__DETAIL__COVERAGE__STRUCT_HPP_
#define CREATE3_EXAMPLES_MSGS__ACTION__DETAIL__COVERAGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'explore_duration'
// Member 'max_runtime'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__create3_examples_msgs__action__Coverage_Goal __attribute__((deprecated))
#else
# define DEPRECATED__create3_examples_msgs__action__Coverage_Goal __declspec(deprecated)
#endif

namespace create3_examples_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Coverage_Goal_
{
  using Type = Coverage_Goal_<ContainerAllocator>;

  explicit Coverage_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : explore_duration(_init),
    max_runtime(_init)
  {
    (void)_init;
  }

  explicit Coverage_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : explore_duration(_alloc, _init),
    max_runtime(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _explore_duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _explore_duration_type explore_duration;
  using _max_runtime_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _max_runtime_type max_runtime;

  // setters for named parameter idiom
  Type & set__explore_duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->explore_duration = _arg;
    return *this;
  }
  Type & set__max_runtime(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->max_runtime = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    create3_examples_msgs::action::Coverage_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const create3_examples_msgs::action::Coverage_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<create3_examples_msgs::action::Coverage_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<create3_examples_msgs::action::Coverage_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      create3_examples_msgs::action::Coverage_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<create3_examples_msgs::action::Coverage_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      create3_examples_msgs::action::Coverage_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<create3_examples_msgs::action::Coverage_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<create3_examples_msgs::action::Coverage_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<create3_examples_msgs::action::Coverage_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__create3_examples_msgs__action__Coverage_Goal
    std::shared_ptr<create3_examples_msgs::action::Coverage_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__create3_examples_msgs__action__Coverage_Goal
    std::shared_ptr<create3_examples_msgs::action::Coverage_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Coverage_Goal_ & other) const
  {
    if (this->explore_duration != other.explore_duration) {
      return false;
    }
    if (this->max_runtime != other.max_runtime) {
      return false;
    }
    return true;
  }
  bool operator!=(const Coverage_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Coverage_Goal_

// alias to use template instance with default allocator
using Coverage_Goal =
  create3_examples_msgs::action::Coverage_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace create3_examples_msgs


// Include directives for member types
// Member 'duration'
// already included above
// #include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__create3_examples_msgs__action__Coverage_Result __attribute__((deprecated))
#else
# define DEPRECATED__create3_examples_msgs__action__Coverage_Result __declspec(deprecated)
#endif

namespace create3_examples_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Coverage_Result_
{
  using Type = Coverage_Result_<ContainerAllocator>;

  explicit Coverage_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : duration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->is_docked = false;
    }
  }

  explicit Coverage_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : duration(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->is_docked = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _is_docked_type =
    bool;
  _is_docked_type is_docked;
  using _duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__is_docked(
    const bool & _arg)
  {
    this->is_docked = _arg;
    return *this;
  }
  Type & set__duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    create3_examples_msgs::action::Coverage_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const create3_examples_msgs::action::Coverage_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<create3_examples_msgs::action::Coverage_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<create3_examples_msgs::action::Coverage_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      create3_examples_msgs::action::Coverage_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<create3_examples_msgs::action::Coverage_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      create3_examples_msgs::action::Coverage_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<create3_examples_msgs::action::Coverage_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<create3_examples_msgs::action::Coverage_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<create3_examples_msgs::action::Coverage_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__create3_examples_msgs__action__Coverage_Result
    std::shared_ptr<create3_examples_msgs::action::Coverage_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__create3_examples_msgs__action__Coverage_Result
    std::shared_ptr<create3_examples_msgs::action::Coverage_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Coverage_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->is_docked != other.is_docked) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const Coverage_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Coverage_Result_

// alias to use template instance with default allocator
using Coverage_Result =
  create3_examples_msgs::action::Coverage_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace create3_examples_msgs


#ifndef _WIN32
# define DEPRECATED__create3_examples_msgs__action__Coverage_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__create3_examples_msgs__action__Coverage_Feedback __declspec(deprecated)
#endif

namespace create3_examples_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Coverage_Feedback_
{
  using Type = Coverage_Feedback_<ContainerAllocator>;

  explicit Coverage_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_behavior = 0l;
    }
  }

  explicit Coverage_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_behavior = 0l;
    }
  }

  // field types and members
  using _current_behavior_type =
    int32_t;
  _current_behavior_type current_behavior;

  // setters for named parameter idiom
  Type & set__current_behavior(
    const int32_t & _arg)
  {
    this->current_behavior = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t DOCK =
    0;
  static constexpr int32_t DRIVE_STRAIGHT =
    1;
  static constexpr int32_t ROTATE =
    2;
  static constexpr int32_t SPIRAL =
    3;
  static constexpr int32_t UNDOCK =
    4;

  // pointer types
  using RawPtr =
    create3_examples_msgs::action::Coverage_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const create3_examples_msgs::action::Coverage_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<create3_examples_msgs::action::Coverage_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<create3_examples_msgs::action::Coverage_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      create3_examples_msgs::action::Coverage_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<create3_examples_msgs::action::Coverage_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      create3_examples_msgs::action::Coverage_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<create3_examples_msgs::action::Coverage_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<create3_examples_msgs::action::Coverage_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<create3_examples_msgs::action::Coverage_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__create3_examples_msgs__action__Coverage_Feedback
    std::shared_ptr<create3_examples_msgs::action::Coverage_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__create3_examples_msgs__action__Coverage_Feedback
    std::shared_ptr<create3_examples_msgs::action::Coverage_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Coverage_Feedback_ & other) const
  {
    if (this->current_behavior != other.current_behavior) {
      return false;
    }
    return true;
  }
  bool operator!=(const Coverage_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Coverage_Feedback_

// alias to use template instance with default allocator
using Coverage_Feedback =
  create3_examples_msgs::action::Coverage_Feedback_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t Coverage_Feedback_<ContainerAllocator>::DOCK;
template<typename ContainerAllocator>
constexpr int32_t Coverage_Feedback_<ContainerAllocator>::DRIVE_STRAIGHT;
template<typename ContainerAllocator>
constexpr int32_t Coverage_Feedback_<ContainerAllocator>::ROTATE;
template<typename ContainerAllocator>
constexpr int32_t Coverage_Feedback_<ContainerAllocator>::SPIRAL;
template<typename ContainerAllocator>
constexpr int32_t Coverage_Feedback_<ContainerAllocator>::UNDOCK;

}  // namespace action

}  // namespace create3_examples_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "create3_examples_msgs/action/detail/coverage__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__create3_examples_msgs__action__Coverage_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__create3_examples_msgs__action__Coverage_SendGoal_Request __declspec(deprecated)
#endif

namespace create3_examples_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Coverage_SendGoal_Request_
{
  using Type = Coverage_SendGoal_Request_<ContainerAllocator>;

  explicit Coverage_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Coverage_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    create3_examples_msgs::action::Coverage_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const create3_examples_msgs::action::Coverage_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    create3_examples_msgs::action::Coverage_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const create3_examples_msgs::action::Coverage_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<create3_examples_msgs::action::Coverage_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<create3_examples_msgs::action::Coverage_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      create3_examples_msgs::action::Coverage_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<create3_examples_msgs::action::Coverage_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      create3_examples_msgs::action::Coverage_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<create3_examples_msgs::action::Coverage_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<create3_examples_msgs::action::Coverage_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<create3_examples_msgs::action::Coverage_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__create3_examples_msgs__action__Coverage_SendGoal_Request
    std::shared_ptr<create3_examples_msgs::action::Coverage_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__create3_examples_msgs__action__Coverage_SendGoal_Request
    std::shared_ptr<create3_examples_msgs::action::Coverage_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Coverage_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Coverage_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Coverage_SendGoal_Request_

// alias to use template instance with default allocator
using Coverage_SendGoal_Request =
  create3_examples_msgs::action::Coverage_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace create3_examples_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__create3_examples_msgs__action__Coverage_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__create3_examples_msgs__action__Coverage_SendGoal_Response __declspec(deprecated)
#endif

namespace create3_examples_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Coverage_SendGoal_Response_
{
  using Type = Coverage_SendGoal_Response_<ContainerAllocator>;

  explicit Coverage_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Coverage_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    create3_examples_msgs::action::Coverage_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const create3_examples_msgs::action::Coverage_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<create3_examples_msgs::action::Coverage_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<create3_examples_msgs::action::Coverage_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      create3_examples_msgs::action::Coverage_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<create3_examples_msgs::action::Coverage_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      create3_examples_msgs::action::Coverage_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<create3_examples_msgs::action::Coverage_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<create3_examples_msgs::action::Coverage_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<create3_examples_msgs::action::Coverage_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__create3_examples_msgs__action__Coverage_SendGoal_Response
    std::shared_ptr<create3_examples_msgs::action::Coverage_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__create3_examples_msgs__action__Coverage_SendGoal_Response
    std::shared_ptr<create3_examples_msgs::action::Coverage_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Coverage_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Coverage_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Coverage_SendGoal_Response_

// alias to use template instance with default allocator
using Coverage_SendGoal_Response =
  create3_examples_msgs::action::Coverage_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace create3_examples_msgs

namespace create3_examples_msgs
{

namespace action
{

struct Coverage_SendGoal
{
  using Request = create3_examples_msgs::action::Coverage_SendGoal_Request;
  using Response = create3_examples_msgs::action::Coverage_SendGoal_Response;
};

}  // namespace action

}  // namespace create3_examples_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__create3_examples_msgs__action__Coverage_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__create3_examples_msgs__action__Coverage_GetResult_Request __declspec(deprecated)
#endif

namespace create3_examples_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Coverage_GetResult_Request_
{
  using Type = Coverage_GetResult_Request_<ContainerAllocator>;

  explicit Coverage_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Coverage_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    create3_examples_msgs::action::Coverage_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const create3_examples_msgs::action::Coverage_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<create3_examples_msgs::action::Coverage_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<create3_examples_msgs::action::Coverage_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      create3_examples_msgs::action::Coverage_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<create3_examples_msgs::action::Coverage_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      create3_examples_msgs::action::Coverage_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<create3_examples_msgs::action::Coverage_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<create3_examples_msgs::action::Coverage_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<create3_examples_msgs::action::Coverage_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__create3_examples_msgs__action__Coverage_GetResult_Request
    std::shared_ptr<create3_examples_msgs::action::Coverage_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__create3_examples_msgs__action__Coverage_GetResult_Request
    std::shared_ptr<create3_examples_msgs::action::Coverage_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Coverage_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Coverage_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Coverage_GetResult_Request_

// alias to use template instance with default allocator
using Coverage_GetResult_Request =
  create3_examples_msgs::action::Coverage_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace create3_examples_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "create3_examples_msgs/action/detail/coverage__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__create3_examples_msgs__action__Coverage_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__create3_examples_msgs__action__Coverage_GetResult_Response __declspec(deprecated)
#endif

namespace create3_examples_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Coverage_GetResult_Response_
{
  using Type = Coverage_GetResult_Response_<ContainerAllocator>;

  explicit Coverage_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Coverage_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    create3_examples_msgs::action::Coverage_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const create3_examples_msgs::action::Coverage_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    create3_examples_msgs::action::Coverage_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const create3_examples_msgs::action::Coverage_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<create3_examples_msgs::action::Coverage_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<create3_examples_msgs::action::Coverage_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      create3_examples_msgs::action::Coverage_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<create3_examples_msgs::action::Coverage_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      create3_examples_msgs::action::Coverage_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<create3_examples_msgs::action::Coverage_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<create3_examples_msgs::action::Coverage_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<create3_examples_msgs::action::Coverage_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__create3_examples_msgs__action__Coverage_GetResult_Response
    std::shared_ptr<create3_examples_msgs::action::Coverage_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__create3_examples_msgs__action__Coverage_GetResult_Response
    std::shared_ptr<create3_examples_msgs::action::Coverage_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Coverage_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Coverage_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Coverage_GetResult_Response_

// alias to use template instance with default allocator
using Coverage_GetResult_Response =
  create3_examples_msgs::action::Coverage_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace create3_examples_msgs

namespace create3_examples_msgs
{

namespace action
{

struct Coverage_GetResult
{
  using Request = create3_examples_msgs::action::Coverage_GetResult_Request;
  using Response = create3_examples_msgs::action::Coverage_GetResult_Response;
};

}  // namespace action

}  // namespace create3_examples_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "create3_examples_msgs/action/detail/coverage__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__create3_examples_msgs__action__Coverage_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__create3_examples_msgs__action__Coverage_FeedbackMessage __declspec(deprecated)
#endif

namespace create3_examples_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Coverage_FeedbackMessage_
{
  using Type = Coverage_FeedbackMessage_<ContainerAllocator>;

  explicit Coverage_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Coverage_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    create3_examples_msgs::action::Coverage_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const create3_examples_msgs::action::Coverage_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    create3_examples_msgs::action::Coverage_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const create3_examples_msgs::action::Coverage_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<create3_examples_msgs::action::Coverage_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<create3_examples_msgs::action::Coverage_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      create3_examples_msgs::action::Coverage_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<create3_examples_msgs::action::Coverage_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      create3_examples_msgs::action::Coverage_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<create3_examples_msgs::action::Coverage_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<create3_examples_msgs::action::Coverage_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<create3_examples_msgs::action::Coverage_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__create3_examples_msgs__action__Coverage_FeedbackMessage
    std::shared_ptr<create3_examples_msgs::action::Coverage_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__create3_examples_msgs__action__Coverage_FeedbackMessage
    std::shared_ptr<create3_examples_msgs::action::Coverage_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Coverage_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Coverage_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Coverage_FeedbackMessage_

// alias to use template instance with default allocator
using Coverage_FeedbackMessage =
  create3_examples_msgs::action::Coverage_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace create3_examples_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace create3_examples_msgs
{

namespace action
{

struct Coverage
{
  /// The goal message defined in the action definition.
  using Goal = create3_examples_msgs::action::Coverage_Goal;
  /// The result message defined in the action definition.
  using Result = create3_examples_msgs::action::Coverage_Result;
  /// The feedback message defined in the action definition.
  using Feedback = create3_examples_msgs::action::Coverage_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = create3_examples_msgs::action::Coverage_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = create3_examples_msgs::action::Coverage_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = create3_examples_msgs::action::Coverage_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Coverage Coverage;

}  // namespace action

}  // namespace create3_examples_msgs

#endif  // CREATE3_EXAMPLES_MSGS__ACTION__DETAIL__COVERAGE__STRUCT_HPP_
