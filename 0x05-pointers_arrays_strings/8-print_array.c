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

	while (i < n)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
		i++;
	}
	puts("");
}
