#include <stdio.h>

// From Week6_Lecture2 (Video 52:15)
// Note that my version of this code will be badly unless size>2.

int *find_middle(int array[], int n) {
	// Find the address of the middle element of array a
	return &array[n/2];
}

int main() {
	
	int size;
	
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	int a[size];
	
	printf("Enter %d elements for the array: ", size);
	for(int i=0; i<size; i++) {
		scanf("%d", &a[i]);
	}

	// We declare a pointer variable to accept the 
	// address of the middle element in a
	int *p = find_middle(a, size);

	// We use the "value of" or indirection operator 
	// to print the value of the middle element of a
	printf("The middle of the array is %d", *p);

	// We compare addresses for instructional purposes.
	// Note that the %p format code for the address.
	int mid = size/2;

	printf("\nThe address of the middle value is %p", p);
	printf("\nThe address of the three elements around the middle are: ");
	printf("\n&a[%d] = %p, &a[%d] = %p, &a[%d] = %p.", mid-1, &a[mid-1],
		mid, &a[mid], mid+1, &a[mid+1]);
}