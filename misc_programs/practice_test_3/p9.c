/************************Practice Test 3 - Problem 8 ********************
 Topic:  Checking for an empty linked list.

Answer: list == NULL

The code contains enough functions to experiment with a linked list with items pushed onto the list by add_to_list.
The function isnull() checks if list is empty.

*************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct node *add_to_list(struct node *list, int n);
struct node *delete_from_list(struct node *list, int n);
void print_list(struct node *list);
void clear_list(struct node *list);
void is_null(struct node *list);


// The numbered items show how to create a basic linked list with nodes added to the top of the list (a stack).
//1.
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
		
		my_list = delete_from_list(my_list, 11);
		is_null(my_list);
		print_list(my_list);


		my_list = delete_from_list(my_list, 7);
		is_null(my_list);
		print_list(my_list);

		return 0;
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

// Delete n from list.
struct node *delete_from_list(struct node *list, int n)
{
	struct node *cur, *prev;
	
	// Find the node that needs to be delete (cur) AND the node before it (prev).
	for (cur = list, prev = NULL; // Initialize cur as list and prev as NULL
		cur != NULL && cur->value != n; // Keep going if we haven't reached the end of the list or the node with value n
		prev = cur, cur = cur->next);

	if (cur == NULL)
		return list;
	if (prev == NULL) {
		list = cur->next;
	}
	else
		prev->next = cur->next; // Bypass the node to be deleted by pointing prev directly to the node after cur.
	free(cur); // Free the memory associated with the deleted node.

	return list;
}


void is_null(struct node *list) {
	printf("Is my_list equal to NULL?\n");
	if (list == NULL)
		printf("Yes :)\n");
	else
		printf("No :(\n");
}


/***************************** Output ***********************************

PS C:\Users\Alex\c_programs\misc_programs\practice_test_3> ./a.exe
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
