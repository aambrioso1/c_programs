// TODO - nothing, do not modify this file

#include <stdlib.h>
#include <stdio.h>
#include "testlib.h"

void TEST(const char * const shortDescription, int boolexp){
    // keep track of tests numbers
    static int testNumber = 0;
    testNumber++;

    // string representing the outcome of the test
    char* testResult = NULL;

    // determining the outcome
    if(boolexp){
        testResult = "OK";
    }else{
        testResult = "FAILS";
    }

    printf("[Test] #%3d --> %-5.5s\t%-50.50s\n", testNumber, testResult, shortDescription);
    fflush(stdout);
}
