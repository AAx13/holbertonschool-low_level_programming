# Hash Tables Project

* Data structures for this project:

```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
 typedef struct hash_node_s
 {
	char *key;
	char *value;
	struct hash_node_s *next;
 } hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
 typedef struct hash_table_s
 {
	unsigned long int size;
	hash_node_t **array;
 } hash_table_t;
```

## Functions

[hash_table_create](../0x19-hash_tables/0-hash_table_create.c)
```c
/* hash_table_create - Creates a hash table. */
hash_table_t *hash_table_create(unsigned long int size);
```

[hash_dbj2](../0x19-hash_tables/1-djb2.c)
```c
/* hash_dbj2 - Hash function implementing the djb2 algorithm. */
unsigned long int hash_djb2(const unsigned char *str);
```

[key_index](../0x19-hash_tables/2-key_index.c)
```c
/* key_index - Function to return the index of a key. */
unsigned long int key_index(const unsigned char *key, unsigned long int size);
```

[hash_table_set](../0x19-hash_tables/3-hash_table_set.c)
```c
/* hash_table_set - Adds an element to the hash table. */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
```

[hash_table_get](../0x19-hash_tables/4-hash_table_get.c)
```c
/* hash_table_get - Function that retrieves a value associated with a key. */
char *hash_table_get(const hash_table_t *ht, const char *key);
```

[hash_table_print](../0x19-hash_tables/5-hash_table_print.c)
```c
/* hash_table_print - Prints a hash table. */
void hash_table_print(const hash_table_t *ht);
```

[hash_table_delete](../0x19-hash_tables/6-hash_table_delete.c)
```c
/* hash_table_delete - Deletes a hash table.*/
void hash_table_delete(hash_table_t *ht);
```