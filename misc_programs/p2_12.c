

/***** Problem 12 on Practice Test 2 *****/


// a.
#include <stdio.h> 

/*
int main(int argc, char *argv[]) { 
    int flag=1; 
    for(int i=0; i < argc; i++) { // Don't what to include argv[0], the command, in the check.
        if(argv[i] != argv[argc-i-1]) 
    flag=0; 
    } 
    if(flag) 
        printf("YES\n"); 
    else 
        printf("NO\n");
    return 0;
}
// b.
#include <stdio.h> 
#include <string.h>
int main(int argc, char *argv[]) { // Don't what to include argv[0], the command, in the check.
    int flag=1; 
    for(int i=0; i < argc; i++) { 
        if(strcmp(argv[i], argv[argc-i-1])) 
        flag=0; 
    } 
    if(flag) 
        printf("YES\n"); 
    else 
        printf("NO\n");
        return 0;
}

*/

// c.
#include <stdio.h> 
#include <string.h>
int main(int argc, char *argv[]) { 
    int flag=1; 
    for(int i=1; i < argc; i++) { 
        if(strcmp(argv[i], argv[argc-i]))
        flag=0; 
    } 
    if(flag) 
        printf("YES\n"); 
    else 
        printf("NO\n"); 
    return 0;
}

/*
// d.
#include <stdio.h>
int main(int argc, char *argv[]) { 
    int flag=1; 
    for(int i=1; i < argc; i++) { 
        if(argv[i] != argv[argc-i]) // This will only compare the base addresses not the string values
            flag=0; 
    } 
    if(flag) 
        printf("YES\n"); 
    else 
        printf("NO\n");
    return 0;
}
*/


/********************* OUTPUT **************************
*
* Input:  /a.out i like computer science 
* Output: NO
* 
* Input:  /a.out i like computer science computer like i
* Output: YES
*
*
********************************************************/