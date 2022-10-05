#include <stdlib.h>
#include "main.h"


/**
  * arg_len - calculates length of strings of arguments
  * @ac: argument count
  * @av: argument value
  *
  * Return: length of all characters of argument
  */

int arg_len(int ac, char **av)
{
	int i, j, len = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len += 1;
		}
	}

	return (len + 1);
}

/**
  * argstostr - concatenates command line  arguments
  * @ac: argument count
  * @av: argument value
  *
  * Return: pointer to resultant string
  */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	char *arg_str;

	arg_str = (char *) malloc(arg_len(ac, av) * sizeof(char));

	if (arg_str == NULL)
	{
		free(arg_str);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			arg_str[k] = av[i][j];
		}

		_putchar('\n');
	}

	arg_str[k] = '\0';

	return (arg_str);
}

