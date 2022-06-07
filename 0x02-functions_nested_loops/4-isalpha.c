#include "main.h"

/**
 * _isalpha - check if argument is an alphabet letter
 * @c: the letter to be checked
 *
 * Description: check for alphabet
 *
 * Return: 1 if true else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
