#include<stdio.h>
#include "main.h"

/**
 * main - fizz buzz
 *
 * Description: fizz buzz
 */
int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 * fizz_buzz - fizz buzz
 *
 * Description: fizz buzz
 */

void fizz_buzz(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);

		i++;
	}
	putchar('\n');
}
