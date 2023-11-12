// bubble_sort.c
// Sorting an array's values into ascending order.
// From textbook, pages 266 and 267

#include <stdio.h>
#define SIZE 10

// function main begins program execution
int main(void) {
	// int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
	int a[SIZE] = {'a', '3', 98, 'm', 'f', 'g', 99, 'j', 'r', 'p'};
	puts("Data items in original order");

	// output original array
	for (size_t i = 0; i < SIZE; ++i) {
		printf("%4c: %4d", (char) a[i], a[i]);
 	}

	// bubble sort
	// loop to control number of passes
	for (int pass = 1; pass < SIZE; ++pass) {
		// loop to control number of comparisons per pass
		for (size_t i = 0; i < SIZE - 1; ++i) {
			// compare adjacent elements and swap them if first
			// element is greater than second element
			if (a[i] > a[i + 1]) {
				int hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
			}
		}
	}

	puts("\nData items in ascending order");

	// output sorted array
	for (size_t i = 0; i < SIZE; ++i) {
		printf("%4d", a[i]);
	}

	puts("");
}