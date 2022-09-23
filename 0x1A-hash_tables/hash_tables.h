
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>

/**
 * struct hash_node_s - Node of a hash table
 * @key: the key, string
 * The key is unique in the HashTable
 * @value: the value corresponding to a key
 * @next: a pointer to the next node of the list
 */

typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 * @size: the size of the array
 * @array: an array of size @size
 * Each cell of this array is a pointer to the first node of the linked list,
 * because we want our hash table to use a chaining collision handling
 */

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
hash_node_t *create_item(const char *, const char *);
int hash_table_set(hash_table_t *, const char *, const char *);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
void free_item(hash_node_t *item);
