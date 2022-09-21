#include "main.h"

/**
 *  _strcmp - compares two strings
 *  @s1: first param
 *  @s2: second param
 *
 *  Return: 0, a value greater than or less than 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int dif = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			dif = (s1[i]) - (s2[i]);
			break;
		}

		i++;
	}

	return (dif);
}
