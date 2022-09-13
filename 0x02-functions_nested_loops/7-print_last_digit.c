#include "main.h"

/**
  * print_last_digit - compute the last digit of an argument
  * @n: argument
  *
  * Return: last digit of n
  */

int print_last_digit(int n)
{
	int ret;
	if (n < 0)
	{
		ret = -1 * (n % 10);
		_putchar(ret + '0');
		return (ret);
	}
	
	else
	{
		ret = (n % 10);
		_putchar(ret + '0');
		return (ret);
	}
}

