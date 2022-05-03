
/********************** Practice Test 3 - Problem 22 *********************
Topic:  Working with files

Answer: See code for count_characters

*************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct node *add_to_list(struct node *list, int n);
struct node *move_first_to_last(struct node *list);
void print_list(struct node *list);

struct node {
	int value;          /* data stored in the node  */
	struct node *next;  /* pointer to the next node */
};

int main()
{

		struct node *my_list = NULL;  //We initalize the list as NULL pointer.  This is the first element of the list.

		my_list = add_to_list(my_list, 11);
		my_list = add_to_list(my_list, 7);
		my_list = add_to_list(my_list, 3);
		my_list = add_to_list(my_list, 13);
		print_list(my_list);
		my_list = move_first_to_last(my_list);
		print_list(my_list);


		return 0;
}

struct node *move_first_to_last(struct node *list) {
	struct node *last, *temp;
 	if(list == NULL || list->next == NULL) return list; // If the list is empty, or has only one node, return the list.
 	for(last=list; last->next != NULL; last = last->next); // Set the last pointer to the last node of list.
 	last->next = list; // link last node to first node.  At this point last->next is the last node except without the NULL pointer.
 	list = list->next; // start the list at the second node
 	(last->next)->next = NULL; // Now we set the new last pointer to NULL.  Note that last is not the last node anymore.
 	return list; // return second node as new first node

}

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



/******** Output ***********

*****************************************************/