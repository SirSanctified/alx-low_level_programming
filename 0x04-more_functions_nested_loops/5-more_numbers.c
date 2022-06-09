#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 *
 * Description: print numbers
 */

void more_numbers(void)
{
	int i;

	i = 0;
	while (i < 15)
	{
		if (i < 10)
			_putchar(i + '0');
		else
			_putchar(1 + (i % 10) + '0');
		i++;
	}
	_putchar('\n');
}
