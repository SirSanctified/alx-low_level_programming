#include "main.h"

/**
 * print_alphabet_x10 - print 10 lines of alphabet
 *
 * Description: call print_alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;;
	}
}
