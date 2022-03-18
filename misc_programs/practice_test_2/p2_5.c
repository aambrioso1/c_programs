#include <stdio.h>
void func(int *a, int n);
int main()
    {
    int a1[5]={0};
    func(a1, 5);
    printf("a1[3] = %d", a1[3]);

    printf("\n***********\n");
     return 0;
    }

void func(int *a, int n)
{
    int *p;
    *a=0;

    printf("***********\n");
    for (p=a+1; p<a+n; p++) {
        *p = p - a + *(p - 1);
        // p - a computes how far along the array a pointer p has advanced.
        printf("iteration %d\n***********\n", p - a);
        printf("p - a = %d\n", p - a);
        printf("    *p = p - a + *(p - 1) = %d\n\n", *p);
    }
    printf("***********\n");
}
