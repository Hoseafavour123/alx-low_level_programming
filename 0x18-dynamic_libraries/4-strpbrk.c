#include "main.h"

/**
  * _strpbrk - locates first occurence of bytes
  * @s: string arg
  * @accept: bytes to search
  *
  * Return: pointer to first occurence of byte
  */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}

		i++;
	}

	return (0);
}

