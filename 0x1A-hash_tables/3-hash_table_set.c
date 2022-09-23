#include "hash_tables.h"

/**
 * create_item - create a data item
 * @key: the key of the hash table entry
 * @value: the value of the entry
 *
 * Return: the data item
 */

hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));

	item->key = (char *)calloc(strlen(key) + 1, sizeof(char));
	item->value = (char *)calloc(strlen(value) + 1, sizeof(char));

	strcpy(item->key, key);
	strcpy(item->value, value);

	return (item);
}

/**
 * hash_table_set - add an element to the hash table
 * @ht: the hash table to add an element to
 * @key: the key of the hash table
 * @value: the value
 *
 * Return: one on success and zero on failure
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item = create_item(key, value);
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *current = ht->array[index];

	if (current == NULL)
	{
		ht->array[index] = item;
		return (1);
	}
	else
	{
		if (strcmp(current->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = (char *) calloc(strlen(value) + 1, sizeof(char));
			strcpy(ht->array[index]->value, value);
			free(item);
		}
		else
		{
			item->next = ht->array[index];
			ht->array[index] = item;
		}
		return (1);
	}
	return (0);
}
