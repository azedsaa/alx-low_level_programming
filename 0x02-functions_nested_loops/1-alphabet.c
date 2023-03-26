#include"main.h"
/**
  * main - function prints all alphabets in lower case
  * Return: always 0.
  */
void print_alphabet(void)
{
	int x = 'a';

	while (x >= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
