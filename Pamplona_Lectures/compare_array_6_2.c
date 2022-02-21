#include <stdio.h>

// From Week6_Lecture2 (Video 59:00)

// Write a program that compares elements of two arrays a and b
// and stores the element in array c that are in both and and b.
// We use pointers and pointer arithmetic to iterate through the array
// and compare values.

int compare_array(int a[], int n, int value) {
	int *p, count = 0;

	for (p=&a[0]; p<&a[n]; p++) {
		if (*p > value) {
				count++;
		}
	}
	return count;
}

int main() {
	int a[6] = {17, 10, 55, 21, 500, 106};

	printf("a has %d elements greater that 50:\n", compare_array(a, 6, 50));

}

