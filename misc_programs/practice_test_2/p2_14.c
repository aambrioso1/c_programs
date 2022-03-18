#include <stdio.h>
#include <string.h>

/***** Problem 14 on Practice Test 2 *****/

// A very straight forward problem on string indexing.
// Note that there are many solutions.

#include <stdio.h>
void swap(char *a, char *b) { 
    char tmp[4]; 
    strcpy(tmp, a); 
    strcpy(a, b); 
    strcpy(b, tmp); 
}

int main(){ 
    char w[3][4] = {"dog", "rat", "cat"};

    swap(w[0], w[2]);  // Get "cat" in the first position.
    swap(w[2], w[1]);  // Get "dog" and "rat" in order.

    for(int i=0; i < 3; i++)
        printf("%s\n", w[i]);
    return 0;
}
/********************* OUTPUT **************************

cat
dog
rat

********************************************************/