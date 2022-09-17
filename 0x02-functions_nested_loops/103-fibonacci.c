#include <stdio.h>

/**
  * main - print sum of all even fibonacci
  * terms not exceeding 4000000
  *
  * Return: 0
  */

int main(void)
{
	long i, j, next, max, sum, countr;

	i = 1;
	j = 2;
	sum = 0;
	max = 4000000;

	for (countr = 1; countr < max; countr++)
	{
		if (i % 2 == 0)
			sum += i;
		next = i + j;
		i = j;
		j = next;

	}

	printf("%lu\n", sum);

	return (0);
}

