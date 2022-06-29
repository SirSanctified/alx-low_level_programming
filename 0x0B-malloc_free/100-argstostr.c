#include "main.h"
#include<stdlib.h>
#include<string.h>

/**
 * argstostr - convert command line arguments to a string
 * @ac: argument count
 * @av: array of arguments
 * Return: pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int size = 0;
	char *result;
	char *start;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		size += strlen(av[i]);

	result = malloc(sizeof(char) * size + ac);

	if (result == NULL)
		return (NULL);

	start = result;

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (*av[j])
		{
			*start = *av[j];
			start++;
			j++;
		}
		*start = '\n';
	}
	return (result);
}
