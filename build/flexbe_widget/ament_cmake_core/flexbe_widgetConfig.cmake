# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_flexbe_widget_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED flexbe_widget_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(flexbe_widget_FOUND FALSE)
  elseif(NOT flexbe_widget_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(flexbe_widget_FOUND FALSE)
  endif()
  return()
endif()
set(_flexbe_widget_CONFIG_INCLUDED TRUE)

# output package information
if(NOT flexbe_widget_FIND_QUIETLY)
  message(STATUS "Found flexbe_widget: 4.0.1 (${flexbe_widget_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'flexbe_widget' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT flexbe_widget_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(flexbe_widget_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${flexbe_widget_DIR}/${_extra}")
endforeach()
