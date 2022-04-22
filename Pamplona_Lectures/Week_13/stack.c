#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/*** Function Prototypes ***/
struct node *push(struct node *list, int n); 
struct node *pop(struct node *list, int *top);
void print_list(struct node *list);

struct node {
	int value; 
	struct node *next;  
};

int main()
{
	struct node *first = NULL;

	first = push(first, 3);
	first = push(first, 7);
	first = push(first, 11);
	printf("Original list: ");
	print_list(first);

	int top;
	for (int i = 0; i < 4; i++) {
		first = pop(first, &top);
		printf("After pop %d: ", i+1);
		print_list(first);
		if(top == INT_MAX)
			printf("stack is empty\n");
		else 
			printf("The top is %d\n", top);
	}

	return 0;

}


/*** Function to push a node to the beginning of the stack ***/
struct node *push(struct node *list, int n) 
{
	//Create a new node
	struct node *new_node; 

	// Allocate memory for the new node
	new_node = malloc(sizeof(struct node));
	if (new_node == NULL) {
	printf("malloc failed in add_to_list\n");
	return list;
	}

	// Store vallues in the new node.
	new_node->value = n; //  Equivalent to (*new_node).value = n.

	// Insert the node into the list.
	new_node->next = list;
	
	return new_node;
}

struct node *pop(struct node *list, int *top) 
{
	
	if (list == NULL) {
		*top = INT_MAX;
		return NULL;
	}

	*top = list->value;
	struct node *temp = list;
	list = list->next;
	free(temp);

	return list;
}

void print_list(struct node *list)
{
	struct node *p;
	for(p= list; p != NULL; p = p->next)
		printf("%d ", p->value);
	printf("\n");
}


/*************** Output ***********************

> ./a.exe
Original list: 11 7 3
After pop 1: 7 3
The top is 11
After pop 2: 3
The top is 7
After pop 3:
The top is 3
After pop 4:
The top is -1234567


*********************************************/
