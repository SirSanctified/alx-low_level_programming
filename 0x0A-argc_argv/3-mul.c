#include<stdio.h>
#include<stdlib.h>

/**
 * main - multiply arguments to main
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i, result = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		result = result * strtol(argv[i], NULL, 10);
	}
	printf("%d\n", result);
	return (0);
}
