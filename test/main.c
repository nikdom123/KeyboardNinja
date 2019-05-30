#define CTEST_MAIN
#define CTEST_COLOR_OK
#include "compare.h"
#include "ctest.h"

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}

CTEST(time_test1, success)
{
    int result = c_time(1, 20, 18.76);
    ASSERT_EQUAL(0, result);
}
CTEST(time_test2, success)
{
    int result = c_time(1, 20, 20);
    ASSERT_EQUAL(0, result);
}
CTEST(time_test3, failure)
{
    int result = c_time(1, 60, 76.2);
    ASSERT_EQUAL(1, result);
}
CTEST(time_test4, failure)
{
    int result = c_time(2, 60, 50.854);
    ASSERT_EQUAL(1, result);
}
CTEST(time_test5, success)
{
    int result = c_time(2, 60, 16.48);
    ASSERT_EQUAL(0, result);
}
CTEST(time_test6, failure)
{
    int result = c_time(3, 60, 16.48);
    ASSERT_EQUAL(1, result);
}
CTEST(time_test7, success)
{
    int result = c_time(3, 60, 5.52);
    ASSERT_EQUAL(0, result);
}
