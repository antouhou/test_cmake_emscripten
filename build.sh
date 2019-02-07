#!/usr/bin/env bash

mkdir build
cd build

cmake ../ -DCMAKE_TOOLCHAIN_FILE=/home/anton/Programs/emsdk/emscripten/1.38.25/cmake/Modules/Platform/Emscripten.cmake
cmake --build . --
