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
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
