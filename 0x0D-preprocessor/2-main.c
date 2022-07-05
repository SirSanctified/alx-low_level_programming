#include<stdio.h>
#include<stdlib.h>

/**
 * main - print the name of a file
 * Description: print the file name in the __FILE__ macro
 * Return: always 0 on success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
