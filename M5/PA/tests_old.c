// TODO - Implement your tests in this file using testlib functions

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "testlib.h"
#include "tools.h"

// Number of tests in the arrays below
const int NB_TESTS = 4;

// strings to be used with words_modify when testing
const char *tests_inputs[] = {
    "hello",                /* making sure we translate a single word */
    "how are you",          /* same with multiple words */
    "several   spaces",      /* several spaces in a row are just fine */
    "AlexanderAmbrioso"     /* longer word */
};

// Expected results from words_modify when applied to the above
const char *tests_expected[] = {
    "olleh",
    "woh era uoy",
    "lareves   secaps",
    "osoirbmArednaxelA"
};

void runAllTests(){
    /*  ROLE    applies all the tests to our functions from tools.c
    */
    int i;
    char *test_input       		= NULL; 	/* what we provide our function with */
    const char *test_expected   = NULL;  	/* what we expect the result to be */
    char *test_observed    		= NULL; 	/* what our function returns */
    int test_outcome;              			/* test successful or not? */
    char buffer[2048];

    // Iterating over all available tests
    for(i=0; i < NB_TESTS; i++){
            // setting up this specific test
            test_input = strdup(tests_inputs[i]);
            test_expected = tests_expected[i];

            // getting the result from our implementations
            words_modify(test_input);

            // test_input has been modified
            test_observed = test_input;

            // is the outcome what we expected?
            test_outcome = strcmp(test_observed, test_expected);
            sprintf(buffer, "%-30.30s", tests_inputs[i]);

            // verifying if observed result is the expected one */
            TEST(buffer, test_outcome == 0);

            // de-allocating memory allocated by words_modify
            if (test_observed){
                free(test_observed);
            }
			test_input = NULL; 	// test_input is now a dangling pointer
    }
}
