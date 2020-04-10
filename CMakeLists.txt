project(cmake_test_project)
cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 11)

# set build type if not set
if(NOT CMAKE_BUILD_TYPE)
	set(CMAKE_BUILD_TYPE Release)
endif()

# set additional flags
set(CMAKE_CXX_FLAGS "-Wall -Wextra -std=c++11")
set(CMAKE_CXX_DEBUG "-g -O0")
set(CMAKE_CXX_RELEASE "-O3")

message(STATUS "!! ${PROJECT_SOURCE_DIR}")

include_directories(${PROJECT_SOURCE_DIR}/src)

add_subdirectory(${PROJECT_SOURCE_DIR}/src)

add_subdirectory(${PROJECT_SOURCE_DIR}/tests)
