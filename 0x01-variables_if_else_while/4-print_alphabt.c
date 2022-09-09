#include <stdio.h>

/**
  * main - Entry point
  *
  * Description - A program that prints the alphabets
  * in lowercase excluding q and e
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
		if ((a != 101) && (a != 113))
		{
			putchar(a);
			a++;
		}

		else
		{
			a++;
		}

	}

	putchar(10);


	return (0);

}

