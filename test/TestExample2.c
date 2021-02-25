#include "unity.h"
#include "../src/Example2.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_SecretOfLife_should_be42(void)
{
    TEST_ASSERT_EQUAL(secretOfLife(), 42);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_SecretOfLife_should_be42);
    return UNITY_END();
}