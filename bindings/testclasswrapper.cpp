//
// Created by anton on 09.02.19.
//

#include "testclasswrapper.h"
#include <string>
#include <vector>
#include "stdint.h"
#include "../src/testclass.cpp"

namespace js_bindings {
TestClassWrapper::TestClassWrapper(TestClass& t) : wrapped(t) {}

TestClassWrapper TestClassWrapper::FromBytes(const std::string bytesAsAString) {
    auto bytes = reinterpret_cast<const uint8_t*>(&bytesAsAString);
    TestClass testInstance = TestClass::FromBytes(bytes);
    TestClassWrapper tw = TestClassWrapper(testInstance);
    return tw;
}

std::string TestClassWrapper::Serialize() {
//    const std::vector<uint8_t> serialized = wrapped.Serialize();
//    const std::string serializedString = reinterpret_cast<const string>(&serialized);
//    return serializedString;
    return "123";
}
};