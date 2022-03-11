#include <stdio.h>
#include <string.h>

/***** Problem 11 on Practice Test 2 
 *   
 * A good was to approach these style of multiple question is to scan the 
 * various choices and observe their differences.  For this problem the difference is
 * in the initialization of i in for loop.   This leads to an easy solution.  
 * We don't what to print argv[0], the command, this eliminates (a) and (c).
 * argv[argc] does not exist because the array indexing starts at 0.   
 * That eliminates (b).
 * 
 * The answer is therefore (d)
 * 
 *********************************/


/*
// a.
#include <stdio.h>
int main(int argc, char *argv[]) {
    int i;
    for (i = argc; i >= 0; i--)
    // This will crash since argv[argc] does not exist.  Also argv[0] is the command.
        printf("%s ", argv[i]);
    printf("\n");
    return 0;
}
// b.
#include <stdio.h>
int main(int argc, char *argv[]) {
int i;
 for (i = argc; i > 0; i--)
 // This will crash since argv[argc] does not exist.
 printf("%s ", argv[i]); 
 printf("\n");
 return 0;
}
// c.
#include <stdio.h>
int main(int argc, char *argv[]) {
int i;
 for (i = argc - 1; i >= 0; i--) 
 // This will print argv[0] which is the command. 
 printf("%s ", argv[i]);
 printf("\n");
*/
// d.
#include <stdio.h>
int main(int argc, char *argv[]) {
    int i;
    for (i = argc -1; i > 0; i--)
    // This will only print the arguments after the command.   They will be printed in reverse order.
        printf("%s ", argv[i]);
    printf("\n");
    return 0;
}


/********************* OUTPUT **************************
*
* Input: ./a.out computer science
* 
* Output :  science computer
* 
********************************************************/