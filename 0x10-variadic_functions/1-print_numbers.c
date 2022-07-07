#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>

/**
 * print_numbers - print numbers supplied as arguments
 * @separator: a seperator beteen numbers
 * @n: number of arguments
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL)
		separator = "";

	va_start(args, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(args, int), separator);
	}

	printf("%d\n", va_arg(args, int));
	va_end(args);
}
