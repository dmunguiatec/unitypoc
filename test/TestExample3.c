#include "unity.h"
#include "../src/Example3.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_fail_should_fail(void)
{
    TEST_ASSERT_EQUAL(fail(), 1);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_fail_should_fail);
    return UNITY_END();
}