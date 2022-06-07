#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Description: print all letters of the alphabet using _putchar
 */

void print_alphabet(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		_putchar(alphabet[i]);
		i++;
	}
	_putchar('\n');
}
