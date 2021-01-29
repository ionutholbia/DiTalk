cmake_minimum_required(VERSION 3.17)
project(DiTalks)

add_definitions("-std=c++14")


include(${CMAKE_SOURCE_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

set(BOOST_INCLUDE_DIR ${CONAN_INCLUDE_DIRS_BOOST} CACHE PATH "Boost include dir" FORCE)

add_subdirectory(src)
