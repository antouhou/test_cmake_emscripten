//
// Created by anton on 07.02.19.
//

#include "emscripten/bind.h"
#include "../src/testclass.h"

using namespace emscripten;
using namespace testlib;

EMSCRIPTEN_BINDINGS(libtest) {
        class_<TestClass>("TestClass")
                .function("serialize", &TestClass::Serialize)
                .class_function("getStringFromInstance", &TestClass::FromBytes, allow_raw_pointers());
};
