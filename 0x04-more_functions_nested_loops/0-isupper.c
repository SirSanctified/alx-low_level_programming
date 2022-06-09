#include "main.h"

/**
 * _isupper -checker if letter is uppercase
 * @c: the letter to be checked
 *
 * Description: check if letter is uppercase or not
 *
 * Return: 1 if true else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
