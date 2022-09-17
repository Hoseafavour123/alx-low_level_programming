#include <stdio.h>

/**
  * main - Prints the first 50 fibonacci terms starting
  * from 1 and 2
  *
  * Return: 0
  */

int main(void)
{
	long i;
	long j;
	long next;
	int countr;

	i = 1;
	j = 2;

	for (countr = 1; countr <= 50; countr++)
	{
		if (countr != 50)
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

