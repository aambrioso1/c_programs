/*
Assignment  Module 4 Intermediary Exam
File        compare_arrys.c

Student:    Alex Ambrioso] ID#: U4806-8911
Date:       11/23/2023

Features:   Compute the sum the elements of two matrices and the absolute value of the difference
			between the sums
Bugs:       None
*/

#include <stdio.h>
#include <stdlib.h>

// The pre-defined constant is adjustable as long as you keep
// it nonnegative and of reasonably size
#define SIZE 3

/**** FUNCTION PROTOTYPES *****/
// Note that the functions do not refer to the constant SIZE
int sum(int array[], int size); // computes the sum of all the elements in an array
int abs_value(int a, int b);  	// compute the absolute value of the difference of two integers
void input_data(int array[], int array_num, int size); // inputs values for an array of length size


int main() {

	// These variables are used to make code more readable
	int sum1; //store sum of elements of the first matrix
	int sum2; //store sum of elements of the first matrix
	int abs_of_diff; //store the absolute value of the difference of two sums


	// print an introductory heading
	printf("\n\n**********************************************\n");
	printf("Welcome to Alex's M4 Intermediary Exam Program\n");
	printf("\t\tI hope you like it!\n");
	printf("**********************************************\n\n");

	int data1[SIZE]; // first array
	input_data(data1, 1, SIZE); // call void function to input elements of the first array

	int data2[SIZE]; // second array
	input_data(data2, 2, SIZE); // call void function to input elements of the second array

	// These value are pre-computed to make the next printf that follows more legible
	sum1 = sum(data1, SIZE);
	sum2 = sum(data2, SIZE);
	abs_of_diff = abs(sum1 - sum2);
	
	// prints out the required results
	printf("\n\nThe result of my computation is: |%d - %d| = %d\n", sum1, sum2, abs_of_diff );

	// Marks the termination of the main function
	printf("\nMy main function is done...\n");
	return EXIT_SUCCESS;

}

int sum(int array[], int size){
	// computes the sum of all the elements in an array
	int sum = 0;
	for (size_t i = 0; i < size; i++) {
		sum += array[i];
	}
	return sum;
}

int abs_value(int a, int b){
	// compute the absolute value of the difference of two integers
	return abs(a - b);
}

void input_data(int array[], int array_num, int size){
	// inputs values for an array of length size
	printf("Enter values for array #%d:\n", array_num);
	for(size_t i = 0; i < size; i++) { // loop to input the values for an array
		printf("Value at index [%zu]: ", i);
		scanf("%d", &array[i]);
	}
}

