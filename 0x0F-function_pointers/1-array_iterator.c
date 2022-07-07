#include "function_pointers.h"

/**
 * array_iterator - iterate over an array
 * @array: the array to be iterated
 * @size: the size of the array
 * @action: a function pointer
 * Return: nothin
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && actin != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
