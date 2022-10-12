#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  * main - performs mathematical operation
  * @argc: argument count
  * @argv: argument value
  *
  * Return: result of operation
  */

int main(int argc, char **argv)
{
	int (*funcptr)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	funcptr = get_op_func(argv[2]);
	if (funcptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", funcptr(a, b));

	return (0);
}

