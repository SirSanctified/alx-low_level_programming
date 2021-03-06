#include "main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * create_array - create an array and initialise it with a specific char
 * @size: array size
 * @c: the initialising character
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return ('\0');

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
