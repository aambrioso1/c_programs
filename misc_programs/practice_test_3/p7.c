/************************Practice Test 3 - Problem 7 ********************
Topic: Arrays of struct pointers

The answer:

		if (p->number == n)
			q = p;
	return q;

*************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
 int number;
 char name[51];
 struct node *next;
};

struct node *add_to_list(struct node *list, char s[], int n);
struct node *append(struct node *list, char s[], int n);
struct node *find_last(struct node *list, int n);
void print_list(struct node *list);

int main() {

	int num;
	char name[21];
	char flag[21];

	struct node *my_list = NULL;

	// Use to input the list of names and numbers stored in a structure called node.
	/******************************************************************************/
	for (;;) {
		printf("Enter a name/number pair.  For example, Alex 61: ");
		scanf("%s %d", name, &num);
		printf("%s %d\n", name, num);
		
		my_list = append(my_list, name, num);
		printf("More? Enter Y or N: ");
		scanf("%s", flag);

		if(strcmp(flag, "N") == 0)
			break;
	}
	/******************************************************************************/
	
	// We print the list to check its values.
	printf("\nmy_list is: ");
	print_list(my_list);

	// We set the value we are going to search for and call find_last.
	int n = 7;
	printf("The number %d is last stored in a node with name: %s\n", n, find_last(my_list, n)->name);

	return 0;

}


struct node *find_last(struct node *list, int n) {

	struct node *p, *q = NULL;

 	for(p = list; p != NULL; p=p->next) // Iterate through the nodes of the list
 	/************** New Statements ******************/
	/************************************************/
		if (p->number == n) // Check if current node has a number value n
			q = p; // If the number is n set q to point do the current node
	return q;  // We will either return NULL of the node that last contained n.
/************************************************/
/************************************************/
}

// This function appends a node to the end of the list.   We use it to build a list.
struct node *append(struct node *list, char s[], int n) 
{
	// Create a new node
	struct node *new_node; 

	// Allocate memory for the new node
	new_node = malloc(sizeof(struct node));
	if (new_node == NULL) {
	printf("malloc failed in add_to_list\n");
	return list;
	}

	// Store values in the new node.
	new_node->number = n; 
	strcpy(new_node->name, s);
	new_node->next = NULL;

	if (list == NULL)
		return new_node;

	struct node *p; // 

	for (p = list; p->next != NULL; p = p->next);

	p->next = new_node;
	return list;
}

// This function prints a list.
void print_list(struct node *list)
{
	struct node *p;
	for(p = list; p != NULL; p = p->next)
		printf("%s %d  ", p->name, p->number);
	printf("\n");
}


/******************** OUTPUT *************************

> ./a.exe
Enter a name/number pair.  For example, Alex 61: Alex 61
Alex 61
More? Enter Y or N: Y
Enter a name/number pair.  For example, Alex 61: Erika 7
Erika 7
More? Enter Y or N: Y
Enter a name/number pair.  For example, Alex 61: Sonya 20
Sonya 20
More? Enter Y or N: Y
Enter a name/number pair.  For example, Alex 61: Joseph 7
Joseph 7
More? Enter Y or N: Y
Enter a name/number pair.  For example, Alex 61: Anthony 14
Anthony 14
More? Enter Y or N: N

my_list is: Alex 61  Erika 7  Sonya 20  Joseph 7  Anthony 14
The number 7 is last stored in a node with name: Joseph


*****************************************************/