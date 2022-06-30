#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * malloc_checked - safe malloc
 * @b: bytes of memory to allocate
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
