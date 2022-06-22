#include "main.h"

/**
 * _memcy - copy bytes fro one string to another
 * @dest: the destination
 * @src: the destination
 * @n: number of bytes
 * Return: modified dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

