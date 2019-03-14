//
// Created by guyis on 2019/3/14.
//

#include "unity.h"
#include "../demo/fibonacci.c"

void test_fibonacci() {
    TEST_ASSERT_EQUAL(1, fib(0));
    TEST_ASSERT_EQUAL(1, fib(1));
    TEST_ASSERT_EQUAL(233, fib(12));
}

int main(void) {
    UNITY_BEGIN();

    RUN_TEST(test_fibonacci);

    return UNITY_END();
}