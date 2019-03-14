cmake_minimum_required(VERSION 3.9)
project(demo_cmake_unity C)

set(CMAKE_C_STANDARD 99)

add_executable(demo_cmake_unity main.c)

enable_testing()

# Main test
add_test (MainRuns demo_cmake_unity 12)

add_test (MainAssets demo_cmake_unity 12)
set_tests_properties (MainAssets
        PROPERTIES PASS_REGULAR_EXPRESSION "233")

# Unit Test