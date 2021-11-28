cmake_minimum_required(VERSION 3.20)
project(node)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(node source/main.cpp source/Node.cpp source/Vector.cpp)
