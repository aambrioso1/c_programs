/************************Practice Test 3 - Problem  ********************
Topic: Operation on Linked Lists

The answer:

(d)

*************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct node *insert_into_ordered_list(struct node *list, struct node *new_node);
struct node *delete_from_list(struct node *list, int n);
void print_list(struct node *list);


struct node {
	int value;         
	struct node *next;  
};

int main()
{

 	struct node *my_list = NULL;

 	struct node *new_node1;
 	new_node1 = malloc(sizeof(struct node));
 	new_node1->value = 7;
 	new_node1->next = NULL;


 	struct node *new_node2;
 	new_node2 = malloc(sizeof(struct node));
 	new_node2->value = 2;
 	new_node2->next = NULL;

 	struct node *new_node3;
 	new_node3 = malloc(sizeof(struct node));
 	new_node3->value = 5;
 	new_node3->next = NULL;

  	struct node *new_node4;
 	new_node4 = malloc(sizeof(struct node));	
 	new_node4->value = 3;
 	new_node4->next = NULL;

 	
	my_list = insert_into_ordered_list(my_list, new_node1);
	print_list(my_list);

	my_list = insert_into_ordered_list(my_list, new_node2);
	print_list(my_list);

	my_list = insert_into_ordered_list(my_list, new_node3);
	print_list(my_list);

	my_list = insert_into_ordered_list(my_list, new_node4);
	print_list(my_list);

 	return 0;
 }

struct node *insert_into_ordered_list(struct node *list, struct node *new_node) {   
	struct node *cur, *prev;

	for(cur = list, prev = NULL;
		cur!= NULL && new_node->value > cur->value;
		prev = cur, cur = cur->next);
 
 	new_node->next = cur;
 	if(prev == NULL) 
 		return new_node;
 	else{
		prev->next = new_node;
		return list;
	}
}

void print_list(struct node *list)
{
	struct node *p;
	printf("The list is: \n");
	for(p = list; p!=NULL; p = p->next)
		printf("%d ", p->value);
	printf("\n");
}


/******************** OUTPUT *************************

> ./a.exe
The list is:
7
The list is:
2 7
The list is:
2 5 7
The list is:
2 3 5 7

*****************************************************/