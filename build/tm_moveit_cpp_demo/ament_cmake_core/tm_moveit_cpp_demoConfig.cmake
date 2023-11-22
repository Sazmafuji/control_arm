# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_tm_moveit_cpp_demo_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED tm_moveit_cpp_demo_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(tm_moveit_cpp_demo_FOUND FALSE)
  elseif(NOT tm_moveit_cpp_demo_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(tm_moveit_cpp_demo_FOUND FALSE)
  endif()
  return()
endif()
set(_tm_moveit_cpp_demo_CONFIG_INCLUDED TRUE)

# output package information
if(NOT tm_moveit_cpp_demo_FIND_QUIETLY)
  message(STATUS "Found tm_moveit_cpp_demo: 1.0.0 (${tm_moveit_cpp_demo_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'tm_moveit_cpp_demo' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${tm_moveit_cpp_demo_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(tm_moveit_cpp_demo_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${tm_moveit_cpp_demo_DIR}/${_extra}")
endforeach()
