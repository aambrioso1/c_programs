// TODO - Implement the functions in this file

#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/*
Assignment M5PA
File tools.c
Student: Joo-Young Gonzalez U60918693
Date: 11/20/2023
Features: word_modify is the function that modifies our input string by calling on our word_initialize function to identify words in the input string, add in the string ending null character, and store their addresses in an array. Each identified word in our array of pointers is then reversed using the word_reverse function. Additionally, the word_handle_marker function is invoked to add a space after each reversed word, creating a modified version of the original string. 

Bugs: My code is failing one of the tests I created, test#9, it is not handling spaces that come 	after the last word of a string. I'm not sure if this is a bug or something we didn't necessarily need to test for since the reversal of all the words is still correct.
*/


void word_reverse( char* str ){
    /*  ROLE        Reverses the order of the character in the string. Does
                    not modify the end of string marker '\0'.
        PARAMETERS  str - the string to reverse
    */

    int length = 0; // length of the string which is used to swap the characters below
    while (str[length] != '\0') {
        length++;
    }//end of while
    
    // swaps the characters of our strings in place
    for (int i = 0 ; i < length/2 ; i++){
    	char temp = str[i];
    	str[i] = str[length - i - 1];
    	str[length - i - 1] = temp;
    }//end of for loop
 
  
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
    /*  ROLE        Parses the string str and identify each word in it.
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
    int i = 0;
    int n = 0;
    while ( str[i] != '\0'){ 		 	
    //continue while string has not ended
    	if (!(is_separator(str[i]))){ 		
    	// if character is not a separator then we store as our first letter
    	    words[n] = &str[i]; 
    	    n += 1;				
    
    	    while ( !(is_separator(str[i]))) { 
    	    // skip following characters
    	    	i += 1;
    	    }
    	    // create out string ending null character
    	    if ( is_separator(str[i])) {    
    	    	str[i] = '\0';
    	    	i += 1;
    	    }
    	    
    	}// end of if
    	else {
    	    i += 1;// if we find another separator before our next first letter, then we increment to the next character
    	  
    	}// end of else
    }//end of while
   
    return(n);

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
