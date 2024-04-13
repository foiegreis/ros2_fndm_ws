cmake_minimum_required(VERSION 3.8)
project(ros2_fndm_interface)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)

#custom interface --------------------------
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME} 
  "msg/Student.msg"
  "srv/GradePointAverage.srv"
  "action/Fibonacci.action"
)

ament_export_dependencies(rosidl_default_runtime)
# -------------------------------------------------


ament_package()
