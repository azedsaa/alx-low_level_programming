#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-last digit "take a n variable as an input extract the last digit and
 * print it after comparing it with the number 5
 * Return: alwayd 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10
	if (last_digit > 5)
	{
		printf("Last digit of %d and is greater than 5\n", n);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d and is 0\n", n);
	}
	else if (last_digit < 6)
	{
		printf("Last digit of %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
