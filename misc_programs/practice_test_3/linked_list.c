#include <stdio.h>
#include <stdlib.h>

struct node *add_to_list(struct node *list, int n);
struct node *search_list(struct node *list, int n);
struct node *delete_from_list(struct node *list, int n);
void print_list(struct node *list);
int duplicates(struct node *list);
struct node *clear_list(struct node *list);
struct node *find_largest(struct node *list);
struct node *push(struct node *list, int n);

int count_n(struct node *list, int n);

struct node *append(struct node *list, int n);


//1.
struct node {
	int value;          /* data stored in the node  */
	struct node *next;  /* pointer to the next node */
};

int main()
{


 	struct node *my_stack = NULL;  
 	struct node *my_list = NULL;
	
 	int x;

	for (;;) {
		printf("Enter x (>0): ");
		scanf("%d", &x);
		if(x <= 0)
			break;
		my_list = append(my_list, x);
		my_stack = push(my_stack, x);

	}
	printf("The list is: ");
	print_list(my_list);
	printf("\n");
	printf("The stack is: ");
	print_list(my_stack);
	printf("\n");
	printf("The list has %d 13's in it.\n", count_n(my_list,13));
	my_list = clear_list(my_list);
	my_list = append(my_list, 1);
	my_list = append(my_list, 2);
	my_list = append(my_list, 3);

	printf("This is the list after clearing it and adding some new values: \n");
	print_list(my_list);

 	return 0;
}




/*** Function to add a node to the list ***/
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

	// 5. Store vallues in the new node.
	new_node->value = n; //  Equivalent to (*new_node).value = n .  We use indirection to access the value point to by new_node.

	// 6. Insert the node into the list.  In this case we are adding it to the beginning of the list.
	new_node->next = list;
	
	return new_node;
}

struct node *search_list(struct node *list, int n)
{
	  struct node *p;
	
	  for (p = list; p != NULL; p = p->next)
	    if (p->value == n)
	      return p;
	  return NULL;
}

void print_list(struct node *list)
{
	struct node *p;
	for(p = list; p!=NULL; p = p->next)
		printf("%d ", p->value);
	printf("\n");
}

struct node *clear_list(struct node *list)
	{
	struct node *p;
	while(list != NULL)
	{
	 p = list; // We store the value of list in p so we can free p and move the point of list to increment count.
	 list = list->next; // Note that we push the list pointer to next then release P.
	 if( p != NULL)
	       free(p);
	}

	return NULL;	
}

int count_n(struct node *list, int n)
{
	  struct node *p;

	  int count = 0;

	  for (p = list; p != NULL; p = p->next)
	    if (p->value == n)
	      	count++;

	  return count;
}


struct node *append(struct node *list, int n) 
{

	struct node *new_node; 

	// Allocate memory for the new node
	new_node = malloc(sizeof(struct node));
	if (new_node == NULL) {
		printf("malloc failed in add_to_end_of_list\n");
		return list;
	}
	new_node->value = n;
	new_node->next = NULL;

	if (list==NULL)
		return new_node;

	struct node *cur;
	
	// Find the last node on the list
	for (cur = list; cur->next != NULL; cur=cur->next);

	// Point last node to the new node. 
	cur->next = new_node;

	return list;
}




/************************ Output *****************************

*****************************************************************************/
