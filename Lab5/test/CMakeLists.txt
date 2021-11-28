cmake_minimum_required(VERSION 3.16)

project(test)
include_directories(include)

add_executable(test src/main.cpp src/Point.cpp)