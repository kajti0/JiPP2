cmake_minimum_required(VERSION 3.20)

project(konstruktory_1)

set(CMAKE_CXX_STANDARD 17)

include_directories(inc)

add_executable(konstruktory_1
        src/main.cpp
        src/Pojazd.cpp)