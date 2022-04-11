### Week 12 Lecture 1

### Structures 


### Defining a structure

* define_struct.c - illustrates how to define a structure (9:00)

### Initializing Structure Variables (Start here at 12:54)

Variable are initialized with braces as in arrays - see define_struct.c for examples.

### Operations on Structures

* dot operator - takes precedence of nearly all operators.  
For example &part1.on_hand computes the address of parts.on_hand.
* assignment
* comparing structure values
* structure as arguments and return values
* structures can be used to get functions to return multiple values.  The built_part function in in structures.c illustrates this.

Use the dot operator.  For example part1.number, part1.name, part1.onhand

Structures can contain the expected stuff including arrays, pointers, and other structures.

Assignment works part2 = part1 copys part2 into part1.

Other operations will not work since the compiler will not know that type of the structure variable.
In particular == and != will not work.



* structures.c - illustrates how to define all the concepts of a structure structure (9:00 - 38.00)

### Programming Exercise - colors.c

colors.c - an application that uses a structure to store and change color information (38:00 - 49:00)

### Arrays of Structures

One of the most common combinations of arrays and structures is an array of structures.   This kind of a array can servce as a simple database (Project 8!).   An array of 100 part structures can be declared as follows:

```
struct part inventory[100]
```

* inventory.c - uses an array of part structs to implement a simple database.   Code comes from the textbook:

```
/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 * readline.c (Chapter 16, page 395)                     *
 *********************************************************/
 ```

* problem with scanf and reading multiple lines (video: 1:09:27)
Note that using scanf to read numbers and strings the newlines will not be read.   Need to read and consume the newline or use C's readline function or create your own as was done for inventory.c.

* int isspace(int c) function checks if a character is a space.  This function is in ctype.h library. (1:10:15)

### Standard whitespace

* `` 	- space
* '\n' 	- newline
* '\t'	- horizontal tab
* '\r'	- carriage return
* '\f'	- line feed
* '\v'	- vertical tab


