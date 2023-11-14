#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//#define numRows 5
//#define nbCols 5

void displayMatrix(int nbRows, int nbCols, int matrix[nbRows][nbCols]);
int findMax(int nbRows, int nbCols, int matrix[nbRows][nbCols]);

int main() {
	
	int nbRows = 2;
	int nbCols = 3;

	int data[][3] = {
		{11,22,3},
		{48,52,66}
	}; //must specify all dimensions but the first

/*	for(size_t row = 0; row < nbRows; row++) {
		for(size_t col = 0; col < nbCols; col++) {
			data[row][col] = 10*row + col;
		}
	}
*/

	for(size_t row = 0; row < nbRows; row++) {
		for(size_t col = 0; col < nbCols; col++) {
			printf("data[%zu][%zu] --> %d\n", row, col, data[row][col]);
		}
	}	

	// int min = 999;





	displayMatrix(2,3,data);


	printf("The max value is data -->%d",findMax(2,3,data));

	printf("\nmain function is done...\n");
	return EXIT_SUCCESS;

}

void displayMatrix(int nbRows, int nbCols, int matrix[nbRows][nbCols]) {
	for(size_t row = 0; row < nbRows; row++) {
		for(size_t col = 0; col < nbCols; col++) {
			printf("data[%zu](%zu] --> %d\n", row, col, matrix[row][col]);
		}
	}
}

int findMax(int nbRows, int nbCols, int matrix[nbRows][nbCols]){
	
	size_t max_row = 0;
	size_t max_col= 0;

	int max = matrix[0][0];

	for(size_t row = 0; row < nbRows; row++) {
		for(size_t col = 0; col < nbCols; col++) {
			if (matrix[row][col] < max) {
				max = matrix[row][col];
				max_row = row;
				max_col = col;
			}
		}
	}
	return max;
}


