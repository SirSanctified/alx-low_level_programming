#include "main.h"

/**
 * _strlen_recursion - find the length of a string using recursion
 * @S: the string
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
