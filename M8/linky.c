#include <stdlib.h>

#include "linky.h"

Node * Node_create(int value) {
	Node *tmp = NULL;
	tmp = (Node*)malloc(sizeof(Node));
	tmp->data = value;
	tmp->next = NULL;
	return tmp;
}

void Node_add_front(Node **list, Node *element){
	if (list == NULL) return;
	if (element == NULL) return;
	
	if (*list == NULL) {
		*list = element;
	}
	else{
		element->next = *list; // new element points to the front of the old list
		*list = element; // set the front of the list to be the new element
	}

}
