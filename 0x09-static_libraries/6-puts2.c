#include "main.h"

/**
 * puts2 - print odd numbered characters
 * @s: string
 *
 * Description: print odd numbered characters
 */

void puts2(char *s)
{
	int i = 0;

	while (s[i])
	{
		if ((i % 2) == 0)
			_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
