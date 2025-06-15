# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_phidgets_stepper_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED phidgets_stepper_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(phidgets_stepper_FOUND FALSE)
  elseif(NOT phidgets_stepper_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(phidgets_stepper_FOUND FALSE)
  endif()
  return()
endif()
set(_phidgets_stepper_CONFIG_INCLUDED TRUE)

# output package information
if(NOT phidgets_stepper_FIND_QUIETLY)
  message(STATUS "Found phidgets_stepper: 2.4.0 (${phidgets_stepper_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'phidgets_stepper' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT phidgets_stepper_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(phidgets_stepper_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${phidgets_stepper_DIR}/${_extra}")
endforeach()
