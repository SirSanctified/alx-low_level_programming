#include "main.h"

/**
 * create_array - create an array and initialise it with a specific char
 * @size: array size
 * @c: the initialising character
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	for (i = 0; i < size - 1; i++)
	{
		arr[i] = c;
	}
	arr[i + 1] = '\0';
	return (arr);
}
