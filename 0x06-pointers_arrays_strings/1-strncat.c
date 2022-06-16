#include "main.h"

/**
 * _strncat - concatenate 2 strings upto n bytes
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_strncat(cahr *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && n != j)
	{
		*(dest + i) = src[j];
		j++;
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
