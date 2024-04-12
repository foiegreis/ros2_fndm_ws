cmake_minimum_required(VERSION 3.8)
project(cpp_actions)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(my_ros2_interface REQUIRED)

# set dependencies
set(dependencies
rclcpp
rclcpp_action
rclcpp_components
my_ros2_interface
)

#include directories
include_directories(include/cpp_actions)

# add executables for scripts
add_executable(fibonacci_server src/fibonacci_server.cpp)
ament_target_dependencies(fibonacci_server ${dependencies})

add_executable(fibonacci_client src/fibonacci_client.cpp)
ament_target_dependencies(fibonacci_client ${dependencies})


# install the scripts
install(TARGETS
  fibonacci_server
  fibonacci_client
  DESTINATION lib/${PROJECT_NAME})


# export dependencies
ament_export_dependencies(${dependencies})
ament_package()
