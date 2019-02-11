//
// Created by anton on 07.02.19.
//
#include <vector>
#include "stdint.h"
#include <stdio.h>
#include <algorithm>

#include "testclass.h"

namespace testlib {
// Static method that takes bytes and returns a number
TestClass TestClass::FromBytes(const uint8_t* bytes, unsigned long data_size) {
    TestClass t;
    t.data.reserve(data_size);
    std::copy(bytes, bytes + data_size, std::back_inserter(t.data));
    return t;
};

// Instance method that returns array of bytes
std::vector<uint8_t> TestClass::Serialize() const {
    return data;
};
}
