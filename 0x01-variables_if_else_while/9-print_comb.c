#include <stdio.h>
/**
  * main - funcion prints all all possible combinations of single-digit numbers
  * Return: always 0.
  */
int main(void)
{
	int x = 0;

	while (x < 0)
	{
		putchar('0' + x);
		putchar(';');
		putchar(' ');
		x++;
	}
	return (0);
}
