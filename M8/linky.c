#include <stdlib.h>

#include "linky.h"

Node * Node_create(int value) {
	Node *tmp = NULL;
	tmp = (Node*)malloc(sizeof(Node));
	tmp->data = value;
	tmp->next = NULL;
	return tmp;
}
