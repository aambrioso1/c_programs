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

void test_dictionary_build(){
    // Word to use for dictionary build
    char* englishWords[] =  
                        {
                        "dog", "daughter", "woman", "boy", "word", 
                        "dictionary", "good", "talk", "Spanish", "English"
                        };
    char* foreignWords[] =  
                        {
                        "perro", "hija", "mujer", "muchacho", "palabra",
                        "diccionario", "bueno", "hablar", "espanol", "ingles"
                        };

    Dictionary *myDictionary = dictionary_build(10);
    TEST("Parameters are built into the dictonary", myDictionary->nbwords == 0 && myDictionary->size == 10 );
    // printf("%d\n", myDictionary->nbwords);
    // printf("%d\n", myDictionary->size);


}

void runAllTests(){
     /* ROLE       Runs all the tests specified and displays results
     */

    // For instance, you would have the following line in our example;
    test_example();
    test_dictionary_build();
}
