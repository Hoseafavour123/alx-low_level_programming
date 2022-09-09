#include <stdio.h>

/**
  * main - Entry point
  * Description - A program that prints all single digits of base 10
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int max;
	int min;

	max = 57;
	min = 48;


	while (min <= max)
	{

		putchar(min);
		min++;

	}

	putchar(10);


	return (0);
}
