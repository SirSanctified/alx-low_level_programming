#include "main.h"

/**
 * print_square - print square
 * @size: size of square
 *
 * Description: print square
 */

void print_square(int size)
{
	int i;

	if (size <= 0)
		_putchar('\n');

	i = 0;
	while (i < size)
	{
		int j = 0;

		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
