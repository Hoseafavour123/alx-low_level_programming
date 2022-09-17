#include <stdio.h>

/**
  * main - Print first 98 fibonacci numbers
  *
  * Return: 0
  */

int main(void)
{
	long unsigned i, j, next;
	int countr;

	i = 1;
	j = 2;

	for (countr = 1; countr <= 98; countr++)
	{
		if (countr != 98)
		{
			printf("%lu, ", i);
			next = i + j;
			i = j;
			j = next;
		}

		else
			printf("%lu", i);
	}

	printf("\n");

	return (0);
}

