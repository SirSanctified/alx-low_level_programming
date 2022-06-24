#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string to print in reverse
 *
 * Description: print string in reverse
 */

void print_rev(char *s)
{
	int len;
	char *t;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	t = s + len - 1;

	while (t >= s)
	{
		_putchar(*t);
		t = t - 1;
	}
	_putchar('\n');
}
