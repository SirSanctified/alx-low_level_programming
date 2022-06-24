#include "main.h"

/**
 * _memset - fill in memory with constant byte
 * @s: string of characters
 * @b: the constant byte
 * @n: number of bytes to be filled
 *
 * Description: works like standard memset
 * Return: modified string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
