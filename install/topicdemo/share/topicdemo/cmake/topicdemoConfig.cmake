# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_topicdemo_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED topicdemo_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(topicdemo_FOUND FALSE)
  elseif(NOT topicdemo_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(topicdemo_FOUND FALSE)
  endif()
  return()
endif()
set(_topicdemo_CONFIG_INCLUDED TRUE)

# output package information
if(NOT topicdemo_FIND_QUIETLY)
  message(STATUS "Found topicdemo: 0.0.0 (${topicdemo_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'topicdemo' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${topicdemo_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(topicdemo_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${topicdemo_DIR}/${_extra}")
endforeach()
