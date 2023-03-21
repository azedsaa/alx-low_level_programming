#include<stdio.h>
/**
  * main - alphabet printing the alphabets
  * Description: prints all the alphabets in upper and lower case
  * Return: always 0.
  */
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}

