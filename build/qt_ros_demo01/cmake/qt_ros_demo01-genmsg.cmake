# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "qt_ros_demo01: 3 messages, 0 services")

set(MSG_I_FLAGS "-Iqt_ros_demo01:/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg;-Istd_msgs:/opt/ros/melodic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(qt_ros_demo01_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Arm.msg" NAME_WE)
add_custom_target(_qt_ros_demo01_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "qt_ros_demo01" "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Arm.msg" "qt_ros_demo01/Joint"
)

get_filename_component(_filename "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/PWMServo.msg" NAME_WE)
add_custom_target(_qt_ros_demo01_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "qt_ros_demo01" "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/PWMServo.msg" ""
)

get_filename_component(_filename "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Joint.msg" NAME_WE)
add_custom_target(_qt_ros_demo01_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "qt_ros_demo01" "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Joint.msg" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(qt_ros_demo01
  "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/PWMServo.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/qt_ros_demo01
)
_generate_msg_cpp(qt_ros_demo01
  "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Arm.msg"
  "${MSG_I_FLAGS}"
  "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Joint.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/qt_ros_demo01
)
_generate_msg_cpp(qt_ros_demo01
  "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Joint.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/qt_ros_demo01
)

### Generating Services

### Generating Module File
_generate_module_cpp(qt_ros_demo01
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/qt_ros_demo01
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(qt_ros_demo01_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(qt_ros_demo01_generate_messages qt_ros_demo01_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Arm.msg" NAME_WE)
add_dependencies(qt_ros_demo01_generate_messages_cpp _qt_ros_demo01_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/PWMServo.msg" NAME_WE)
add_dependencies(qt_ros_demo01_generate_messages_cpp _qt_ros_demo01_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Joint.msg" NAME_WE)
add_dependencies(qt_ros_demo01_generate_messages_cpp _qt_ros_demo01_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(qt_ros_demo01_gencpp)
add_dependencies(qt_ros_demo01_gencpp qt_ros_demo01_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS qt_ros_demo01_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(qt_ros_demo01
  "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/PWMServo.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/qt_ros_demo01
)
_generate_msg_eus(qt_ros_demo01
  "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Arm.msg"
  "${MSG_I_FLAGS}"
  "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Joint.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/qt_ros_demo01
)
_generate_msg_eus(qt_ros_demo01
  "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Joint.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/qt_ros_demo01
)

### Generating Services

### Generating Module File
_generate_module_eus(qt_ros_demo01
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/qt_ros_demo01
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(qt_ros_demo01_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(qt_ros_demo01_generate_messages qt_ros_demo01_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Arm.msg" NAME_WE)
add_dependencies(qt_ros_demo01_generate_messages_eus _qt_ros_demo01_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/PWMServo.msg" NAME_WE)
add_dependencies(qt_ros_demo01_generate_messages_eus _qt_ros_demo01_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Joint.msg" NAME_WE)
add_dependencies(qt_ros_demo01_generate_messages_eus _qt_ros_demo01_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(qt_ros_demo01_geneus)
add_dependencies(qt_ros_demo01_geneus qt_ros_demo01_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS qt_ros_demo01_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(qt_ros_demo01
  "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/PWMServo.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/qt_ros_demo01
)
_generate_msg_lisp(qt_ros_demo01
  "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Arm.msg"
  "${MSG_I_FLAGS}"
  "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Joint.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/qt_ros_demo01
)
_generate_msg_lisp(qt_ros_demo01
  "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Joint.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/qt_ros_demo01
)

### Generating Services

### Generating Module File
_generate_module_lisp(qt_ros_demo01
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/qt_ros_demo01
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(qt_ros_demo01_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(qt_ros_demo01_generate_messages qt_ros_demo01_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Arm.msg" NAME_WE)
add_dependencies(qt_ros_demo01_generate_messages_lisp _qt_ros_demo01_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/PWMServo.msg" NAME_WE)
add_dependencies(qt_ros_demo01_generate_messages_lisp _qt_ros_demo01_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Joint.msg" NAME_WE)
add_dependencies(qt_ros_demo01_generate_messages_lisp _qt_ros_demo01_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(qt_ros_demo01_genlisp)
add_dependencies(qt_ros_demo01_genlisp qt_ros_demo01_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS qt_ros_demo01_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(qt_ros_demo01
  "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/PWMServo.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/qt_ros_demo01
)
_generate_msg_nodejs(qt_ros_demo01
  "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Arm.msg"
  "${MSG_I_FLAGS}"
  "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Joint.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/qt_ros_demo01
)
_generate_msg_nodejs(qt_ros_demo01
  "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Joint.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/qt_ros_demo01
)

### Generating Services

### Generating Module File
_generate_module_nodejs(qt_ros_demo01
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/qt_ros_demo01
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(qt_ros_demo01_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(qt_ros_demo01_generate_messages qt_ros_demo01_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Arm.msg" NAME_WE)
add_dependencies(qt_ros_demo01_generate_messages_nodejs _qt_ros_demo01_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/PWMServo.msg" NAME_WE)
add_dependencies(qt_ros_demo01_generate_messages_nodejs _qt_ros_demo01_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Joint.msg" NAME_WE)
add_dependencies(qt_ros_demo01_generate_messages_nodejs _qt_ros_demo01_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(qt_ros_demo01_gennodejs)
add_dependencies(qt_ros_demo01_gennodejs qt_ros_demo01_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS qt_ros_demo01_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(qt_ros_demo01
  "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/PWMServo.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/qt_ros_demo01
)
_generate_msg_py(qt_ros_demo01
  "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Arm.msg"
  "${MSG_I_FLAGS}"
  "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Joint.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/qt_ros_demo01
)
_generate_msg_py(qt_ros_demo01
  "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Joint.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/qt_ros_demo01
)

### Generating Services

### Generating Module File
_generate_module_py(qt_ros_demo01
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/qt_ros_demo01
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(qt_ros_demo01_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(qt_ros_demo01_generate_messages qt_ros_demo01_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Arm.msg" NAME_WE)
add_dependencies(qt_ros_demo01_generate_messages_py _qt_ros_demo01_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/PWMServo.msg" NAME_WE)
add_dependencies(qt_ros_demo01_generate_messages_py _qt_ros_demo01_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/lj/ros/qt_ros_test/src/qt_ros_demo01/msg/Joint.msg" NAME_WE)
add_dependencies(qt_ros_demo01_generate_messages_py _qt_ros_demo01_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(qt_ros_demo01_genpy)
add_dependencies(qt_ros_demo01_genpy qt_ros_demo01_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS qt_ros_demo01_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/qt_ros_demo01)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/qt_ros_demo01
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(qt_ros_demo01_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/qt_ros_demo01)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/qt_ros_demo01
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(qt_ros_demo01_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/qt_ros_demo01)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/qt_ros_demo01
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(qt_ros_demo01_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/qt_ros_demo01)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/qt_ros_demo01
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(qt_ros_demo01_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/qt_ros_demo01)
  install(CODE "execute_process(COMMAND \"/usr/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/qt_ros_demo01\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/qt_ros_demo01
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(qt_ros_demo01_generate_messages_py std_msgs_generate_messages_py)
endif()
