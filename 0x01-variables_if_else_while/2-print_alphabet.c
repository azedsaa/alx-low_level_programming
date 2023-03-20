#include<stdio.h>

/**
  * main - alphabets "prits the alphabet from a-z
  * Description: prints all the alphabets from a to z
  * Return: always 0.
  */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);
}
