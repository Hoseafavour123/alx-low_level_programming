#include <stdio.h>

/**
  * main - Entry point
  *
  * Description - A program to print all
  * possible different combinations of two digits
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int n;
	int m;

	n = 48;
	m = 48;

	while (n < 57)
	{

		m = n + 1;

		while (m < 58)
		{
			putchar(n);
			putchar(m);

			if ((n < 56) || (m < 57))
			{
				putchar(',');
				putchar(' ');

			}

			m++;
		}

		n++;

	}


	putchar(10);


	return (0);


}

