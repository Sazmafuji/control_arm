// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg_store:msg/Mpu.idl
// generated code does not contain a copyright notice

#ifndef MSG_STORE__MSG__DETAIL__MPU__STRUCT_HPP_
#define MSG_STORE__MSG__DETAIL__MPU__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__msg_store__msg__Mpu __attribute__((deprecated))
#else
# define DEPRECATED__msg_store__msg__Mpu __declspec(deprecated)
#endif

namespace msg_store
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Mpu_
{
  using Type = Mpu_<ContainerAllocator>;

  explicit Mpu_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dx = 0.0;
      this->dy = 0.0;
      this->dz = 0.0;
      this->dtx = 0.0;
      this->dty = 0.0;
      this->dtz = 0.0;
    }
  }

  explicit Mpu_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dx = 0.0;
      this->dy = 0.0;
      this->dz = 0.0;
      this->dtx = 0.0;
      this->dty = 0.0;
      this->dtz = 0.0;
    }
  }

  // field types and members
  using _dx_type =
    double;
  _dx_type dx;
  using _dy_type =
    double;
  _dy_type dy;
  using _dz_type =
    double;
  _dz_type dz;
  using _dtx_type =
    double;
  _dtx_type dtx;
  using _dty_type =
    double;
  _dty_type dty;
  using _dtz_type =
    double;
  _dtz_type dtz;

  // setters for named parameter idiom
  Type & set__dx(
    const double & _arg)
  {
    this->dx = _arg;
    return *this;
  }
  Type & set__dy(
    const double & _arg)
  {
    this->dy = _arg;
    return *this;
  }
  Type & set__dz(
    const double & _arg)
  {
    this->dz = _arg;
    return *this;
  }
  Type & set__dtx(
    const double & _arg)
  {
    this->dtx = _arg;
    return *this;
  }
  Type & set__dty(
    const double & _arg)
  {
    this->dty = _arg;
    return *this;
  }
  Type & set__dtz(
    const double & _arg)
  {
    this->dtz = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_store::msg::Mpu_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_store::msg::Mpu_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_store::msg::Mpu_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_store::msg::Mpu_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_store::msg::Mpu_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_store::msg::Mpu_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_store::msg::Mpu_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_store::msg::Mpu_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_store::msg::Mpu_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_store::msg::Mpu_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_store__msg__Mpu
    std::shared_ptr<msg_store::msg::Mpu_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_store__msg__Mpu
    std::shared_ptr<msg_store::msg::Mpu_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mpu_ & other) const
  {
    if (this->dx != other.dx) {
      return false;
    }
    if (this->dy != other.dy) {
      return false;
    }
    if (this->dz != other.dz) {
      return false;
    }
    if (this->dtx != other.dtx) {
      return false;
    }
    if (this->dty != other.dty) {
      return false;
    }
    if (this->dtz != other.dtz) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mpu_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mpu_

// alias to use template instance with default allocator
using Mpu =
  msg_store::msg::Mpu_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg_store

#endif  // MSG_STORE__MSG__DETAIL__MPU__STRUCT_HPP_
