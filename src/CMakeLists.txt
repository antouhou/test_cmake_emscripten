CMAKE_MINIMUM_REQUIRED(VERSION 3.1.0 FATAL_ERROR)
set (CMAKE_CXX_STANDARD 11)

file(GLOB HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/*.hpp)
source_group("SrcHeaders" FILES ${HEADERS})

set(C_LIB ${CMAKE_BINARY_DIR}/testlib.a)

# Compiling the lib for using with other cpp projects
add_library(testlib ${CMAKE_CURRENT_SOURCE_DIR}/testclass.cpp)
