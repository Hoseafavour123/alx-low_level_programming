#include <stdio.h>

/**
  * main - Entry point
  *
  * Description - A program that prints the sum of the multiples
  * of 3 and 5 that is less than 1024
  *
  * Return: 0
  */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}

	printf("%d", sum);

	return (0);
}

