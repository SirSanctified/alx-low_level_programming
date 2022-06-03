#include<stdio.h>

/**
 * main -print 0-9
 *
 * Description: print digits from 0 to 9
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;
	char hex[6] = "abcdef";

	i = 0;
	while (i < 10)
	{
		putchar(i % 10 + '0');
		i++;
	}

	i = 0;
	while (i < 6)
	{
		putchar(hex[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
