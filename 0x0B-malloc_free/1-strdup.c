#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * _strdup - duplicate a string
 * @str: the string to be duplicated
 * Return: pointer to a duplicate string
 */

char *_strdup(char *str)
{
	int org_size;
	char *dup;
	char *dup_offset;

	if (str == NULL)
		return (NULL);

	org_size = strlen(str);

	dup = (char *) malloc(sizeof(char) * org_size + 1);

	if (dup == NULL)
		return (NULL);

	dup_offset = dup;

	while (*str)
	{
		*dup_offset = *str;
		dup_offset++;
		str++;
	}
	*dup_offset = '\0';
	return (dup);
}
