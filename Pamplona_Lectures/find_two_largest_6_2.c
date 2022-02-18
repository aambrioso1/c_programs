#include <stdio.h>

// From Week6_Lecture2 (Video 1:00) 
// Write find-two_largest.  When passed an array of length n, the  
// function will search the array for its largest and second 
// largest elements, storing them in the variables pointed by
// largest and second largest, respectively.


int *find_two_largest(int a[], int n, int *largest, int *second_largest) {
	// Returns the address of the largest element in a[].
	if(a[0]>a[1]) {
		*largest = a[0];
		*second_largest = a[1];
	} 
	else {
		*largest = a[1];
		*second_largest = a[0];
	}

	for (int i=2; i < n; i++) {
		if (a[i] > *largest) {
			*second_largest = *largest;
			*largest = a[i];
		}
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
	 
	// Pointer p is assigned the address of largest element in a[].
	int first, second;
	find_two_largest(array, n, &first, &second);  

	printf("The first and second largest are %d %d.\n", first, second);

}

