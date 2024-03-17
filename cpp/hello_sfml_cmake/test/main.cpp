#include <stdio.h>
#include <unity.h>

void setUp(void) {

}

void tearDown(void) {

}

void test_add(void) {
    TEST_ASSERT_EQUAL_INT(5, 2 + 3);
    TEST_ASSERT_EQUAL_INT(-5, -2 + -3);
    TEST_ASSERT_EQUAL_INT(0, -2 + 2);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add);
    return UNITY_END();
}
