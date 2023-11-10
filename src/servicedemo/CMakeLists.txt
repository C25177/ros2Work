cmake_minimum_required(VERSION 3.5)
project(servicedemo)

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

# 创建之后的依赖一定要更改，不然会报错
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(interfaces REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()

add_executable(server src/server.cpp)
ament_target_dependencies(server rclcpp interfaces)

add_executable(client src/client.cpp)
ament_target_dependencies(client rclcpp interfaces)

install(TARGETS 
        server
        client
        DESTINATION lib/${PROJECT_NAME}
       )