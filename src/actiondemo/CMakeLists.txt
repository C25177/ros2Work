cmake_minimum_required(VERSION 3.5)
project(actiondemo)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(interfaces REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)

  ament_lint_auto_find_test_dependencies()
endif()

ament_package()

add_executable(actionserver src/actionserver.cpp)
ament_target_dependencies(actionserver rclcpp interfaces rclcpp_action)

add_executable(actionclient src/actionclient.cpp)
ament_target_dependencies(actionclient rclcpp interfaces rclcpp_action)

install(TARGETS 
        actionserver
        actionclient
        DESTINATION lib/${PROJECT_NAME}
       )