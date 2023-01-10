// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kobuki_ros_interfaces:msg/DockInfraRed.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kobuki_ros_interfaces/msg/detail/dock_infra_red__rosidl_typesupport_introspection_c.h"
#include "kobuki_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kobuki_ros_interfaces/msg/detail/dock_infra_red__functions.h"
#include "kobuki_ros_interfaces/msg/detail/dock_infra_red__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DockInfraRed__rosidl_typesupport_introspection_c__DockInfraRed_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kobuki_ros_interfaces__msg__DockInfraRed__init(message_memory);
}

void DockInfraRed__rosidl_typesupport_introspection_c__DockInfraRed_fini_function(void * message_memory)
{
  kobuki_ros_interfaces__msg__DockInfraRed__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DockInfraRed__rosidl_typesupport_introspection_c__DockInfraRed_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__DockInfraRed, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__DockInfraRed, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DockInfraRed__rosidl_typesupport_introspection_c__DockInfraRed_message_members = {
  "kobuki_ros_interfaces__msg",  // message namespace
  "DockInfraRed",  // message name
  2,  // number of fields
  sizeof(kobuki_ros_interfaces__msg__DockInfraRed),
  DockInfraRed__rosidl_typesupport_introspection_c__DockInfraRed_message_member_array,  // message members
  DockInfraRed__rosidl_typesupport_introspection_c__DockInfraRed_init_function,  // function to initialize message memory (memory has to be allocated)
  DockInfraRed__rosidl_typesupport_introspection_c__DockInfraRed_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DockInfraRed__rosidl_typesupport_introspection_c__DockInfraRed_message_type_support_handle = {
  0,
  &DockInfraRed__rosidl_typesupport_introspection_c__DockInfraRed_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kobuki_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kobuki_ros_interfaces, msg, DockInfraRed)() {
  DockInfraRed__rosidl_typesupport_introspection_c__DockInfraRed_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!DockInfraRed__rosidl_typesupport_introspection_c__DockInfraRed_message_type_support_handle.typesupport_identifier) {
    DockInfraRed__rosidl_typesupport_introspection_c__DockInfraRed_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DockInfraRed__rosidl_typesupport_introspection_c__DockInfraRed_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
