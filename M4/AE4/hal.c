#include <stdio.h>

#include "hal.h"

bool intarray_compare_by_content(const int data1[], const int data2[], int size){

	int tmp1[size];
	int tmp2[size];
	for(int i = 0; i < size; i++){
		tmp1[i] = data1[i];
		tmp2[i] = data2[i];
	}
	intarray_sort(tmp1, size);
	intarray_sort(tmp2, size);
	return intarray_compare_by_position(tmp1, tmp2, size);

}


bool intarray_compare_by_position(const int data1[], const int data2[], int size){
	for(int i = 0; i < size; i++)
		if (data1[i] != data2[i])
			return false;
	return true;
}

void intarray_sort(int data[], int size){
	for(int i = 0; i < size; i++)
		for(int j = i+1; j < size; j++){
			if(data[i] > data[j]){
				int tmp = data[i];
				data[i] = data[j];
				data[j] = tmp;
			}

		} // end inner loop
}

///*
void intarray_sort2(int data[], int size){
	// bubble sort
	// loop to control number of passes
	for (int pass = 1; pass < size; ++pass) {
		// loop to control number of comparisons per pass
		for (size_t i = 0; i < size - 1; ++i) {
			// compare adjacent elements and swap them if first
			// element is greater than second element
			if (data[i] > data[i + 1]) {
				int hold = data[i];
				data[i] = data[i + 1];
				data[i + 1] = hold;
			}
		}
	}
}

///*

void intarray_display(const int data[], int size){
	printf("[ ");
	for(int i=0; i < size; i++){
		printf("%d ",data[i]);
	}
	printf("]\n");
}


void intarray_scan(int data[], int size){
	printf("Reading an array of %d elements: \n", size);
	for(int i=0; i < size; i++){
		printf("\tEnter value at index %d: ", i);
		scanf("%d", &data[i]);
	}
}