#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "hal.h"

void test_intarray_display();
void test_intarray_scan();
void test_intarray_sort_1();
void test_intarray_sort_2();
void test_intarray_compare_by_position();
void test_intarray_compare_by_content();

int main() {
	printf("\nRunning tests on hal functions...\n");

	// test_intarray_display();
	// test_intarray_scan();
	// test_intarray_sort_1();
	// test_intarray_sort_2();
	// test_intarray_compare_by_position();
	test_intarray_compare_by_content();

	printf("\nTests are complete...\n");
	return EXIT_SUCCESS;

}

void test_intarray_compare_by_content(){
	const int size = 4;
	int one[] = {1, 2, 3, 4};
	int two[] = {2, 1, 3, 4};
	int three[] = {1,2,3,5};

	if(!intarray_compare_by_content(one, one, size)){
		printf("ERROR 1!!!");
		printf("\n\tArray #1:\t");
		intarray_display(one, size);
		printf("\n\tArray #2:\t");
		intarray_display(one, size);
	}
	if(!intarray_compare_by_content(one, two, size)){
		printf("ERROR 2!!!");
		printf("\n\tArray #1:\t");
		intarray_display(one, size);
		printf("\n\tArray #2:\t");
		intarray_display(two, size);
	}
	if(intarray_compare_by_content(two, three, size)){
		printf("ERROR 3!!!");
		printf("\n\tArray #1:\t");
		intarray_display(two, size);
		printf("\n\tArray #2:\t");
		intarray_display(three, size);
	}

}

void test_intarray_compare_by_position(){
	const int size = 4;
	int one[] = {1,2,3,4};
	int two[] = {2, 1, 3, 4};

	if(!intarray_compare_by_position(one, two, size)){
		printf("ERROR!!!");
		printf("\n\tArray #1:\t");
		intarray_display(one, size);
		printf("\n\tArray #2:\t");
		intarray_display(two, size);

	}

}


void test_intarray_sort_2(){
	const int nb_tests = 6;
	int my_test_arrays[nb_tests][3] = {
		{1,2,3}, {1,3,2},
		{2,1,3}, {2,3,1},
		{3,1,2}, {3,2,1}
	};
	for(int i = 0; i < nb_tests ; i++){
		printf("Original array:\t");
		intarray_display(my_test_arrays[i], 3);
		intarray_sort(my_test_arrays[i],3);
		printf("Sorted array:\t");
		intarray_display(my_test_arrays[i], 3);
		printf("\n");
	}
}

void test_intarray_sort_1(){
	int my_array[4];
	printf("Testing intarray_scan:\n");
	intarray_scan(my_array, 4);
	printf("\n\tOriginal array: \t");
	intarray_display(my_array, 4);
	intarray_sort(my_array,4);
	printf("\n\tSorted array: \t");
	intarray_display(my_array, 4);

}

void test_intarray_display(){
	printf("Testing intarray_display:\n");
	int my_array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	intarray_display(my_array, 10);
}

void test_intarray_scan(){
	int my_array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	printf("Testing intarray_scan:\n");
	intarray_scan(my_array, 10);
	intarray_display(my_array, 10);

}


