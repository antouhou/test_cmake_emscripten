//
// Created by anton on 07.02.19.
//
#include <vector>
#include "stdint.h"

#ifndef TEST_EMSCRIPTEN_PROJECT_TESTCLASS_H
#define TEST_EMSCRIPTEN_PROJECT_TESTCLASS_H

namespace testlib {
    class TestClass {
    public:
        // Some constant
        static const int DATA_SIZE = 1;

        // Static method that takes bytes and returns nothing
        static int FromBytes(const uint8_t* bytes);

        // Instance method that returns array of bytes
        std::vector<uint8_t> Serialize() const;
    };
}

#endif //TEST_EMSCRIPTEN_PROJECT_TESTCLASS_H
