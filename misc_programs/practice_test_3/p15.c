/************************Practice Test 3 - Problem 15 ********************
Topic: qsort

The answer:

12

*************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int int_cmp(const void *p, const void *q);

int a[SIZE] = {13, 45, 4, 46, 77, 34, 56, 23, 40, 17};



int main() {

	printf("Original array:\n");
	for(int i = 0; i < SIZE; i++)
	printf("a[%d] = %d\n", i, a[i]);

	qsort(a, SIZE, sizeof(int), int_cmp);
	printf("***************\n");
	printf("Sorted array:\n");
	for(int i = 0; i < SIZE; i++)
	printf("a[%d] = %d\n", i, a[i]);
	
	return 0;
}

int int_cmp(const void *p, const void *q) {
	return *(int *)p - *(int *)q;
}

/******************** OUTPUT *************************

> ./a.exe
Original array:
a[0] = 13
a[1] = 45
a[2] = 4
a[3] = 46
a[4] = 77
a[5] = 34
a[6] = 56
a[7] = 23
a[8] = 40
a[9] = 17
***************
Sorted array:
a[0] = 4
a[1] = 13
a[2] = 17
a[3] = 23
a[4] = 34
a[5] = 40
a[6] = 45
a[7] = 46
a[8] = 56
a[9] = 77


*****************************************************/