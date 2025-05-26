cmake_minimum_required(VERSION 3.16) 

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(main_tests)

add_subdirectory(source)
add_subdirectory(third-party/googletest)
add_subdirectory(tests)
