include "stacky.h"
include "linky.h"


void Node_push(Node **list, Node * element){
	Node_add_front(list, element);
}

int Node_pop(Node **list){
	if(list == NULL){
		printf("Error - cannot pop from a null pointer\n");
		exit(EXIT_FAILURE);
	}
	if(*list == NULL){
		printf("Error - cannot pop from a null pointer\n"); 
		exit(EXIT_FAILURE);
	}

	int value = (*list)->data;
	Node_del_front(list);

	return value;

}
