# Install script for directory: /home/csrobot/flexbe_ws/src/tmr_ros2/demo

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/csrobot/flexbe_ws/install/demo")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_send_script" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_send_script")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_send_script"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/demo" TYPE EXECUTABLE FILES "/home/csrobot/flexbe_ws/build/demo/demo_send_script")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_send_script" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_send_script")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_send_script"
         OLD_RPATH "/home/csrobot/ros2_humble/install/rclcpp/lib:/home/csrobot/ros2_humble/install/sensor_msgs/lib:/home/csrobot/flexbe_ws/install/tm_msgs/lib:/home/csrobot/ros2_humble/install/libstatistics_collector/lib:/home/csrobot/ros2_humble/install/rcl/lib:/home/csrobot/ros2_humble/install/rmw_implementation/lib:/home/csrobot/ros2_humble/install/ament_index_cpp/lib:/home/csrobot/ros2_humble/install/rcl_logging_spdlog/lib:/home/csrobot/ros2_humble/install/rcl_logging_interface/lib:/home/csrobot/ros2_humble/install/rcl_interfaces/lib:/home/csrobot/ros2_humble/install/rcl_yaml_param_parser/lib:/home/csrobot/ros2_humble/install/libyaml_vendor/lib:/home/csrobot/ros2_humble/install/rosgraph_msgs/lib:/home/csrobot/ros2_humble/install/statistics_msgs/lib:/home/csrobot/ros2_humble/install/tracetools/lib:/home/csrobot/ros2_humble/install/geometry_msgs/lib:/home/csrobot/ros2_humble/install/std_msgs/lib:/home/csrobot/ros2_humble/install/builtin_interfaces/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_cpp/lib:/home/csrobot/ros2_humble/install/fastcdr/lib:/home/csrobot/ros2_humble/install/rmw/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_c/lib:/home/csrobot/ros2_humble/install/rcpputils/lib:/home/csrobot/ros2_humble/install/rosidl_runtime_c/lib:/home/csrobot/ros2_humble/install/rcutils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_send_script")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_ask_sta" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_ask_sta")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_ask_sta"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/demo" TYPE EXECUTABLE FILES "/home/csrobot/flexbe_ws/build/demo/demo_ask_sta")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_ask_sta" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_ask_sta")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_ask_sta"
         OLD_RPATH "/home/csrobot/ros2_humble/install/rclcpp/lib:/home/csrobot/ros2_humble/install/sensor_msgs/lib:/home/csrobot/flexbe_ws/install/tm_msgs/lib:/home/csrobot/ros2_humble/install/libstatistics_collector/lib:/home/csrobot/ros2_humble/install/rcl/lib:/home/csrobot/ros2_humble/install/rmw_implementation/lib:/home/csrobot/ros2_humble/install/ament_index_cpp/lib:/home/csrobot/ros2_humble/install/rcl_logging_spdlog/lib:/home/csrobot/ros2_humble/install/rcl_logging_interface/lib:/home/csrobot/ros2_humble/install/rcl_interfaces/lib:/home/csrobot/ros2_humble/install/rcl_yaml_param_parser/lib:/home/csrobot/ros2_humble/install/libyaml_vendor/lib:/home/csrobot/ros2_humble/install/rosgraph_msgs/lib:/home/csrobot/ros2_humble/install/statistics_msgs/lib:/home/csrobot/ros2_humble/install/tracetools/lib:/home/csrobot/ros2_humble/install/geometry_msgs/lib:/home/csrobot/ros2_humble/install/std_msgs/lib:/home/csrobot/ros2_humble/install/builtin_interfaces/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_cpp/lib:/home/csrobot/ros2_humble/install/fastcdr/lib:/home/csrobot/ros2_humble/install/rmw/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_c/lib:/home/csrobot/ros2_humble/install/rcpputils/lib:/home/csrobot/ros2_humble/install/rosidl_runtime_c/lib:/home/csrobot/ros2_humble/install/rcutils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_ask_sta")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_connect_tm" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_connect_tm")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_connect_tm"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/demo" TYPE EXECUTABLE FILES "/home/csrobot/flexbe_ws/build/demo/demo_connect_tm")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_connect_tm" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_connect_tm")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_connect_tm"
         OLD_RPATH "/home/csrobot/ros2_humble/install/rclcpp/lib:/home/csrobot/ros2_humble/install/sensor_msgs/lib:/home/csrobot/flexbe_ws/install/tm_msgs/lib:/home/csrobot/ros2_humble/install/libstatistics_collector/lib:/home/csrobot/ros2_humble/install/rcl/lib:/home/csrobot/ros2_humble/install/rmw_implementation/lib:/home/csrobot/ros2_humble/install/ament_index_cpp/lib:/home/csrobot/ros2_humble/install/rcl_logging_spdlog/lib:/home/csrobot/ros2_humble/install/rcl_logging_interface/lib:/home/csrobot/ros2_humble/install/rcl_interfaces/lib:/home/csrobot/ros2_humble/install/rcl_yaml_param_parser/lib:/home/csrobot/ros2_humble/install/libyaml_vendor/lib:/home/csrobot/ros2_humble/install/rosgraph_msgs/lib:/home/csrobot/ros2_humble/install/statistics_msgs/lib:/home/csrobot/ros2_humble/install/tracetools/lib:/home/csrobot/ros2_humble/install/geometry_msgs/lib:/home/csrobot/ros2_humble/install/std_msgs/lib:/home/csrobot/ros2_humble/install/builtin_interfaces/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_cpp/lib:/home/csrobot/ros2_humble/install/fastcdr/lib:/home/csrobot/ros2_humble/install/rmw/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_c/lib:/home/csrobot/ros2_humble/install/rcpputils/lib:/home/csrobot/ros2_humble/install/rosidl_runtime_c/lib:/home/csrobot/ros2_humble/install/rcutils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_connect_tm")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_set_event" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_set_event")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_set_event"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/demo" TYPE EXECUTABLE FILES "/home/csrobot/flexbe_ws/build/demo/demo_set_event")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_set_event" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_set_event")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_set_event"
         OLD_RPATH "/home/csrobot/ros2_humble/install/rclcpp/lib:/home/csrobot/ros2_humble/install/sensor_msgs/lib:/home/csrobot/flexbe_ws/install/tm_msgs/lib:/home/csrobot/ros2_humble/install/libstatistics_collector/lib:/home/csrobot/ros2_humble/install/rcl/lib:/home/csrobot/ros2_humble/install/rmw_implementation/lib:/home/csrobot/ros2_humble/install/ament_index_cpp/lib:/home/csrobot/ros2_humble/install/rcl_logging_spdlog/lib:/home/csrobot/ros2_humble/install/rcl_logging_interface/lib:/home/csrobot/ros2_humble/install/rcl_interfaces/lib:/home/csrobot/ros2_humble/install/rcl_yaml_param_parser/lib:/home/csrobot/ros2_humble/install/libyaml_vendor/lib:/home/csrobot/ros2_humble/install/rosgraph_msgs/lib:/home/csrobot/ros2_humble/install/statistics_msgs/lib:/home/csrobot/ros2_humble/install/tracetools/lib:/home/csrobot/ros2_humble/install/geometry_msgs/lib:/home/csrobot/ros2_humble/install/std_msgs/lib:/home/csrobot/ros2_humble/install/builtin_interfaces/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_cpp/lib:/home/csrobot/ros2_humble/install/fastcdr/lib:/home/csrobot/ros2_humble/install/rmw/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_c/lib:/home/csrobot/ros2_humble/install/rcpputils/lib:/home/csrobot/ros2_humble/install/rosidl_runtime_c/lib:/home/csrobot/ros2_humble/install/rcutils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_set_event")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_set_io" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_set_io")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_set_io"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/demo" TYPE EXECUTABLE FILES "/home/csrobot/flexbe_ws/build/demo/demo_set_io")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_set_io" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_set_io")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_set_io"
         OLD_RPATH "/home/csrobot/ros2_humble/install/rclcpp/lib:/home/csrobot/ros2_humble/install/sensor_msgs/lib:/home/csrobot/flexbe_ws/install/tm_msgs/lib:/home/csrobot/ros2_humble/install/libstatistics_collector/lib:/home/csrobot/ros2_humble/install/rcl/lib:/home/csrobot/ros2_humble/install/rmw_implementation/lib:/home/csrobot/ros2_humble/install/ament_index_cpp/lib:/home/csrobot/ros2_humble/install/rcl_logging_spdlog/lib:/home/csrobot/ros2_humble/install/rcl_logging_interface/lib:/home/csrobot/ros2_humble/install/rcl_interfaces/lib:/home/csrobot/ros2_humble/install/rcl_yaml_param_parser/lib:/home/csrobot/ros2_humble/install/libyaml_vendor/lib:/home/csrobot/ros2_humble/install/rosgraph_msgs/lib:/home/csrobot/ros2_humble/install/statistics_msgs/lib:/home/csrobot/ros2_humble/install/tracetools/lib:/home/csrobot/ros2_humble/install/geometry_msgs/lib:/home/csrobot/ros2_humble/install/std_msgs/lib:/home/csrobot/ros2_humble/install/builtin_interfaces/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_cpp/lib:/home/csrobot/ros2_humble/install/fastcdr/lib:/home/csrobot/ros2_humble/install/rmw/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_c/lib:/home/csrobot/ros2_humble/install/rcpputils/lib:/home/csrobot/ros2_humble/install/rosidl_runtime_c/lib:/home/csrobot/ros2_humble/install/rcutils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_set_io")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_set_positions" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_set_positions")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_set_positions"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/demo" TYPE EXECUTABLE FILES "/home/csrobot/flexbe_ws/build/demo/demo_set_positions")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_set_positions" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_set_positions")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_set_positions"
         OLD_RPATH "/home/csrobot/ros2_humble/install/rclcpp/lib:/home/csrobot/ros2_humble/install/sensor_msgs/lib:/home/csrobot/flexbe_ws/install/tm_msgs/lib:/home/csrobot/ros2_humble/install/libstatistics_collector/lib:/home/csrobot/ros2_humble/install/rcl/lib:/home/csrobot/ros2_humble/install/rmw_implementation/lib:/home/csrobot/ros2_humble/install/ament_index_cpp/lib:/home/csrobot/ros2_humble/install/rcl_logging_spdlog/lib:/home/csrobot/ros2_humble/install/rcl_logging_interface/lib:/home/csrobot/ros2_humble/install/rcl_interfaces/lib:/home/csrobot/ros2_humble/install/rcl_yaml_param_parser/lib:/home/csrobot/ros2_humble/install/libyaml_vendor/lib:/home/csrobot/ros2_humble/install/rosgraph_msgs/lib:/home/csrobot/ros2_humble/install/statistics_msgs/lib:/home/csrobot/ros2_humble/install/tracetools/lib:/home/csrobot/ros2_humble/install/geometry_msgs/lib:/home/csrobot/ros2_humble/install/std_msgs/lib:/home/csrobot/ros2_humble/install/builtin_interfaces/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_cpp/lib:/home/csrobot/ros2_humble/install/fastcdr/lib:/home/csrobot/ros2_humble/install/rmw/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_c/lib:/home/csrobot/ros2_humble/install/rcpputils/lib:/home/csrobot/ros2_humble/install/rosidl_runtime_c/lib:/home/csrobot/ros2_humble/install/rcutils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_set_positions")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_write_item" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_write_item")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_write_item"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/demo" TYPE EXECUTABLE FILES "/home/csrobot/flexbe_ws/build/demo/demo_write_item")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_write_item" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_write_item")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_write_item"
         OLD_RPATH "/home/csrobot/ros2_humble/install/rclcpp/lib:/home/csrobot/ros2_humble/install/sensor_msgs/lib:/home/csrobot/flexbe_ws/install/tm_msgs/lib:/home/csrobot/ros2_humble/install/libstatistics_collector/lib:/home/csrobot/ros2_humble/install/rcl/lib:/home/csrobot/ros2_humble/install/rmw_implementation/lib:/home/csrobot/ros2_humble/install/ament_index_cpp/lib:/home/csrobot/ros2_humble/install/rcl_logging_spdlog/lib:/home/csrobot/ros2_humble/install/rcl_logging_interface/lib:/home/csrobot/ros2_humble/install/rcl_interfaces/lib:/home/csrobot/ros2_humble/install/rcl_yaml_param_parser/lib:/home/csrobot/ros2_humble/install/libyaml_vendor/lib:/home/csrobot/ros2_humble/install/rosgraph_msgs/lib:/home/csrobot/ros2_humble/install/statistics_msgs/lib:/home/csrobot/ros2_humble/install/tracetools/lib:/home/csrobot/ros2_humble/install/geometry_msgs/lib:/home/csrobot/ros2_humble/install/std_msgs/lib:/home/csrobot/ros2_humble/install/builtin_interfaces/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_cpp/lib:/home/csrobot/ros2_humble/install/fastcdr/lib:/home/csrobot/ros2_humble/install/rmw/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_c/lib:/home/csrobot/ros2_humble/install/rcpputils/lib:/home/csrobot/ros2_humble/install/rosidl_runtime_c/lib:/home/csrobot/ros2_humble/install/rcutils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_write_item")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_ask_item" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_ask_item")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_ask_item"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/demo" TYPE EXECUTABLE FILES "/home/csrobot/flexbe_ws/build/demo/demo_ask_item")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_ask_item" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_ask_item")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_ask_item"
         OLD_RPATH "/home/csrobot/ros2_humble/install/rclcpp/lib:/home/csrobot/ros2_humble/install/sensor_msgs/lib:/home/csrobot/flexbe_ws/install/tm_msgs/lib:/home/csrobot/ros2_humble/install/libstatistics_collector/lib:/home/csrobot/ros2_humble/install/rcl/lib:/home/csrobot/ros2_humble/install/rmw_implementation/lib:/home/csrobot/ros2_humble/install/ament_index_cpp/lib:/home/csrobot/ros2_humble/install/rcl_logging_spdlog/lib:/home/csrobot/ros2_humble/install/rcl_logging_interface/lib:/home/csrobot/ros2_humble/install/rcl_interfaces/lib:/home/csrobot/ros2_humble/install/rcl_yaml_param_parser/lib:/home/csrobot/ros2_humble/install/libyaml_vendor/lib:/home/csrobot/ros2_humble/install/rosgraph_msgs/lib:/home/csrobot/ros2_humble/install/statistics_msgs/lib:/home/csrobot/ros2_humble/install/tracetools/lib:/home/csrobot/ros2_humble/install/geometry_msgs/lib:/home/csrobot/ros2_humble/install/std_msgs/lib:/home/csrobot/ros2_humble/install/builtin_interfaces/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_cpp/lib:/home/csrobot/ros2_humble/install/fastcdr/lib:/home/csrobot/ros2_humble/install/rmw/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_c/lib:/home/csrobot/ros2_humble/install/rcpputils/lib:/home/csrobot/ros2_humble/install/rosidl_runtime_c/lib:/home/csrobot/ros2_humble/install/rcutils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_ask_item")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_feedback" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_feedback")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_feedback"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/demo" TYPE EXECUTABLE FILES "/home/csrobot/flexbe_ws/build/demo/demo_get_feedback")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_feedback" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_feedback")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_feedback"
         OLD_RPATH "/home/csrobot/ros2_humble/install/rclcpp/lib:/home/csrobot/ros2_humble/install/sensor_msgs/lib:/home/csrobot/flexbe_ws/install/tm_msgs/lib:/home/csrobot/ros2_humble/install/libstatistics_collector/lib:/home/csrobot/ros2_humble/install/rcl/lib:/home/csrobot/ros2_humble/install/rmw_implementation/lib:/home/csrobot/ros2_humble/install/ament_index_cpp/lib:/home/csrobot/ros2_humble/install/rcl_logging_spdlog/lib:/home/csrobot/ros2_humble/install/rcl_logging_interface/lib:/home/csrobot/ros2_humble/install/rcl_interfaces/lib:/home/csrobot/ros2_humble/install/rcl_yaml_param_parser/lib:/home/csrobot/ros2_humble/install/libyaml_vendor/lib:/home/csrobot/ros2_humble/install/rosgraph_msgs/lib:/home/csrobot/ros2_humble/install/statistics_msgs/lib:/home/csrobot/ros2_humble/install/tracetools/lib:/home/csrobot/ros2_humble/install/geometry_msgs/lib:/home/csrobot/ros2_humble/install/std_msgs/lib:/home/csrobot/ros2_humble/install/builtin_interfaces/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_cpp/lib:/home/csrobot/ros2_humble/install/fastcdr/lib:/home/csrobot/ros2_humble/install/rmw/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_c/lib:/home/csrobot/ros2_humble/install/rcpputils/lib:/home/csrobot/ros2_humble/install/rosidl_runtime_c/lib:/home/csrobot/ros2_humble/install/rcutils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_feedback")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_torque_feedback" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_torque_feedback")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_torque_feedback"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/demo" TYPE EXECUTABLE FILES "/home/csrobot/flexbe_ws/build/demo/demo_get_torque_feedback")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_torque_feedback" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_torque_feedback")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_torque_feedback"
         OLD_RPATH "/home/csrobot/ros2_humble/install/rclcpp/lib:/home/csrobot/ros2_humble/install/sensor_msgs/lib:/home/csrobot/flexbe_ws/install/tm_msgs/lib:/home/csrobot/ros2_humble/install/libstatistics_collector/lib:/home/csrobot/ros2_humble/install/rcl/lib:/home/csrobot/ros2_humble/install/rmw_implementation/lib:/home/csrobot/ros2_humble/install/ament_index_cpp/lib:/home/csrobot/ros2_humble/install/rcl_logging_spdlog/lib:/home/csrobot/ros2_humble/install/rcl_logging_interface/lib:/home/csrobot/ros2_humble/install/rcl_interfaces/lib:/home/csrobot/ros2_humble/install/rcl_yaml_param_parser/lib:/home/csrobot/ros2_humble/install/libyaml_vendor/lib:/home/csrobot/ros2_humble/install/rosgraph_msgs/lib:/home/csrobot/ros2_humble/install/statistics_msgs/lib:/home/csrobot/ros2_humble/install/tracetools/lib:/home/csrobot/ros2_humble/install/geometry_msgs/lib:/home/csrobot/ros2_humble/install/std_msgs/lib:/home/csrobot/ros2_humble/install/builtin_interfaces/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_cpp/lib:/home/csrobot/ros2_humble/install/fastcdr/lib:/home/csrobot/ros2_humble/install/rmw/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_c/lib:/home/csrobot/ros2_humble/install/rcpputils/lib:/home/csrobot/ros2_humble/install/rosidl_runtime_c/lib:/home/csrobot/ros2_humble/install/rcutils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_torque_feedback")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_sct_response" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_sct_response")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_sct_response"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/demo" TYPE EXECUTABLE FILES "/home/csrobot/flexbe_ws/build/demo/demo_get_sct_response")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_sct_response" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_sct_response")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_sct_response"
         OLD_RPATH "/home/csrobot/ros2_humble/install/rclcpp/lib:/home/csrobot/ros2_humble/install/sensor_msgs/lib:/home/csrobot/flexbe_ws/install/tm_msgs/lib:/home/csrobot/ros2_humble/install/libstatistics_collector/lib:/home/csrobot/ros2_humble/install/rcl/lib:/home/csrobot/ros2_humble/install/rmw_implementation/lib:/home/csrobot/ros2_humble/install/ament_index_cpp/lib:/home/csrobot/ros2_humble/install/rcl_logging_spdlog/lib:/home/csrobot/ros2_humble/install/rcl_logging_interface/lib:/home/csrobot/ros2_humble/install/rcl_interfaces/lib:/home/csrobot/ros2_humble/install/rcl_yaml_param_parser/lib:/home/csrobot/ros2_humble/install/libyaml_vendor/lib:/home/csrobot/ros2_humble/install/rosgraph_msgs/lib:/home/csrobot/ros2_humble/install/statistics_msgs/lib:/home/csrobot/ros2_humble/install/tracetools/lib:/home/csrobot/ros2_humble/install/geometry_msgs/lib:/home/csrobot/ros2_humble/install/std_msgs/lib:/home/csrobot/ros2_humble/install/builtin_interfaces/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_cpp/lib:/home/csrobot/ros2_humble/install/fastcdr/lib:/home/csrobot/ros2_humble/install/rmw/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_c/lib:/home/csrobot/ros2_humble/install/rcpputils/lib:/home/csrobot/ros2_humble/install/rosidl_runtime_c/lib:/home/csrobot/ros2_humble/install/rcutils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_sct_response")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_sta_response" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_sta_response")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_sta_response"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/demo" TYPE EXECUTABLE FILES "/home/csrobot/flexbe_ws/build/demo/demo_get_sta_response")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_sta_response" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_sta_response")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_sta_response"
         OLD_RPATH "/home/csrobot/ros2_humble/install/rclcpp/lib:/home/csrobot/ros2_humble/install/sensor_msgs/lib:/home/csrobot/flexbe_ws/install/tm_msgs/lib:/home/csrobot/ros2_humble/install/libstatistics_collector/lib:/home/csrobot/ros2_humble/install/rcl/lib:/home/csrobot/ros2_humble/install/rmw_implementation/lib:/home/csrobot/ros2_humble/install/ament_index_cpp/lib:/home/csrobot/ros2_humble/install/rcl_logging_spdlog/lib:/home/csrobot/ros2_humble/install/rcl_logging_interface/lib:/home/csrobot/ros2_humble/install/rcl_interfaces/lib:/home/csrobot/ros2_humble/install/rcl_yaml_param_parser/lib:/home/csrobot/ros2_humble/install/libyaml_vendor/lib:/home/csrobot/ros2_humble/install/rosgraph_msgs/lib:/home/csrobot/ros2_humble/install/statistics_msgs/lib:/home/csrobot/ros2_humble/install/tracetools/lib:/home/csrobot/ros2_humble/install/geometry_msgs/lib:/home/csrobot/ros2_humble/install/std_msgs/lib:/home/csrobot/ros2_humble/install/builtin_interfaces/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_cpp/lib:/home/csrobot/ros2_humble/install/fastcdr/lib:/home/csrobot/ros2_humble/install/rmw/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_c/lib:/home/csrobot/ros2_humble/install/rcpputils/lib:/home/csrobot/ros2_humble/install/rosidl_runtime_c/lib:/home/csrobot/ros2_humble/install/rcutils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_sta_response")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_svr_response" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_svr_response")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_svr_response"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/demo" TYPE EXECUTABLE FILES "/home/csrobot/flexbe_ws/build/demo/demo_get_svr_response")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_svr_response" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_svr_response")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_svr_response"
         OLD_RPATH "/home/csrobot/ros2_humble/install/rclcpp/lib:/home/csrobot/ros2_humble/install/sensor_msgs/lib:/home/csrobot/flexbe_ws/install/tm_msgs/lib:/home/csrobot/ros2_humble/install/libstatistics_collector/lib:/home/csrobot/ros2_humble/install/rcl/lib:/home/csrobot/ros2_humble/install/rmw_implementation/lib:/home/csrobot/ros2_humble/install/ament_index_cpp/lib:/home/csrobot/ros2_humble/install/rcl_logging_spdlog/lib:/home/csrobot/ros2_humble/install/rcl_logging_interface/lib:/home/csrobot/ros2_humble/install/rcl_interfaces/lib:/home/csrobot/ros2_humble/install/rcl_yaml_param_parser/lib:/home/csrobot/ros2_humble/install/libyaml_vendor/lib:/home/csrobot/ros2_humble/install/rosgraph_msgs/lib:/home/csrobot/ros2_humble/install/statistics_msgs/lib:/home/csrobot/ros2_humble/install/tracetools/lib:/home/csrobot/ros2_humble/install/geometry_msgs/lib:/home/csrobot/ros2_humble/install/std_msgs/lib:/home/csrobot/ros2_humble/install/builtin_interfaces/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_cpp/lib:/home/csrobot/ros2_humble/install/fastcdr/lib:/home/csrobot/ros2_humble/install/rmw/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_c/lib:/home/csrobot/ros2_humble/install/rcpputils/lib:/home/csrobot/ros2_humble/install/rosidl_runtime_c/lib:/home/csrobot/ros2_humble/install/rcutils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_get_svr_response")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_leave_listen_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_leave_listen_node")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_leave_listen_node"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/demo" TYPE EXECUTABLE FILES "/home/csrobot/flexbe_ws/build/demo/demo_leave_listen_node")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_leave_listen_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_leave_listen_node")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_leave_listen_node"
         OLD_RPATH "/home/csrobot/ros2_humble/install/rclcpp/lib:/home/csrobot/ros2_humble/install/sensor_msgs/lib:/home/csrobot/flexbe_ws/install/tm_msgs/lib:/home/csrobot/ros2_humble/install/libstatistics_collector/lib:/home/csrobot/ros2_humble/install/rcl/lib:/home/csrobot/ros2_humble/install/rmw_implementation/lib:/home/csrobot/ros2_humble/install/ament_index_cpp/lib:/home/csrobot/ros2_humble/install/rcl_logging_spdlog/lib:/home/csrobot/ros2_humble/install/rcl_logging_interface/lib:/home/csrobot/ros2_humble/install/rcl_interfaces/lib:/home/csrobot/ros2_humble/install/rcl_yaml_param_parser/lib:/home/csrobot/ros2_humble/install/libyaml_vendor/lib:/home/csrobot/ros2_humble/install/rosgraph_msgs/lib:/home/csrobot/ros2_humble/install/statistics_msgs/lib:/home/csrobot/ros2_humble/install/tracetools/lib:/home/csrobot/ros2_humble/install/geometry_msgs/lib:/home/csrobot/ros2_humble/install/std_msgs/lib:/home/csrobot/ros2_humble/install/builtin_interfaces/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_cpp/lib:/home/csrobot/ros2_humble/install/fastcdr/lib:/home/csrobot/ros2_humble/install/rmw/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_c/lib:/home/csrobot/ros2_humble/install/rcpputils/lib:/home/csrobot/ros2_humble/install/rosidl_runtime_c/lib:/home/csrobot/ros2_humble/install/rcutils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/demo/demo_leave_listen_node")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/csrobot/flexbe_ws/build/demo/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/demo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/csrobot/flexbe_ws/build/demo/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/demo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/demo/environment" TYPE FILE FILES "/home/csrobot/ros2_humble/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/demo/environment" TYPE FILE FILES "/home/csrobot/flexbe_ws/build/demo/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/demo/environment" TYPE FILE FILES "/home/csrobot/ros2_humble/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/demo/environment" TYPE FILE FILES "/home/csrobot/flexbe_ws/build/demo/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/demo" TYPE FILE FILES "/home/csrobot/flexbe_ws/build/demo/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/demo" TYPE FILE FILES "/home/csrobot/flexbe_ws/build/demo/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/demo" TYPE FILE FILES "/home/csrobot/flexbe_ws/build/demo/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/demo" TYPE FILE FILES "/home/csrobot/flexbe_ws/build/demo/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/demo" TYPE FILE FILES "/home/csrobot/flexbe_ws/build/demo/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/csrobot/flexbe_ws/build/demo/ament_cmake_index/share/ament_index/resource_index/packages/demo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/demo/cmake" TYPE FILE FILES
    "/home/csrobot/flexbe_ws/build/demo/ament_cmake_core/demoConfig.cmake"
    "/home/csrobot/flexbe_ws/build/demo/ament_cmake_core/demoConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/demo" TYPE FILE FILES "/home/csrobot/flexbe_ws/src/tmr_ros2/demo/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/csrobot/flexbe_ws/build/demo/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
