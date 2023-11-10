# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_servicedemo_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED servicedemo_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(servicedemo_FOUND FALSE)
  elseif(NOT servicedemo_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(servicedemo_FOUND FALSE)
  endif()
  return()
endif()
set(_servicedemo_CONFIG_INCLUDED TRUE)

# output package information
if(NOT servicedemo_FIND_QUIETLY)
  message(STATUS "Found servicedemo: 0.0.0 (${servicedemo_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'servicedemo' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${servicedemo_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(servicedemo_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${servicedemo_DIR}/${_extra}")
endforeach()
