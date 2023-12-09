// TODO - Implement the functions in this file

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tools.h"

char *t_trans[] = {
        "",
        "A",
        "Ba",
        "Aki",
        "Aoke",
        "Aehok",
	"Aloaki",
	"Ishnelo",
	"Akiticha",
	"Echeyakee",
	"Awakahnahe",
	"Aloakihshne",
	"Awakeekieloh",
	"Ishnehawahalo",
	"Awakeehmenalo",
	"Ishnehalohporah",
	"#@%"};
	

char *strdup (const char *s) {
    char *d = (char *)(malloc (strlen (s) + 1)); /* Space for length plus nul */
    if (d == NULL) return NULL;                  /* No memory                 */
    strcpy (d,s);                                /* Copy the characters       */
    return d;                                    /* Return the new string     */
}

char* taurahize_word(const char * const word){
    char* tword = NULL;
    if(!*word){
    	tword = t_trans[0];
    }
    int count = strlen(word);

    if (count <=15) {
    	tword = t_trans[count];
    }
    else {
    	tword = t_trans[16];}
    
    return strdup(tword);  
}


char* taurahize_phrase(const char* const phrase){
     char string_array[10];
     char *strcpy(char* string_array, const char *phrase);
     
     printf("The phrase to be tokenized is: \n%s\n", phrase);
     //char* translation = NULL;
     char* translation = strtok(*string_array, " "); //added * to eliminate the segmentation error
     taurahize_word(translation);
     while (translation = strtok(NULL, " ") != NULL) {
     	//printf("%s\n", translation);
     	taurahize_word(translation);
     	//translation = strtok(NULL, " ");
     	
     } 
     //int size = strlen(phrase);
     //for (int i=1; i<size; i++) {
     //	char letter = phrase[i];
     //	if isalpha(letter)   	
     }
     
     
     //return strdup(phrase);  // Useless right now, modify it




