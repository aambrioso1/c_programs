#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAXWORDS 10

int words_initialize( char* str, char* words[], int maxwords );
int is_separator( char data );

int main(){

    char* words[MAXWORDS];
    char* my_string = "  Are you having fun!";
    int num_words;

    num_words = words_initialize(my_string, words, MAXWORDS);

    return 0;


}



int words_initialize( char* str, char* words[], int maxwords ){
    /* 	ROLE        Parses the string str and identify each word in it.
                    Words are separated by any character which makes the
                    is_separator function returns true.
                    The address of the first character of each word in
                    the string str, is stored as a pointer in the array words.
                    When we find the end of the word we just added in the string
                    str, we modify it so that the next character becomes '\0'.
                    We are not able to handle more than maxwords words
                    and subsequent ones will be ignored.
                    Our function will return the number of words it found
                    which also indicates how many of the maxwords elements in
                    the array words are meaningful.

		RETURNS     the number of words identified in the string input.
		PARAMETERS  input    - string in which we will identify words
                    words    - an array of pointer on strings which will be the
                               words we have identified
                    maxwords - the size of the words array of pointers
    */


    int num_words = 0; // counts the number of words in the string.
    
    for (int i = 0; i < maxwords){
        if (is.separator(str[i])) {
            continue;
        else {
            words[num_words] = &s[i];
        }
        
        
    }
    words[num_words] = &str[i];

    printf("str[%d] = %c\n", i, str[i]);
    printf("words[%d] = %c\n", num_words, *words[num_words]);
    while(!is_separator(str[i])){
        // num_words += 1
        i += 1;
        printf("str[%d] = %c\n", i, str[i]);
    }

    // str[i] = '\0';

	return(num_words);

}

int is_separator( char data ){
    /* ROLE         Tests if the character passed as parameter is a separator;
                    i.e. something different than a letter or digit.
       RETURNS      1 - if data is a separator
                    0 - otherwise
       PARAMETERS   data - the character to test
    */

    return ( !isalnum(data) );
}

