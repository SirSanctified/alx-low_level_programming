#include "main.h"
#include<stdlib.h>

/**
 * _calloc - reallocate memory
 * @nmemb: number of members
 * @size: size
 * Return: pointer to allocated memory
 */

void _calloc(unsigned int nmemb, unsigned int size)
{
	int i, j;
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;

	p = malloc(j);

	if (p == NULL)
		return (NULL);

	while (i < j)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
