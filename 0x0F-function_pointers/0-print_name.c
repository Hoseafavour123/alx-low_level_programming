#include <stdlib.h>
#include "function_pointers.h"

/**
  * print_name - prints the name passed to it
  * @name: name
  * @f: function pointer that points to the function
  * to work on
  *
  * Return: void
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || (*f) == NULL)
		return;

	(*f)(name);
}

