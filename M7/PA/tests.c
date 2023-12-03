// TODO - Implement your tests in this file using testlib functions

#include <stdio.h>
#include <stdlib.h>

#include "testlib.h"
#include "tools.h"

void test_example(){
    // Example test function for you to adapt
    struct dictionary * d = NULL;
    d = dictionary_build(-3);
    TEST("Building with negative size should return NULL", d==NULL);
}

void runAllTests(){
     /* ROLE       Runs all the tests specified and displays results
     */

    // For instance, you would have the following line in our example;
    // test_example();
}
