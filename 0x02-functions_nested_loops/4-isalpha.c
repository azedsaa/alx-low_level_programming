#include "main.h"
/**
  * _isalpha - checks for alphabetic character
  * @c : character checked
  * Return: 1 if its alpha 0 otherwise
  */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
