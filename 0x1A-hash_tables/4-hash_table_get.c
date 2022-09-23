#include "hash_tables.h"

/**
 * hash_table_get -  retrieves a value associated with a key.
 * @ht: the hash table to be referenced
 * @key: the key to look up
 *
 * Return: the value associated with the element,
 * or NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *item = ht->array[index];

	if (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
	}
	return (NULL);
}
