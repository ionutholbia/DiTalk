cmake_minimum_required(VERSION 3.17)
project(DiTalks)

add_definitions("-std=c++14")


include(${CMAKE_SOURCE_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_subdirectory(src)
