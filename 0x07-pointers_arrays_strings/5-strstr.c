#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: source string
 * @needle: the substring
 * Return: pointer to first char of matching substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		i = 0;

		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
			*haystack++, *needle++, i++;
		if (*needle == '\0')
			return (haystack - i);
		haystack -= (i - 1), needle -= i;
	}
	return ('\0');
}
