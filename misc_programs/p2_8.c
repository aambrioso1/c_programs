#include <stdio.h>

/* Find the cause of the segmentation fault in this program.

Cause:  Line 19 in the Test Review.   This is line 26 in my code.

*/

void max_min(int *a, int n, int *max, int *min);
 
 int main(void) {
 
    int a[]={6, 8, 14, 5, 9, 23, 45, 65, -2, 256, 32};
 
    int max_a, min_a;
    
    int N = 11; // Number of items in a

    max_min(a, N, &max_a, &min_a);

    printf("max is %d and min is %d\n", max_a, min_a);
    
    return 0;
}

void max_min(int *a, int n, int *max, int *min) {
    int *p;
    
    // max = min = *a;   This is the line that causes the segmentation fault.
    // max and min are pointers but *a is an integer value.
    
    // The correct code below assigns the integer *a to address pointed to by *max and *min.
    // This initializes *max and *min for the search algorithm.
    *max = *min = *a;  

    for (p = a; p < a + n; p++) {
        if (*p > *max)
            *max = *p;
        else if (*p < *min)
            *min = *p;
        }
    }


