# Week 13 Lecture 2


### Some Exercises from Previous Lecture (13.1) (video: 0:00 to 6:00)


### Excerise #1: Complete the function find_largest in program linked_list.c:

```
struct node *find_largest(struct node *list); 
```

* linked_list.c - an example of a linked list with functions for print, finding the largest value, and checking if a list has duplicates.

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