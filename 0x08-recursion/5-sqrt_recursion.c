#include "main.h"

/**
  * _find_sqrt - finds natural square root of a number
  * @n: number
  * @i: traverser
  *
  * Return: square root of n, -1 if not found
  */

int _find_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_find_sqrt(n, i + 1));
}

/**
  * _sqrt_recursion - returns square root of a number
  * @n: argument
  *
  * Return: square root of n, -1 if not found
  */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_find_sqrt(n, 1));
}

