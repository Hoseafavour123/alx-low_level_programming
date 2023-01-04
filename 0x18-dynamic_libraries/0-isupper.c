#include "main.h"

/**
  * _isupper - Checks for uppercase characters
  * @c: argument
  *
  * Return: 1 if upper, 0 otherwise
  */

int _isupper(int c)
{
	int i;
	int j;

	i = 'A';
	j = 'Z';

	if ((c >= i) && (c <= j))
		return (1);
	else
		return (0);
}

