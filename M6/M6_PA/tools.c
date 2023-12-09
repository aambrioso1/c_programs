/*
Assignment M6PA
File tools.c
Student: Alex Ambrioso
Date: 11/27/2023
Features: A functions to translate English words to Taurahe.
Bugs: None
*/


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tools.h"


char *strdup (const char *s) {
    // allocates memory for an array of characters
    char *d = (char *)(malloc (strlen (s) + 1)); /* Space for length plus null */
    if (d == NULL) return NULL;                  /* No memory                 */
    strcpy (d,s);                                /* Copy the characters       */
    return d;                                    /* Return the new string     */
}

char* taurahize_word(const char * const word){
    // Translates a single word to Taurahe

    // We initialize an array with all of the translation.
    // Note that the last item is for long words.
    char translation_array[][17] = { "",
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
        "Awakeeahmenalo",
        "Ishnehalohporah",
        "#@%" // for long words
    };

    int len = strlen(word); // Find the number of characters in theword

    if (len <= 15) return strdup(translation_array[len]); // Choose a translation for small words

    return strdup(translation_array[16]); // Else choose the translation for big words

}


char* taurahize_phrase(const char* const phrase){

    size_t len = strlen(phrase); // count the number of characters in the phrase

    char *translation = (char *)(malloc (len + 1));
    translation[0] = '\0';

    char working_copy[len];
    strcpy(working_copy, phrase);

    char *wordPtr = strtok(working_copy, " "); // begin tokenizing sentence

    // continue tokenizing sentence until wordPtr becomes NULL
    while (wordPtr != NULL) {
        strcat(translation, taurahize_word(wordPtr));
        strcat(translation," ");
        wordPtr = strtok(NULL, " "); // get next token
    }
    size_t len_translation = strlen(translation);
    translation[len_translation - 1] = '\0'; //remove the extra space at the end of the translation.

    return strdup(translation);

}
