#include "main.h"

/**
 * _islower - check whether letter is lower or not
 * @c: any letter
 *
 * Description: check case
 *
 * Return: 1 if true else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
