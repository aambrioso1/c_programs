#include <stdlib.h>
#include <stdio.h>

#define NB_ROWS 3
#define NB_COLS 5

int isMatrixSorted( int data[NB_ROWS][NB_COLS] );

int main(){

    // A sorted matrix
    int matrix1[NB_ROWS][NB_COLS] = {
                                        {1 , 2 , 3 , 4 ,  5} ,
                                        {6 , 7 , 8 , 9 , 10} ,
                                        {11, 12, 13, 14, 15}
                                     };
    // An unsorted matrix with middle items out of order
    int matrix2[NB_ROWS][NB_COLS] = {
                                        {10 , 11 , 20 , 21 ,  22} ,
                                        {25 , 30 , 19 , 31 , 32} ,
                                        {41, 42, 43, 44, 45} 
                                    };

    // An unsorted matrix with end of row 1 out of order
    int matrix3[NB_ROWS][NB_COLS] = {
                                        {1 , 2 , 3 , 4 ,  6} ,
                                        {5 , 7 , 8 , 9 , 10} ,
                                        {11, 12, 13, 14, 15}
                                     };

    // An unsorted matrix with end of row 2 out of order
    int matrix4[NB_ROWS][NB_COLS] = {
                                        {1 , 2 , 3 , 4 ,  6} ,
                                        {5 , 7 , 8 , 9 , 10} ,
                                        {11, 12, 13, 14, 15}
                                     };

    // An unsorted matrix with end of row 3 out of order
    int matrix5[NB_ROWS][NB_COLS] = {
                                        {1 , 2 , 3 , 4 ,  5} ,
                                        {6 , 7 , 8 , 9 , 11} ,
                                        {10, 12, 13, 15, 14}
                                     };

    // An unsorted matrix with last two items in row 3 out of order
    int matrix6[NB_ROWS][NB_COLS] = {
                                        {1 , 2 , 3 , 4 ,  5} ,
                                        {6 , 7 , 8 , 10 , 9} ,
                                        {11, 12, 13, 14, 15}
                                     };

    // A sorted matrix
    int matrix7[NB_ROWS][NB_COLS] = {
                                        {11 , 12 , 31 , 41 ,  51} ,
                                        {60 , 67 , 80 , 85 , 90} ,
                                        {110, 120, 133, 144, 215}
                                     };

    /* print the result */

    printf("\nIs Matrix1 sorted? %d\n", isMatrixSorted(matrix1));
    printf("Is Matrix2 sorted? %d\n", isMatrixSorted(matrix2));
    printf("Is Matrix3 sorted? %d\n", isMatrixSorted(matrix3));
    printf("Is Matrix4 sorted? %d\n", isMatrixSorted(matrix4));
    printf("Is Matrix5 sorted? %d\n", isMatrixSorted(matrix5));
    printf("Is Matrix6 sorted? %d\n", isMatrixSorted(matrix6));
    printf("Is Matrix6 sorted? %d\n", isMatrixSorted(matrix7));
    

    
    return EXIT_SUCCESS;
}

int isMatrixSorted( int data[NB_ROWS][NB_COLS] ){
	//Checks if a 2D matrix of integers is sorted
	int first;
    int second;
    int i = 0;
    int j = 0;

    //printf("Started looping...\n");

    for (i = 0; i < NB_ROWS; i++) {
        for (j = 0; j < NB_COLS-1; j++) {
            first = data[i][j];
            second = data[i][j+1];
            if (first > second){
                // printf("Exited at first for\n");
                return 0;
            }
        }
        // check last item on row against first item on the next row

        // printf("i, j: %d, %d\n", i, j);
        if (i < NB_ROWS-1) {
            first = data[i][NB_COLS-1];  // last item in the row
            second = data[i+1][0]; // first item in the next row
            if ( first > second){ // checking last item in row against first in next row
                //printf("first = %d and second = %d\n", first, second);
                //printf("Exited at if statement\n");
                return 0;

            }
        }
    }
    return 1;  // loop through entire matrix so matrix is sorted
}