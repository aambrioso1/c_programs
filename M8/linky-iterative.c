#include "linky.h"


void Node_display(Node ** list){

	if(list == NULL) return;

	Node * p = *list;

	if (p != NULL)
		while(p){
			printf("[ %2d ]", p->data);
			p = p->next;

		}

}