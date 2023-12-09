#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 5
void modify(int param[], int size);

int main(){

/*
	int data1 = 42;
	int data2 = 23;

	int * const p = &data1;
	
	//int **p2 = NULL;


	//p = &data1; //assign memory address of data1 to p
	//p2 = &p;
	printf("\ndata1 \tis \t%d\n", data1);
	printf("&data1\tis \t%p\n", &data1);
	printf("p     \tis \t%p\n", p);
	printf("&p    \tis \t%p\n", &p);
	//printf("&p2   \tis \t%p\n", &p2);
	//printf("*p    \tis \t%d\n", *p);
	//printf("**p2  \tis \t%d\n", **p2);

	//printf("data1 is %d, data2 is %lf\n", data1, data2);



	//p = &data2;
	//printf("\n\ndata2 \tis \t%d\n", data2);
	//printf("&data2\tis \t%p\n", &data2);
	//printf("data2\tis \t%p\n", p);
	//printf("p     \tis \t%p\n", p);
	//printf("&p    \tis \t%p\n", &p);
	//printf("&p2   \tis \t%p\n", &p2);
	// printf("*p    \tis \t%d\n", *p);
	//printf("**p2  \tis \t%d\n", **p2);

	*p = 9999;
	printf("\n\nWe let *p = 9999:\n");
	printf("data1 \tis \t%d\n", data1);
	//printf("**p2  \tis \t%d\n", **p2);
	//printf("**p2  \tis \t%d\n", **p2)
*/

	int data[] = {1,2,3,4,5};
	modify(data, SIZE);
	for(int i=0; i<SIZE; i++)
	printf("%d ", data[i]);
	printf("\n");
	for(int i=0; i<SIZE; i++)
	printf("%d ", *( &(data[0]) + i));



	printf("\nmain function is done...\n");
	return EXIT_SUCCESS;
}

void modify(int param[], int size){
	param[0] = 42;
}