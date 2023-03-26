#include "main.h"
/**
  * print_alphabet_x10 - function prints 10 times the alphabet,
  * in lowercase, followed by a new line.
  * Return: void.
  */
void print_alphabet_x10(void)
{
	int x;
	int n = 0;

	while (n < 10)
	{
		for (x = 'a'; x <= 'z' ; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		n++;
	}
}
