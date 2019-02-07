//
// Created by anton on 07.02.19.
//

#include "emscripten/bind.h"
#include "../src/testclass.h"

using namespace emscripten;

namespace testlib {
    EMSCRIPTEN_BINDINGS(libtest) {
            class_<TestClass>("TestClass")
                    .constructor()
                    .function("serialize", &TestClass::Serialize)
                    .class_function("fromBytes", &TestClass::FromBytes, allow_raw_pointers());
    };
}
