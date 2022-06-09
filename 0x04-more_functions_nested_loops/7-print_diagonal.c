#include "main.h"

/**
 * print_diagonal - print diagonal on console
 * @n: length of diagonal
 *
 * Description: print diagonal
 */

void print_diagonal(int n)
{
	int i;

	i = 1;
	while (i <= n)
	{
		int j = 1;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
