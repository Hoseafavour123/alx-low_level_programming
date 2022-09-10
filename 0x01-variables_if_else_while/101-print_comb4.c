#include <stdio.h>

/**
  * main - Entry point
  *
  * Description - A program to print all possible
  * different combinations of 3 digits.
  *
  * Return: Always 0 (Success)
  */

int main(void)
{

	int i;
	int j;
	int k;

	i = 48;
	j = 48;
	k = 48;

	while (i < 56)
	{

		j = i + 1;

		while (j < 57)
		{
			k = j + 1;

			while (k < 58)
			{

				putchar(i);
				putchar(j);
				putchar(k);

				if ((i < 55) || (j < 56) || (k < 57))
				{
					putchar(',');
					putchar(' ');

				}

				k++;
			}

			j++;

		}

		i++;

	}


	putchar(10);


	return (0);
}

