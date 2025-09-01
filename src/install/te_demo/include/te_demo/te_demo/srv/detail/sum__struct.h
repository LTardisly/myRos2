// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from te_demo:srv/Sum.idl
// generated code does not contain a copyright notice

#ifndef TE_DEMO__SRV__DETAIL__SUM__STRUCT_H_
#define TE_DEMO__SRV__DETAIL__SUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Sum in the package te_demo.
typedef struct te_demo__srv__Sum_Request
{
  double aa;
  double bb;
} te_demo__srv__Sum_Request;

// Struct for a sequence of te_demo__srv__Sum_Request.
typedef struct te_demo__srv__Sum_Request__Sequence
{
  te_demo__srv__Sum_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} te_demo__srv__Sum_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Sum in the package te_demo.
typedef struct te_demo__srv__Sum_Response
{
  double cc;
} te_demo__srv__Sum_Response;

// Struct for a sequence of te_demo__srv__Sum_Response.
typedef struct te_demo__srv__Sum_Response__Sequence
{
  te_demo__srv__Sum_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} te_demo__srv__Sum_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TE_DEMO__SRV__DETAIL__SUM__STRUCT_H_
