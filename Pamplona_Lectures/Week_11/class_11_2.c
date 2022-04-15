// Week 11 Lecture 2


/*

Here is an outline of the lecture and the programs demonstrating during them.


rewind(): rewind to the beginning of the file.   See the program rewind_11_2.c for a demonstration.

fscanf()
int feof (FILE* pFile) - returns True if you attempt to read beyond the end of the file
fscanf() returns number of characters that were successfully read.

Example below for fscanf()
See dumbbells.c and dumbbells.txt for an example of fscanf().

The [...] conversion specifier for fscanf allows use to control what is input.
Can use format input to stop reading if something is wrong with the input.

fscanf(fp, "%*["^\n]\n", str) matches any character that is not a newline until newline is encountered

fscanf(fp, "%[,],", str) reads any character that is not a comma until a comma is met.


%[abc]  matches any string containing only a, b, and c.
%[^abc] mathches any string that does not contain a, b, and c.

read_animals_csv.c - read stuff from csv file, animals.csv, between commmas while skipping commas. (47:20)

strsep() can be used to extract delimiters.

fprintf(FILE* pfile, char* format, ....) prints to a file.   If pfile is stdout will behave like printf().

grades.c - demonstrates write to a file. 





*/
