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

void Node_add_tail(Node **list, Node *element){
	if(list == NULL) return;
	if(element == NULL) return;

	Node * p = *list;

	if (*list == NULL)
		*list = element;
	else{
		while (p->next)
			p = p->next;
		p->next = element;
	}
}

void Node_del_tail(Node **list){
	if (list == NULL) return;

	if((*list)->next){
		while ((*list)->next->next)
			(*list) = (*list)->next;

		free((*list)->next);
		(*list)->next = NULL;
		}
	else{
		free(*list);
		*list = NULL;
	}

}




