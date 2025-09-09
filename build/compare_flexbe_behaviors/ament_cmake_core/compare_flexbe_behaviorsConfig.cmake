# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_compare_flexbe_behaviors_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED compare_flexbe_behaviors_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(compare_flexbe_behaviors_FOUND FALSE)
  elseif(NOT compare_flexbe_behaviors_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(compare_flexbe_behaviors_FOUND FALSE)
  endif()
  return()
endif()
set(_compare_flexbe_behaviors_CONFIG_INCLUDED TRUE)

# output package information
if(NOT compare_flexbe_behaviors_FIND_QUIETLY)
  message(STATUS "Found compare_flexbe_behaviors: 0.0.1 (${compare_flexbe_behaviors_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'compare_flexbe_behaviors' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT compare_flexbe_behaviors_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(compare_flexbe_behaviors_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${compare_flexbe_behaviors_DIR}/${_extra}")
endforeach()
