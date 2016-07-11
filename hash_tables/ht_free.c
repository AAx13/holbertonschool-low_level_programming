#include "hashtable.h"
#include <stdlib.h>

/* This function will free our hashtable from memory */
void ht_free(HashTable *hashtable)
{
        unsigned int i;
        List *list_ptr;
        List *previous;
        for(i = 0; i < hashtable->size; i++) {
                for(list_ptr = hashtable->array[i]; list_ptr != NULL; list_ptr = list_ptr->next) {
                        free(list_ptr->key);
                        free(list_ptr->value);
                        previous = list_ptr;
                        free(previous);
                }
                free(hashtable->array);
        }
        free(hashtable);
}
