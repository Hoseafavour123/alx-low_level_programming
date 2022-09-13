#include "main.h"

/**
  * _abs - computes the absolute value of a number
  * @n: argument
  *
  * Return: positive value of n
  */

int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}

