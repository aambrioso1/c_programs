/************************Practice Test 3 - Problem 8 ********************
 Topic:  Functions for operations on linked lists

Answer: A

The code show that the delete function define be 13 (A) works.
*************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct node *add_to_list(struct node *list, int n);
struct node *delete(struct node *list, int n);
void print_list(struct node *list);
void clear_list(struct node *list);
void is_null(struct node *list);


struct node {
	int value;          /* data stored in the node  */
	struct node *next;  /* pointer to the next node */
};

int main()
{

		struct node *my_list = NULL;  //We initalize the list as NULL pointer.  This is the first element of the list.

		is_null(my_list);
		print_list(my_list);

		my_list = add_to_list(my_list, 11);
		is_null(my_list);
		print_list(my_list);

		my_list = add_to_list(my_list, 7);
		is_null(my_list);
		print_list(my_list);
		
		my_list = delete(my_list, 11);
		is_null(my_list);
		print_list(my_list);


		my_list = delete(my_list, 7);
		is_null(my_list);
		print_list(my_list);

		return 0;
}

// 13 A
struct node *delete(struct node *list, int n) {

	struct node *cur, *prev;

	for(cur = list, prev = NULL;
		cur!= NULL && cur->value!= n;
		prev = cur, cur = cur->next)
 	;
 	
	if (cur == NULL)
		return list;
	if (prev == NULL)
		list = list->next;
	else
		prev->next = cur ->next;
		free(cur);
	return list;
}



/*** Function to add a node to the beginning of list ***/
struct node *add_to_list(struct node *list, int n) 
{
	// Create a new node
	struct node *new_node; 

	// Allocate memory for the new node
	new_node = malloc(sizeof(struct node));
	if (new_node == NULL) {
	printf("malloc failed in add_to_list\n");
	return list;
	}

	// Store vallues in the new node.
	new_node->value = n; //  Equivalent to (*new_node).value = n .  We use indirection to access the value point to by new_node.

	// Insert the node into the list.  In this case we are adding it to the beginning of the list.
	new_node->next = list;
	
	return new_node;
}

// Prints the list
void print_list(struct node *list)
{
	struct node *p;
	printf("The current list is: ");
	for(p= list; p != NULL; p = p->next)
		printf("%d ", p->value);
	printf("\n\n");
}



// Checks if list is empty.
void is_null(struct node *list) {
	printf("Is my_list equal to NULL?\n");
	if (list == NULL)
		printf("Yes :)\n");
	else
		printf("No :(\n");
}


/***************************** Output ***********************************

> ./a.exe
Is my_list equal to NULL?
Yes :)
The current list is:

Is my_list equal to NULL?
No :(
The current list is: 11

Is my_list equal to NULL?
No :(
The current list is: 7 11

Is my_list equal to NULL?
No :(
The current list is: 7

Is my_list equal to NULL?
Yes :)
The current list is:


*************************************************************************/
