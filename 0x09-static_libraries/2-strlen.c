#include "main.h"

/**
 * _strlen - find length of string
 * @s: the supplied string
 *
 * Description: find string length
 *
 * Return: the length of string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
