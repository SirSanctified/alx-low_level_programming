#include<stdio.h>
#include "main.h"

/**
 * print_diagsums - print sum of two diagonals of a square matrix
 * @a: the matrix
 * @size: the size
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i];
		sum2 += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
