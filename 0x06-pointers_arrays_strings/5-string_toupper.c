#include "main.h"

/**
  * string_toupper - converts lowercase letters
  * of string to uppercase
  * @s: argument
  *
  * Return: pointer to resultant string
  */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
			s[i] = s[i] - 32;
		i++;
	}

	return (s);
}

