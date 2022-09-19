#include "main.h"

/**
  * rev_string - reverses a string
  * @s: argument
  *
  * Return: 0
  */

void rev_string(char *s)
{
	int i, len, tmp, j, k;

	i = 0;

	while (s[i])
	{
		len += 1;
	}

	j  = len - 1;
	k = 0;

	while (k < j)
	{
		tmp = s[k];
		s[k] = s[j];
		s[j] = tmp;
		k++;
		j--;
	}

	_putchar(10);
}

