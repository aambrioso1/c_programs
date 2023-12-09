// TODO - Implement your tests in this file using testlib functions

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tools.h"
#include "testlib.h"

void test_single_word(){
    // Example of test function
    char *translation = NULL;
    
    translation = taurahize_word("qwer");
    TEST("Testing a 4-letter word", strcmp(translation, "Aoke") == 0);
    free(translation);

    translation = taurahize_word("FUN");
    TEST("Testing a 3-letter word", strcmp(translation, "Aki") == 0);
    free(translation);
    
    translation = taurahize_word("ComputerScienceisfun");
    TEST("Testing a big (>15 letters) word", strcmp(translation, "#@%") == 0);
    free(translation);

    translation = taurahize_word("Computer");
    TEST("Testing an 8-letter word", strcmp(translation, "Akiticha") == 0);
    free(translation);

    translation = taurahize_word("");
    TEST("Testing blank word", strcmp(translation, "") == 0);
    free(translation);

    translation = taurahize_word("ComputerScience");
    TEST("Testing a 15-letter word", strcmp(translation, "Ishnehalohporah") == 0);
    free(translation);
}

void test_multiple_words(){
    // Example of test function
    char *translation = NULL;
    
    translation = taurahize_phrase("qwer asdf tyui");
    TEST("Testing 3 words", strcmp(translation, "Aoke Aoke Aoke") == 0);
    free(translation);

    translation = taurahize_phrase("Whatchmacallit");
    TEST("Testing 1 word", strcmp(translation, "Awakeeahmenalo") == 0);
    free(translation);

    translation = taurahize_phrase("Computer Science");
    TEST("Testing 2 words", strcmp(translation, "Akiticha Ishnelo") == 0);
    free(translation);

    translation = taurahize_phrase("Once upon a midnight dreary");
    TEST("Testing 5 words", strcmp(translation, "Aoke Aoke A Akiticha Aloaki") == 0);
    free(translation);

    translation = taurahize_phrase("The whatchmacallit_function is very useful");
    TEST("Testing 5 words with a big word", strcmp(translation, "Aki #@% Ba Aoke Aloaki") == 0);
    free(translation);
}

void runAllTests(){
    // this is how you would use the tests examples above;
    test_single_word();
    test_multiple_words();
}
