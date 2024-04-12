cmake_minimum_required(VERSION 3.8)
project(cpp_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(example_interfaces REQUIRED)


# set dependencies
set(dependencies
rclcpp
example_interfaces
)

# add executables for scripts
add_executable(simple_node_cpp src/simple_node.cpp)
ament_target_dependencies(simple_node_cpp ${dependencies})

add_executable(talker_cpp src/talker.cpp)
ament_target_dependencies(talker_cpp ${dependencies})

add_executable(listener_cpp src/listener.cpp)
ament_target_dependencies(listener_cpp ${dependencies})

add_executable(sum_server_cpp src/sum_server.cpp)
ament_target_dependencies(sum_server_cpp ${dependencies})

add_executable(sum_client_cpp src/sum_client.cpp)
ament_target_dependencies(sum_client_cpp ${dependencies})


# install the scripts
install(TARGETS
  simple_node_cpp
  talker_cpp
  listener_cpp
  sum_server_cpp
  sum_client_cpp
  DESTINATION lib/${PROJECT_NAME})

# export dependencies
ament_export_dependencies(${dependencies})
ament_package()
