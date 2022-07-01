#include<stdlib.h>
#include "main.h"

/**
 * array_range - ...
 * @min: ...
 * @max: ...
 * Return: ...
 */

int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min) + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
