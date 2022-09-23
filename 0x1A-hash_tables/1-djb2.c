#include "hash_tables.h"
#include<ctype.h>
/**
 * hash_djb2 - a hash function implementing the djb2 algorithm
 * @str: the string to be hashed
 *
 * Description: implementation of the djb2 hashing algorithm
 * Return: the hash value of @str
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
	{
		hash = ((hash * 32) + hash) + c;
	}
	return (hash);
}
