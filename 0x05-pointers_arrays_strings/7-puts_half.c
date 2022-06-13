#include "main.h"

/**
 * puts_half - print half of a string
 * @s: string
 *
 * Description: print half of string
 */

void puts_half(char *s)
{
	int len = 0, i;

	while (s[len])
		len++;

	i = 0;
	if ((len % 2) == 0)
	{
		i = len / 2;
		while (i < len)
		{
			_putchar(s[i]);
			i++;
		}
	}
	else
	{
		while (i < len / 2)
		{
			_putchar(s[i]);
			i++;
		}
	}
	_putchar('\n');
}
