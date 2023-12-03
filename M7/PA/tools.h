// TODO - nothing, do not modify this file

#ifndef _TOOLS_H_
#define _TOOLS_H_

/* Data Structures Definitions */

struct wordPair {
       char* englishWord;
       char* foreignWord;
};

struct dictionary {
       struct wordPair ** data;
       int nbwords;
       int size;
};


/* Prototypes of functions */

struct dictionary* dictionary_build(int size);
     /* ROLE        Allocate and initialize a new dictionary structure able to accommodate
                    a number of pairs of words specified by the size parameter
       RETURNS      Address of new dictionary, if allocation was successful.
                    NULL otherwise
       PARAMETERS   The size of the dictionary to make
     */

int dictionary_add(struct dictionary* d,
                           const char * const english,
                           const char * const foreign);
    /* ROLE         Adds a new wordPair made of strdup copies of the parameter strings
                    to a dictionary d

       RETURNS      0   if everything went fine
                    -1  if the dictionary or the field inside of it used to store
                        word pairs are NULL
                    -2  if we are unable to allocate a new wordPair
                    -3  if the English word is missing, i.e. English parameter is NULL
                    -4  if the foreign word is missing, i.e. foreign parameter is NULL
                    -5  if the dictionary is already full
                    -6  for any other problem you are able to detect - if any

       PARAMETERS   d           the dictionary to work with
                    English     string representing the English part of the new wordPair
                    foreign     string representing the foreign part of the new wordPair
    */


char* dictionary_translate(struct dictionary* d,
                                  const char* const english,
                                  const char* const foreign);
    /* ROLE         Looks up the dictionary d for the translation of a word depending on what
                    parameters are provided.

       RETURNS      If English is non NULL and foreign is NULL, return a strdup of the
                    translation of English in d
                    if foreign is non NULL and English is NULL, return a strdup of the
                    translation of foreign in d
                    If anything goes wrong, return NULL

       PARAMETERS   d           Address of the dictionary to work with
                    English     string representing the English word to translate, if any
                    foreign     string representing the foreign work to translate, if any

       REMARKS      words are not in any specific order, do not assume an order when
                    searching in this "dictionary", you'll have to look up every entry
                    against the words you are looking up
    */



int dictionary_free(struct dictionary** p);
    /* ROLE         Deallocate all memory which has been dynamically allocated
                    in the dictionary structure pointed to by *p. Then set the
                    pointer which address was passed as parameter to NULL.
       RETURNS      0       if everything went fine
                    -1      if we encountered some NULL pointers where we should
                            have encountered non-NULL pointers
       PARAMETERS   Pointer on a pointer on our dictionary
       REMARKS      Please note that if a pointer has a wrong address, we have no way to
                    detect this. We will just deallocate it and potentially trigger a bug.
    */


#endif
