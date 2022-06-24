#include "main.h"

/**
 * _puts - print a string to stdout
 * @s: the string to be printed
 *
 * Description: print a string to stdout
 */

void _puts(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
