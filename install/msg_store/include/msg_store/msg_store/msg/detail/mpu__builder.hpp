// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_store:msg/Mpu.idl
// generated code does not contain a copyright notice

#ifndef MSG_STORE__MSG__DETAIL__MPU__BUILDER_HPP_
#define MSG_STORE__MSG__DETAIL__MPU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg_store/msg/detail/mpu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg_store
{

namespace msg
{

namespace builder
{

class Init_Mpu_dtz
{
public:
  explicit Init_Mpu_dtz(::msg_store::msg::Mpu & msg)
  : msg_(msg)
  {}
  ::msg_store::msg::Mpu dtz(::msg_store::msg::Mpu::_dtz_type arg)
  {
    msg_.dtz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_store::msg::Mpu msg_;
};

class Init_Mpu_dty
{
public:
  explicit Init_Mpu_dty(::msg_store::msg::Mpu & msg)
  : msg_(msg)
  {}
  Init_Mpu_dtz dty(::msg_store::msg::Mpu::_dty_type arg)
  {
    msg_.dty = std::move(arg);
    return Init_Mpu_dtz(msg_);
  }

private:
  ::msg_store::msg::Mpu msg_;
};

class Init_Mpu_dtx
{
public:
  explicit Init_Mpu_dtx(::msg_store::msg::Mpu & msg)
  : msg_(msg)
  {}
  Init_Mpu_dty dtx(::msg_store::msg::Mpu::_dtx_type arg)
  {
    msg_.dtx = std::move(arg);
    return Init_Mpu_dty(msg_);
  }

private:
  ::msg_store::msg::Mpu msg_;
};

class Init_Mpu_dz
{
public:
  explicit Init_Mpu_dz(::msg_store::msg::Mpu & msg)
  : msg_(msg)
  {}
  Init_Mpu_dtx dz(::msg_store::msg::Mpu::_dz_type arg)
  {
    msg_.dz = std::move(arg);
    return Init_Mpu_dtx(msg_);
  }

private:
  ::msg_store::msg::Mpu msg_;
};

class Init_Mpu_dy
{
public:
  explicit Init_Mpu_dy(::msg_store::msg::Mpu & msg)
  : msg_(msg)
  {}
  Init_Mpu_dz dy(::msg_store::msg::Mpu::_dy_type arg)
  {
    msg_.dy = std::move(arg);
    return Init_Mpu_dz(msg_);
  }

private:
  ::msg_store::msg::Mpu msg_;
};

class Init_Mpu_dx
{
public:
  Init_Mpu_dx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mpu_dy dx(::msg_store::msg::Mpu::_dx_type arg)
  {
    msg_.dx = std::move(arg);
    return Init_Mpu_dy(msg_);
  }

private:
  ::msg_store::msg::Mpu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_store::msg::Mpu>()
{
  return msg_store::msg::builder::Init_Mpu_dx();
}

}  // namespace msg_store

#endif  // MSG_STORE__MSG__DETAIL__MPU__BUILDER_HPP_
