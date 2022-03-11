#include <stdio.h>
#include <string.h>

/***** Problem 9 on Practice Test 2 *****/

// The main thing to learn here is how the points p is used to iterate through the string.
// Note the a pointer to the original string is sent to the function and the string itself is changed.
// Without the pointer p the change to the string within the function would be temporary.

void replace(char *str, char x, char y);

int main(void) {

    char s[21] = "Pamplona";

    printf("Before: %s\n", s);   
    replace(s, 'a', 'o');
    printf("After: %s\n", s);

    return 0;
}

void replace(char *str, char x, char y) {

    for(char *p = str; *p != '\0'; p++) {
        if (*p == x) {
            *p = y;
        }
    }
}

/********************* OUTPUT **************************

Before: Pamplona
After: Pomplono

********************************************************/