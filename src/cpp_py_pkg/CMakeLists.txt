cmake_minimum_required(VERSION 3.8)
project(cpp_py_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

#--------------------------------------------------------------------
# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)

# set dependencies
set(dependencies
rclcpp
rclpy
)
#C++ --------------------------------------------------------------------
#include directories - here we can add header files
include_directories(include/cpp_py_pkg)

# add executables for scripts
add_executable(simple_node_cpp src/simple_node.cpp)
ament_target_dependencies(simple_node_cpp ${dependencies})

# install the scripts
install(TARGETS
  simple_node_cpp
  DESTINATION lib/${PROJECT_NAME})

#PY --------------------------------------------------------------------
#install python modules
ament_python_install_package(${PROJECT_NAME})

#install python executables
install(PROGRAMS
  scripts/simple_node.py
  DESTINATION lib/${PROJECT_NAME})

#--------------------------------------------------------------------
# export dependencies
ament_export_dependencies(${dependencies})
ament_package()

