#!/usr/bin/env bash

mkdir build
cd build

emmake cmake ../
emmake cmake --build . --