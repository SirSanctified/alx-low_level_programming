#include "hash_tables.h"

/**
 * key_index - gives the index of @key
 * @key: the key of the hash table entry
 * @size: is the size of the array of the hash table
 *
 * Return: the index at which key/value pair should be stored in the array
 * of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
