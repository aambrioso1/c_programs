#include <stdio.h>

int main(){

    #define N 10
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // We declare p and q so that p points to the beginning of the array and q points to the end.
    int *p = a, *q = a+N-1;
    
    printf("Before code runs: a[%d] = ", N);
    for (int i = 0; i < N-1; i++)
        printf("%d, ", a[i]);
    printf("%d\n", a[N-1]);

    while(p<q) {
     *p = *q;  // Set the value of p to the value of q.
     *q = *p;  // This does not do anything since *p has just be set to *q.
     p++;
     q--;
    }

    printf("After code runs: a[%d] = ", N);
    for (int i = 0; i < N-1; i++)
        printf("%d, ", a[i]);
    printf("%d\n", a[N-1]);
}


