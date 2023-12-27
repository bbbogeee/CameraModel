cmake_minimum_required(VERSION 3.4.1)

project(CameraModel)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/lib)

include_directories(${CMAKE_SOURCE_DIR}/inc)
add_executable(CameraModel ${CMAKE_SOURCE_DIR}/src/pinhole.cpp)
