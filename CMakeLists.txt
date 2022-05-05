cmake_minimum_required(VERSION 3.5)

project(cpp_examples)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDART 14)

set(SOURCES
   lesson01_vector2d/vector2d.h
   lesson01_vector2d/vector2d.cpp
   main.cpp)

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

#add executable
add_executable(vector2d ${SOURCES})

target_link_libraries(vector2d PRIVATE Qt5::Core)
