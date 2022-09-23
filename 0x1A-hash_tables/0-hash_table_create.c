#include "hash_tables.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * hash_table_create - create a hash table
 * @size: the size of the hash table
 *
 * Description: create a hash table of size @size and fill it with nulls
 * Return: the pointer to the newly created hash table if successful else NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
