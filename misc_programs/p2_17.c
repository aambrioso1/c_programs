#include <stdio.h>
#include <string.h>

/***** Problem 17 on Practice Test 2 *****/

// 

void edge(int *a1, int *a2, int n);

int main() {

    int N_a = 8, N_b = 10, N_c = 10;

    int a[] = {0,0,1,0,1,1,0,1};
    int b[] = {0,1,0,1,0,1,0,1,0,1};
    int c[] = {1,1,1,1,1,0,0,0,0,0};
    int a_out[7], b_out[10], c_out[10];

    edge(a, a_out, N_a);
    edge(b, b_out, N_b);
    edge(c, c_out, N_c);

    printf("Output for the edge of a: ");
    for (int i = 0; i < N_a; i++)
        printf("%d", a_out[i]);
    printf("\n");

    printf("Output for the edge of b: ");
    for (int i = 0; i < N_b; i++)
        printf("%d", b_out[i]);
    printf("\n");

        printf("Output for the edge of c: ");
    for (int i = 0; i < N_c; i++)
        printf("%d", c_out[i]);
    printf("\n");

    return 0;
}


void edge(int *a1, int *a2, int n) {
    // We use two pointer p and q to keep track of the position in a1 and a2 respectively.
    // if the if statement we check if the next bit is different from the previous, adjust
    // the appropriate bit in a2, and advance the both pointers.   The iteration stops before the last
    // character since the first bit of a2 must be zero and the last of a1 has not bit after to check.
    int *p, *q = a2;
    *q = 0;
    q++;
    for(p = a1; p < a1 + n - 1; p++, q++) {
        if (*(p+1) != *p) {
            *q = 1;
            // q++; // We can iterate q in the for loop.
        }
        else {
            *q = 0;
            // q++; We can iterate q in the for loop.
        }
    } 
}

// Original declaration for easy reference.
//    int a[] = {0,0,1,0,1,1,0,1};
//    int b[] = {0,1,0,1,0,1,0,1,0,1};
//    int c[] = {1,1,1,1,1,0,0,0,0,0};

/********************* OUTPUT **************************

Output for the edge of a: 00111011
Output for the edge of b: 0111111111
Output for the edge of c: 0000010000

********************************************************/