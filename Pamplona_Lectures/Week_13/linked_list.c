#include <stdio.h>
#include <stdlib.h>

struct node *add_to_list(struct node *list, int n);
struct node *search_list(struct node *list, int n);
struct node *delete_from_list(struct node *list, int n);
void print_list(struct node *list);
int duplicates(struct node *list);
void clear_list(struct node *list);
struct node *find_largest(struct node *list);

int count_n(struct node *list, int n);

struct node *append(struct node *list, int n); 

struct node *delete_from_list(struct node *list, int n);

struct node *add_sorted(struct node *list, int n);


// The numbered items show how to create a basic linked list with nodes added to the top of the list (a stack).
//1.
struct node {
	int value;          /* data stored in the node  */
	struct node *next;  /* pointer to the next node */
};

int main()
{


 	struct node *first = NULL;  // 2. We initalize the list as NULL pointer.  This is the first element of the list.

	/* inserting nodes */
	int x;

	for (;;) {
		printf("Enter x (>0): ");
		scanf("%d", &x);
		if(x <= 0)
			break;
		first = add_to_list(first, x);
	}

	printf("The list first is: ");
	print_list(first);

	struct node *largest = find_largest(first);
	printf("The largest value in first is %d\n", largest->value);
	
	printf("Does first have duplicates? Answer: %d\n", duplicates(first));

	int new1 = 123;
	int new2 = 321;

	first = append(first, new1);
	first = append(first, new2);
	printf("The list first with %d and %d appended to it is: ", new1, new2);
	print_list(first);
	first = delete_from_list(first, 123);
	printf("If we now delete %d from the list we have: ", new1);
	print_list(first);	
	
	// We demonstrated a sorted list.
	printf("********** Create a Sorted List **********\n");
	
	struct node *second = NULL; // Initial the sorted list.

	for (;;) {
		printf("Enter x (>0): ");
		scanf("%d", &x);
		if(x <= 0)
			break;
		second = add_sorted(second, x);
	}

	printf("The sorted list is: ");
	print_list(second);


	return 0;	


	/*

	int n;

	printf("Enter n: ");
	scanf("%d", &n);
	
	// We can occurence of n using count_n.   The function count_n iterates straight through the list.
	printf("Using count_n:  %d appears %d times\n", n, count_n(first,n));
	
	

	// We count the occurences o fn using search_list.  Find the first occurrance of n.  Then we call search_list again starting at the next pointer after n was found.   to find n.  The count is incremental every time n is found. 
	int count = 0;
	while(first != NULL) {
		first = search_list(first, n);
		if (first != NULL) {
			count++;
			first = first->next;
		}
	}
 	printf("Using search_list:  %d appears %d times\n", n, count);

	// We clear the list.
	clear_list(first); 

	// We insert 3 and 5 into the empty list and print out the new list.
	first = add_to_list(first, 2);
	first = add_to_list(first, 3);
	first = add_to_list(first, 5);
	first = add_to_list(first, 7);
	first = add_to_list(first, 11);
	*/

	//printf("After clearing the list and adding 2, 3, 5, 7, and 11 to it we get: ");
	//print_list(first);

}




/*** Function to add a node to the beginning of list ***/
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

/*** Function to add a node to the end of list ***/
struct node *append(struct node *list, int n) 
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
	new_node->value = n; //  Equivalent to (*new_node).value = n .  We use indirection to access the value point to by new_node.
	new_node->next = NULL;

	// If the list is empty just add the new node.
	if (list == NULL)
		return new_node; // new_node becomes the first and only member of the list.

	// Find the end of the list.
	struct node *p; // 

	for (p = list; p->next != NULL; p = p->next); // Go to the end of the list

	// The for loop left p add the end of the list.
	p->next = new_node; // Point the last element of the list to the new_node.
	
	return list; // Return the new list.
}



struct node *search_list(struct node *list, int n)
{
	  struct node *p;
	
	  for (p = list; p != NULL; p = p->next)
	    if (p->value == n)
	      return p;
	  	else if (p->value > n) 
	  		break;
	  return NULL;
}

void print_list(struct node *list)
{
	struct node *p;
	for(p= list; p != NULL; p = p->next)
		printf("%d ", p->value);
	printf("\n");
}


void clear_list(struct node *list)
{
  struct node *p;
  while(list != NULL)
  {
	 p = list; // We store the value of list in p so we can free p and move the point of list to increment count.
     list = list->next; // Note that we push the list pointer to next then release P.
     if( p != NULL)
           free(p);
  }
  printf("list after clearing: ");
  print_list(list);
}


struct node *find_largest(struct node *list) {
	struct node *p, *q = NULL;
	// The for loop code structure here is the most important thing to know.
	for(p = list; p != NULL; p = p->next) {
		if(q == NULL || p->value > q->value)
		q = p;
	}
	return q;
}

// Returns a 1 if the list has duplicates and 0 otherwise.
int duplicates(struct node *list){
	struct node *p, *q = NULL;
	// The for loop code structure here is the most important thing to know.
	for(p = list; p!= NULL; p = p->next) {
		if(search_list(p->next, p->value) != NULL)
			return 1;
	}
	return 0;
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

struct node *add_sorted(struct node *list, int n)
{
	struct node *cur, *prev;
	
	// Find the node that needs to be delete (cur) AND the node before it (prev).
	for (cur = list, prev = NULL; // Initialize cur as list and prev as NULL
		cur != NULL && cur->value < n; // Keep going if we haven't reached the end of the list or the node with value n
		prev = cur, cur = cur->next);

	// Create a new node
	struct node *new_node; 

	// Allocate memory for the new node
	new_node = malloc(sizeof(struct node));
	if (new_node == NULL) {
	printf("malloc failed in add_to_list\n");
	return list;
	}

	// Store values in the new node.
	new_node->value = n; //  Equivalent to (*new_node).value = n.

	if (prev == NULL) {
		list = new_node;
	}
	else
		prev->next = new_node;  // point previous node (prev) to new_node
	new_node->next = cur;  // point new node to the next node (cur)

	return list;
}



/************************ Output ****************************

> ./a.exe
Enter x (>0): 22
Enter x (>0): 35
Enter x (>0): 100
Enter x (>0): 1
Enter x (>0): 35
Enter x (>0): 0
The list first is: 35 1 100 35 22
The largest value in first is 100
Does first have duplicates? Answer: 1
The list first with 123 and 321 appended to it is: 35 1 100 35 22 123 321
If we now delete 123 from the list we have: 35 1 100 35 22 321

*****************************************************************************/
