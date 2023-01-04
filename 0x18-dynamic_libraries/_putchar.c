#include <unistd.h>
/**
  * _putchar - wrotes character c to stdout
  * @c: the character to print
  *
  * Return: 0 on success
  * On error, -1 is returned, and errno is set appropriately.
  *
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
