#include "main.h"
#include<stdlib.h>

/**
 * alloc_grid - create a 2D array
 * @width: size of a single array within an array of arrays
 * @height: number of arrays within an array of arrays
 * Return: a pointer to a 2D array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int j;

	arr = malloc(width * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}

