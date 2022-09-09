#include <stdio.h>

/**
  * main - Entry point
  * Description - A program that prints all single digits of base 10
  * seperated by commmas
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int max;
	int min;

	max = 58;
	min = 48;


	while (min < max)
	{

		putchar(min);

		if (min != 57)
		{
			putchar(',');
			putchar(' ');

		}

		min++;

	}

	putchar(10);


	return (0);
}
