#include "hashtable.h"
#include <string.h>

/* this function will return the value of an indexed hash */
char *ht_get(HashTable *hashtable, const char *key)
{
        List *list_ptr;
        unsigned int index;
        /* retrieve the index using the hash function */
        index = hash(key, hashtable->size);
        /* affect the pointer to the first node in the list with the given index of the hash table array */
        list_ptr = hashtable->array[index];
        /* while the node in the list is not NULL traverse the list till we find the requested key */
        while(list_ptr != NULL) {
                if(string_compare(list_ptr->key, key) == 0) {
                        return (strdup(list_ptr->value));
                }
                list_ptr = list_ptr->next;
        }
        return "NULL";
}
