#include "linky.h"


void Node_display(Node ** list){

	if(list == NULL) return;

	Node * p = *list;

	if (*list){
		while(p){
			printf("[ %2d ]", (*list)->data);
			Node_display( &(*list->next))

		}
	}

}