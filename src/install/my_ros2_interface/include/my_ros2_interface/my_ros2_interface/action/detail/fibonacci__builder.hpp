// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_ros2_interface:action/Fibonacci.idl
// generated code does not contain a copyright notice

#ifndef MY_ROS2_INTERFACE__ACTION__DETAIL__FIBONACCI__BUILDER_HPP_
#define MY_ROS2_INTERFACE__ACTION__DETAIL__FIBONACCI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_ros2_interface/action/detail/fibonacci__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_ros2_interface
{

namespace action
{

namespace builder
{

class Init_Fibonacci_Goal_order
{
public:
  Init_Fibonacci_Goal_order()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_ros2_interface::action::Fibonacci_Goal order(::my_ros2_interface::action::Fibonacci_Goal::_order_type arg)
  {
    msg_.order = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ros2_interface::action::Fibonacci_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ros2_interface::action::Fibonacci_Goal>()
{
  return my_ros2_interface::action::builder::Init_Fibonacci_Goal_order();
}

}  // namespace my_ros2_interface


namespace my_ros2_interface
{

namespace action
{

namespace builder
{

class Init_Fibonacci_Result_result_sequence
{
public:
  Init_Fibonacci_Result_result_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_ros2_interface::action::Fibonacci_Result result_sequence(::my_ros2_interface::action::Fibonacci_Result::_result_sequence_type arg)
  {
    msg_.result_sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ros2_interface::action::Fibonacci_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ros2_interface::action::Fibonacci_Result>()
{
  return my_ros2_interface::action::builder::Init_Fibonacci_Result_result_sequence();
}

}  // namespace my_ros2_interface


namespace my_ros2_interface
{

namespace action
{

namespace builder
{

class Init_Fibonacci_Feedback_partial_sequence
{
public:
  Init_Fibonacci_Feedback_partial_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_ros2_interface::action::Fibonacci_Feedback partial_sequence(::my_ros2_interface::action::Fibonacci_Feedback::_partial_sequence_type arg)
  {
    msg_.partial_sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ros2_interface::action::Fibonacci_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ros2_interface::action::Fibonacci_Feedback>()
{
  return my_ros2_interface::action::builder::Init_Fibonacci_Feedback_partial_sequence();
}

}  // namespace my_ros2_interface


namespace my_ros2_interface
{

namespace action
{

namespace builder
{

class Init_Fibonacci_SendGoal_Request_goal
{
public:
  explicit Init_Fibonacci_SendGoal_Request_goal(::my_ros2_interface::action::Fibonacci_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::my_ros2_interface::action::Fibonacci_SendGoal_Request goal(::my_ros2_interface::action::Fibonacci_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ros2_interface::action::Fibonacci_SendGoal_Request msg_;
};

class Init_Fibonacci_SendGoal_Request_goal_id
{
public:
  Init_Fibonacci_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_SendGoal_Request_goal goal_id(::my_ros2_interface::action::Fibonacci_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Fibonacci_SendGoal_Request_goal(msg_);
  }

private:
  ::my_ros2_interface::action::Fibonacci_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ros2_interface::action::Fibonacci_SendGoal_Request>()
{
  return my_ros2_interface::action::builder::Init_Fibonacci_SendGoal_Request_goal_id();
}

}  // namespace my_ros2_interface


namespace my_ros2_interface
{

namespace action
{

namespace builder
{

class Init_Fibonacci_SendGoal_Response_stamp
{
public:
  explicit Init_Fibonacci_SendGoal_Response_stamp(::my_ros2_interface::action::Fibonacci_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::my_ros2_interface::action::Fibonacci_SendGoal_Response stamp(::my_ros2_interface::action::Fibonacci_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ros2_interface::action::Fibonacci_SendGoal_Response msg_;
};

class Init_Fibonacci_SendGoal_Response_accepted
{
public:
  Init_Fibonacci_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_SendGoal_Response_stamp accepted(::my_ros2_interface::action::Fibonacci_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Fibonacci_SendGoal_Response_stamp(msg_);
  }

private:
  ::my_ros2_interface::action::Fibonacci_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ros2_interface::action::Fibonacci_SendGoal_Response>()
{
  return my_ros2_interface::action::builder::Init_Fibonacci_SendGoal_Response_accepted();
}

}  // namespace my_ros2_interface


namespace my_ros2_interface
{

namespace action
{

namespace builder
{

class Init_Fibonacci_SendGoal_Event_response
{
public:
  explicit Init_Fibonacci_SendGoal_Event_response(::my_ros2_interface::action::Fibonacci_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::my_ros2_interface::action::Fibonacci_SendGoal_Event response(::my_ros2_interface::action::Fibonacci_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ros2_interface::action::Fibonacci_SendGoal_Event msg_;
};

class Init_Fibonacci_SendGoal_Event_request
{
public:
  explicit Init_Fibonacci_SendGoal_Event_request(::my_ros2_interface::action::Fibonacci_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_Fibonacci_SendGoal_Event_response request(::my_ros2_interface::action::Fibonacci_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Fibonacci_SendGoal_Event_response(msg_);
  }

private:
  ::my_ros2_interface::action::Fibonacci_SendGoal_Event msg_;
};

class Init_Fibonacci_SendGoal_Event_info
{
public:
  Init_Fibonacci_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_SendGoal_Event_request info(::my_ros2_interface::action::Fibonacci_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Fibonacci_SendGoal_Event_request(msg_);
  }

private:
  ::my_ros2_interface::action::Fibonacci_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ros2_interface::action::Fibonacci_SendGoal_Event>()
{
  return my_ros2_interface::action::builder::Init_Fibonacci_SendGoal_Event_info();
}

}  // namespace my_ros2_interface


namespace my_ros2_interface
{

namespace action
{

namespace builder
{

class Init_Fibonacci_GetResult_Request_goal_id
{
public:
  Init_Fibonacci_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_ros2_interface::action::Fibonacci_GetResult_Request goal_id(::my_ros2_interface::action::Fibonacci_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ros2_interface::action::Fibonacci_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ros2_interface::action::Fibonacci_GetResult_Request>()
{
  return my_ros2_interface::action::builder::Init_Fibonacci_GetResult_Request_goal_id();
}

}  // namespace my_ros2_interface


namespace my_ros2_interface
{

namespace action
{

namespace builder
{

class Init_Fibonacci_GetResult_Response_result
{
public:
  explicit Init_Fibonacci_GetResult_Response_result(::my_ros2_interface::action::Fibonacci_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::my_ros2_interface::action::Fibonacci_GetResult_Response result(::my_ros2_interface::action::Fibonacci_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ros2_interface::action::Fibonacci_GetResult_Response msg_;
};

class Init_Fibonacci_GetResult_Response_status
{
public:
  Init_Fibonacci_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_GetResult_Response_result status(::my_ros2_interface::action::Fibonacci_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Fibonacci_GetResult_Response_result(msg_);
  }

private:
  ::my_ros2_interface::action::Fibonacci_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ros2_interface::action::Fibonacci_GetResult_Response>()
{
  return my_ros2_interface::action::builder::Init_Fibonacci_GetResult_Response_status();
}

}  // namespace my_ros2_interface


namespace my_ros2_interface
{

namespace action
{

namespace builder
{

class Init_Fibonacci_GetResult_Event_response
{
public:
  explicit Init_Fibonacci_GetResult_Event_response(::my_ros2_interface::action::Fibonacci_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::my_ros2_interface::action::Fibonacci_GetResult_Event response(::my_ros2_interface::action::Fibonacci_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ros2_interface::action::Fibonacci_GetResult_Event msg_;
};

class Init_Fibonacci_GetResult_Event_request
{
public:
  explicit Init_Fibonacci_GetResult_Event_request(::my_ros2_interface::action::Fibonacci_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_Fibonacci_GetResult_Event_response request(::my_ros2_interface::action::Fibonacci_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Fibonacci_GetResult_Event_response(msg_);
  }

private:
  ::my_ros2_interface::action::Fibonacci_GetResult_Event msg_;
};

class Init_Fibonacci_GetResult_Event_info
{
public:
  Init_Fibonacci_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_GetResult_Event_request info(::my_ros2_interface::action::Fibonacci_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Fibonacci_GetResult_Event_request(msg_);
  }

private:
  ::my_ros2_interface::action::Fibonacci_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ros2_interface::action::Fibonacci_GetResult_Event>()
{
  return my_ros2_interface::action::builder::Init_Fibonacci_GetResult_Event_info();
}

}  // namespace my_ros2_interface


namespace my_ros2_interface
{

namespace action
{

namespace builder
{

class Init_Fibonacci_FeedbackMessage_feedback
{
public:
  explicit Init_Fibonacci_FeedbackMessage_feedback(::my_ros2_interface::action::Fibonacci_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::my_ros2_interface::action::Fibonacci_FeedbackMessage feedback(::my_ros2_interface::action::Fibonacci_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ros2_interface::action::Fibonacci_FeedbackMessage msg_;
};

class Init_Fibonacci_FeedbackMessage_goal_id
{
public:
  Init_Fibonacci_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_FeedbackMessage_feedback goal_id(::my_ros2_interface::action::Fibonacci_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Fibonacci_FeedbackMessage_feedback(msg_);
  }

private:
  ::my_ros2_interface::action::Fibonacci_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ros2_interface::action::Fibonacci_FeedbackMessage>()
{
  return my_ros2_interface::action::builder::Init_Fibonacci_FeedbackMessage_goal_id();
}

}  // namespace my_ros2_interface

#endif  // MY_ROS2_INTERFACE__ACTION__DETAIL__FIBONACCI__BUILDER_HPP_
