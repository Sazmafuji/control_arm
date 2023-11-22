# Install script for directory: /home/sazma/ws_future/src/moveit2_tutorials/doc/how_to_guides/pilz_industrial_motion_planner

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/sazma/ws_future/install/moveit2_tutorials")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit2_tutorials/pilz_move_group" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit2_tutorials/pilz_move_group")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit2_tutorials/pilz_move_group"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/moveit2_tutorials" TYPE EXECUTABLE FILES "/home/sazma/ws_future/build/moveit2_tutorials/doc/how_to_guides/pilz_industrial_motion_planner/pilz_move_group")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit2_tutorials/pilz_move_group" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit2_tutorials/pilz_move_group")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit2_tutorials/pilz_move_group"
         OLD_RPATH "/home/sazma/ws_future/install/moveit_servo/lib:/home/sazma/ws_future/install/moveit_task_constructor_core/lib:/home/sazma/ws_future/install/moveit_visual_tools/lib:/home/sazma/ws_future/install/rviz_visual_tools/lib:/home/sazma/ws_future/install/moveit_core/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/home/sazma/ws_future/install/moveit_msgs/lib:/opt/ros/humble/lib:/home/sazma/ws_future/install/moveit_ros_planning_interface/lib:/home/sazma/ws_future/install/moveit_ros_move_group/lib:/home/sazma/ws_future/install/moveit_ros_warehouse/lib:/home/sazma/ws_future/install/rviz_marker_tools/lib:/home/sazma/ws_future/install/moveit_task_constructor_msgs/lib:/home/sazma/ws_future/install/moveit_ros_planning/lib:/home/sazma/ws_future/install/moveit_ros_occupancy_map_monitor/lib:/opt/ros/humble/opt/rviz_ogre_vendor/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit2_tutorials/pilz_move_group")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit2_tutorials/pilz_mtc" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit2_tutorials/pilz_mtc")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit2_tutorials/pilz_mtc"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/moveit2_tutorials" TYPE EXECUTABLE FILES "/home/sazma/ws_future/build/moveit2_tutorials/doc/how_to_guides/pilz_industrial_motion_planner/pilz_mtc")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit2_tutorials/pilz_mtc" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit2_tutorials/pilz_mtc")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit2_tutorials/pilz_mtc"
         OLD_RPATH "/home/sazma/ws_future/install/moveit_servo/lib:/home/sazma/ws_future/install/moveit_task_constructor_core/lib:/home/sazma/ws_future/install/moveit_visual_tools/lib:/home/sazma/ws_future/install/rviz_visual_tools/lib:/home/sazma/ws_future/install/moveit_core/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/home/sazma/ws_future/install/moveit_msgs/lib:/opt/ros/humble/lib:/home/sazma/ws_future/install/moveit_ros_planning_interface/lib:/home/sazma/ws_future/install/moveit_ros_move_group/lib:/home/sazma/ws_future/install/moveit_ros_warehouse/lib:/home/sazma/ws_future/install/rviz_marker_tools/lib:/home/sazma/ws_future/install/moveit_task_constructor_msgs/lib:/home/sazma/ws_future/install/moveit_ros_planning/lib:/home/sazma/ws_future/install/moveit_ros_occupancy_map_monitor/lib:/opt/ros/humble/opt/rviz_ogre_vendor/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit2_tutorials/pilz_mtc")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit2_tutorials" TYPE DIRECTORY FILES "/home/sazma/ws_future/src/moveit2_tutorials/doc/how_to_guides/pilz_industrial_motion_planner/launch")
endif()

