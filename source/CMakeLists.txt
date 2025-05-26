cmake_minimum_required(VERSION 3.16) 

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(main_zoo)

add_executable(main double_dispatch1.cpp)

add_library(zoo STATIC zoo.cpp)

target_link_libraries(main zoo)

target_include_directories(zoo PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
