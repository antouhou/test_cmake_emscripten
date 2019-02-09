//
// Created by anton on 07.02.19.
//
#include <vector>
#include "stdint.h"

#include "testclass.h"

namespace testlib {
// Static method that takes bytes and returns a number
TestClass TestClass::FromBytes(const uint8_t* bytes) {
    TestClass t;
    t.data = bytes;
    return t;
};

// Instance method that returns array of bytes
std::vector<uint8_t> TestClass::Serialize() const {
    // Using constant DATA size from the header file
    std::vector<uint8_t> data(DATA_SIZE);
    return data;
};
}
