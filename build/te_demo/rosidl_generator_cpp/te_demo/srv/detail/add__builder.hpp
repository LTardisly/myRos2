// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from te_demo:srv/Add.idl
// generated code does not contain a copyright notice

#ifndef TE_DEMO__SRV__DETAIL__ADD__BUILDER_HPP_
#define TE_DEMO__SRV__DETAIL__ADD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "te_demo/srv/detail/add__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace te_demo
{

namespace srv
{

namespace builder
{

class Init_Add_Request_width
{
public:
  explicit Init_Add_Request_width(::te_demo::srv::Add_Request & msg)
  : msg_(msg)
  {}
  ::te_demo::srv::Add_Request width(::te_demo::srv::Add_Request::_width_type arg)
  {
    msg_.width = std::move(arg);
    return std::move(msg_);
  }

private:
  ::te_demo::srv::Add_Request msg_;
};

class Init_Add_Request_length
{
public:
  Init_Add_Request_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Add_Request_width length(::te_demo::srv::Add_Request::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_Add_Request_width(msg_);
  }

private:
  ::te_demo::srv::Add_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::te_demo::srv::Add_Request>()
{
  return te_demo::srv::builder::Init_Add_Request_length();
}

}  // namespace te_demo


namespace te_demo
{

namespace srv
{

namespace builder
{

class Init_Add_Response_area
{
public:
  Init_Add_Response_area()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::te_demo::srv::Add_Response area(::te_demo::srv::Add_Response::_area_type arg)
  {
    msg_.area = std::move(arg);
    return std::move(msg_);
  }

private:
  ::te_demo::srv::Add_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::te_demo::srv::Add_Response>()
{
  return te_demo::srv::builder::Init_Add_Response_area();
}

}  // namespace te_demo

#endif  // TE_DEMO__SRV__DETAIL__ADD__BUILDER_HPP_
