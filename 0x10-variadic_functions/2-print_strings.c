#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print all strings passed in as arguments
 * @separator: the separator between strings
 * @n: number of passed in arguments
 * Return: nothuing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n - 1; i++)
	{
		char *str = va_arg(args, char*);

		if (str == NULL)
			str = "nil";
		if (!(separator))
			printf("%s", str);
		else
			printf("%s%s", str, separator);
	}
	printf("%s\n", va_arg(args, char*));
	va_end(args);
}
