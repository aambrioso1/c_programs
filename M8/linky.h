#pragma once

#include <stdlib.h>
#include <stdio.h>

struct Node_s {
	int data;
	struct Node_s *next;
};

typedef struct Node_s Node;

Node * Node_create(int value);

void Node_display(Node ** list);