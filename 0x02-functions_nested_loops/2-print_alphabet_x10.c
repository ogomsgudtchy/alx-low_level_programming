#include "main.h"
/**
 * print_alphabet_x10 - to print abc 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c;
	int ten;

	for (ten = 0; ten <= 9; ten++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
