/*
Assignment M6 IE
File: main.c
Student: Alex Ambrioso
Date: 11/27/2023
Features: A functions to translate numbers in a sentence to French
Bugs:   (1) Could not get word and sentence translation work together.
        (2) Not sure how to plug the memory leaks!!!
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *strdup (const char *s);
char* translate_word(const char * const word);
char* translate_phrase(const char* const phrase);

#define NB_WORDS 10


int main()
{
    printf("\nWelcome to Alex's Simple English to French Translator!!!\n\n");

    char word[100] = "";
    char sentence[100] = "";
    //char test_sentence[] = "Alex counts one two three";

    /*
    while(!strcmp(word,"\n")){
        printf("%s", "Enter word to translate: ");
        scanf("%s", word);
        printf("\tThe translation is %s\n", translate_word(word));
    }
    */

    printf("%s", "Enter a sentence to translate: ");
    fgets(sentence, 99, stdin);
    printf("\tThe translation is %s\n", translate_phrase(sentence));

    return EXIT_SUCCESS;
}


char* translate_word(const char * const word){
    // Translates a single number word to French
    // If the word is not a number it is left alone.

    // An array of English French word pairs to use for translation
    static const char * translationTable[NB_WORDS][2] = {
        { "zero" , "zero" },
        { "one" , "un" },
        { "two" , "deux" },
        { "three" , "trois" },
        { "four" , "quatre" },
        { "five" , "cinq" },
        { "six" , "six" },
        { "seven" , "sept" },
        { "eight" , "huit" },
        { "nine" , "neuf" }
    };

    char english_word[6]; // varible to store English word in word pair
    char french_word[6]; // varible to store French word in word pair


    for (int i = 0; i < 10; i++) {
        if (!strcmp(word, translationTable[i][0])){
            return strdup(translationTable[i][1]);
        }
    }

    return strdup(word);
}


char* translate_phrase(const char* const phrase){
    // Translate the numbers in a phrase to French

    size_t len = strlen(phrase); // count the number of characters in the phrase

    char *translation = (char *)(malloc (len + 1));
    translation[0] = '\0';

    char working_copy[len];
    strcpy(working_copy, phrase);

    char *wordPtr = strtok(working_copy, " "); // begin tokenizing sentence

    // continue tokenizing sentence until wordPtr becomes NULL
    while (wordPtr != NULL) {
        strcat(translation, translate_word(wordPtr));
        strcat(translation," ");
        wordPtr = strtok(NULL, " "); // get next token
    }
    size_t len_translation = strlen(translation);

    // We check if translation is two big.
    if (len_translation > 500) return "Error:  Translation string is too big";
    

    translation[len_translation - 1] = '\0'; //remove the extra space at the end of the translation.

    return strdup(translation);

}
