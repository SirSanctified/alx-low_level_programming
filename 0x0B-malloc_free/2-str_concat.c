#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * str_concat - concatenate two strings
 * @s1: the destination string
 * @s2: the string to be concatenated to s1
 * Return: pointer to modified s1
 */

char *str_concat(char *s1, char *s2)
{
	char *temp = (char *) malloc(strlen(s1) + strlen(s2) + 1);

	if (temp == NULL)
		return (NULL);

	while (s1)
	{
		*temp = *s1;
		temp++;
		s1++;
	}

	while (s2)
	{
		*temp = *s2;
		temp++;
		s2++;
	}
	*temp = '\0';
	s1 = temp;
	return (s1);
}

