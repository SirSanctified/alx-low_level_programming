#include "main.h"

/**
 * _strncpy - copy a string upto n byte
 * @s1: destination
 * @s2: source
 * @n: number of bytes
 * Return: pointer to destination
 */

char *_strncpy(char *s1, char *s2, int n)
{
	int i = 0;

	while (s2[i] != '\0' && i < n)
	{
		*(s1 + i) = s2[i];
		i++;
	}

	while (i < n)
	{
		s1[i] = '\0';
		i++;
	}
	return (s1);
}
