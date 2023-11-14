/*
Assignment  M4PA
File        tools.c

Student:    Alex Ambrioso] ID#: U4806-8911
Date:       11/23/2023

Features:   A suite fo tests for checking functions in tools.c
Bugs:       None
*/

// TODO - Implement your tests in this file using testlib functions

#include <stdlib.h>
#include "tools.h"
#include "testlib.h"

void test_is_sorted_1(){
    // Example test function
    int matrix[NB_ROWS][NB_COLS] = {
                                        {1 , 2 , 3 , 4 ,  5} ,
                                        {6 , 7 , 8 , 9 , 10} ,
                                        {11, 12, 13, 14, 15} 
                                    };

    TEST("Already sorted matrix", isMatrixSorted(matrix) == 1);
}

void test_is_sorted_2(){
    // An unsorted matrix with end of row 1 out of order
    int matrix[NB_ROWS][NB_COLS] = {
                                        {1 , 2 , 3 , 4 ,  6} ,
                                        {5 , 7 , 8 , 9 , 10} ,
                                        {11, 12, 13, 14, 15}
                                     };

    TEST("Not sorted", isMatrixSorted(matrix) == 0);
}

void test_is_sorted_3(){
        // An unsorted matrix with end of row 2 out of order
    int matrix[NB_ROWS][NB_COLS] =  {
                                        {1 , 2 , 3 , 4 ,  6} ,
                                        {5 , 7 , 8 , 9 , 10} ,
                                        {11, 12, 13, 14, 15}
                                    };

    TEST("Not sorted", isMatrixSorted(matrix) == 0);
}

void test_sort_1(){
    // Example test function
    int matrix[NB_ROWS][NB_COLS] =  {
                                        {1 , 2 , 5 , 4 ,  3} ,
                                        {6 , 7 , 8 , 9 , 10} ,
                                        {11, 12, 13, 14, 15} 
                                    };
    matrixSort(matrix);
    TEST("test_sort_1",isMatrixSorted(matrix));
}

void test_sort_2(){
    // An unsorted matrix with first two items
    int matrix[NB_ROWS][NB_COLS] = {
                                        {2 , 1 , 3 , 4 ,  5} ,
                                        {6 , 7 , 8 , 9 , 10} ,
                                        {11, 12, 13, 14, 15}
                                    };
    matrixSort(matrix);
    TEST("test_sort_2",isMatrixSorted(matrix));
}

void test_sort_3(){
    // An unsorted matrix with end of row 3 out of order
    int matrix[NB_ROWS][NB_COLS] =  {
                                        {1 , 2 , 3 , 4 ,  5} ,
                                        {6 , 7 , 8 , 9 , 11} ,
                                        {10, 12, 13, 15, 14}
                                    };
    matrixSort(matrix);
    TEST("test_sort_3",isMatrixSorted(matrix));
}

void test_sort_4(){
    // An unsorted matrix with last two items in row 2 out of order
    int matrix[NB_ROWS][NB_COLS] =  {
                                        {1 , 2 , 3 , 4 ,  5} ,
                                        {6 , 7 , 8 , 10 , 9} ,
                                        {11, 12, 13, 14, 15}
                                    };
    matrixSort(matrix);
    TEST("test_sort_4",isMatrixSorted(matrix));
}

void test_sort_5(){
    // An unsorted matrix with end of row 1 out of order
    int matrix[NB_ROWS][NB_COLS] =  {
                                        {1 , 2 , 3 , 4 ,  6} ,
                                        {5 , 7 , 8 , 9 , 10} ,
                                        {11, 12, 13, 14, 15}
                                    };
    matrixSort(matrix);
    TEST("test_sort_5",isMatrixSorted(matrix));
}

void test_sort_6(){
    // A sorted matrix with more varied numbers
    int matrix[NB_ROWS][NB_COLS] =  {
                                        {11 , 12 , 31 , 41 ,  51} ,
                                        {60 , 67 , 80 , 85 , 90} ,
                                        {110, 120, 133, 144, 215}
                                    };
    matrixSort(matrix);
    TEST("test_sort_6",isMatrixSorted(matrix));
}

void test_sort_7(){
    // A unsorted matrix with more varied numbers
    int matrix[NB_ROWS][NB_COLS] =  {
                                        {8 , 12 , 31 , 35 ,  51} ,
                                        {60 , 67 , 72 , 63 , 97} ,
                                        {101, 67, 22, 175, 199}
                                    };
    matrixSort(matrix);
    TEST("test_sort_7",isMatrixSorted(matrix));
}

void runAllTests(){
    // This is how you would use the above test functions
    test_is_sorted_1();
    test_is_sorted_2();
    test_is_sorted_3();
    test_sort_1();
    test_sort_2();
    test_sort_3();
    test_sort_4();
    test_sort_5();
    test_sort_6();
    test_sort_7();
}
