cmake_minimum_required(VERSION 3.16) 

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(tests)

enable_testing()

add_executable(tests tests.cpp)

target_link_libraries(tests zoo gtest gmock)

add_test(test tests)