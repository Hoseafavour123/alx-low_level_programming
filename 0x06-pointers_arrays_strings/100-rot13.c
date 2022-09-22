#include "main.h"

/**
  * rot13 - encodes a string in the rot13 cipher
  * @s: string argument
  *
  * Return: pointer to encoded string
  */

char *rot13(char *s)
{
	int i = 0, j;
	char str[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char encod[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == str[j])
			{
				s[i] = encod[j];
				break;
			}
		}

		i++;

	}

	return (s);
}

