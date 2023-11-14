/*
Assignment  M4PA
File        tools.c

Student:    Alex Ambrioso] ID#: U4806-8911
Date:       11/23/2023

Features:   A toolkit of functions for sorted a 2D matrix and checking the results
Bugs:       None
*/

// TODO - Implement the functions in this file

#include <stdlib.h>
#include "tools.h"

/*
int isMatrixSorted( int data[NB_ROWS][NB_COLS] ){
    return 0;  // modify this
}
*/

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

void matrixSort( int data[NB_ROWS][NB_COLS] ){
    //Sorts a 2D matrix of integers using a bubble sort
    int tmp, l; //a temp variable for swapping elements (tmp) and a counter (l)
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

