
/********************** Practice Test 3 - Problem 17 *********************
Topic:  Recursion

Answer: mystery(list, 5)) = 1

The function mystery(list, v) gets called repeated until the value is found on the list or
we reach the end of the list.   If it find the value it returns 1 if it does not it returns 0.
Since the function does not do anything the function call the value returned by the last call
will be the result for all of the recursive function calls.

*************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct node *push(struct node *list, int n);
void print_list(struct node *list);
int mystery(struct node *p, int v);


struct node {
	int value;          /* data stored in the node  */
	struct node *next;  /* pointer to the next node */
};



int main ( ) { 

	struct node *list = NULL;

	for (int i = 1; i < 8; i++)
		list = push(list, 8-i);


	printf("This is my list:\n");
	print_list(list);

	printf("mystery(list, 5)) = %d", mystery(list,5));
}

int mystery(struct node *p, int v) {
	printf("***********\n");
	printf("v = %d\n", v);
 	if(p == NULL){ // Checks if we are at the end of the list
 		printf("In first if\n;");
 		return 0;
 	}
 	else if(p->value == v) { // Checks is p is point to the value v.
 		printf("In else if\n");
		return 1;
	}
 	else
 		printf("In else:\n", v); // Call mystery() is p is not point at v.
 		return mystery(p->next, v); // The pointer p keeps shifting down the list.
}


struct node *push(struct node *list, int n) 
{
	// 3. Create a new node
	struct node *new_node; 

	// 4. Allocate memory for the new node
	new_node = malloc(sizeof(struct node));
	if (new_node == NULL) {
	printf("malloc failed in add_to_list\n");
	return list;
	}


	new_node->value = n; //  Equivalent to (*new_node).value = n .  We use indirection to access the value point to by new_node.

	new_node->next = list;
	
	return new_node;
}

void print_list(struct node *list)
{
	struct node *p;
	for(p = list; p!=NULL; p = p->next)
		printf("%d ", p->value);
	printf("\n");
}

/******** Output ***********
> ./a.exe
This is my list:
1 2 3 4 5 6 7
***********
v = 5
In else:
***********
v = 5
In else:
***********
v = 5
In else:
***********
v = 5
In else:
***********
v = 5
In else if
mystery(list, 5)) = 1



























*****************************************************/