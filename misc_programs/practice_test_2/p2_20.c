#include <stdio.h>
#include <string.h>
#include <ctype.h>

/***** Problem 20 on Practice Test 2 *****
 * 
 * Due to lack of time this program is basically the one in the solutions given by the instructors.
 * I added comments and a main program that works.
 * 
 * 
 * 
 * 
 * 
 * *****/

void shift(char *message, int shift);


int main() {

    char s1[] = "HAL";
    char s2[] = "Go ahead, make my day.";

    shift(s1, 1);
    shift(s2, 3);
    printf("HAL shifted by 1 is %s\n", s1);
    printf("\"Go ahead, make my day.\" shifted by 3 is %s\n", s2);

    return 0;
}


void shift(char *message, int shift) { 
    char *p;
    
    // We use the usual pointer arithmetic to iterate through the string array
    for(p = message; *p != '\0'; p++) {
        
        // We check the value of the character to see if it is the the range of the uppercase letters
        // on the ASCII table

        if(*p >='A' && *p<='Z') // if(isupper(*p)) is also acceptable
        
        // To understand the next line of code first note that *p - 'A' is how far 
        // on the ASCII table from 'A' the current characther is 
        // Once we know this we can add shift shift the character the required amount.
        // The mod 26 moves the value back into the alphabet range (0 to 26).   And finally the + 'A' 
        // puts the character in the spot for the uppercase letters on the ASCII table.  
            *p =(*p - 'A' + shift) % 26 + 'A';
        // The logic here is the same as above but all the checking and shifting occurs between 'a' and 'z'.
        if(*p >='a' &&*p<='z') // if(islower(*p)) is also acceptable
            *p =(*p - 'a' + shift) % 26 + 'a';
    }
}

/********************* OUTPUT **************************

HAL shifted by 1 is IBM
"Go ahead, make my day." shifted by 3 is Jr dkhdg, pdnh pb gdb.

********************************************************/