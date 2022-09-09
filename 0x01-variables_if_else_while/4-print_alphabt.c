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

	a = 'a';
	z = 'z';

	while (a <= z)
	{
		if ((a != 'e') && (a != 'q'))
		{
			putchar(a);
			a++;
		}

	}

	putchar(10);


	return (0);

}

