#include <stdio.h>
/**
  * main - function printing number in base 16
  * Return: always 0.
  */

int main(void)
{
	int x;

	for (x = 0 ; x <= 16 ; x++)
	if (x < 10)
	{
		putchar('0' + x);
	}
	else if (x > 10)
	{
		putchar('V' + x);
	}
	putchar('\n');
	return (0);
}
