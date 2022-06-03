#include<stdio.h>

/**
 * main -print the alphabet
 *
 * Description: use putchar to print letters of the alphabet
 *
 * Return: 0 on success
 */

int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	i = 25;

	while (i >= 0)
	{
		putchar(alpha[i]);
		i--;
	}
	putchar('\n');
	return (0);
}

