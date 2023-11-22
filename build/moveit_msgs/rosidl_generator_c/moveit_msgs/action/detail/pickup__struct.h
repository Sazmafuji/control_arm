// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:action/Pickup.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__ACTION__DETAIL__PICKUP__STRUCT_H_
#define MOVEIT_MSGS__ACTION__DETAIL__PICKUP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_name'
// Member 'group_name'
// Member 'end_effector'
// Member 'support_surface_name'
// Member 'attached_object_touch_links'
// Member 'planner_id'
// Member 'allowed_touch_objects'
#include "rosidl_runtime_c/string.h"
// Member 'possible_grasps'
#include "moveit_msgs/msg/detail/grasp__struct.h"
// Member 'path_constraints'
#include "moveit_msgs/msg/detail/constraints__struct.h"
// Member 'planning_options'
#include "moveit_msgs/msg/detail/planning_options__struct.h"

/// Struct defined in action/Pickup in the package moveit_msgs.
typedef struct moveit_msgs__action__Pickup_Goal
{
  /// The name of the object to pick up (as known in the planning scene)
  rosidl_runtime_c__String target_name;
  /// which group should be used to plan for pickup
  rosidl_runtime_c__String group_name;
  /// which end-effector to be used for pickup (ideally descending from the group above)
  rosidl_runtime_c__String end_effector;
  /// a list of possible grasps to be used. At least one grasp must be filled in
  moveit_msgs__msg__Grasp__Sequence possible_grasps;
  /// the name that the support surface (e.g. table) has in the collision map
  /// can be left empty if no name is available
  rosidl_runtime_c__String support_surface_name;
  /// whether collisions between the gripper and the support surface should be acceptable
  /// during move from pre-grasp to grasp and during lift. Collisions when moving to the
  /// pre-grasp location are still not allowed even if this is set to true.
  bool allow_gripper_support_collision;
  /// The names of the links the object to be attached is allowed to touch;
  /// If this is left empty, it defaults to the links in the used end-effector
  rosidl_runtime_c__String__Sequence attached_object_touch_links;
  /// Optionally notify the pick action that it should approach the object further,
  /// as much as possible (this minimizing the distance to the object before the grasp)
  /// along the approach direction; Note: this option changes the grasping poses
  /// supplied in possible_grasps[] such that they are closer to the object when possible.
  bool minimize_object_distance;
  /// Optional constraints to be imposed on every point in the motion plan
  moveit_msgs__msg__Constraints path_constraints;
  /// The name of the motion planner to use. If no name is specified,
  /// a default motion planner will be used
  rosidl_runtime_c__String planner_id;
  /// an optional list of obstacles that we have semantic information about
  /// and that can be touched/pushed/moved in the course of grasping
  rosidl_runtime_c__String__Sequence allowed_touch_objects;
  /// The maximum amount of time the motion planner is allowed to plan for
  double allowed_planning_time;
  /// Planning options
  moveit_msgs__msg__PlanningOptions planning_options;
} moveit_msgs__action__Pickup_Goal;

// Struct for a sequence of moveit_msgs__action__Pickup_Goal.
typedef struct moveit_msgs__action__Pickup_Goal__Sequence
{
  moveit_msgs__action__Pickup_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__Pickup_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.h"
// Member 'trajectory_start'
#include "moveit_msgs/msg/detail/robot_state__struct.h"
// Member 'trajectory_stages'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.h"
// Member 'trajectory_descriptions'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'grasp'
// already included above
// #include "moveit_msgs/msg/detail/grasp__struct.h"

/// Struct defined in action/Pickup in the package moveit_msgs.
typedef struct moveit_msgs__action__Pickup_Result
{
  /// The overall result of the pickup attempt
  moveit_msgs__msg__MoveItErrorCodes error_code;
  /// The full starting state of the robot at the start of the trajectory
  moveit_msgs__msg__RobotState trajectory_start;
  /// The trajectory that moved group produced for execution
  moveit_msgs__msg__RobotTrajectory__Sequence trajectory_stages;
  rosidl_runtime_c__String__Sequence trajectory_descriptions;
  /// The performed grasp, if attempt was successful
  moveit_msgs__msg__Grasp grasp;
  /// The amount of time in seconds it took to complete the plan
  double planning_time;
} moveit_msgs__action__Pickup_Result;

// Struct for a sequence of moveit_msgs__action__Pickup_Result.
typedef struct moveit_msgs__action__Pickup_Result__Sequence
{
  moveit_msgs__action__Pickup_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__Pickup_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Pickup in the package moveit_msgs.
typedef struct moveit_msgs__action__Pickup_Feedback
{
  /// The internal state that the pickup action currently is in
  rosidl_runtime_c__String state;
} moveit_msgs__action__Pickup_Feedback;

// Struct for a sequence of moveit_msgs__action__Pickup_Feedback.
typedef struct moveit_msgs__action__Pickup_Feedback__Sequence
{
  moveit_msgs__action__Pickup_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__Pickup_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "moveit_msgs/action/detail/pickup__struct.h"

/// Struct defined in action/Pickup in the package moveit_msgs.
typedef struct moveit_msgs__action__Pickup_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  moveit_msgs__action__Pickup_Goal goal;
} moveit_msgs__action__Pickup_SendGoal_Request;

// Struct for a sequence of moveit_msgs__action__Pickup_SendGoal_Request.
typedef struct moveit_msgs__action__Pickup_SendGoal_Request__Sequence
{
  moveit_msgs__action__Pickup_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__Pickup_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Pickup in the package moveit_msgs.
typedef struct moveit_msgs__action__Pickup_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} moveit_msgs__action__Pickup_SendGoal_Response;

// Struct for a sequence of moveit_msgs__action__Pickup_SendGoal_Response.
typedef struct moveit_msgs__action__Pickup_SendGoal_Response__Sequence
{
  moveit_msgs__action__Pickup_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__Pickup_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Pickup in the package moveit_msgs.
typedef struct moveit_msgs__action__Pickup_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} moveit_msgs__action__Pickup_GetResult_Request;

// Struct for a sequence of moveit_msgs__action__Pickup_GetResult_Request.
typedef struct moveit_msgs__action__Pickup_GetResult_Request__Sequence
{
  moveit_msgs__action__Pickup_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__Pickup_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "moveit_msgs/action/detail/pickup__struct.h"

/// Struct defined in action/Pickup in the package moveit_msgs.
typedef struct moveit_msgs__action__Pickup_GetResult_Response
{
  int8_t status;
  moveit_msgs__action__Pickup_Result result;
} moveit_msgs__action__Pickup_GetResult_Response;

// Struct for a sequence of moveit_msgs__action__Pickup_GetResult_Response.
typedef struct moveit_msgs__action__Pickup_GetResult_Response__Sequence
{
  moveit_msgs__action__Pickup_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__Pickup_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "moveit_msgs/action/detail/pickup__struct.h"

/// Struct defined in action/Pickup in the package moveit_msgs.
typedef struct moveit_msgs__action__Pickup_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  moveit_msgs__action__Pickup_Feedback feedback;
} moveit_msgs__action__Pickup_FeedbackMessage;

// Struct for a sequence of moveit_msgs__action__Pickup_FeedbackMessage.
typedef struct moveit_msgs__action__Pickup_FeedbackMessage__Sequence
{
  moveit_msgs__action__Pickup_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__Pickup_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__ACTION__DETAIL__PICKUP__STRUCT_H_