#include <stdlib.h>
#include <stdio.h>

#include "linky.h"

int main(){

	//struct Node_s *L1 = NULL;
	Node *p1 = NULL;

	p1 = Node_create(42);
	Node_display(&p1);
	printf("\n");
	return EXIT_SUCCESS;
	
}