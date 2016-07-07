#include "hashtable.h"
#include <stdio.h>

char *ht_get(HashTable *hashtable, const char *key)
{
        List *list_ptr;
        unsigned int index;
        unsigned int i;
        index = hash(key, hashtable->size);
        printf("Current index is: %d", index);
        for(i = 0; i < hashtable->size; i++) {
                for(list_ptr = hashtable->array[index]; list_ptr->key == key; list_ptr = list_ptr->next) {
                        return list_ptr->value;
                }
                printf("%d\n", i);
        }
        return "NULL";
}
