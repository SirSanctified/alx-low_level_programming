#include<stdio.h>
#include "main.h"

/**
 * print_array - print array upto n
 * @a: the array
 * @n: limit
 *
 * Description: print array upto n
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (i > 0)
		printf("\n");

	while (i < n && i !< 0)
	{
		if (i == n - 1)
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
		i++;
	}
}
