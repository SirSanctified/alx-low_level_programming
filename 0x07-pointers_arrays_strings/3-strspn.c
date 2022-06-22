#include "main.h"

/**
 * _strspn - search a string for a set of bytes
 * @s: source string
 * @accept: accepted string
 * Return: number of bytes in the int segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, a = 0, b;

	while (accept[i])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[i] == s[b])
				a++;
			b++;
		}
		i++;
	}
	return (a);
}
