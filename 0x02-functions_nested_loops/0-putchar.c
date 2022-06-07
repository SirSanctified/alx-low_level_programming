#include "main.h"

/**
 * main - print _putchar
 *
 * Description: use the putchar function in main.h
 *
 * Return: 0 on success
 */

int main(void)
{
	char str[8] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(i + '0');
		i++;
	}
	return (0);
}
