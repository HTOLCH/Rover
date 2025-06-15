// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from phidgets_msgs:srv/Trigger.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "phidgets_msgs/srv/trigger.hpp"


#ifndef PHIDGETS_MSGS__SRV__DETAIL__TRIGGER__BUILDER_HPP_
#define PHIDGETS_MSGS__SRV__DETAIL__TRIGGER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "phidgets_msgs/srv/detail/trigger__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace phidgets_msgs
{

namespace srv
{

namespace builder
{

class Init_Trigger_Request_channel
{
public:
  Init_Trigger_Request_channel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::phidgets_msgs::srv::Trigger_Request channel(::phidgets_msgs::srv::Trigger_Request::_channel_type arg)
  {
    msg_.channel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::phidgets_msgs::srv::Trigger_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::phidgets_msgs::srv::Trigger_Request>()
{
  return phidgets_msgs::srv::builder::Init_Trigger_Request_channel();
}

}  // namespace phidgets_msgs


namespace phidgets_msgs
{

namespace srv
{

namespace builder
{

class Init_Trigger_Response_message
{
public:
  explicit Init_Trigger_Response_message(::phidgets_msgs::srv::Trigger_Response & msg)
  : msg_(msg)
  {}
  ::phidgets_msgs::srv::Trigger_Response message(::phidgets_msgs::srv::Trigger_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::phidgets_msgs::srv::Trigger_Response msg_;
};

class Init_Trigger_Response_success
{
public:
  Init_Trigger_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trigger_Response_message success(::phidgets_msgs::srv::Trigger_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Trigger_Response_message(msg_);
  }

private:
  ::phidgets_msgs::srv::Trigger_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::phidgets_msgs::srv::Trigger_Response>()
{
  return phidgets_msgs::srv::builder::Init_Trigger_Response_success();
}

}  // namespace phidgets_msgs


namespace phidgets_msgs
{

namespace srv
{

namespace builder
{

class Init_Trigger_Event_response
{
public:
  explicit Init_Trigger_Event_response(::phidgets_msgs::srv::Trigger_Event & msg)
  : msg_(msg)
  {}
  ::phidgets_msgs::srv::Trigger_Event response(::phidgets_msgs::srv::Trigger_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::phidgets_msgs::srv::Trigger_Event msg_;
};

class Init_Trigger_Event_request
{
public:
  explicit Init_Trigger_Event_request(::phidgets_msgs::srv::Trigger_Event & msg)
  : msg_(msg)
  {}
  Init_Trigger_Event_response request(::phidgets_msgs::srv::Trigger_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Trigger_Event_response(msg_);
  }

private:
  ::phidgets_msgs::srv::Trigger_Event msg_;
};

class Init_Trigger_Event_info
{
public:
  Init_Trigger_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trigger_Event_request info(::phidgets_msgs::srv::Trigger_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Trigger_Event_request(msg_);
  }

private:
  ::phidgets_msgs::srv::Trigger_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::phidgets_msgs::srv::Trigger_Event>()
{
  return phidgets_msgs::srv::builder::Init_Trigger_Event_info();
}

}  // namespace phidgets_msgs

#endif  // PHIDGETS_MSGS__SRV__DETAIL__TRIGGER__BUILDER_HPP_
