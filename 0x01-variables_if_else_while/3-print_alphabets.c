#include <stdio.h>

/**
  * main - Entry point
  *
  * Description - A program that prints the alphabets
  * in lowercase and then in upper case
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int a;
	int z;
	int A;
	int Z;

	a = 97;
	z = 122;
	A = 65;
	Z = 90;

	while (a <= z)
	{
		putchar(a);
		a++;

	}

	while (A <= Z)
	{
		putchar(A);
		A++;
	}

	putchar(10);


	return (0);
}

