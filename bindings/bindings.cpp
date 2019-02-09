//
// Created by anton on 07.02.19.
//

#include "emscripten/bind.h"
#include "../src/testclass.h"
#include "testclasswrapper.cpp"

#include <iostream>

using namespace std;
using namespace emscripten;
using namespace testlib;
using namespace js_bindings;

namespace js_bindings {
    EMSCRIPTEN_BINDINGS(libtest) {
            class_<TestClassWrapper>("TestClass")
                    .class_function("fromBytes", &TestClassWrapper::FromBytes)
                    .function("serialize", &TestClassWrapper::Serialize);
    };
}
