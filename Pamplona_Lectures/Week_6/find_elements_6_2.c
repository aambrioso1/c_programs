#include <stdio.h>

// From Week6_Lecture2 (Video 105:30)

// Write a program that compares elements of two arrays a and b
// and stores the element in array c that are in both and and b.

void find_elements(int a[], int n1, int b[], int n2, int c[], int *size) {

	int *r = &c[0]; //pointer for first address of array c.
	for (int *p=&a[0]; p<&a[n1]; p++) {
		for (int *q=&b[0]; q<&b[n2]; q++) {
			if (*p == *q) {
				*r = *p;
				r++;
				break;
			}
		}
	}
	*size = r-&c[0]; //Note that this subtraction will subtract array positions.
}

int main(){
	int a[7] = {12, 10, 55, 21, 500, 106, 8};
	int b[5] = {106, 37, 8, 10, 234};
	int c[7];
	int size;

	find_elements(a, 7, b, 5, c, &size);
	printf("a and b share %d elements:\n", size);

	for (int i=0; i < size-1; i++) {
		printf("c[%d] = %d, ", i, c[i]);
	}
	printf("and c[%d] = %d", size, c[size-1]);
	printf("\n");
}

