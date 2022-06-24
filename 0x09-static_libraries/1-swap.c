#include "main.h"

/**
 * swap_int - swap two numbers
 * @a: first number
 * @b: second number
 *
 * Description: swap two numbers
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
