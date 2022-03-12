#include <stdio.h>

/***** Problem 18 on Practice Test 2 *****/

void get_extension(char *file_name, char *extension);

int main() {

    //File name: "Go ahead and make my.day"
    //expected extension: "day"
    char fileName[] = "Go ahead and make my.day";
    char ext[10] = {'\0'};
    get_extension(fileName,ext);
    printf("The extension of %s is %s\n", fileName, ext);


    char s1[21] = "alexander_text.txt";
    char s2[21] = "program.c";
    char s3[21] = "test.doc";

    char ext1[11];
    char ext2[11];
    char ext3[11];

    get_extension(s1, ext1);
    get_extension(s2, ext2);
    get_extension(s3, ext3);

    printf("The extension of %s is %s\n", s1, ext1);
    printf("The extension of %s is %s\n", s2, ext2);
    printf("The extension of %s is %s\n", s3, ext3);

    return 0;
}

/*
void get_extension(char *file_name, char *extension){

    char *p = file_name;

    // look for '.'
    for(p = file_name; *p!='\0'; p++) {
        if(*p == '.') {
            break;
        }
    }
    // write characters to the extension string until the end of the file_name
    if (*p!='\0') {
        for(p=p+1; *p!='\0'; p++) {
            *extension = *p;
            // *extension++ = *p; is more concise
            extension++;
        }
    } 
    *extension = '\0';  // Add a null character to the end of the extension string. 
}
*/

void get_extension(char *file_name, char *extension) {
    char *p;


    //At the end of this loop *p = '.' or *p = '\0'
    for (p= file_name; *p!= '\0'; p++)
        if(*p == '.')
            break;
    
    //Only run next loop if *p == '.'
    if(*p != '\0'){
        for(p=p+1; *p != '\0'; p++){
            *extension++ = *p; //assigning *extension the value of *p and move to the next character
        }
    }

    //Assigning '\0' to the extension
    *extension = '\0';
}

/********************* OUTPUT **************************

The extension of alexander_text.txt is txt
The extension of program.c is c
The extension of test.doc is doc


/********************* OUTPUT **************************
File name: "Go ahead and make my.day"
expected extension: "day"
********************************************************/
