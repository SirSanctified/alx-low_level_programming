#include<stdio.h>
#include "main.h"

/**
 * main - print the program name
 * @argc: argument count
 * @argv: argument list
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
	}
	return (0);
}
