// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from te_demo:srv/Sum.idl
// generated code does not contain a copyright notice

#ifndef TE_DEMO__SRV__DETAIL__SUM__BUILDER_HPP_
#define TE_DEMO__SRV__DETAIL__SUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "te_demo/srv/detail/sum__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace te_demo
{

namespace srv
{

namespace builder
{

class Init_Sum_Request_bb
{
public:
  explicit Init_Sum_Request_bb(::te_demo::srv::Sum_Request & msg)
  : msg_(msg)
  {}
  ::te_demo::srv::Sum_Request bb(::te_demo::srv::Sum_Request::_bb_type arg)
  {
    msg_.bb = std::move(arg);
    return std::move(msg_);
  }

private:
  ::te_demo::srv::Sum_Request msg_;
};

class Init_Sum_Request_aa
{
public:
  Init_Sum_Request_aa()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sum_Request_bb aa(::te_demo::srv::Sum_Request::_aa_type arg)
  {
    msg_.aa = std::move(arg);
    return Init_Sum_Request_bb(msg_);
  }

private:
  ::te_demo::srv::Sum_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::te_demo::srv::Sum_Request>()
{
  return te_demo::srv::builder::Init_Sum_Request_aa();
}

}  // namespace te_demo


namespace te_demo
{

namespace srv
{

namespace builder
{

class Init_Sum_Response_cc
{
public:
  Init_Sum_Response_cc()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::te_demo::srv::Sum_Response cc(::te_demo::srv::Sum_Response::_cc_type arg)
  {
    msg_.cc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::te_demo::srv::Sum_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::te_demo::srv::Sum_Response>()
{
  return te_demo::srv::builder::Init_Sum_Response_cc();
}

}  // namespace te_demo

#endif  // TE_DEMO__SRV__DETAIL__SUM__BUILDER_HPP_
