cmake_minimum_required (VERSION 3.10)
project (c-learning)

# The version number.
set (c_learning_VERSION_MAJOR 1)
set (c_learning_VERSION_MINOR 0)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
    "${PROJECT_SOURCE_DIR}/Config.h.in"
    "${PROJECT_BINARY_DIR}/Config.h"
)

# add the binary tree to the search path for include files
# so that we will find Config.h
include_directories("${PROJECT_BINARY_DIR}")

# add extra library
include_directories ("${PROJECT_SOURCE_DIR}/csapp")
add_subdirectory (csapp)

# add the executable
add_executable(pract csapp-test.c)
target_link_libraries (pract csapp)

add_library(itoa itoa.c)
add_library(sundry sundry.c)
add_executable(hello hello.c)
target_link_libraries(hello itoa sundry)