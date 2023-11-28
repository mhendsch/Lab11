cmake_minimum_required(VERSION 3.23)
project(Lab11)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Lab11
        Library.cpp
        Library.h
        P1.cpp)
