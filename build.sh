#!/usr/bin/env bash

mkdir build

## Change those lines to you emscripten installation, or delete them if you've installed it globally
cd ./../Programs/emsdk/
./emsdk activate latest
source ./emsdk_env.sh
cd ./../../test_emscripten_cmake_project/build

emmake cmake ../
emmake cmake --build . --