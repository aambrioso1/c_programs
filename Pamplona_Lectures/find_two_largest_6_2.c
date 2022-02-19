#include <stdio.h>

// From Week6_Lecture2 (Video 1:00) 
// Write find_two_largest.  When passed an array of length n, the  
// function will search the array for its largest and second 
// largest elements, storing them in the variables pointed by
// largest and second_largest, respectively.


int *find_two_largest(int a[], int n, int *largest, int *second_largest) {
	// Returns the address of the largest and second largest elements in a[].
	if(a[0]>a[1]) {
		// Initialization depends on the ordering of the first two elements.
		*largest = a[0];
		*second_largest = a[1];
	} 
	else {
		*largest = a[1];
		*second_largest = a[0];
	}

	for (int i=2; i < n; i++) {
		// Need to modify largest AND second largest if the 
		// next element is the largest.
		if (a[i] > *largest) {
			*second_largest = *largest;
			*largest = a[i];
		}
		// Check if next element is second largest.
		else if (a[i] > *second_largest) {
			*second_largest = a[i];
		}
	}
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
	 
	// Note that addresses are used for the function call.
	int first, second;
	find_two_largest(array, n, &first, &second);  

	printf("The first and second largest elements are %d %d.\n", first, second);

}

