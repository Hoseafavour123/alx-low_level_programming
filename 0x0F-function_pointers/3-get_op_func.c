#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - determines operation to perform
 * @s: operator
 *
 * Return: pointer to operator function which is accessed
 * from a struct
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;
	while (i < 5)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);

		i++;
	}

	return ((ops[i].f));
}

