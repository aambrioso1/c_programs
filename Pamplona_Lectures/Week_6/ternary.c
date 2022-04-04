#include <stdio.h>

// From Week6_Lecture2 (Video 10:00)
// At this point in the lecture a student asks whether C has a ternary operator....

// A demonstration of the ternary operator in C and pointers.

int *find_max(int *a, int *b){
	// Note that the function compares values but returns addresses.
	return (*a>*b ? a:b);
}

int main(){
	
	int first, second, max;
	printf("Enter two numbers: ");
	scanf("%d %d", &first, &second);

	max = *find_max(&first, &second);

	printf("The bigger of %d and %d is %d.", first, second, max);

	return 0;
}