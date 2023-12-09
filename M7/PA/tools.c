// TODO - Implement the functions in this file

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tools.h"

struct dictionary* dictionary_build(int size){
     /* ROLE        Allocate and initialize a new dictionary structure able to accommodate
                    a number of pairs of words specified by the size parameter
       RETURNS      Address of new dictionary, if allocation was successful.
                    NULL otherwise
       PARAMETERS   The size of the dictionary to make
     */
    if (size <= 0) return NULL;
    Dictionary *d = NULL;
    myWord *data = NULL;
    d = (Dictionary*)malloc(sizeof(Dictionary));
    d->data=(myWord**)malloc(sizeof(myWord*)*size);
    d->size = size;
    d->nbwords = 0;
    return d;

}

int dictionary_add(struct dictionary* d,
                    const char * const english,
                    const char * const foreign){
    // strdup((d->data)->englishWord, english);
    // strdup((d->data)->foreignWord, foreign);

    return -1;
}

int dictionary_free( struct dictionary ** p){
    return -1;
}

char* dictionary_translate( struct dictionary* d,
                            const char* const english_word,
                            const char* const foreign_word){
    return NULL;
}
