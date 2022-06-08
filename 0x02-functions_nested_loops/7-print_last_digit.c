#include "main.h"

/**
 * print_last_digit - print last digit of a given number
 * @num: the given number
 *
 * Description: calculate using modulo 10
 *
 * Return: the last digit
 */

int print_last_digit(int num)
{
	int ret;
	int abs;

	if (num < 0)
		abs = num * -1;
	else
		abs = num;
	ret = abs % 10;
	_putchar(ret + '0');
	return (ret);
}
