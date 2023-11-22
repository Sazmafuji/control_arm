// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_store:msg/Mpu.idl
// generated code does not contain a copyright notice

#ifndef MSG_STORE__MSG__DETAIL__MPU__STRUCT_H_
#define MSG_STORE__MSG__DETAIL__MPU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Mpu in the package msg_store.
typedef struct msg_store__msg__Mpu
{
  double dx;
  double dy;
  double dz;
  double dtx;
  double dty;
  double dtz;
} msg_store__msg__Mpu;

// Struct for a sequence of msg_store__msg__Mpu.
typedef struct msg_store__msg__Mpu__Sequence
{
  msg_store__msg__Mpu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_store__msg__Mpu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_STORE__MSG__DETAIL__MPU__STRUCT_H_
