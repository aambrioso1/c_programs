#include <stdio.h>
#include <string.h>

/***** Problem 16 on Practice Test 2 *****/

// The main thing to learn here is how the pointer p is used to iterate through the string.
// Note the pointer to the original string is sent to the function and the string itself is changed.
// Without the pointer p the change to the string within the function would be temporary.

void replace(char *str, char x, char y);

int main(void) {


    /* There is a nice article on strings in C here: https://www.geeksforgeeks.org/strings-in-c-2/

    Here are four ways to declare a string according to the article:

    char str[] = "Pamplona";
    char str[21] = "Pamplona";
    char str[] = {'P', 'a', 'm', 'p', 'l', 'o', 'n', 'a', '\0'};
    char str[9] = {'P', 'a', 'm', 'p', 'l', 'o', 'n', 'a', '\0'};
    
    */

    char s[9] = {'P', 'a', 'm', 'p', 'l', 'o', 'n', 'a', '\0'};
    // char s[21] = "Pamplona";

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