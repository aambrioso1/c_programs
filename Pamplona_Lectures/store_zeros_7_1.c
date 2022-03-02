#include <stdio.h>

// From Week7_Day1 (Video 47:14) 
// Write a function that stores zeros for each element of an array.
// Note that this example uses pointer arithmetic and avoids use the
// array indices explicitly.  That is we don's use a[n].

// We can also replace int *a with int a[].   But int *a is 
// more accurate since a pointer is passed not an array.
void store_zeros(int *a, int n) {
	int *p;
	for (p = a; p < a + n; p++) {
		*p = 0;
	}
}

int main() {
	int b[5] = {0, 4, 2 , 3 , 4};

	printf("Before: ");
	for(int i=0; i<5; i++) {
		printf("%d ", b[i]);
	}
	printf("\n");

	store_zeros(b, 5);
	printf("After:  ");
	for(int i=0; i<5; i++) {
		printf("%d ", b[i]);
	}
	printf("\n");
}