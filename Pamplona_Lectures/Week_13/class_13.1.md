# Week 13 Lecture 1


### Linked Lists

* consists of a chain of structures (called nodes) with each node containing a pointers
* a popular and important data structure
* can be used for stacks and queues
* each node in the list is linked to the next
* the links will be pointers
* the list itself is a pointer to the first element
* the last node contains a NULL pointer - a pointer to nothing
* link list are more flexible than an array
* an ll can grow as needed since memory is dynamically allocated.
* one disadvantage is that random access is not possible.


##### Setting up a linked list: (video: 11:00 - 28:00)

* linked_list.c - implements simple linked list of nodes containing a single value.

Note the numbers corresponde to numbers in the program linked_list.c

See the following number in the code.

1. Set up a structure that represent a single node.
2. We initalize the list as NULL pointer.  This is the first element of the list.
3. Create a new node.
4. Allocate memory for the new node.
5. Store vallues in the new node.
6. Insert the node into the list.  In this case we are adding it to the beginning of the list.


##### Add nodes with a function (video: 28:00)

Given this structure:

```
 struct node {
	 int value;          /* data stored in the node  */
	 struct node *next;  /* pointer to the next node */
 };
```


How do we know check that p is pointing to the first node of the linked list called list?

* Answer:  

```
p==list
```

How do we know check that p is pointing to the last node of the linked list called list?

````
p = p->next;
```

How do we iterate through the nodes of a linked list:

```
for(p = list; p! == NULL; p = p->next) {
	... body of for ...
}
```

##### Searching a Linked List (video:  43:27)












