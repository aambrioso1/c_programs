#include <stdio.h>


int main() {
    #define N 5 
    int a[N] = {4,1,5,6,3}; 
    int *p=a, *q=a+N-1; 
    while(p < q) { 
        // If the sum of elements pointed to by p and q is odd, advance p.
        printf("*p+*q = %d\n", *p+*q);
        if((*p+*q)%2 == 1) { 
            p++; 
        // Otherwise advance q.
        } else { 
            
            q--; 
        } 
    } 
    printf("*q = %d\n", *q);
}

/*********************** Result ***************************************

1.  p points at 4 and q points at 3, sum = 7, odd, so increment p
2.  P points at 1 and q points at 3, sum = 4, even, so decrement q
3.  p points at 1 and q points a 6, sum = 7, odd, so increment p
4.  P points at 5 and q points at 6, sum = 11, odd, so increment p
5.  p points at 6 and q ponts at 6, p = q, the while condition is now false, drop out of while loop.
6.  print *q:   

Outpoint:  *q = 6
***********************************************************************/