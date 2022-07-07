#include "function_pointers.h"
#include<stdlib.h>

/**
 * int_index - search for an integer
 * @array: array to be searched
 * @size: array size
 * @cmp: function pointer
 * Return: index of the first occurance of an element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = -1;

	if (size <= 0 || !(array) || !(cmp))
		return (-1);

	while (++i < size)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
