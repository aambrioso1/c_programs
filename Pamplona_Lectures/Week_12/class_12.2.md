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
* if a memory allocation function cannot locate a memory block it will return a null pointer
* The null point can be distinguished from all pointers.
* if we store a memory functions return vlaue in a pointer variable we must check if its a null pointer.

```
\\ Check if a memory block is available
p = malloc(10000);
if (p == NULL) {
	/* allocation failed; take appropriate action */
	printf("Error: malloc failed");
}
```

* malloc.c - Allows user to try to allocate arbitrarily large memory blocks with a command line argument.   Supposed to show how NULL pointer can be used.   I had to use a long long int to get it too work for a reasonably sized int..



### sizeof Operator
* sizeof(type_name) - returns an unsigned int for the number of bytes required to store a value with type type_name
* sizeof(char) = 1
* sizeof(int) = 4 (usually)
* Use sizeof to check size of types to be safe since values may vary based on processors.

* sizeof.c - use malloc and big allocation to overload memory and computes the size of various types.

Dynamic Allocation allows programmer to create structures that are linked together to forms lists, trees, and other data structures.   Pieces of memory are not tied down to a specific scope.   Memory exists until it is release.

### Using malloc to allocate storage for an array

The following code can be used to create an array of n integers during program execution:
```
int *a; // declare an integer pointer
a = malloc(n * sizeof(int)) // note the malloc returns an address for contiguous block of memory
```

We can loop through the array like this:

```
for( i = 0; i , n: i++) 
	a[i] = 0;
```

* array_malloc - illustrates how to create an array of integers using dynamic allocation.

An important advantage to dynamic allocation is that an array created inside a function using dynamic allocation will persist after the function has been executed.   An array created inside a function will not persist.

### Dynamically allocated strings
* since string length can be difficult to anticipate dynamic allocation is useful for allocating memory as needed.

Code for a string with n characters looks like this:

```
char *p; // declare a char pointer to hold the string.
p = malloc(n+1); // We leave room for the null character.
strcpy(p,"abc"); // Using string copy is one way to initialize an array.
```

* sentence.c - Read a string a store it into a large buffer, allocate memory to hold the string, copy the string to the new memory block.

Start at 43:00:  Write code for sentence.c

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






