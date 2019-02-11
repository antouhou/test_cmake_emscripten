CMAKE_MINIMUM_REQUIRED(VERSION 3.1.0 FATAL_ERROR)
set(CMAKE_CXX_STANDARD 11)

add_executable(js-testlib-asm ${CMAKE_CURRENT_SOURCE_DIR}/../bindings/bindings.cpp)

set_target_properties(js-testlib-asm PROPERTIES LINK_FLAGS "--bind -s WASM=0")

add_executable(js-testlib-wasm ${CMAKE_CURRENT_SOURCE_DIR}/../bindings/bindings.cpp)

set_target_properties(js-testlib-wasm PROPERTIES LINK_FLAGS "--bind -s SINGLE_FILE=1")

