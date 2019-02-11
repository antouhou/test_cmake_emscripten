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
        // Static method that takes bytes and returns nothing
        static TestClass FromBytes(const uint8_t* bytes, unsigned long data_size);

        // Instance method that returns array of bytes
        std::vector<uint8_t> Serialize() const;
    private:
        // Don't allow public construction, force static methods
        TestClass() {}
        std::vector<uint8_t> data;
    };
}

#endif //TEST_EMSCRIPTEN_PROJECT_TESTCLASS_H
