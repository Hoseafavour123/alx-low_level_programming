#include "main.h"

/**
  * rev_string - reverse string
  * @s: argument
  *
  * Return: void
  */

void rev_string(char *s)
{
	int i, j, len, end;
	char rev[1000];

	i = 0;
	len = 0;

	while (s[i])
	{
		_putchar(s[i]);
		len += 1;
		i++;
	}

	end = len - 1;

	for (j = 0; j <= end; j++)
	{
		rev[j] = s[end];
		_putchar(rev[j]);
		end--;
	}

	_putchar(10);


	_putchar(10);
}
