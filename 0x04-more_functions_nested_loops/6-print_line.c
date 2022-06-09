#include "main.h"

/**
 * print_line - print line on console
 * @n: line length
 *
 * Description: print line
 */

void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
