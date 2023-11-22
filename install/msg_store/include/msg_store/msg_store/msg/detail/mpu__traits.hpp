// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg_store:msg/Mpu.idl
// generated code does not contain a copyright notice

#ifndef MSG_STORE__MSG__DETAIL__MPU__TRAITS_HPP_
#define MSG_STORE__MSG__DETAIL__MPU__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg_store/msg/detail/mpu__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace msg_store
{

namespace msg
{

inline void to_flow_style_yaml(
  const Mpu & msg,
  std::ostream & out)
{
  out << "{";
  // member: dx
  {
    out << "dx: ";
    rosidl_generator_traits::value_to_yaml(msg.dx, out);
    out << ", ";
  }

  // member: dy
  {
    out << "dy: ";
    rosidl_generator_traits::value_to_yaml(msg.dy, out);
    out << ", ";
  }

  // member: dz
  {
    out << "dz: ";
    rosidl_generator_traits::value_to_yaml(msg.dz, out);
    out << ", ";
  }

  // member: dtx
  {
    out << "dtx: ";
    rosidl_generator_traits::value_to_yaml(msg.dtx, out);
    out << ", ";
  }

  // member: dty
  {
    out << "dty: ";
    rosidl_generator_traits::value_to_yaml(msg.dty, out);
    out << ", ";
  }

  // member: dtz
  {
    out << "dtz: ";
    rosidl_generator_traits::value_to_yaml(msg.dtz, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Mpu & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dx: ";
    rosidl_generator_traits::value_to_yaml(msg.dx, out);
    out << "\n";
  }

  // member: dy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dy: ";
    rosidl_generator_traits::value_to_yaml(msg.dy, out);
    out << "\n";
  }

  // member: dz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dz: ";
    rosidl_generator_traits::value_to_yaml(msg.dz, out);
    out << "\n";
  }

  // member: dtx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dtx: ";
    rosidl_generator_traits::value_to_yaml(msg.dtx, out);
    out << "\n";
  }

  // member: dty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dty: ";
    rosidl_generator_traits::value_to_yaml(msg.dty, out);
    out << "\n";
  }

  // member: dtz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dtz: ";
    rosidl_generator_traits::value_to_yaml(msg.dtz, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Mpu & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace msg_store

namespace rosidl_generator_traits
{

[[deprecated("use msg_store::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msg_store::msg::Mpu & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg_store::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg_store::msg::to_yaml() instead")]]
inline std::string to_yaml(const msg_store::msg::Mpu & msg)
{
  return msg_store::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msg_store::msg::Mpu>()
{
  return "msg_store::msg::Mpu";
}

template<>
inline const char * name<msg_store::msg::Mpu>()
{
  return "msg_store/msg/Mpu";
}

template<>
struct has_fixed_size<msg_store::msg::Mpu>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<msg_store::msg::Mpu>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<msg_store::msg::Mpu>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG_STORE__MSG__DETAIL__MPU__TRAITS_HPP_
