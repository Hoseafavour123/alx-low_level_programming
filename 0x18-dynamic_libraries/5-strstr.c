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
	while (*haystack)
	{
		char *main = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}

		if (!*sub)
			return (main);
		haystack = main + 1;
	}

	return (0);
}
