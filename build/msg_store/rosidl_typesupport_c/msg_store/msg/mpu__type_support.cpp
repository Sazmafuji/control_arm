// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from msg_store:msg/Mpu.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "msg_store/msg/detail/mpu__struct.h"
#include "msg_store/msg/detail/mpu__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace msg_store
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _Mpu_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Mpu_type_support_ids_t;

static const _Mpu_type_support_ids_t _Mpu_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Mpu_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Mpu_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Mpu_type_support_symbol_names_t _Mpu_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msg_store, msg, Mpu)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_store, msg, Mpu)),
  }
};

typedef struct _Mpu_type_support_data_t
{
  void * data[2];
} _Mpu_type_support_data_t;

static _Mpu_type_support_data_t _Mpu_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Mpu_message_typesupport_map = {
  2,
  "msg_store",
  &_Mpu_message_typesupport_ids.typesupport_identifier[0],
  &_Mpu_message_typesupport_symbol_names.symbol_name[0],
  &_Mpu_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Mpu_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Mpu_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace msg_store

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, msg_store, msg, Mpu)() {
  return &::msg_store::msg::rosidl_typesupport_c::Mpu_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
