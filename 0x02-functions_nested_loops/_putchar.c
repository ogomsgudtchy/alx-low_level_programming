#include "main.h"
#include <unistd.h>

/**
 * _putchar - wirtes char c to stdout
 * @c - char to print
 *
 * Return: On sucess 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
