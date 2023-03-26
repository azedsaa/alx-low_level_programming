#include <stdio.h>
/**
  * main - funcion prints all all possible combinations of single-digit numbers
  * Return: always 0.
  */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar('0' + x);
		x++;
		if (x == 10)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	return (0);
}
