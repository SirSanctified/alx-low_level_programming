#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Description: print the array being searched every time it changes.
 * (e.g. at the beginning and when you search a subarray).
 * Assume that array will be sorted in ascending order and
 * That value won’t appear more than once in array. If value is not present
 * in array or if array is NULL, return -1.
 * Return: the index where value is located or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	return (binary(array, 0, size - 1, value));
}

/**
 * binary - helper function for binary_search function
 * @array: the array to search the value in
 * @low: the lower index of the array passed
 * @high: the high index of the passed array
 * @value: the value to be serched for
 *
 * Return: the index where value is located or -1 if not found
 */

int binary(int *array, size_t low, size_t high, int value)
{
	size_t mid = (high + low) / 2;
	size_t idx;

	printf("Searching in array:");
	for (idx = low; idx <= high; idx++)
	{
		if (idx != high)
			printf(" %d,", array[idx]);
		else
			printf(" %d\n", array[idx]);
	}
	if (mid == low && mid == high && array[mid] != value)
		return (-1);
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		binary(array, low, mid - 1, value);
	else
		binary(array, mid + 1, high, value);
	return (-1);
}
