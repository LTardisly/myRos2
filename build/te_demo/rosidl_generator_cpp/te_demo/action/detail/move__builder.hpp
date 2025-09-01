// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from te_demo:action/Move.idl
// generated code does not contain a copyright notice

#ifndef TE_DEMO__ACTION__DETAIL__MOVE__BUILDER_HPP_
#define TE_DEMO__ACTION__DETAIL__MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "te_demo/action/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace te_demo
{

namespace action
{

namespace builder
{

class Init_Move_Goal_target_pose
{
public:
  Init_Move_Goal_target_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::te_demo::action::Move_Goal target_pose(::te_demo::action::Move_Goal::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::te_demo::action::Move_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::te_demo::action::Move_Goal>()
{
  return te_demo::action::builder::Init_Move_Goal_target_pose();
}

}  // namespace te_demo


namespace te_demo
{

namespace action
{

namespace builder
{

class Init_Move_Result_success
{
public:
  Init_Move_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::te_demo::action::Move_Result success(::te_demo::action::Move_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::te_demo::action::Move_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::te_demo::action::Move_Result>()
{
  return te_demo::action::builder::Init_Move_Result_success();
}

}  // namespace te_demo


namespace te_demo
{

namespace action
{

namespace builder
{

class Init_Move_Feedback_progress
{
public:
  Init_Move_Feedback_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::te_demo::action::Move_Feedback progress(::te_demo::action::Move_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::te_demo::action::Move_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::te_demo::action::Move_Feedback>()
{
  return te_demo::action::builder::Init_Move_Feedback_progress();
}

}  // namespace te_demo


namespace te_demo
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Request_goal
{
public:
  explicit Init_Move_SendGoal_Request_goal(::te_demo::action::Move_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::te_demo::action::Move_SendGoal_Request goal(::te_demo::action::Move_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::te_demo::action::Move_SendGoal_Request msg_;
};

class Init_Move_SendGoal_Request_goal_id
{
public:
  Init_Move_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Request_goal goal_id(::te_demo::action::Move_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_SendGoal_Request_goal(msg_);
  }

private:
  ::te_demo::action::Move_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::te_demo::action::Move_SendGoal_Request>()
{
  return te_demo::action::builder::Init_Move_SendGoal_Request_goal_id();
}

}  // namespace te_demo


namespace te_demo
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Response_stamp
{
public:
  explicit Init_Move_SendGoal_Response_stamp(::te_demo::action::Move_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::te_demo::action::Move_SendGoal_Response stamp(::te_demo::action::Move_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::te_demo::action::Move_SendGoal_Response msg_;
};

class Init_Move_SendGoal_Response_accepted
{
public:
  Init_Move_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Response_stamp accepted(::te_demo::action::Move_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Move_SendGoal_Response_stamp(msg_);
  }

private:
  ::te_demo::action::Move_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::te_demo::action::Move_SendGoal_Response>()
{
  return te_demo::action::builder::Init_Move_SendGoal_Response_accepted();
}

}  // namespace te_demo


namespace te_demo
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Request_goal_id
{
public:
  Init_Move_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::te_demo::action::Move_GetResult_Request goal_id(::te_demo::action::Move_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::te_demo::action::Move_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::te_demo::action::Move_GetResult_Request>()
{
  return te_demo::action::builder::Init_Move_GetResult_Request_goal_id();
}

}  // namespace te_demo


namespace te_demo
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Response_result
{
public:
  explicit Init_Move_GetResult_Response_result(::te_demo::action::Move_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::te_demo::action::Move_GetResult_Response result(::te_demo::action::Move_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::te_demo::action::Move_GetResult_Response msg_;
};

class Init_Move_GetResult_Response_status
{
public:
  Init_Move_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_GetResult_Response_result status(::te_demo::action::Move_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Move_GetResult_Response_result(msg_);
  }

private:
  ::te_demo::action::Move_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::te_demo::action::Move_GetResult_Response>()
{
  return te_demo::action::builder::Init_Move_GetResult_Response_status();
}

}  // namespace te_demo


namespace te_demo
{

namespace action
{

namespace builder
{

class Init_Move_FeedbackMessage_feedback
{
public:
  explicit Init_Move_FeedbackMessage_feedback(::te_demo::action::Move_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::te_demo::action::Move_FeedbackMessage feedback(::te_demo::action::Move_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::te_demo::action::Move_FeedbackMessage msg_;
};

class Init_Move_FeedbackMessage_goal_id
{
public:
  Init_Move_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_FeedbackMessage_feedback goal_id(::te_demo::action::Move_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_FeedbackMessage_feedback(msg_);
  }

private:
  ::te_demo::action::Move_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::te_demo::action::Move_FeedbackMessage>()
{
  return te_demo::action::builder::Init_Move_FeedbackMessage_goal_id();
}

}  // namespace te_demo

#endif  // TE_DEMO__ACTION__DETAIL__MOVE__BUILDER_HPP_
