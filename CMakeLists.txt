cmake_minimum_required(VERSION 3.9)
project(demo_cmake_unity C)

set(CMAKE_C_STANDARD 99)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/externals/CMake-codecov/cmake" ${CMAKE_MODULE_PATH})
find_package(codecov)

add_executable(demo_cmake_unity main.c)
add_coverage(demo_cmake_unity)

enable_testing()

# Main test
add_test (MainRuns demo_cmake_unity 12)

add_test (MainAssets demo_cmake_unity 12)
set_tests_properties (MainAssets
        PROPERTIES PASS_REGULAR_EXPRESSION "233")

# Unit Test
option(BUILD_TEST "Build the unit tests" ON)
if(BUILD_TEST)
    add_subdirectory(externals)
    add_subdirectory(test)
endif()

# evaluate coverage
coverage_evaluate()