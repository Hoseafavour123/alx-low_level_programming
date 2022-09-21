#include "main.h"

/**
  * cap_string - capitalize string
  * @s: argument
  *
  * Return: ponter to resultant string
  */

char *cap_string(char *s)
{
	int i, j;

	char delim[13] = " \t\n,;.!?\"(){}";

	if ((s[0] >= 'a') && (s[0] <= 'z'))
		s[0] = s[0] - 32;

	i = 1;

	while (*(s + i))
	{
		for (j = 0; j < 13; j++)
		{
			if (*(s + i) == *(delim + j))
			{
				if (*(s + i + 1) >= 'a' && *(s + i + 1) <= 'z')
					*(s + i + 1) = *(s + i + 1) - 32;

			}
		}

		i++;
	}


	return (s);
}

