#include "main.h"

/**
 *  _strcmp - compares two strings
 *  @s1: first param
 *  @s2: second param
 *
 *  Return: 0, -1 or 1
 */

int _strcmp(char *s1, char *s2)
{
    int i;

    for (i = 0; s1[i] && s2[i]; i++)
    {
	if (s1[i] == s2[i])
	    continue;

	else if (s1[i] > s2[i])
	    return (1);

	else if (s1[i] < s2[i])
	    return (-1);
    }

    return (0);
}
