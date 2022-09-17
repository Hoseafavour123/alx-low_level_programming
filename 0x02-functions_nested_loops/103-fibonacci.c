#include <stdio.h>

/**
  * main - print sum of all even fibonacci
  * terms not exceeding 4000000
  *
  * Return: 0
  */

int main(void)
{
	int i, j, next, max, sum;

	i = 1;
	j = 2;
	sum = 0;
	max = 4000000;

	while (j < max)
	{
		if (j % 2 == 0)
			sum += j;
		next = i + j;
		i = j;
		j = next;

	}

	printf("%d\n", sum);

	return (0);
}

