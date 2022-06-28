#include "main.h"
#include<stdlib.h>

/**
 * free_grid - free memory allocated to a 2d array
 * @arr: the 2D array
 * @height: the size of the 2d array
 * Return: nothing
 */

void free_grid(int **arr, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(arr[i]);
	free(arr);
}
