#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tools.h"

int main(){
    
    int len = 3;

    char *translation_buffer = (char *)(malloc (len + 1));


    translation_buffer[0] = 'h';
    translation_buffer[1] = 'i';
    translation_buffer[2] = '\0';

    printf("translation buffer string is %s", translation_buffer);

    return 0;
}

/*
This new function will start by measuring the length of the string to translate and allocate
dynamically a string of same length. The address of this “translation buffer” will be stored in a
translation pointer and will be initialized to have a ‘\0’ as first character. It will be used to build,
step by step, the translation of the whole string that was given to us.
*/
