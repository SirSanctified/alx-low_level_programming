#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum up all variable number of arguments
 * @n: the number of passed argument
 * Return: sum of all variables on success or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	return (sum);
}
