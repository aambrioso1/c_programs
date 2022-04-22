#include <stdio.h>
#include <stdlib.h>


struct node *add_to_list(struct node *list, int n);
int count_n(struct node *list, int n);
void print_list(struct node *list);

struct node {
	int value;          /* data stored in the node  */
	struct node *next;  /* pointer to the next node */
};



int main() {
	
	// We use this loop to read in values for the list from the keyboard.
	// Usage:  Type in a number then enter.   Stops when user inputs 0.
	
	struct node *my_list = NULL;  // We initalize the list as NULL pointer.  This is the first element of the list.


	int x;
	for (;;) {
		printf("Enter x (>0): ");
		scanf("%d", &x);
		if(x <= 0)
			break;
		my_list = add_to_list(my_list, x);
	}

	// Print out the list and the number of appearances
	printf("my_list is: ");
	print_list(my_list);

	int num = 7; // The number who's occurrance in my_list we are counting
	printf("The number of times that %d appears in the list is %d\n",
			num, count_n(my_list, num));
}


int count_n(struct node *list, int n) {
	  struct node *p;
	  int count = 0;
	  for (p = list; p != NULL; p = p->next) {

/********** SOLUTION FOR PROBLEM 1 *******************/
/*****************************************************/
	    if (p->value == n)
	      	count++;
/*****************************************************/
/*****************************************************/
	  }
	  return count;
}

struct node *add_to_list(struct node *list, int n) 
{
	struct node *new_node; 

	new_node = malloc(sizeof(struct node));
	if (new_node == NULL) {
	printf("malloc failed in add_to_list\n");
	return list;
	}

	new_node->value = n; 
	new_node->next = list;
	
	return new_node;
}



void print_list(struct node *list)
{
	struct node *p;
	for(p= list; p != NULL; p = p->next)
		printf("%d ", p->value);
	printf("\n");
}

/******************** OUTPUT *************************

> ./a.exe
Enter x (>0): 5
Enter x (>0): 7
Enter x (>0): 9
Enter x (>0): 7
Enter x (>0): 4
Enter x (>0): 7
Enter x (>0): 7
Enter x (>0): 0
my_list is: 7 7 4 7 9 7 5
The number of times that 7 is appears in the list is 4

*****************************************************/