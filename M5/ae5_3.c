#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 4
#define ARRAY_1_INIT {1,1,1,1}
#define ARRAY_2_INIT {0,0,0,0}


void swap_arrays_1 ( int p1[] , int p2[] , int size);
void swap_arrays_2 ( int *p1 , int *p2 , int size);
void swap_arrays_3 ( int *p1 , int *p2 , int size);
void swap_arrays_4 ( int **p1 , int **p2 , int size);
void display(char* msg, int data1[], int data2[], int size);



int main ( )
{
	int a1[ ARRAY_SIZE ] = ARRAY_1_INIT;
	int a2[ ARRAY_SIZE ] = ARRAY_2_INIT;
	
	display("Before any swapping:", a1, a2, ARRAY_SIZE);

	swap_arrays_1 ( a1 , a2 , ARRAY_SIZE ) ;

	display("After swap #1:", a1, a2, ARRAY_SIZE);

	swap_arrays_2 ( a1 , a2 , ARRAY_SIZE ) ;

	display("After swap #2:", a1, a2, ARRAY_SIZE);

	swap_arrays_3 ( a1 , a2 , ARRAY_SIZE ) ;

	display("After swap #3:", a1, a2, ARRAY_SIZE);

	int *pa1 = a1, *pa2 = a2;
	swap_arrays_4 ( &pa1 , &pa2 , ARRAY_SIZE);

	display("After swap #4:", pa1, pa2, ARRAY_SIZE);


}

void display(char* msg, int data1[], int data2[], int size){
	printf("%s\n", msg);
	printf("\tArray #1: ");
	for(int i = 0; i < size; i++){
		printf("[%d]", data1[i]);
	}
	printf("\n\tArray #2: ");
	for(int i = 0; i < size; i++){
		printf("[%d]", data2[i]);
	}
	printf("\n");
}

void swap_arrays_1 ( int p1[] , int p2[] , int size)
{
	int i , tmp ;
	for ( i = 0 ; i < size ; i++ ) {
	tmp = p1[i] ;
	p1[i] = p2[i] ;
	p2[i] = tmp ;
	}
}

void swap_arrays_2 ( int *p1 , int *p2 , int size)
{
	int i , tmp ;
	for ( i = 0 ; i < size ; i++ ) {
	tmp = p1[i] ;
	p1[i] = p2[i] ;
	p2[i] = tmp ;
	}
}

void swap_arrays_3 ( int *p1 , int *p2 , int size)
{
	int* tmp;
	tmp = p1;
	p1 = p2;
	p2 = tmp;
}

void swap_arrays_4 ( int **p1 , int **p2 , int size)
{
	int* tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
