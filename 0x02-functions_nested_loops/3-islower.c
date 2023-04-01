#include "main.h"
/**
  * _islower - checks if  a letter in lower case.
  * @c: alphabet letter.
  * Return: c if lower case 0 otherwise.
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

