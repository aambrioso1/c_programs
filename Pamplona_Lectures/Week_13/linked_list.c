#include <stdio.h>
#include <stdlib.h>

struct node *add_to_list(struct node *list, int n);
struct node *search_list(struct node *list, int n);
struct node *delete_from_list(struct node *list, int n);
void print_list(struct node *list);
int duplicates(struct node *list);
void clear_list(struct node *list);
struct node *find_largest(struct node *list);

//1.
struct node {
	int value;          /* data stored in the node  */
	struct node *next;  /* pointer to the next node */
};

int main()
{


 	struct node *first = NULL;  // 2. We initalize the list as NULL pointer.  This is the first element of the list.

	/* inserting nodes */
	first = add_to_list(first, 3);
	first = add_to_list(first, 64);
	first = add_to_list(first, 98);
	first = add_to_list(first, 3);
    first = add_to_list(first, 64);
	first = add_to_list(first, 3);
	first = add_to_list(first, 136);
	first = add_to_list(first, 7);
	first = add_to_list(first, 98);

	print_list(first);
	
	//add code here
 		
	clear_list(first); 

	// first = add_to_list(first, 3);

	// print_list(first);

	return 0;

}

/*** Create a list structure ***/
struct node *add_to_list(struct node *list, int n) 
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
	for(p= list; p!=NULL; p = p->next)
		printf("%d ", p->value);
	printf("\n");
}


void clear_list(struct node *list)
{
  struct node *p;
  while(list != NULL)
  {
	 p = list;
     list = list->next;
     if( p!= NULL)
           free(p);
  }
}

/*
struct node *find_largest(struct node *list)
{
	struct node *p, *q = NULL;
	for(p=list; p!= NULL; p==p->next) {
		if(q == NULL || p->value > q->value)
		q = p;
	}
}


	return NULL;
}
*/

int duplicates(struct node *list){
       //add code here
       return 0;

}

//struct node *add_sorted_list
