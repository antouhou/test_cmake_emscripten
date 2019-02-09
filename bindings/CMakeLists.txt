CMAKE_MINIMUM_REQUIRED(VERSION 3.1.0 FATAL_ERROR)
set(CMAKE_CXX_STANDARD 11)

add_executable(js-testlib ${CMAKE_CURRENT_SOURCE_DIR}/../bindings/bindings.cpp)

set_target_properties(js-testlib PROPERTIES LINK_FLAGS "--bind -s ERROR_ON_UNDEFINED_SYMBOLS=0 -s DEMANGLE_SUPPORT=1 -s ASSERTIONS=1 -std=c++11")
