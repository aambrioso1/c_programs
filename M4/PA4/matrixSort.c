#include <stdlib.h>
#include <stdio.h>

#define NB_ROWS 3
#define NB_COLS 5

void matrixSort( int data[NB_ROWS][NB_COLS] );

int main(){

    int matrix[NB_ROWS][NB_COLS] = {{10 , 21 , 3 , 41 ,  5} ,
                                    {6 , 17 , 81 , 9 , 10} ,
                                    {11, 12, 13, 14, 15} };

    matrixSort(matrix);

    /* print the result */
    printf("\n");
    printf("Resultant Matrix:\n");
    for (int i = 0; i < NB_ROWS; i++) {
            for (int j = 0; j < NB_COLS; j++) {
                    printf("%4d", matrix[i][j]);
            }
            printf("\n");
    }    
    return EXIT_SUCCESS;
}

void matrixSort( int data[NB_ROWS][NB_COLS] ){
	//Sorts a 2D matrix of integers
	int tmp, l;
    for (int i = 0; i < NB_ROWS; i++) {
        for (int j = 0; j < NB_COLS; j++) {
            tmp = data[i][j];
            l = j + 1;
            for (int k = i; k < NB_ROWS; k++) {
                while (l < NB_COLS) {
                    /* swapping the data */
                    if (tmp > data[k][l]) {
                       	tmp = data[k][l];
                        data[k][l] = data[i][j];
                        data[i][j] = tmp;
                    }
                    l++;
                 }
                 l = 0;
             }
        }
    }
}