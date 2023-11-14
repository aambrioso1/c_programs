// TODO - Nothing! Do not modify this file

#ifndef _TOOLS_H_
#define _TOOLS_H_

#define NB_ROWS 3
#define NB_COLS 5

extern int isMatrixSorted( int data[NB_ROWS][NB_COLS] );
    /* ROLE
                    Determines whether the matrix passed as parameter is sorted
                    with the smallest value in data[0][0], the second smallest
                    value in data[0][1], and so on and so forth with the largest
                    value in data[NB_ROWS-1][NB_COLS-1]
       RETURNS      0 if the matrix data is not sorted
                    1 if it is
       PARAMETERS   data the two dimensional matrix to be sorted
    */


extern void matrixSort(int data[NB_ROWS][NB_COLS]);
    /* ROLE
                     sorts the integers in a two dimensional matrix so that the
                     smallest value is in data[0][0], the second smallest one in
                     data[0][1], and so on so forth with the largest value in
                     data[NB_ROWS-1][NB_COLS-1]
       PARAMETERS    data the two dimensional matrix to be sorted
    */


#endif
