// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msg_store:msg/Mpu.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msg_store/msg/detail/mpu__rosidl_typesupport_introspection_c.h"
#include "msg_store/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msg_store/msg/detail/mpu__functions.h"
#include "msg_store/msg/detail/mpu__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void msg_store__msg__Mpu__rosidl_typesupport_introspection_c__Mpu_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_store__msg__Mpu__init(message_memory);
}

void msg_store__msg__Mpu__rosidl_typesupport_introspection_c__Mpu_fini_function(void * message_memory)
{
  msg_store__msg__Mpu__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember msg_store__msg__Mpu__rosidl_typesupport_introspection_c__Mpu_message_member_array[6] = {
  {
    "dx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_store__msg__Mpu, dx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_store__msg__Mpu, dy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_store__msg__Mpu, dz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dtx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_store__msg__Mpu, dtx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dty",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_store__msg__Mpu, dty),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dtz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_store__msg__Mpu, dtz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers msg_store__msg__Mpu__rosidl_typesupport_introspection_c__Mpu_message_members = {
  "msg_store__msg",  // message namespace
  "Mpu",  // message name
  6,  // number of fields
  sizeof(msg_store__msg__Mpu),
  msg_store__msg__Mpu__rosidl_typesupport_introspection_c__Mpu_message_member_array,  // message members
  msg_store__msg__Mpu__rosidl_typesupport_introspection_c__Mpu_init_function,  // function to initialize message memory (memory has to be allocated)
  msg_store__msg__Mpu__rosidl_typesupport_introspection_c__Mpu_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t msg_store__msg__Mpu__rosidl_typesupport_introspection_c__Mpu_message_type_support_handle = {
  0,
  &msg_store__msg__Mpu__rosidl_typesupport_introspection_c__Mpu_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_store
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_store, msg, Mpu)() {
  if (!msg_store__msg__Mpu__rosidl_typesupport_introspection_c__Mpu_message_type_support_handle.typesupport_identifier) {
    msg_store__msg__Mpu__rosidl_typesupport_introspection_c__Mpu_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &msg_store__msg__Mpu__rosidl_typesupport_introspection_c__Mpu_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
