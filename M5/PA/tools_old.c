// TODO - Implement the functions in this file

#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void word_reverse( char* str ){
    /* 	ROLE        Reverses the order of the character in the string. Does
                    not modify the end of string marker '\0'.
        PARAMETERS  str - the string to reverse
    */

    size_t length = strlen(str); // we need the length of string to create a reversed index
    size_t i; // we need to declare i outside of for loop so we can add Null to the end new_string
    char new_str[length+1];
    
    for (i = 0; i < length; i++) { // We iterate backward through the string
        new_str[i] = str[length - i - 1]; // assign letter to a new string array
    }
    new_str[i] = '\0'; // append Null to terminate the new string

    strcpy(str, new_str); // copy the new string to the original string
    
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

    words[0] = str;
    return(1);
    /*
    int i = 0; // used to iterate through the string
    int num_words = 0; // counts the number of words in the string.
    
    while(str[i] != '\0') {
        if (!is_separator(str[i])) {
            words[num_words] = &str[i];
            num_words += 1;
            while(is_separator(str[i])){
                i += 1;
            } 
        }
        i += 1;


    }
    */

}


void word_handle_marker(char* str){  // WORKING FUNCTION - JUST DOCUMENT :)  - GIFT
     /* ROLE         Replaces the end of string marker '\0' by a space ' '
        PARAMETERS   str - the string to modify
     */

     while(*str){ str++; }
     *str = ' ';
}


void words_modify(char* str){

     const int MAXWORDS = 256;
     char* allwords[MAXWORDS];
     int i;
     int nbwords;

     /* initialize all pointers in allwords to NULL */
     for(i=0; i < MAXWORDS ; i++)
              allwords[i] = NULL;

    nbwords = words_initialize(str, allwords, MAXWORDS);
    for(i=0 ; i < nbwords ; i++){
            word_reverse(allwords[i]);
    }

    for(i=0 ; i < (nbwords-1) ; i++){
            word_handle_marker(allwords[i]);
    }
}
