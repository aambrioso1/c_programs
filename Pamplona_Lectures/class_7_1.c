#include <stdio.h>

// From Week7_Lecture1 (video: near beginning)

// Combining * and p++
// Look up precedence table
// difference ++i and i++
void store_zeros(int a[], int n);

int main() {
	int i = 0;
	int a[5] = {0,1,2,3,4};
	int *p;
	p = &a[2];

	// Thes examples show precedence ruls for * and ++
	
	for (p = &a[0]; p < &a[5]; p++) {
		printf("a[%d] = %d ", i, *p);
		i++;
	}
	printf("\n");

	printf("*p++ = %d, *p = %d\n", *p++, *p);
	printf("*++p = %d, *p = %d\n", *++p, *p);

	// Array addresses work with pointer arithmetic
	printf("*(&a[3]+1) = %d\n", *(&a[3]+1) );

	// Use array address to iterate through an array
	for (p = &a[0]; p < &a[5]; p++) {
		printf("*p = %d \n", *p);
	}

	p = &a;
	while (*p != 4)
		p++;
	printf("p-a = %d\n", p-a);
	printf("p - a = %ld", (int) p - (int) a);

	// Sets all values in an array to 0
	void store_zeros(int a[], int n) {
		int *p;
		for (p =a; p < a+n; p++) {
			*p = 0;
		}
	}

		// Video 56 minutes
	void max_min(int a[], int n, int *max, int *min);

	// Segmentation fault - accessing memory that should not be accessed
	// Also accessing memory before or after an array.

	// Finding segmentation faults segmentation_fault_example1-4.c

	return 0;
}