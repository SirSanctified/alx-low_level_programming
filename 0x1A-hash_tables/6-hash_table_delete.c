#include "hash_tables.h"

/**
 * free_item - free each hash table item
 * @item: the hash table item
 *
 * Description: helper for deleting entire table
 */

void free_item(hash_node_t *item)
{
	free(item->key);
	free(item->value);
	free(item);
}

/**
 * hash_table_delete - delete the entire hash table
 * @ht: the hash table to be deleted
 *
 * Description: free all the memory occupied by @ht
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *item = ht->array[i];

		if (item != NULL)
			free_item(item);
	}
	free(ht->array);
	free(ht);
}
