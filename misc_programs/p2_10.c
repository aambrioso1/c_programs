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
    
    // b)

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
        *y=*x;  // This changes *y with no way to swap its original value it to *x.
        *x=tmp;  
    }
    ******/

/********************* OUTPUT **************************

Value of strcmp(s1, s2) < 0 = 0
s1 = Program
s1 = DesignProgram

If we change the line strcpy(s1, "Program"); to strcpy(s1, "Copmuter") the output is this:

Value of strcmp(s1, s2) < 0 = 1
s1 = ComputerDesign
s1 = Design

Why?

********************************************************/