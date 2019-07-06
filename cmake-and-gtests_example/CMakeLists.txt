### project folder ###

project(cmake-example)              # Mandatory
cmake_minimum_required(VERSION 3.0) # Mandatory
#set( CMAKE_CXX_STANDARD 11)         # Use c++11.

message(STATUS "!!!!!Tere!!!! ${PROJECT_SOURCE_DIR}")

# tell cmake where to look for *.h files
include_directories(${PROJECT_SOURCE_DIR}/src)

add_subdirectory(${PROJECT_SOURCE_DIR}/src)

# Must be in the top-most CMakeLists.txt file
enable_testing()

# Outsource tests to another folder.
add_subdirectory(${PROJECT_SOURCE_DIR}/tests)
