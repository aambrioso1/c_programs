#include "linky.h"


void Node_display(Node ** list){  //**list is a pointer to a point of a node.

	if(list == NULL) return;

	Node * p = *list;

	if (*list){
		printf("[ %2d ]", (*list)->data);
		Node_display( &(*list)->next); //address of a node pointer

		}
}


void Node_add_tail(Node **list, Node *element){
	if(list == NULL) return;
	if(element == NULL) return;

	if (*list == NULL)
		*list = element;
	else if((*list)->next == NULL) 
		(*list)->next = element;
	else
		Node_add_tail(&((*list)->next), element);
}

void Node_del_tail(Node **list){
	if (list == NULL) return;

	if((*list)->next)
		if ((*list)->next->next)
			Node_del_tail(&((*list)->next));
		else{
			free((*list)->next);
			(*list)->next = NULL;
		}
	else{
		free(*list);
		*list = NULL;
	}

}

