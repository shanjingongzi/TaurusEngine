cmake_minimum_required(VERSION 3.4.1)
project(Core)
aux_source_directory( ${CMAKE_CURRENT_SOURCE_DIR}/src SRCS)
add_library(Core ${SRCS})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)



