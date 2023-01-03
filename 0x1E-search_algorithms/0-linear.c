#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: he value to search for
 *
 * Description: Every time it compares a value in the array to the value
 * it is searching, it prints this value. If value is not present in array
 * or if array is NULL, the function must return -1
 * Return: the first index where value is located or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx;
	size_t rtn_value = -1;

	if (array == NULL)
		return (rtn_value);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
		{
			rtn_value = idx;
			break;
		}
	}
	return (rtn_value);
}
