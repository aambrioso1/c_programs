
// C program to print the value of
// '\0' and '0'
#include <stdio.h>
  
int main()
{
    // Print the value of
    // '\0' and '0'
    printf("The \\0 is %d.\n", '\0');
    printf("The 0 is %d.\n", '0');
    printf("The null string ('\\0') %s.\n", "\0\0");
    printf("The 0 string ('0') is %s.\n", "0\0");
    printf("The char value fo the null string ('\\0') %c.\n", '\0');
    printf("The char value of the 0 string ('0') is %c.\n", '0');
    printf("The empty string \"\" ) %s.\n", "");
    printf("The char value for the single quote string (\" ) is %c.\n", "\"");
    return 0;
}



