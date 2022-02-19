#include <stdio.h>

// From Week6_Lecture1 (Video 53:54) 
// Write a function find_two_largest.   When passed an array of 
// length n, the function will search the array for its first and second
// largest elements and store them in variable pointing to by largest and
// second largest. 

int *find_largest(int a[], int n) {
	// Returns the address of the largest element in a[].
	int *largest = &a[0];
	for(int i=1; i<n; i++) {
		if(a[i] > *largest) {
			largest = &a[i];
		}
	}
	return largest;
}

int main() {
	int n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	int array[n];
	printf("Enter %d elements for the array: ", n);
	for(int i=0; i<n; i++) {
		scanf("%d", &array[i]);
	}
	 
	// Pointer p is assigned the address of largest element in a[].
	int *p = find_largest(array,n);  

	printf("The largest element is %d\nLocated at address: %p.\n", *p, p);

}

