#include <stdio.h>
#include <string.h>

/***** Problem 9 on Practice Test 2 *****/

// Note the initialization of the strings.


int main(void) {
    
    char s1[20], s2[20];

    strcpy(s1, "Computer");
    strcpy(s2, "Design");
    if (strcmp(s1, s2) < 0)
        strcat (s1, s2);
    else 
        strcat(s2, s1);

    printf("Value of strcmp(s1, s2) < 0 = %d\n", strcmp(s1, s2) < 0);
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);

    return 0;
}

/********************* OUTPUT **************************

Value of strcmp(s1, s2) < 0 = 0
s1 = Program
s1 = DesignProgram

If we change the line strcpy(s1, "Program"); to strcpy(s1, "Computer") the output is this:

Value of strcmp(s1, s2) < 0 = 1
s1 = ComputerDesign
s2 = Design

Why?

********************************************************/