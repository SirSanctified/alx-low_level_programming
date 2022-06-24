#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

/**
 * main - add all arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: zero on success
 */

int main(int argc, char **argv)
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}

	for (i = 1; argv[i] != NULL; i++)
	{
		if (isalpha(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += strtol(argv[i], NULL, 10);
	}
	printf("%d\n", sum);
	return (0);
}
