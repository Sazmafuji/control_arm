// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from msg_store:msg/Mpu.idl
// generated code does not contain a copyright notice

#ifndef MSG_STORE__MSG__DETAIL__MPU__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MSG_STORE__MSG__DETAIL__MPU__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "msg_store/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "msg_store/msg/detail/mpu__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace msg_store
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_store
cdr_serialize(
  const msg_store::msg::Mpu & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_store
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  msg_store::msg::Mpu & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_store
get_serialized_size(
  const msg_store::msg::Mpu & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_store
max_serialized_size_Mpu(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace msg_store

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_store
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_store, msg, Mpu)();

#ifdef __cplusplus
}
#endif

#endif  // MSG_STORE__MSG__DETAIL__MPU__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
