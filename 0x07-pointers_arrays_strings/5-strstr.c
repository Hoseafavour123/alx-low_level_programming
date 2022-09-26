#include "main.h"

/**
  * _strstr - locates a substring
  * @haystack: main string
  * @needle: substring
  *
  * Return: pointer to beginning of substring
  */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (*(haystack + i))
	{
		for (j = 0; *(needle + j); j++)
		{
			if (*(haystack + i + j) == *(needle + j))
				continue;
			else
				break;
		}

		if (*(haystack + i + j - 1) == *(needle + j - 1))
			return (haystack + i);
		i++;
	}

	return (0);
}
