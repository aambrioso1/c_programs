// TODO - Implement your tests in this file using testlib functions

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "testlib.h"
#include "tools.h"
/*
Assignment M5PA
File tests.c
Student: Joo-Young Gonzalez U60918693
Date: 11/20/2023
Features: A variety of string test inputs for our word_modify function in tools.c. Ensures words are being properly parsed, and then reversed while maintaining the original string's word order.

Bugs: My code is failing one of the tests I created, test#9, it is not handling spaces that come 	after the last word of a string. I'm not sure if this is a bug or something we didn't necessarily need to test for since the reversal of all the words is still correct.
*/


// Number of tests in the arrays below
const int NB_TESTS = 9;

// strings to be used with words_modify when testing
const char *tests_inputs[] = {
    "hello",                  /* making sure we translate a single word */
    "how are you",            /* same with multiple words */
    "several   spaces",       /* several spaces in a row are just fine */
    "a",		       /* can i reverse a single character?*/
    " silly goose",           /* beginning with a space*/
    "my favorite number is 13",  /* testing numbers */
    "But 0 causes me problems",  /* testing 0*/
    "particularly here 0",       /* testing 0 at the end*/
    "just to be safe, a space ",  /* a comma and a space at the end*/
 
};  

// Expected results from words_modify when applied to the above
const char *tests_expected[] = {
    "olleh",
    "woh era uoy",
    "lareves   secaps",
    "a",
    " yllis esoog",
    "ym etirovaf rebmun si 31",
    "tuB 0 sesuac em smelborp",
    "ylralucitrap ereh 0",
    "tsuj ot eb efas  a ecaps ",

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
