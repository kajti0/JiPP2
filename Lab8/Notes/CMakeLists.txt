cmake_minimum_required(VERSION 3.20)
project(Notes)

set(CMAKE_CXX_STANDARD 17)

add_executable(Notes
        src/main.cpp
        src/Note.cpp)
include_directories(inc)
