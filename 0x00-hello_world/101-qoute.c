#include<stdio.h>
#include<unistd.h>

/**
 * main - print qoute to screen
 *
 * Descriptiom: use system write
 *
 * Return: 0 on success
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (0);
}
