// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from kobuki_ros_interfaces:msg/DockInfraRed.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "kobuki_ros_interfaces/msg/detail/dock_infra_red__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace kobuki_ros_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DockInfraRed_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) kobuki_ros_interfaces::msg::DockInfraRed(_init);
}

void DockInfraRed_fini_function(void * message_memory)
{
  auto typed_message = static_cast<kobuki_ros_interfaces::msg::DockInfraRed *>(message_memory);
  typed_message->~DockInfraRed();
}

size_t size_function__DockInfraRed__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DockInfraRed__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__DockInfraRed__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void resize_function__DockInfraRed__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DockInfraRed_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces::msg::DockInfraRed, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces::msg::DockInfraRed, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__DockInfraRed__data,  // size() function pointer
    get_const_function__DockInfraRed__data,  // get_const(index) function pointer
    get_function__DockInfraRed__data,  // get(index) function pointer
    resize_function__DockInfraRed__data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DockInfraRed_message_members = {
  "kobuki_ros_interfaces::msg",  // message namespace
  "DockInfraRed",  // message name
  2,  // number of fields
  sizeof(kobuki_ros_interfaces::msg::DockInfraRed),
  DockInfraRed_message_member_array,  // message members
  DockInfraRed_init_function,  // function to initialize message memory (memory has to be allocated)
  DockInfraRed_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DockInfraRed_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DockInfraRed_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace kobuki_ros_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<kobuki_ros_interfaces::msg::DockInfraRed>()
{
  return &::kobuki_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::DockInfraRed_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, kobuki_ros_interfaces, msg, DockInfraRed)() {
  return &::kobuki_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::DockInfraRed_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif