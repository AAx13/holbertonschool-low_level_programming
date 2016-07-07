#include "hashtable.h"
#include <stdlib.h>

HashTable *ht_create(unsigned int size)
{
        unsigned int i;
        HashTable *hash;
        /* allocate memory for our new hash table "hash" */
        hash = malloc(sizeof(HashTable));
        /* affect the size value to the size value given */
        hash->size = size;
        /* allocate memory for the array where the array will be the size given */
        hash->array = malloc(sizeof(List) * size);
        for(i = 0; i < size; i++) {
                *(hash->array + 1) = NULL;
        }
        return hash;
}
