#include "main.h"

/**
  * find_prime - check primality of a number
  * @n: number
  * @i: iterator
  *
  * Return: 1 if prime, 0 if not
  */

int find_prime(int n, int i)
{
	if ((n < 2) || ((n % i == 0) && (n != i)))
		return (0);
	else if ((n % i == 0) && (n == i))
		return (1);
	else
		return (find_prime(n, i + 1));
}

/**
  * is_prime_number - determines if a number is prime
  * @n: argument
  *
  * Return: 1 if prime, 0 otherwise
  */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (find_prime(n, 2));
}
