// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from te_demo:action/Move.idl
// generated code does not contain a copyright notice

#ifndef TE_DEMO__ACTION__DETAIL__MOVE__STRUCT_H_
#define TE_DEMO__ACTION__DETAIL__MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in action/Move in the package te_demo.
typedef struct te_demo__action__Move_Goal
{
  geometry_msgs__msg__PoseStamped target_pose;
} te_demo__action__Move_Goal;

// Struct for a sequence of te_demo__action__Move_Goal.
typedef struct te_demo__action__Move_Goal__Sequence
{
  te_demo__action__Move_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} te_demo__action__Move_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Move in the package te_demo.
typedef struct te_demo__action__Move_Result
{
  bool success;
} te_demo__action__Move_Result;

// Struct for a sequence of te_demo__action__Move_Result.
typedef struct te_demo__action__Move_Result__Sequence
{
  te_demo__action__Move_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} te_demo__action__Move_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Move in the package te_demo.
typedef struct te_demo__action__Move_Feedback
{
  float progress;
} te_demo__action__Move_Feedback;

// Struct for a sequence of te_demo__action__Move_Feedback.
typedef struct te_demo__action__Move_Feedback__Sequence
{
  te_demo__action__Move_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} te_demo__action__Move_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "te_demo/action/detail/move__struct.h"

/// Struct defined in action/Move in the package te_demo.
typedef struct te_demo__action__Move_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  te_demo__action__Move_Goal goal;
} te_demo__action__Move_SendGoal_Request;

// Struct for a sequence of te_demo__action__Move_SendGoal_Request.
typedef struct te_demo__action__Move_SendGoal_Request__Sequence
{
  te_demo__action__Move_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} te_demo__action__Move_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Move in the package te_demo.
typedef struct te_demo__action__Move_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} te_demo__action__Move_SendGoal_Response;

// Struct for a sequence of te_demo__action__Move_SendGoal_Response.
typedef struct te_demo__action__Move_SendGoal_Response__Sequence
{
  te_demo__action__Move_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} te_demo__action__Move_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Move in the package te_demo.
typedef struct te_demo__action__Move_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} te_demo__action__Move_GetResult_Request;

// Struct for a sequence of te_demo__action__Move_GetResult_Request.
typedef struct te_demo__action__Move_GetResult_Request__Sequence
{
  te_demo__action__Move_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} te_demo__action__Move_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "te_demo/action/detail/move__struct.h"

/// Struct defined in action/Move in the package te_demo.
typedef struct te_demo__action__Move_GetResult_Response
{
  int8_t status;
  te_demo__action__Move_Result result;
} te_demo__action__Move_GetResult_Response;

// Struct for a sequence of te_demo__action__Move_GetResult_Response.
typedef struct te_demo__action__Move_GetResult_Response__Sequence
{
  te_demo__action__Move_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} te_demo__action__Move_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "te_demo/action/detail/move__struct.h"

/// Struct defined in action/Move in the package te_demo.
typedef struct te_demo__action__Move_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  te_demo__action__Move_Feedback feedback;
} te_demo__action__Move_FeedbackMessage;

// Struct for a sequence of te_demo__action__Move_FeedbackMessage.
typedef struct te_demo__action__Move_FeedbackMessage__Sequence
{
  te_demo__action__Move_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} te_demo__action__Move_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TE_DEMO__ACTION__DETAIL__MOVE__STRUCT_H_
