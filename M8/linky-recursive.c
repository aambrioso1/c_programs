#include "linky.h"


void Node_display(Node ** list){  //**list is a pointer to a point of a node.

	if(list == NULL) return;

	Node * p = *list;

	if (*list){
		printf("[ %2d ]", (*list)->data);
		Node_display( &(*list)->next); //address of a node pointer

		}
}

