#include <stdio.h>
#include <string.h>

/***** Problem 9 on Practice Test 2 *****/

// Note the initialization of the strings.

void swap(int *x, int *y);

int main(void) {

    int x=11, y=13;

    printf("Before: x = %d and y = %d\n", x, y);
    swap(&x, &y);
    printf("After:  x = %d and y = %d\n", x, y);

    return 0;
}


    /****** 
    // a)    
    void swap(int *x, int *y) { 
        int *tmp;
        tmp = x; // This is incorrect.   We need to swap the values not the addresses.
        x=y;
        y=tmp;
    }
    *****/
    
    // b)  This is the correct answer.

    void swap(int *x, int *y) { 
        int tmp;
        tmp = *x;
        *x=*y;
        *y=tmp;
    }

    /****** 
    // c)
    void swap(int *x, int *y) { 
        int tmp;
        tmp = *x;
        *y=*x;  // This changes *y with no way to swap its original value to *x.
        *x=tmp;  
    }
    ******/

/********************* OUTPUT **************************

Before: x = 11 and y = 13
After:  x = 13 and y = 11

********************************************************/