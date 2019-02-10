//
// Created by anton on 09.02.19.
//

#ifndef TEST_EMSCRIPTEN_PROJECT_TESTCLASSWRAPPER_H
#define TEST_EMSCRIPTEN_PROJECT_TESTCLASSWRAPPER_H

#include "../src/testclass.h"
#include "emscripten/val.h"
#include <string>
#include <vector>
#include "stdint.h"

using namespace testlib;

namespace js_bindings {
    class TestClassWrapper {
        public:
            static TestClassWrapper FromBytes(const std::string bytes);

            emscripten::val Serialize();
            TestClassWrapper(TestClass& t);
        private:
            TestClass& wrapped;
    };
}


#endif //TEST_EMSCRIPTEN_PROJECT_TESTCLASSWRAPPER_H
