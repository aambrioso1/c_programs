##### Notes for Chapter 22


## 22.1  Streams

Three standard streams;
(1) stdin - standard input - default:  Keyboard
(2) stdout - standard output - default: screen
(3) stderr - standard erro - default: screen



Streams are accessed through file pointers.

These can be change by indirection.  For example:

demo >out.dat

will write output data to out.dat

Two types of files: Text and binary files are supported by <stdio.h>

## 22.2  File Operations

* *fopen(filename, mode)
* *fclose(filename, mode)
* freopen(filename, mode, filename) - attach a different file to an open stream
* tmpfile() - creates a temporary file
tmpname(filename) - creates a temporary file name

File buffering
fflush(filename)
setbuff(filename)
setvbuf(filename)

remove(filename)
rename(filename)


Different modes are listed in Table 22.2.

## 22.3  Format I/O

*fprintf(file, string, values)
*printf(string, values)
*Conversion Specifications
*fscanf(file, string, values)
*scanf(string, values)
*clearerr(filename)
*feof(filename)
*ferror(filename)

ToDO:  Write out program for demo of feof and ferror.

## 22.4 Charactor I/O

Output functions
fputc(character, filename) - write a character to an arbitrary stream
putc(character, filename) - macro version of fputc
putchar(character) - write a character to stdout

input functions
fgetc
getc
getchar
ungetc - pushes back last character read

## 22.5 Line I/O






