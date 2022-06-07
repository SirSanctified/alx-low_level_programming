#include "main.h"

/**
 * print_alphabet_x10 - print 10 lines of alphabet
 *
 * Description: call print_alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";

	while (i < 10)
	{
		int j = 0;

		while (j < 26)
		{
			_putchar(alpha[j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
