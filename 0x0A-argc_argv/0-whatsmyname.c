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
	printf("%s\n", argv[0]);
	argc--;
	return (0);
}
