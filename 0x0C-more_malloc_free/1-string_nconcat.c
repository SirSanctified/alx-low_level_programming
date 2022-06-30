#include "main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: upto n bytes of string 2
 * Return: pointer to resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m, k, i, j;
	char *result;
	char *s;
	char *nul = "";

	if (s1 == NULL)
		s1 = nul;

	if (s2 == NULL)
		s2 = nul;

	m = 0, k = 0;

	while (*(s1 + m))
		m++;

	while (*(s2 + k))
		k++;

	if (k < n)
		k = n;

	result = malloc(sizeof(char) * (m + k + 1));
	s = result;

	if (s == NULL)
		return (NULL);

	for (i = 0; i < m; i++)
		*(s + i) = *(s1 + i);

	for (i = 0, j = m; i < k; i++, j++)
		*(s + j) = *(s2 + i);

	*(s + j) = '\0';

	return (result);
}
