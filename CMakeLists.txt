cmake_minimum_required (VERSION 2.6)
project (c-learning)
add_executable(c-learning hello.c)
# The version number.
set (c-learning_VERSION_MAJOR 1)
set (c-learning_VERSION_MINOR 0)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
        "${PROJECT_SOURCE_DIR}/Config.h.in"
        "${PROJECT_BINARY_DIR}/Config.h"
)

# add the binary tree to the search path for include files
# so that we will find Config.h
include_directories("${PROJECT_BINARY_DIR}")