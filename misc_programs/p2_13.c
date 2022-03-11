#include <stdio.h>

/***** Problem 13 on Practice Test 2 *****/

int read_line(char *str, int n) {
    int ch, i = 0;
    while((ch = getchar()) == ' ');  // Skips initial white space.
    *str++= ch;
    i++;
    while ((ch = getchar()) != '\n') { 
        if (i < n) {
            *str++= ch;
            i++;
        }
    }
    *str = '\0'; 
    return i; 
}

int main(void) {

    char s[101];    
    read_line(s, 101);
    printf("The string without initial white spaces is \"%s.\"", s);

    return 0;
}



/********************* OUTPUT **************************

Input:         I like   computer     science
Output: The string without initial white spaces is "I like   computer     science."

********************************************************/