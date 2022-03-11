#include <stdio.h>
#include <string.h>

/***** Problem 18 on Practice Test 2 *****/

void get_extension(char *file_name, char *extension);

int main() {
    //File name: "Go ahead and make my.day"
    //expected extension: "day"
    char fileName[] = {'G','o',' ','a','h','e','a','d',' ','m','a','k','e',' ','m','y','.','d','a','y','\0'};
    char ext[10] = {'\0'};
    get_extension(fileName,ext);
    printf("%s\n",ext);
    return 0;
}


void get_extension(char *file_name, char *extension) {
    char *p;

    //At the end of this loop *p = '.' or *p = '\0'
    for (p= file_name; *p!= '\0'; p++)
        if(*p == '.')
            break;
    
    //Only run next loop if *p == '.'
    if(*p != '\0'){
        for(p=p+1; *p != '\0'; p++){
            *extension++ = *p; //assing *extension the value of *p and move to the next character
        }
    }

    //Assing '\0' to the extension
    *extension = '\0';
}

/********************* OUTPUT **************************
File name: "Go ahead and make my.day"
expected extension: "day"
********************************************************/
