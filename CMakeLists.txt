CMAKE_MINIMUM_REQUIRED(VERSION 3.1.0 FATAL_ERROR)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

IF(NOT CMAKE_BUILD_TYPE)
  SET(CMAKE_BUILD_TYPE "RELEASE")
ENDIF()

project(TEST_EMSCRIPTEN_PROJECT)

# Add path for custom modules
set(CMAKE_MODULE_PATH
	${CMAKE_MODULE_PATH}
	${CMAKE_CURRENT_SOURCE_DIR}/cmake_modules
)

# Add directory with the main lib
add_subdirectory(src)
# Add directory with bindings
add_subdirectory(bindings)
