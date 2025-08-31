// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from te_demo:srv/Sum.idl
// generated code does not contain a copyright notice

#ifndef TE_DEMO__SRV__DETAIL__SUM__STRUCT_HPP_
#define TE_DEMO__SRV__DETAIL__SUM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__te_demo__srv__Sum_Request __attribute__((deprecated))
#else
# define DEPRECATED__te_demo__srv__Sum_Request __declspec(deprecated)
#endif

namespace te_demo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Sum_Request_
{
  using Type = Sum_Request_<ContainerAllocator>;

  explicit Sum_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->aa = 0.0;
      this->bb = 0.0;
    }
  }

  explicit Sum_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->aa = 0.0;
      this->bb = 0.0;
    }
  }

  // field types and members
  using _aa_type =
    double;
  _aa_type aa;
  using _bb_type =
    double;
  _bb_type bb;

  // setters for named parameter idiom
  Type & set__aa(
    const double & _arg)
  {
    this->aa = _arg;
    return *this;
  }
  Type & set__bb(
    const double & _arg)
  {
    this->bb = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    te_demo::srv::Sum_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const te_demo::srv::Sum_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<te_demo::srv::Sum_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<te_demo::srv::Sum_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      te_demo::srv::Sum_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<te_demo::srv::Sum_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      te_demo::srv::Sum_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<te_demo::srv::Sum_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<te_demo::srv::Sum_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<te_demo::srv::Sum_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__te_demo__srv__Sum_Request
    std::shared_ptr<te_demo::srv::Sum_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__te_demo__srv__Sum_Request
    std::shared_ptr<te_demo::srv::Sum_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sum_Request_ & other) const
  {
    if (this->aa != other.aa) {
      return false;
    }
    if (this->bb != other.bb) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sum_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sum_Request_

// alias to use template instance with default allocator
using Sum_Request =
  te_demo::srv::Sum_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace te_demo


#ifndef _WIN32
# define DEPRECATED__te_demo__srv__Sum_Response __attribute__((deprecated))
#else
# define DEPRECATED__te_demo__srv__Sum_Response __declspec(deprecated)
#endif

namespace te_demo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Sum_Response_
{
  using Type = Sum_Response_<ContainerAllocator>;

  explicit Sum_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cc = 0.0;
    }
  }

  explicit Sum_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cc = 0.0;
    }
  }

  // field types and members
  using _cc_type =
    double;
  _cc_type cc;

  // setters for named parameter idiom
  Type & set__cc(
    const double & _arg)
  {
    this->cc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    te_demo::srv::Sum_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const te_demo::srv::Sum_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<te_demo::srv::Sum_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<te_demo::srv::Sum_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      te_demo::srv::Sum_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<te_demo::srv::Sum_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      te_demo::srv::Sum_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<te_demo::srv::Sum_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<te_demo::srv::Sum_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<te_demo::srv::Sum_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__te_demo__srv__Sum_Response
    std::shared_ptr<te_demo::srv::Sum_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__te_demo__srv__Sum_Response
    std::shared_ptr<te_demo::srv::Sum_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sum_Response_ & other) const
  {
    if (this->cc != other.cc) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sum_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sum_Response_

// alias to use template instance with default allocator
using Sum_Response =
  te_demo::srv::Sum_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace te_demo

namespace te_demo
{

namespace srv
{

struct Sum
{
  using Request = te_demo::srv::Sum_Request;
  using Response = te_demo::srv::Sum_Response;
};

}  // namespace srv

}  // namespace te_demo

#endif  // TE_DEMO__SRV__DETAIL__SUM__STRUCT_HPP_
