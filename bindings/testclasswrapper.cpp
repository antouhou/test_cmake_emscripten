//
// Created by anton on 09.02.19.
//

#include "testclasswrapper.h"
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iterator>
#include <iostream>
#include "stdint.h"
#include "../src/testclass.cpp"
#include "emscripten/val.h"

using namespace emscripten;

val dataToUint8Array(const std::vector<uint8_t> vec) {
    return val(typed_memory_view(vec.size(), vec.data()));
}

//std::vector<uint8_t> jsBufferToVector(val jsBuffer) {
//
//}

namespace js_bindings {
TestClassWrapper::TestClassWrapper(TestClass& t) : wrapped(t) {}

TestClassWrapper TestClassWrapper::FromBytes(const std::string bytesAsAString) {
    auto bytes = reinterpret_cast<const uint8_t*>(&bytesAsAString);
    TestClass testInstance = TestClass::FromBytes(bytes);
    TestClassWrapper tw = TestClassWrapper(testInstance);
    return tw;
}

val TestClassWrapper::Serialize() {
    const std::vector<uint8_t> serialized = wrapped.Serialize();
//    std::ostringstream oss;
//    std::copy(serialized.begin(), serialized.end(), std::back_inserter(oss));
//    const std::string serializedString(serialized.begin(), serialized.end());
    // const std::string serializedString = reinterpret_cast<const string>(&serialized);
//    return serializedString;
    return dataToUint8Array(serialized);
}
};