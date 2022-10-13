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

	funcptr = get_op_func(argv[2]);
	if (funcptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2] == '/' && argv[3] == '0') || (argv[2] == '%' && argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", funcptr(atoi(argv[1]), atoi(argv[3])));

	return (0);
}

