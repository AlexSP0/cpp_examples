cmake_minimum_required(VERSION 3.5)

find_package(Qt5 COMPONENTS Quick Core REQUIRED)

project(cpp_examples)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDART 14)

set(SOURCES
   lesson01_vector2d/vector2d.h
   lesson01_vector2d/vector2d.cpp
   main.cpp)

#add executable
add_executable(vector2d ${SOURCES})
