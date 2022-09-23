#include "hash_tables.h"

/**
 * hash_table_print - print all key/value pairs in @ht
 * @ht: the hash table to print
 *
 * Description: print in the Java style
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, count = 0;


	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			count = i;
		}
	}

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (i != count)
				printf("'%s': '%s', ", ht->array[i]->key, ht->array[i]->value);
			else
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
		}
	}
	printf("}\n");
}

