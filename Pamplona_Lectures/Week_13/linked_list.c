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

	print_list(first);
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
	struct node *largest = find_largest(first);
	printf("The largest value in first is %d\n", largest->value);

	//printf("After clearing the list and adding 2, 3, 5, 7, and 11 to it we get: ");
	//print_list(first);
 
	return 0;
}




/*** Function to add a node to the list ***/
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
	for(p=list; p!= NULL; p=p->next) {
		if(q == NULL || p->value > q->value)
		q = p;
	}
	return q;
}



int duplicates(struct node *list){
       //add code here
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

//struct node *add_sorted_list


/************************ Output *****************************
PS C:\Users\Alex\c_programs\Pamplona_Lectures\Week_13> ./a.exe
Enter x (>0): 3
Enter x (>0): 4
Enter x (>0): 6
Enter x (>0): 7
Enter x (>0): 1
Enter x (>0): 11
Enter x (>0): 11
Enter x (>0): 8
Enter x (>0): 7
Enter x (>0): 33
Enter x (>0): 1
Enter x (>0): 11
Enter x (>0): 6
Enter x (>0): 11
Enter x (>0): 0
11 6 11 1 33 7 8 11 11 1 7 6 4 3
Enter n: 11
Using count_n:  11 appears 4 times
Using search_list:  11 appears 4 times
After clearing the list and adding 2, 3, 5, 7, and 11 to it we get: 11 7 5 3 2
*****************************************************************************/
