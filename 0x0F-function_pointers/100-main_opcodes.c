#include<stdio.h>
#include<stdlib.h>

/**
 * main - print the name of this function
 * @argc: argument count
 * @argv: argument vector
 * Return: EXIT_SUCCESS
 */

int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < atoi(argv[i]) - 1; i++)
	{
		printf("%02hhx\n", ((char *)main)[i]);
		return (0);
	}
}
