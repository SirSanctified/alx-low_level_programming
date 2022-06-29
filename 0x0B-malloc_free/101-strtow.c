#include "main.h"
#include<stdlib.h>
#include<string.h>

/**
 * strtow - convert a string into an array of words
 * @str: string to be converted
 * Return: an array of words
 */

char **strtow(char *str)
{
	int i, j, k;
	int size = strlen(str);
	char **arr = malloc(sizeof(char) * size + 1);

	if (arr == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	j = 0, k = 0;

	for (i = 0; i < size; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\0')
		{
			arr[j][k] = '\0';
			j++;
			k = 0;
		}
		else
		{
			arr[j][k] = str[i];
			k++;
		}
	}
	arr[j][k] = '\0';
	return (arr);
}
