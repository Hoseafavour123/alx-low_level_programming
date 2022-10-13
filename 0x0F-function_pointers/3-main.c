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
	int a, b;
	char *ptr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	ptr = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(ptr) == NULL || ptr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*ptr== '/' && b == 0) || (*ptr == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(ptr)(a, b));

	return (0);
}

