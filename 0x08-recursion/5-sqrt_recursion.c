#include "main.h"

/**
 * sqrt_helper - help to evaluate from 0 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 * Return: 1 0n success, -1 on error
 */

int sqrt_helper(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_helper(a, b + 1));
}

/**
 * _sqrt_recursion - returns natural square root of n
 * @n: the number
 * Return: i on success, -1 on error
 */

int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}
