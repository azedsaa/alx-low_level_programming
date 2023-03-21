#include<stdio.h>
/**
  * main - alphabetsoup priting alphabets with exceptions
  * Desctription: printing alphabets from a-z with two exeptions e and q
  * Return: always 0.
  */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' &&
		ch != 'e')

		putchar(ch);
	}
	putchar('\n');
	return (0);
}
