
/********************** Practice Test 3 - Problem 22 *********************
Topic:  Working with files and command line arguments

Answer: see main

*************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[]) {
 FILE *fp;
 fp = fopen(argv[1], "a");
 fprintf(fp, "That’s all, folks!\n");
 fclose(fp);
}






/******** Output ***********

File contents before running code: 
"Drum roll please...."

File contents after running code:  
"Drum roll please .... 
That’s all, folks!"



*****************************************************/