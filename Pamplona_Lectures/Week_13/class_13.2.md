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

Exercise 1 and 2 are solved here:
* [linked_list.c](https://github.com/aambrioso1/c_programs/blob/master/Pamplona_Lectures/Week_13/linked_list.c) - an example of a linked list with functions for print, finding the largest value, and checking if a list has duplicates.

### Inserting a Node at the End of a Linked List

* The solution is the function: 
```
struct node *append(struct node *list, int n); 
```

You can find the function here: [linked_list.c](https://github.com/aambrioso1/c_programs/blob/master/Pamplona_Lectures/Week_13/linked_list.c).


### Deleting a Node from a Linked List

* We use the trailing pointer technique by iterating a pointer the keeps track of the previous node (prev) and the current node (cur). 

Deleting a node involves three steps;
1. Locate the node to be delected.
2. Alter the previous nodes so that it bypasses the deleted node.
3. Call ```free``` to reclaim the memory space occupied by the deleted node.

The following code implements the first step:

```
for (cur = list, prev = NULL; // Initialize cur as list and prev as NULL
	cur != NULL && cur->value != n; // Keep going if we haven't reached the end of the list or the node with value n
	prev = cur, cur = cur->next)
	;  // When the loop terminates cur points to the node to be deleted and prev points to the previous node.
```

You can find the function ```delete_the_list``` here: [linked_list.c](https://github.com/aambrioso1/c_programs/blob/master/Pamplona_Lectures/Week_13/linked_list.c).


Note the functions were are created all return the new first element of the list.   The allows us to update the first element of the list.

In class a student ask an excellent question and Pamplona explains.  

Question:  WHat does the delete function need to return the list.
Pamplona's answer:  When we delete the first element of the list we need to update the pointer to the list.   This pointer is the first element of the list.    We can update it with the call to append as show in the main() program.   

### Maintaining an Ordered Linked List

Start at 37:50