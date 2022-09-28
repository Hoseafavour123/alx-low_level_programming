#include "main.h"

/**
  * _strlen - calculates the length of a string
  * @s: argument
  *
  * Return: string length
  */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
  * find_palindrome - checks qualifying conditions for a palindrome
  * @s: string argument
  * @start: start index of string
  * @end: last index of string
  *
  * Return: 1 if palindrome, 0 otherwise
  */

int find_palindrome(char *s, int start, int end)
{
	if (*(s + start) == *(s + end))
	{
		if ((start == end) || (start == end + 1))
			return (1);
		return (find_palindrome(s, start + 1, end - 1));
	}

	return (0);
}


/**
  * is_palindrome - determines if a string is a palindrome
  * @s: argument
  *
  * Return: 1 if palindrome, 0 otherwise
  */

int is_palindrome(char *s)
{
	int end = _strlen(s) - 1;

	return (find_palindrome(s, 0, end));
}
