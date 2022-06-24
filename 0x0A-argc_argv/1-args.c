#include<stdio.h>

/**
 * main - print the number of arguments passed to the program
 * @argc: argument count
 * @argv: argument list
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	argv[1] = NULL;
	printf("%d\n", argc);
	return (0);
}
