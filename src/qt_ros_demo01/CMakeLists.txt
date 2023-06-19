##############################################################################
# CMake
##############################################################################

cmake_minimum_required(VERSION 2.8.0)
project(qt_ros_demo01)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")

##############################################################################
# Catkin
##############################################################################

# qt_build provides the qt cmake glue, roscpp the comms for a default talker  new add 添加包message_generation
find_package(catkin REQUIRED COMPONENTS qt_build roscpp rviz sensor_msgs nav_msgs cv_bridge std_msgs image_transport message_generation)
# new add 添加add_message_files 配置 msg 源文件
add_message_files(
    FILES
    Joint.msg
    Arm.msg
    PWMServo.msg
)
# new add 添加生成消息时依赖于 std_msgs
generate_messages(
  DEPENDENCIES
  std_msgs
)
include_directories(
    include
    ${catkin_INCLUDE_DIRS})

find_package(Qt5 REQUIRED Core Widgets)
set(QT_LIBRARIES Qt5::Widgets)
# Use this to define what the package will export (e.g. libs, headers).
# Since the default here is to produce only a binary, we don't worry about
# exporting anything. 
# 添加执行依赖 message_runtime
catkin_package(
    #  INCLUDE_DIRS include
    #  LIBRARIES transbot_msgs
    CATKIN_DEPENDS roscpp rosmsg message_runtime
    #  DEPENDS system_lib
)

##############################################################################
# Qt Environment
##############################################################################

# this comes from qt_build's qt-ros.cmake which is automatically 
# included via the dependency call in package.xml
# rosbuild_prepare_qt4(QtCore QtGui) # Add the appropriate components to the component list here

##############################################################################
# Sections
##############################################################################

file(GLOB QT_FORMS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ui/*.ui)
file(GLOB QT_RESOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} resources/*.qrc)
file(GLOB_RECURSE QT_MOC RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} FOLLOW_SYMLINKS include/qt_ros_demo01/*.hpp *.h)
#file(GLOB_RECURSE QT_MOC RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} FOLLOW_SYMLINKS msg/*.hpp *.h)

QT5_ADD_RESOURCES(QT_RESOURCES_CPP ${QT_RESOURCES})
QT5_WRAP_UI(QT_FORMS_HPP ${QT_FORMS})
QT5_WRAP_CPP(QT_MOC_HPP ${QT_MOC})

##############################################################################
# Sources
##############################################################################

file(GLOB_RECURSE QT_SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} FOLLOW_SYMLINKS src/*.cpp)

##############################################################################
# Binaries
##############################################################################
###### 自定义头文件与源文件相关配置
#  add_library(CCtrlDashBoard
#    include/qt_ros_demo01/qttest.hpp
#    src/qttest.cpp
#    )

add_executable(qt_ros_demo01 ${QT_SOURCES} ${QT_RESOURCES_CPP} ${QT_FORMS_HPP} ${QT_MOC_HPP})

# add_dependencies(CCtrlDashBoard ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
add_dependencies(qt_ros_demo01 ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})  # new add

#  target_link_libraries(CCtrlDashBoard
#    ${catkin_LIBRARIES}
#  )
# #####


target_link_libraries(qt_ros_demo01 
    # CCtrlDashBoard
    ${QT_LIBRARIES} 
    ${catkin_LIBRARIES})
install(TARGETS qt_ros_demo01 RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})

