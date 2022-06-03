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

	i = 0;
	while (i < 10)
	{
		putchar(i % 10 + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
