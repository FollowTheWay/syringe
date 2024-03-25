cmake_minimum_required(VERSION 3.24)
project(syringe)

set(CMAKE_CXX_STANDARD 17)

add_executable(syringe main.cpp src/syringe.cpp inc/syringe.h)
include_directories(${PROJECT_SOURCE_DIR}/inc)