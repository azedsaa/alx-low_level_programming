#include "main.h"
/**
  * _abs - computes the absolute value of an integer.
  * @n: number to be checked.
  * Return: alawys 0.
*/
int _abs(int n)
{
	if (n < 0)
		n = (n * -1);
	else
		n = n;
	return (n);
}
