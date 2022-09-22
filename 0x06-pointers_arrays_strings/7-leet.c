#include "main.h"

/**
  * leet - encodes a string into 1337
  * @s: string argument
  *
  * Return: pointer to leet
  */

char *leet(char *s)
{
	int i = 0, j;
	char alph[] = {'A', 'E', 'O', 'T', 'L'};
	int encod[] = {4, 3, 0, 7, 1};

	while (s[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == alph[j] || s[i] == alph[j] + 32)
			{
				s[i] = encod[j] + '0';
			}
		}

		i++;
	}

	return (s);
}
