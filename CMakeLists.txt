project(surveillance-people-counter)

cmake_minimum_required(VERSION 3.1.0 FATAL_ERROR)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(ENABLE_NEON "ENABLE_NEON" ON)
option(ENABLE_VFPV3 "ENABLE_VFPV3" ON)

find_package(OpenCV REQUIRED)

include(CMakeToolsHelpers OPTIONAL)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(surveillance-people-counter src/main.cpp)

target_link_libraries(surveillance-people-counter ${OpenCV_LIBS})