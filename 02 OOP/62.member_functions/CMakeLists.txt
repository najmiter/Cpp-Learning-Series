cmake_minimum_required(VERSION 3.23)
project(62_member_functions)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(62_member_functions
        main.cpp
        Shop.cpp
        Shop.hpp)
