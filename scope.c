#include <stdio.h>

//This program illustrates how a pointer can be used to create a functin
// that changes the value beyond the scope of the function.   Also illustrate that
// array elements function like pointers.

void f1(int i, int a[]);
void f2(int *i, int a[]); // Function prototype not necessary but good style

int main() {

	// We pass n1 and arr to the function
	int n1 = 0;
	int arr1[3] = {1,2,3};

	printf("We pass arr1 and n1 to the function.\n");
	printf("Before the function call: n1 = %d, arr1 = [%d, %d, %d]\n", n1, arr1[0], arr1[1], arr1[2]);
	
	f1(n1, arr1);
	
	printf("After the function call:  n1 = %d, arr1 = [%d, %d, %d]\n", n1, arr1[0], arr1[1], arr1[2]);
	
	int n2 = 0;
	int arr2[3] = {1,2,3};

	printf("We pass arr2 and a pointer to n2 to the function.\n");
	printf("Before the function call: n2 = %d, arr2 = [%d, %d, %d]\n", n2, arr2[0], arr2[1], arr2[2]);
	
	f2(&n2, arr2);
	
	printf("After the function call:  n2 = %d, arr2 = [%d, %d, %d]\n", n2, arr2[0], arr2[1], arr2[2]);
}

void f1(int i, int a[]) {
	i = i + 1;
	a[1] = 3;
	a[2] = 5;
}

void f2(int *i, int a[]) {
	*i = *i + 1;
	a[0] = 2;
	a[1] = 3;
	a[2] = 5;
}

/************************************************
OUTPUT

We pass arr1 and n1 to the function.
Before the function call: n1 = 0, arr1 = [1, 2, 3]
After the function call:  n1 = 0, arr1 = [2, 3, 5]
We pass arr2 and a pointer to n2 to the function.
Before the function call: n2 = 0, arr2 = [1, 2, 3]
After the function call:  n2 = 1, arr2 = [2, 3, 5]


*************************************************/