#include <stdio.h>

/**
  * main - Entry point
  *
  * Description - A program that prints alphabets in lower case
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int a;
	int z;

	a = 97;
	z = 122;

	while (a <= z)
	{
		putchar(a);
		a++;
	}

	putchar(10);


	return (0);
}
