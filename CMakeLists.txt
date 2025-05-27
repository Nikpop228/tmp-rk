cmake_minimum_required(VERSION 3.16) 

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(double_dispatch1)

add_subdirectory(source)
add_subdirectory(third-party/googletest)
add_subdirectory(tests)

set(CPACK_GENERATOR DEB)
set(CPACK_PACKAGE_NAME "double_dispatch1")
set(CPACK_PACKAGE_VERSION "1.0.0")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Nikpop228")
include(CPack)