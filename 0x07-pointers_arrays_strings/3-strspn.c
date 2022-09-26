#include "main.h"

/**
  * _strspn - finds the length of a substring
  * @s: string arg
  * @accept: substring
  *
  * Return: length of substring in s
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i = 0, j;

	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				bytes += 1;
				break;
			}

			else if (accept[j + 1] == '\0')
				return (bytes);

		}

		i++;
	}

	return (bytes);
}

