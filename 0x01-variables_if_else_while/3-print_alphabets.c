#include<stdio.h>

/**
 * main - print alphabets
 *
 * Description: print alphabets in different cases
 *
 * Return: 0 on success
 */

int main(void)
{
	char lalpha[26] = "abcdefghijklmnopqrstuvwxyz";
	char ualpha[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	i = 0;
	while (i < 26)
	{
		putchar(lalpha[i]);
		i++;
	}

	i = 0;
	while (i < 26)
	{
		putchar(ualpha[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
