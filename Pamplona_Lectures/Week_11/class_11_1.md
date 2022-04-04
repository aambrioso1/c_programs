### Week 11 Lecture 1

##### Streams

A stream means any source of input or any estination for output.
The keyboard is an input stream and the screen is an output stream.
Streams can also be associated with various media and other devices like network ports and printers.

Buffering (a large array) is used to speed up the process of transferring data.   Read and writing to a
buffer is very fast.   Putting data in a buffer and moving large blocks of it to and from the buffer
makes the process faster.

Functions in <stdio.h> perform buffering automatically.

When a buffer is full it is flushed.

* fopen() opens a file as a stream.  Returns a file pointer.   If file can't be open returns a null pointer (NULL).

FILE *pFILE; //declares a file pointer just used as reference to the file

pFILE = fopen("test.text", "r") // opens the file and returns a pointer to the file

NULL pointer

int *p NULL;

See canopen.c for an example.

File names are strings.   You can use the filename to access a file in the current working directory.   Or specify the location of the file with a path.  For example "/home/gamm/test.txt"

Modes
* "r" - read file (file needs to exist)
* "w" - write files (file created if necessary and overwritten if it exists)
* "a" - appends to a file (text added to the end of the file.  file created if necessary)

Note complete up to video: 20:00.

##### Programs
* canopen.c - example from the textbook of opening a file. (video: 14:00)
* fcopy.c - example from the textbook of writing to a file.
* my_cat.c - write contents of a file to stdout.


