
#include "unity/unity.h"
#include "assert.h"
#include "dollarcurrency.h"

void setUp()
{

}
void tearDown()
{

}
void test_dollercurrency(void)
{
    int n1 = 500, n2 = 75;
    TEST_ASSERT_EQUAL(6.8, dollar(n1,n2));
    
}
void test_euro(void)
{
    int n3 = 500, n4 = 87;
    TEST_ASSERT_EQUAL(5.7, euro(n3,n4));
    
    
}

int main(void)
{   

    UNITY_BEGIN();

    RUN_TEST(test_doller);
    RUN_TEST(test_euro);
    
    return UNITY_END();
}
