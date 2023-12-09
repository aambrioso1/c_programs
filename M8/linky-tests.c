#include <stdlib.h>
#include <stdio.h>

#include "linky.h"

// start at 12:44

int main(){

	//struct Node_s *L1 = NULL;

	Node *myList = NULL; // declare a node for the front of the list

	Node *n1 = Node_create(8);
	Node_display(&n1);
	printf("\n");
 	myList = n1; // new node is the front of the list 8 
	
	Node *n2 = Node_create(42);
	Node_add_front(&myList, n2);
	Node_display(&myList);
	printf("\n");
	
	Node *n3 = Node_create(10);
	Node_add_front(&myList, n3);
	Node_display(&myList);
	printf("\n");
	
	Node_del_front(&myList);
	Node_display(&myList);
	printf("\n");

	Node_del_tail(&myList);
	Node_display(&myList);
	printf("\n");
	

	
	return EXIT_SUCCESS;	
}