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

	i = len / 2;
	if ((len % 2) == 1)
	{
		i = (len + 1) / 2;
		while (i < len)
		{
			_putchar(s[i]);
			i++;
		}
	}
	else
	{
		while (s[i])
		{
			_putchar(s[i]);
			i++;
		}
	}
	_putchar('\n');
}
