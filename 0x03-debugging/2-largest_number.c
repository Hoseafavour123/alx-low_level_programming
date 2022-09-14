#include "main.h"

/**
  * largest_number - returns the largest of 3 numbers
  * @a: first integer
  * @b: second integer
  * @c: third integer
  *
  * Return: largest number
  */

int largest_number(int a, int b, int c)
{
	if ((a < b) && (b < c))
		return (c);
	else if ((a < c) && (c < b))
		return (b);
	else if ((c < b) && (b < a))
		return (a);
	else if ((b < a) && (a < c))
		return (c);
	else if ((c < a) && (a < b))
		return (b);
	else if ((b < c) && (c < a))
		return (a);
}

