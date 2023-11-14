// TODO - Implement your tests in this file using testlib functions

#include <stdlib.h>
#include "tools.h"
#include "testlib.h"

void test_is_sorted_1(){
    // Example test function
    int matrix[NB_ROWS][NB_COLS] = {{1 , 2 , 3 , 4 ,  5} ,
                                    {6 , 7 , 8 , 9 , 10} ,
                                    {11, 12, 13, 14, 15} };
    TEST("Already sorted matrix", isMatrixSorted(matrix) == 1);
}

void test_sort_1(){
    // Example test function
    int matrix[NB_ROWS][NB_COLS] = {{1 , 2 , 5 , 4 ,  3} ,
                                    {6 , 7 , 8 , 9 , 10} ,
                                    {11, 12, 13, 14, 15} };
    matrixSort(matrix);
    TEST("test_sort_1",isMatrixSorted(matrix));
}

void runAllTests(){
    // This is how you would use the above test functions
    test_is_sorted_1();
    test_sort_1();
}
