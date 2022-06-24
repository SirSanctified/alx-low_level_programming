#include "main.h"

/**
 * string_toupper - change  a string to upper case
 * @s: string to be modified
 * Return: modified string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		i++;
	}
	return (s);
}
