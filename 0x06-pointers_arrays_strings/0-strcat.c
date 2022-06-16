#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Description: concatenate two strings
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	if ((dest == NULL) && (src == NULL))
		return (NULL);

	char *temp = dest;

	while (*temp != '\0')
		temp++;

	while (*src != '\0')
		*temp++ = *src++;

	*temp = '\0';
	return (dest);
}
