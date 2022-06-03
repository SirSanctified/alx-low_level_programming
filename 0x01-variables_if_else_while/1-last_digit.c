#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */

/**
 * main -find the last digit of a number
 *
 * Description: find the last digit of a number and print it to screen
 *
 * Return: 0 on success
 */

int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	else if (lastDigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	else
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	return (0);
}
