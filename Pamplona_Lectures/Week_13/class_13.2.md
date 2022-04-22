# Week 13 Lecture 2


### Some Exercises from Previous Lecture (13.1) (video: 0:00 to 6:00)


### Excerise #1: Complete the function find_largest in program linked_list.c:

```
struct node *find_largest(struct node *list); 
```

### Start here:  6:00

### Exercise 2:  Complete the function that decides if a linked list has duplicates. (video:  6:00)


```
int duplicates(struct node *list);
```
Assume the nodes are declared as follows.

```
struct node {
int value; /* data stored in the node */
struct node *next; 
/* pointer to the next node */
};
```

Exercises 1 and 2 are solved here:
* [linked_list.c](https://github.com/aambrioso1/c_programs/blob/master/Pamplona_Lectures/Week_13/linked_list.c) - an example of a linked list with functions for print, finding the largest value, and checking if a list has duplicates.

### Inserting a Node at the End of a Linked List

* The solution is the function: 
```
struct node *append(struct node *list, int n); 
```

You can find the function here: [linked_list.c](https://github.com/aambrioso1/c_programs/blob/master/Pamplona_Lectures/Week_13/linked_list.c).


### Deleting a Node from a Linked List

* We use the trailing pointer technique by iterating through a the list using two pointers: one that keeps track of the previous node (prev) and one that keeps track of the current node (cur). 

Deleting a node involves three steps:
1. Locating the node to be deleted.
2. Altering the previous nodes so that it bypasses the deleted node.
3. Calling ```free``` to reclaim the memory space occupied by the deleted node.

The following code implements the first step:

```
for (cur = list, prev = NULL; // Initialize cur as list and prev as NULL
	cur != NULL && cur->value != n; // Keep going if we haven't reached the end of the list or the node with value n
	prev = cur, cur = cur->next)
	;  // When the loop terminates cur points to the node to be deleted and prev points to the previous node.
```

You can find the function ```delete_from_list``` here: [linked_list.c](https://github.com/aambrioso1/c_programs/blob/master/Pamplona_Lectures/Week_13/linked_list.c).


Note the functions that were are created all return the new first element of the list.   The allows us to update the first element of the list.

In class a student asks an excellent question and Pamplona explains. (36:00) 

Student's question:  Why does the delete function need to return the list.
Pamplona's answer:  When we delete the first element of the list we need to update the pointer to the list.   

This pointer is the first element of the list.    We update the list with the call to append() as show in the main() program:

```
first = delete_from_list(first, 123);
```


### Maintaining an Ordered Linked List
Link lists are nicer than arrays for adding elements where we want to.    With an array we must shift all the elements of an array over to make room for a new element.    With a linked list we simply point the element before the insertion position to the new element and point the new element to the element after the insertion position.

##### Ordered Link list - nodes are kept in order
* An ordered list requires code to find the position where a new element should be inserting.   
* Searching is faster.

We will create a linked list of structs with a single integer value as before:

```
// Note structure
struct node {
int number;
struct node *next;
};

struct node *list = NULL; // List initialization
```

We will use the following loop:

```
for (cur = list, prev = NULL;
cur != NULL && new_node->number > cur->number;
prev = cur, cur = cur->next)
;
```

This loop accomplishes two things:
1.  Determines where to insert the new element
2.  Checks whether the node value is already present.   For this example we do not want duplicates.


Advantages (58:46)
1.  We can stop a search early.  Since we know the size of the element we are searching for, we can stop when we find a value larger than the one we are looking for. 
2.  Our search_list algorithm, and any other algorithms involving search, can be improved by stopping the search when we reach a number that is larger the n.

##### Question (1:00:30)
Does our version of add_sorted() work if the number to be inserted is larger than all the numbers on the list?
Answer:  Yes.  We need to consider where prev and cur will point when the loop stops at the end of the list. This is the code that updates the list:

```
	else
		prev->next = new_node;  // point previous node (prev) to new_node
	new_node->next = cur;  // point new node to the next node (cur)
```

Since prev will point at the last item on the list, prev->next is updated to the new_node as it should be.  At termination of the loop, cur will point to null so new_node->next is updated to NULL as it should be.  All is well! 


Here is the code for sorted_insert.   There are some instructive, but minor, differences between this code and the code in the lecture.   The algorithm here is slightly more efficient and easier to read.   See my comments in the INSERT NEW NODE part of the code below.

```
struct node *sorted_insert(struct node *list, int n) {
	struct node *cur, *prev, *new_node;
	
	/* SEARCH FOR INSERTION POINT */
	for(cur=list, prev=NULL; cur != NULL && n > cur->number;
	prev=cur, cur=cur->next) /*nothing*/ ;
	if(cur != NULL && n == cur->number) {
		printf("Number already exists.\n");
		return list;
	}
	
	/* CREATE NEW NODE */
	new_node = malloc(sizeof(struct node));
	if(new_node == NULL) {
		printf("malloc failed in sorted_insert\n");
		return list;
	}
	
	/* INSERT NEW NODE */
	new_node->number = n;
	new_node->next = cur; // Different from lecture:  new_node->next is set at the beginning.
	if(prev == NULL)
		return new_node; // We return new_node right away.
	else {
		prev->next = new_node;
		return list;
	}
}
```

##### Programming Design Example:  Stacks (video: 1:02:48)

* A stack, LIFO (last in, first out) is a data structure that can store multiple items of the same type.
* Stacks are used extensively at every level of a modern computer system (recursion for and old HP calculators for example).
*  Used to process arithmetic expressions, for memory management, and for backtracking.

##### And now for something completely different ... (video: 1:03:37)

Water begins to pour into the classroom near the projector on the left side of the room (from students perspective).  Pamplona suggests we extend the lecture since it's raining outside.  He laughs and "whu-who's" at the thought!!! 

##### Implementing a Stack (video: 1:07:32)

A stack has the following operations
* Push - add an item to the top of the stack
* Pop - remove an item for the top of the stack
* Peak - look at top of the stack without stoppoing.
* Clear the stack.

* [stack.c](https://github.com/aambrioso1/c_programs/blob/master/Pamplona_Lectures/Week_13/stack.c - implements a stack)using dynamic memory allocation and a linked list.

