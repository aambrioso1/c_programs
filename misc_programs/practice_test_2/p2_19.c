#include <stdio.h>
#include <string.h>
#include <ctype.h>

/***** Problem 19 on Practice Test 2 
 * 
 * Due to lack of time this program is basically the one in the solutions given by the instructors.
 * I added comments and a main program that works.
 * 
 * The program is straight forward.   A flag is intialize as 1 meaning that the string is assumed to be
 * all uppercase.   The program iterates through the string and sets the flag to 0 if it finds a lowercase letter.
 * Note that the islower(ch) is used to check if a character is lowercase.
 * There are two versions of the code.   One uses array indexing the the strlen(str) library function to iterate through
 * the string being check and find the end of the string.  The other version uses pointer arithmetic and to iterate and
 * the required '\0' to find the end of the string.
 * 
 * Note:  My compiler require the use the the ctype.h library to avoid a warning for using islower().
 * 
 * 
 * *****/

int is_all_uppercase(char str[]);
int is_all_uppercase_point(char str[]);

int main() {

    printf("Is \"ALEXANDER\" all uppercase? %d\n", is_all_uppercase("ALEXANDER"));
    printf("Is \"ALEXANDER\" all uppercase? %d\n", is_all_uppercase_point("ALEXANDER"));
    printf("Is \"Alexander\" all uppercase? %d\n", is_all_uppercase("Alexander"));
    printf("Is \"Alexander\" all uppercase? %d\n", is_all_uppercase_point("Alexander"));
    printf("Is \"ALEXaNDER\" all uppercase? %d\n", is_all_uppercase("ALEXaNDER"));
    printf("Is \"ALEXaNDER\" all uppercase? %d\n", is_all_uppercase_point("ALEXaNDER"));

    return 0;
}


int is_all_uppercase(char str[]) {
    int flag = 1;
    int n = strlen(str);
    for(int i=0; i < n; i++) {
        if(islower(str[i])) {
            flag = 0;
        break;
    }
 }
 return flag;
}

//pointer version
int is_all_uppercase_point(char str[]) {
    int flag = 1;
    
    // Use a point p to iterate through the array.
    // One advantage is that we do not need to compute the length of the array.
    // We can simply terminate the loop when we reach the null character at the end of the string.
    // char *p;
    for(char *p = str; *p !='\0'; p++) {
        if(islower(*p)) {
            flag = 0;
            break;
        }
    }
    return flag;
}


/********************* OUTPUT **************************

Is "ALEXANDER" all uppercase? 1
Is "ALEXANDER" all uppercase? 1
Is "Alexander" all uppercase? 0
Is "Alexander" all uppercase? 0
Is "ALEXaNDER" all uppercase? 0
Is "ALEXaNDER" all uppercase? 0


********************************************************/