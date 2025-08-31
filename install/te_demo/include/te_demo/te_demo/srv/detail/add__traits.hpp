// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from te_demo:srv/Add.idl
// generated code does not contain a copyright notice

#ifndef TE_DEMO__SRV__DETAIL__ADD__TRAITS_HPP_
#define TE_DEMO__SRV__DETAIL__ADD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "te_demo/srv/detail/add__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace te_demo
{

namespace srv
{

inline void to_flow_style_yaml(
  const Add_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Add_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Add_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace te_demo

namespace rosidl_generator_traits
{

[[deprecated("use te_demo::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const te_demo::srv::Add_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  te_demo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use te_demo::srv::to_yaml() instead")]]
inline std::string to_yaml(const te_demo::srv::Add_Request & msg)
{
  return te_demo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<te_demo::srv::Add_Request>()
{
  return "te_demo::srv::Add_Request";
}

template<>
inline const char * name<te_demo::srv::Add_Request>()
{
  return "te_demo/srv/Add_Request";
}

template<>
struct has_fixed_size<te_demo::srv::Add_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<te_demo::srv::Add_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<te_demo::srv::Add_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace te_demo
{

namespace srv
{

inline void to_flow_style_yaml(
  const Add_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: area
  {
    out << "area: ";
    rosidl_generator_traits::value_to_yaml(msg.area, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Add_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area: ";
    rosidl_generator_traits::value_to_yaml(msg.area, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Add_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace te_demo

namespace rosidl_generator_traits
{

[[deprecated("use te_demo::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const te_demo::srv::Add_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  te_demo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use te_demo::srv::to_yaml() instead")]]
inline std::string to_yaml(const te_demo::srv::Add_Response & msg)
{
  return te_demo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<te_demo::srv::Add_Response>()
{
  return "te_demo::srv::Add_Response";
}

template<>
inline const char * name<te_demo::srv::Add_Response>()
{
  return "te_demo/srv/Add_Response";
}

template<>
struct has_fixed_size<te_demo::srv::Add_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<te_demo::srv::Add_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<te_demo::srv::Add_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<te_demo::srv::Add>()
{
  return "te_demo::srv::Add";
}

template<>
inline const char * name<te_demo::srv::Add>()
{
  return "te_demo/srv/Add";
}

template<>
struct has_fixed_size<te_demo::srv::Add>
  : std::integral_constant<
    bool,
    has_fixed_size<te_demo::srv::Add_Request>::value &&
    has_fixed_size<te_demo::srv::Add_Response>::value
  >
{
};

template<>
struct has_bounded_size<te_demo::srv::Add>
  : std::integral_constant<
    bool,
    has_bounded_size<te_demo::srv::Add_Request>::value &&
    has_bounded_size<te_demo::srv::Add_Response>::value
  >
{
};

template<>
struct is_service<te_demo::srv::Add>
  : std::true_type
{
};

template<>
struct is_service_request<te_demo::srv::Add_Request>
  : std::true_type
{
};

template<>
struct is_service_response<te_demo::srv::Add_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TE_DEMO__SRV__DETAIL__ADD__TRAITS_HPP_
