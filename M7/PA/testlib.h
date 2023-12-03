// TODO - nothing, do not modify this file

#ifndef TESTLIB_H_INCLUDED
#define TESTLIB_H_INCLUDED

void TEST(const char * const shortDescription, int boolexp);
/*  ROLE    This function display information about the test being "OK" or "FAILED"
            based on whether the condition used as parameter is respectively true or false
    PARAMETERS
            shortDescription    a string describing the test. 45 characters long maximum
            boolexp             the result of evaluating a boolean expression representing
                                what we are testing. If it evaluates to true, the function
                                will display that the test succeeded. Otherwise, it will
                                display that the test failed.
*/

#endif // TESTLIB_H_INCLUDED
