//
// Created by anton on 09.02.19.
//

#include "testclasswrapper.h"
#include <vector>
#include "stdint.h"
#include <stdio.h>
#include "../src/testclass.cpp"
#include "emscripten/val.h"
#include "helpers.cpp"

using namespace emscripten;

namespace js_bindings {
TestClassWrapper::TestClassWrapper(TestClass& t) : wrapped(t) {}

TestClassWrapper TestClassWrapper::FromBytes(val uint8Array) {
    std::vector<uint8_t> bytes = helpers::uint8ArrayToVector(uint8Array);
    TestClass testInstance = TestClass::FromBytes(bytes.data(), bytes.size());
    TestClassWrapper tw = TestClassWrapper(testInstance);
    std::vector<uint8_t> another_bytes = testInstance.Serialize();
    return tw;
}

val TestClassWrapper::Serialize() {
    const std::vector<uint8_t> vec = wrapped.Serialize();
    return helpers::vectorToUint8Array(vec);
}
};