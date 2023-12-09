// TODO - Nothing! Do not modify this file

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tools.h"

extern void runAllTests();

int main()
{
    printf("\tWelcome to M5PA\n\n");
    runAllTests();
    return EXIT_SUCCESS;
}
