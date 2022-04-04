// my_cat.c
// prints contents of file to stdout

#include <stdio.h>
#define MAX_LEN 1000

int main() {
char str[MAX_LEN+1];
FILE* pFile;
pFile = fopen("ternary.c", "r");
if (pFile == NULL) {
printf ("Error opening file\n");
return 1;
}
while (fgets (str, MAX_LEN+1, pFile ) != NULL) {
printf ("%s", str);
}
//need to close the file before existing the program
return 0;
}