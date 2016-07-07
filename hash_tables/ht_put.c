#include <stdlib.h>
#include <string.h>
#include "hashtable.h"

int ht_put(HashTable *hashtable, const char *key, const char *value)
{
        unsigned int index;
        List *list_ptr;

        /* retreive the index for the new list */
        index = hash(key, hashtable->size);
        /* affect our new list with the pointer to the correct index in the array */
        list_ptr = hashtable->array[index];
        /* if the current index has the same key but different value update the value */
        if(hashtable->array[index] != NULL) {
                /* if the new key and old key are the same then free the old value and add the new */
                if(string_compare(list_ptr->key, key) == 0) {
                        free(list_ptr->value);
                        list_ptr->value = strdup(value);
                }
        }
        /* create the node by first allocating memory to the size of type struct List */
        hashtable->array[index] = malloc(sizeof(List));
        /* affect the current pointer next to the first or newest node */
        hashtable->array[index]->next = list_ptr;
        /* allocate memory for and duplicate the new key to the new nodes key value */
        hashtable->array[index]->key = strdup(key);
        /* allocate memory for and duplicate the new value to the new nodes value */
        hashtable->array[index]->value = strdup(value);

        return 0;
}
