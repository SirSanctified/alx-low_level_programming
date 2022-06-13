#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string to print in reverse
 *
 * Description: print string in reverse
 */

void print_rev(char *s)
{
	int len = _strlen(s);
	char *t = s + len - 1;

	while (t >= s)
	{
		_putchar(*t);
		t = t - 1;
	}
	_putchar('\n');
}
