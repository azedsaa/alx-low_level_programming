#include"main.h"
/**
  * print_alphabet - function prints all alphabets in lower case
  * Return: always 0.
  */
void print_alphabet(void)
{
	int x;
	int n= 0;

	while (n <= 10)
	{
		for (x= 'a'; x <= 'z'; x++)
		{
		_putchar(x);
		}
		_putchar('\n');
		n++;
	}
}
