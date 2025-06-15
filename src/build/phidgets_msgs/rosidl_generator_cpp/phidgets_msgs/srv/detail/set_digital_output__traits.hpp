// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from phidgets_msgs:srv/SetDigitalOutput.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "phidgets_msgs/srv/set_digital_output.hpp"


#ifndef PHIDGETS_MSGS__SRV__DETAIL__SET_DIGITAL_OUTPUT__TRAITS_HPP_
#define PHIDGETS_MSGS__SRV__DETAIL__SET_DIGITAL_OUTPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "phidgets_msgs/srv/detail/set_digital_output__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace phidgets_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetDigitalOutput_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: index
  {
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetDigitalOutput_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetDigitalOutput_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace phidgets_msgs

namespace rosidl_generator_traits
{

[[deprecated("use phidgets_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const phidgets_msgs::srv::SetDigitalOutput_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  phidgets_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use phidgets_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const phidgets_msgs::srv::SetDigitalOutput_Request & msg)
{
  return phidgets_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<phidgets_msgs::srv::SetDigitalOutput_Request>()
{
  return "phidgets_msgs::srv::SetDigitalOutput_Request";
}

template<>
inline const char * name<phidgets_msgs::srv::SetDigitalOutput_Request>()
{
  return "phidgets_msgs/srv/SetDigitalOutput_Request";
}

template<>
struct has_fixed_size<phidgets_msgs::srv::SetDigitalOutput_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<phidgets_msgs::srv::SetDigitalOutput_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<phidgets_msgs::srv::SetDigitalOutput_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace phidgets_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetDigitalOutput_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetDigitalOutput_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetDigitalOutput_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace phidgets_msgs

namespace rosidl_generator_traits
{

[[deprecated("use phidgets_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const phidgets_msgs::srv::SetDigitalOutput_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  phidgets_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use phidgets_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const phidgets_msgs::srv::SetDigitalOutput_Response & msg)
{
  return phidgets_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<phidgets_msgs::srv::SetDigitalOutput_Response>()
{
  return "phidgets_msgs::srv::SetDigitalOutput_Response";
}

template<>
inline const char * name<phidgets_msgs::srv::SetDigitalOutput_Response>()
{
  return "phidgets_msgs/srv/SetDigitalOutput_Response";
}

template<>
struct has_fixed_size<phidgets_msgs::srv::SetDigitalOutput_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<phidgets_msgs::srv::SetDigitalOutput_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<phidgets_msgs::srv::SetDigitalOutput_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace phidgets_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetDigitalOutput_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetDigitalOutput_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetDigitalOutput_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace phidgets_msgs

namespace rosidl_generator_traits
{

[[deprecated("use phidgets_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const phidgets_msgs::srv::SetDigitalOutput_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  phidgets_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use phidgets_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const phidgets_msgs::srv::SetDigitalOutput_Event & msg)
{
  return phidgets_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<phidgets_msgs::srv::SetDigitalOutput_Event>()
{
  return "phidgets_msgs::srv::SetDigitalOutput_Event";
}

template<>
inline const char * name<phidgets_msgs::srv::SetDigitalOutput_Event>()
{
  return "phidgets_msgs/srv/SetDigitalOutput_Event";
}

template<>
struct has_fixed_size<phidgets_msgs::srv::SetDigitalOutput_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<phidgets_msgs::srv::SetDigitalOutput_Event>
  : std::integral_constant<bool, has_bounded_size<phidgets_msgs::srv::SetDigitalOutput_Request>::value && has_bounded_size<phidgets_msgs::srv::SetDigitalOutput_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<phidgets_msgs::srv::SetDigitalOutput_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<phidgets_msgs::srv::SetDigitalOutput>()
{
  return "phidgets_msgs::srv::SetDigitalOutput";
}

template<>
inline const char * name<phidgets_msgs::srv::SetDigitalOutput>()
{
  return "phidgets_msgs/srv/SetDigitalOutput";
}

template<>
struct has_fixed_size<phidgets_msgs::srv::SetDigitalOutput>
  : std::integral_constant<
    bool,
    has_fixed_size<phidgets_msgs::srv::SetDigitalOutput_Request>::value &&
    has_fixed_size<phidgets_msgs::srv::SetDigitalOutput_Response>::value
  >
{
};

template<>
struct has_bounded_size<phidgets_msgs::srv::SetDigitalOutput>
  : std::integral_constant<
    bool,
    has_bounded_size<phidgets_msgs::srv::SetDigitalOutput_Request>::value &&
    has_bounded_size<phidgets_msgs::srv::SetDigitalOutput_Response>::value
  >
{
};

template<>
struct is_service<phidgets_msgs::srv::SetDigitalOutput>
  : std::true_type
{
};

template<>
struct is_service_request<phidgets_msgs::srv::SetDigitalOutput_Request>
  : std::true_type
{
};

template<>
struct is_service_response<phidgets_msgs::srv::SetDigitalOutput_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PHIDGETS_MSGS__SRV__DETAIL__SET_DIGITAL_OUTPUT__TRAITS_HPP_
