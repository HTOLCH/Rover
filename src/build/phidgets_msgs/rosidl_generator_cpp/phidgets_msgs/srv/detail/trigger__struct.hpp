// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from phidgets_msgs:srv/Trigger.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "phidgets_msgs/srv/trigger.hpp"


#ifndef PHIDGETS_MSGS__SRV__DETAIL__TRIGGER__STRUCT_HPP_
#define PHIDGETS_MSGS__SRV__DETAIL__TRIGGER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__phidgets_msgs__srv__Trigger_Request __attribute__((deprecated))
#else
# define DEPRECATED__phidgets_msgs__srv__Trigger_Request __declspec(deprecated)
#endif

namespace phidgets_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Trigger_Request_
{
  using Type = Trigger_Request_<ContainerAllocator>;

  explicit Trigger_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->channel = 0;
    }
  }

  explicit Trigger_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->channel = 0;
    }
  }

  // field types and members
  using _channel_type =
    uint16_t;
  _channel_type channel;

  // setters for named parameter idiom
  Type & set__channel(
    const uint16_t & _arg)
  {
    this->channel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    phidgets_msgs::srv::Trigger_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const phidgets_msgs::srv::Trigger_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<phidgets_msgs::srv::Trigger_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<phidgets_msgs::srv::Trigger_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      phidgets_msgs::srv::Trigger_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<phidgets_msgs::srv::Trigger_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      phidgets_msgs::srv::Trigger_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<phidgets_msgs::srv::Trigger_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<phidgets_msgs::srv::Trigger_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<phidgets_msgs::srv::Trigger_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__phidgets_msgs__srv__Trigger_Request
    std::shared_ptr<phidgets_msgs::srv::Trigger_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__phidgets_msgs__srv__Trigger_Request
    std::shared_ptr<phidgets_msgs::srv::Trigger_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trigger_Request_ & other) const
  {
    if (this->channel != other.channel) {
      return false;
    }
    return true;
  }
  bool operator!=(const Trigger_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Trigger_Request_

// alias to use template instance with default allocator
using Trigger_Request =
  phidgets_msgs::srv::Trigger_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace phidgets_msgs


#ifndef _WIN32
# define DEPRECATED__phidgets_msgs__srv__Trigger_Response __attribute__((deprecated))
#else
# define DEPRECATED__phidgets_msgs__srv__Trigger_Response __declspec(deprecated)
#endif

namespace phidgets_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Trigger_Response_
{
  using Type = Trigger_Response_<ContainerAllocator>;

  explicit Trigger_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit Trigger_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    phidgets_msgs::srv::Trigger_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const phidgets_msgs::srv::Trigger_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<phidgets_msgs::srv::Trigger_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<phidgets_msgs::srv::Trigger_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      phidgets_msgs::srv::Trigger_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<phidgets_msgs::srv::Trigger_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      phidgets_msgs::srv::Trigger_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<phidgets_msgs::srv::Trigger_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<phidgets_msgs::srv::Trigger_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<phidgets_msgs::srv::Trigger_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__phidgets_msgs__srv__Trigger_Response
    std::shared_ptr<phidgets_msgs::srv::Trigger_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__phidgets_msgs__srv__Trigger_Response
    std::shared_ptr<phidgets_msgs::srv::Trigger_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trigger_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const Trigger_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Trigger_Response_

// alias to use template instance with default allocator
using Trigger_Response =
  phidgets_msgs::srv::Trigger_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace phidgets_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__phidgets_msgs__srv__Trigger_Event __attribute__((deprecated))
#else
# define DEPRECATED__phidgets_msgs__srv__Trigger_Event __declspec(deprecated)
#endif

namespace phidgets_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Trigger_Event_
{
  using Type = Trigger_Event_<ContainerAllocator>;

  explicit Trigger_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Trigger_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<phidgets_msgs::srv::Trigger_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<phidgets_msgs::srv::Trigger_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<phidgets_msgs::srv::Trigger_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<phidgets_msgs::srv::Trigger_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<phidgets_msgs::srv::Trigger_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<phidgets_msgs::srv::Trigger_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<phidgets_msgs::srv::Trigger_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<phidgets_msgs::srv::Trigger_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    phidgets_msgs::srv::Trigger_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const phidgets_msgs::srv::Trigger_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<phidgets_msgs::srv::Trigger_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<phidgets_msgs::srv::Trigger_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      phidgets_msgs::srv::Trigger_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<phidgets_msgs::srv::Trigger_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      phidgets_msgs::srv::Trigger_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<phidgets_msgs::srv::Trigger_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<phidgets_msgs::srv::Trigger_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<phidgets_msgs::srv::Trigger_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__phidgets_msgs__srv__Trigger_Event
    std::shared_ptr<phidgets_msgs::srv::Trigger_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__phidgets_msgs__srv__Trigger_Event
    std::shared_ptr<phidgets_msgs::srv::Trigger_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trigger_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Trigger_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Trigger_Event_

// alias to use template instance with default allocator
using Trigger_Event =
  phidgets_msgs::srv::Trigger_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace phidgets_msgs

namespace phidgets_msgs
{

namespace srv
{

struct Trigger
{
  using Request = phidgets_msgs::srv::Trigger_Request;
  using Response = phidgets_msgs::srv::Trigger_Response;
  using Event = phidgets_msgs::srv::Trigger_Event;
};

}  // namespace srv

}  // namespace phidgets_msgs

#endif  // PHIDGETS_MSGS__SRV__DETAIL__TRIGGER__STRUCT_HPP_
