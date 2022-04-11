##### Week 12 Lecture 2


### Advanced uses of points (Chapter 17 in the textbook)

### Dynamic memory allocation

* Automatic allocation - when a variable is declare space is allocated and freed by the system
* dynamic allocation - the user decides when to allocate and free memory when the memory needs are not know before the program runs.

### Four types of memory
* stack - 	local variables
* heap - 	dynamically allocated memory
* static 	data - global (external variables)
* code - 	program instructions

Memory allocation functions require the <stdlib.h> header.

### Memory Allocation Functions
* malloc - allocates a block of memory but does not initialize it.
* calloc - allocates a block of memory and clears it (set values to 0).
* realloc - resizes a previously allocated block of memory.  
From the man pages (video: 1:11:20)
* free - 
* reallocarray

These functions return a value of type void* (a generic pointer)

### Using malloc to Allocate Memory

```
void *mallco(size_t size);
//10000 bytes of memory allocated
p = malloc(10000);
```
* size_t is an unsigned int type defined in <stdlib.h>

### Null pointers (video 13:00)

* malloc returns NULL when heap is exhausted

NULL can mean
* Address 0
* An invalid address
* NULL is a macro (defined in various library headers) that represents a null pointer

Start at 13:03





### Linked List Code

### Exercises

### Implement the following to link_list.c
* find_largest code - find the largest value in the list.
* find_duplicates code - decide whether a link-list has any duplicates.
* append_to_list - append a value to the end of the list.
* delete_from_list - deleting a node given a value.

### Maintaining an Ordered Linked List

* add_sorted_list - insert an element into a sorted list.

### Implementing a stack

* push
* pop - implemented during video
* peek






