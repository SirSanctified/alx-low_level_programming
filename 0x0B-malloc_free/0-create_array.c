#include "main.h"
#include<stdlib.h>

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

	for (i = 0; i < size - 1; i++)
	{
		arr[i] = c;
	}
	arr[i + 1] = '\0';
	return (arr);
}
