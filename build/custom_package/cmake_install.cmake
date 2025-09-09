# Install script for directory: /home/csrobot/flexbe_ws/src/tmr_ros2/custom_package

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/csrobot/flexbe_ws/install/custom_package")
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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/custom_package/tm_send_command" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/custom_package/tm_send_command")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/custom_package/tm_send_command"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/custom_package" TYPE EXECUTABLE FILES "/home/csrobot/flexbe_ws/build/custom_package/tm_send_command")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/custom_package/tm_send_command" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/custom_package/tm_send_command")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/custom_package/tm_send_command"
         OLD_RPATH "/home/csrobot/flexbe_ws/install/techman_robot_msgs/lib:/home/csrobot/ros2_humble/install/rclcpp/lib:/home/csrobot/ros2_humble/install/libstatistics_collector/lib:/home/csrobot/ros2_humble/install/rcl/lib:/home/csrobot/ros2_humble/install/rmw_implementation/lib:/home/csrobot/ros2_humble/install/ament_index_cpp/lib:/home/csrobot/ros2_humble/install/rcl_logging_spdlog/lib:/home/csrobot/ros2_humble/install/rcl_logging_interface/lib:/home/csrobot/ros2_humble/install/rcl_interfaces/lib:/home/csrobot/ros2_humble/install/rcl_yaml_param_parser/lib:/home/csrobot/ros2_humble/install/libyaml_vendor/lib:/home/csrobot/ros2_humble/install/rosgraph_msgs/lib:/home/csrobot/ros2_humble/install/statistics_msgs/lib:/home/csrobot/ros2_humble/install/builtin_interfaces/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_cpp/lib:/home/csrobot/ros2_humble/install/fastcdr/lib:/home/csrobot/ros2_humble/install/rmw/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_c/lib:/home/csrobot/ros2_humble/install/rosidl_runtime_c/lib:/home/csrobot/ros2_humble/install/rcpputils/lib:/home/csrobot/ros2_humble/install/rcutils/lib:/home/csrobot/ros2_humble/install/tracetools/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/custom_package/tm_send_command")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/custom_package/sub_img" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/custom_package/sub_img")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/custom_package/sub_img"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/custom_package" TYPE EXECUTABLE FILES "/home/csrobot/flexbe_ws/build/custom_package/sub_img")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/custom_package/sub_img" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/custom_package/sub_img")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/custom_package/sub_img"
         OLD_RPATH "/home/csrobot/ros2_humble/install/rclcpp_components/lib:/home/csrobot/ros2_humble/install/sensor_msgs/lib:/home/csrobot/ros2_humble/install/rclcpp/lib:/home/csrobot/ros2_humble/install/libstatistics_collector/lib:/home/csrobot/ros2_humble/install/rcl/lib:/home/csrobot/ros2_humble/install/rmw_implementation/lib:/home/csrobot/ros2_humble/install/rcl_logging_spdlog/lib:/home/csrobot/ros2_humble/install/rcl_logging_interface/lib:/home/csrobot/ros2_humble/install/rcl_yaml_param_parser/lib:/home/csrobot/ros2_humble/install/libyaml_vendor/lib:/home/csrobot/ros2_humble/install/rosgraph_msgs/lib:/home/csrobot/ros2_humble/install/statistics_msgs/lib:/home/csrobot/ros2_humble/install/tracetools/lib:/home/csrobot/ros2_humble/install/ament_index_cpp/lib:/home/csrobot/ros2_humble/install/class_loader/lib:/home/csrobot/ros2_humble/install/composition_interfaces/lib:/home/csrobot/ros2_humble/install/rcl_interfaces/lib:/home/csrobot/ros2_humble/install/geometry_msgs/lib:/home/csrobot/ros2_humble/install/std_msgs/lib:/home/csrobot/ros2_humble/install/builtin_interfaces/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_fastrtps_cpp/lib:/home/csrobot/ros2_humble/install/fastcdr/lib:/home/csrobot/ros2_humble/install/rmw/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_introspection_c/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_cpp/lib:/home/csrobot/ros2_humble/install/rosidl_typesupport_c/lib:/home/csrobot/ros2_humble/install/rcpputils/lib:/home/csrobot/ros2_humble/install/rosidl_runtime_c/lib:/home/csrobot/ros2_humble/install/rcutils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/custom_package/sub_img")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_package" TYPE DIRECTORY FILES "/home/csrobot/flexbe_ws/src/tmr_ros2/custom_package/image")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/csrobot/flexbe_ws/build/custom_package/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/custom_package")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/csrobot/flexbe_ws/build/custom_package/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/custom_package")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_package/environment" TYPE FILE FILES "/home/csrobot/ros2_humble/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_package/environment" TYPE FILE FILES "/home/csrobot/flexbe_ws/build/custom_package/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_package/environment" TYPE FILE FILES "/home/csrobot/ros2_humble/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_package/environment" TYPE FILE FILES "/home/csrobot/flexbe_ws/build/custom_package/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_package" TYPE FILE FILES "/home/csrobot/flexbe_ws/build/custom_package/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_package" TYPE FILE FILES "/home/csrobot/flexbe_ws/build/custom_package/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_package" TYPE FILE FILES "/home/csrobot/flexbe_ws/build/custom_package/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_package" TYPE FILE FILES "/home/csrobot/flexbe_ws/build/custom_package/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_package" TYPE FILE FILES "/home/csrobot/flexbe_ws/build/custom_package/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/csrobot/flexbe_ws/build/custom_package/ament_cmake_index/share/ament_index/resource_index/packages/custom_package")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_package/cmake" TYPE FILE FILES
    "/home/csrobot/flexbe_ws/build/custom_package/ament_cmake_core/custom_packageConfig.cmake"
    "/home/csrobot/flexbe_ws/build/custom_package/ament_cmake_core/custom_packageConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_package" TYPE FILE FILES "/home/csrobot/flexbe_ws/src/tmr_ros2/custom_package/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/csrobot/flexbe_ws/build/custom_package/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
