cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD  17)

include_directories(../CSV_Lib/inc)

add_executable(csv_test main.cpp)

target_link_libraries(csv_test CSV_Lib)